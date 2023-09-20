MEMVAR getlist
*********************
* SOLICITAR ORCAMENTO
*********************
FUNCTION sac23orc(orc,venda,m2ped)
***************
MEMVAR cod_operado,nivel_acess,mdata_sis
LOCAL mp_venda,msele,morde,f,mvar,mtelap,mtot_ipi,telaobs,;
      mdocum,mchass:=SPACE(20),mdescri1:=SPACE(54),mreg,telapro,;
      mdescri2:=SPACE(54),mdescri3:=SPACE(54),mdescri4:=SPACE(54),mdescri5:=SPACE(54),;
      mquantd_aux:=0,v:=0,linhas,linha,lin,nPos,cComm,mitem:=0,mcampo_ped:=' ',c_ped:={},;
      mcod_tab,mcont,mtipo_preco:=' ',mpre:=' ',c_orcam,m_ped,m_pos,point:=0,cons_orcam := {},mdesc_prod:=0

PRIVATE MPRG:='SAC23ORC',;
        m_matriz:={},m_codigo:={},m_Cbarra:={},m_alt:={},i,opcao,;
        mcod_merc:=0,mquantd:=1,mdesconto,mvlr_fat,mtot_ped,mmerc,mpr_venda,;
        li:=0,ci:=0,lb:=0,cb:=0,mnome_ven:=' ',lci:=0,cci:=0,lba:=0,cba:=0,tela,mautoriz,mlibera,;
        mcod_bc,mcont_item:=0,sovenda,mvarejo:=1,f4,;
        mprz,mnum_ped:=0,menvelope,mcod_cli:=0,mnome_cli,mponto:=0,mflag,ali,no,mcod_ven,;
        msubtotal,mtot_custo:=0,mcod_aux,mproducao,mcomissao:=0,mcust_real,mvendido:=0,;
        mobs_prod:=SPACE(40),mlib_spc:=' ',msit_tip:=' ',;
        mqtd_dias:=0,mqtd_prz:=0,mcond_veze:=SPACE(3),mpromocao,mperc,mcom_oper:=0,;
        mtp_venda:='  ',mhoras,m_dia[15],m_vlr[15],;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mmontador:=0,mmontador1:=0,mtel_carro,mcodemp,;
        mmasc_qtd:=SPACE(10),mnum_os:='',mobs1,mobs2,mobs3,mobs4,mobs5,mobs6,mobs7,mobs8,;
        mplaca,mcarro,mmodelo,mkm,mpt_os:=0,mcomi_tab:=0,mcod_cond:=0,mpacote:=0,;
        mpecas:=0,mlimite:=0,mcompras:=0,malterou:=' ',cons_tabpg := {},mcons_tabpg:=' ',;
        mtot_desc:=0,mloop:=0,mcod_pres:=0,merroped:=0,mdesc_aux:=0,mcgc,mcpf,minsc,;
        mdata_pedido,m_produto:={},mnum_orc:=0,mconvidado:='',mavaria:=1,mc_merc := {},cons_cli:={}


//lci:=8
lci:=15
cci:=0
cba:=120
lba:=49

SET KEY -1 TO IBR_ABRE_GAVETA()                 // ABRIR GAVETA F4
SET KEY -9 TO
SET KEY -7 TO F8_PROD()
SET KEY 286 TO
SET KEY 294 TO
SET KEY -4 TO
set_key('cliente',,,'*')
SET KEY 303 TO alt_orcam()               // Alteracao de Produtos <ALT+V>
SET KEY 294 TO cons_luc()               // Consulta Lucro  <ALT+L)
SET KEY -4 TO f5_qtd()                  // Imforma a quantidade no AUTOCAIXA no PRG SACROT
********************
CLEAR GETS
mcod_cli:=m_set[1,84]
mplaca:= SPACE(10)
mcarro:=mmodelo:=mkm := SPACE(15)
mobs1:=mobs2:=mobs3:=mobs4:=mobs5:=mobs6:=mobs7:=mobs8:=SPACE(39)
setcor(1)                    && cor para os SAY
op_tela(00,00,50,120,memp_resa+SPACE(50)+'EMISSAO DE ORCAMENTO'+SPACE(40)+'Terminal: '+m_indiv[1,1],,1)
ali := 'orcam'                                                                          
no  := 'noorc'
orcamento = 2
IF ! ver_nivel(mprg+'ORC','EMISSAO DE ORCAMENTOS','1245',nivel_acess,,'AMBIE')
        RELEASE ALL
        wvw_lclosewindow()
        RETURN NIL
ENDIF

// ABERTURA DA TELA DE Orcamento
setcor(1)
IF venda = NIL
        sovenda = 1
ELSE
        sovenda = 2
ENDIF
IF m_cfg[2] = 'L'
        mnum_os:='LOJA'
ENDIF        
WHILE .T.
        mquantd := 1
        mtipo_preco := mproducao := ' '
        msubtotal := mtot_ipi  := 0
        mnome_ven := SPACE(30)
        SET KEY 287 TO
        mautoriz := SPACE(3)
        mflag := mtot_custo := 0
        mcod_ven := SPACE(3)
        IF ! AbriArq('sacemp','emp');RETURN NIL;ENDIF
        IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
        op_tela(00,01,31,110,' A B E R T U R A   D O   O R C A M E N T O                Informacoes para o ORCAMENTO',,1)
        WHILE .T.
                CLEAR TYPEAHEAD
                mavaria := 1
                mdata_pedido := mdata_sis
                ver_emp(mcodempresa)
                setcor(1)
                mcond_veze := '00 '
                FOR i = 1 TO 15
                        m_dia[i]:=m_vlr[i]:=0
                NEXT
                minsc := mcgc := SPACE(14)
                mcpf = SPACE(11)
                mhoras := TIME()
                mperc := mcomi_tab := mcod_cond := mnum_ped := mtot_custo := 0
                m_matriz := {}
                m_codigo := {}
                m_Cbarra := {}
                m_alt    := {}
                botao(0,0,7,120)
                SUB_BANNER(00,02,'TERMINAL LIVRE')
                DEVPOS(07,00);DEVOUT('Codigo do Cliente....:')
                DEVPOS(08,00);DEVOUT('Nome Fantasia........:')
                DEVPOS(09,00);DEVOUT('Observacao...........:')
                @ 12,00 TO 12,120
                DEVPOS(13,00);DEVOUT('Vendedor.............:')
                @ 14,00 TO 14,120
                DEVPOS(15,00);DEVOUT('Numero da O.S........:')
                IF m_set[1,37] = 'S'
                        DEVPOS(16,00);DEVOUT('Placa................:')
                        DEVPOS(17,00);DEVOUT('KM...................:')
                ELSE
                        DEVPOS(16,00);DEVOUT('Serie................:')
                        DEVPOS(17,00);DEVOUT('Numero...............:')
                ENDIF
                DEVPOS(18,00);DEVOUT('Marca................:')
                DEVPOS(19,00);DEVOUT('Modelo...............:')
                @ 20,00 TO 20,120
                DEVPOS(21,00);DEVOUT('Codigo Condicao Pagto:')
                DEVPOS(22,00);DEVOUT('Condicao de Pagamento:')
                DEVPOS(23,00);DEVOUT('Quantidades de Dias..:')
                DEVPOS(24,00);DEVOUT('Media Dias...........:')
                DEVPOS(25,00);DEVOUT('Percentual...........:')
                @ 26,00 TO 26,120
                DEVPOS(27,00);DEVOUT('Codigo Representante.:')
                @ 28,00 TO 28,120
                DEVPOS(29,00);DEVOUT('Codigo Faturamento...:')
                DEVPOS(30,00);DEVOUT('Tipo de Orcamento....:')
                IF m_set[1,80] = 'S' .AND. m2ped = NIL
                        IF ! alt_senha('1')
                                SET KEY -9 TO
                                RELEASE ALL
                                wvw_lclosewindow()
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                        mnome_ven := SPACE(30)
                        ver_ven(cod_operado)
                        mnome_ven := sen->snome
                ELSE
                        ver_ven(cod_operado)
                        mnome_ven := sen->snome
                        atencao(' Operador:'+cod_operado+'-'+RTRIM(mnome_ven)+' ou <ESC> p/Sair')
                        IF LASTKEY() = 27
                                SET KEY -9 TO
                                RELEASE ALL
                                wvw_lclosewindow()
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                ENDIF
                mcom_oper := sen->scom_oper
                mnome_cli := SPACE(40)
                // CLIENTE ANTES DO Orcamento
                //IF m_set[1,10] = 'S' //.AND. m_indiv[1,26] = 'N'
                        WHILE .T.
                                SET KEY -8 TO sac130()           // inclusao de clientes
                                IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
                                @ 07,23 GET mcod_cli PICT '99999'
                                @ 07,29 GET mnome_cli PICT '@!' WHEN EMPTY(mcod_cli)
                                READ
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        RETURN
                                ENDIF
                                IF ! EMPTY(mcod_cli)
                       			cons_cli := {}
                                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_cli) = 0
                                                atencao('Cliente nao cadastrado !!!')
                                                LOOP
                                        ENDIF
                                        mcod_cli := cons_cli[1,2]
                                ELSEIF ! EMPTY(mnome_cli)
                       			cons_cli := {}
                                        sr_getconnection():exec("SELECT * FROM saccli WHERE razao = "+sr_cdbvalue(RTRIM(mnome_cli)),,.t.,@cons_cli)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_cli) = 0
                                                atencao('Cliente nao cadastrado !!!')
                                                LOOP
                                        ELSE
                                                f7_cli()
                                                mcod_cli := cons_cli[1,2]
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                ENDIF
                       		cons_cli := {}
                                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF ! EMPTY(mnome_cli) .OR. ! EMPTY(mcod_cli)
                                        DEVPOS(7,23);DEVOUT(STR(cons_cli[1,2],5))
                                        DEVPOS(7,30);DEVOUT(cons_cli[1,3])
                                        DEVPOS(7,29);DEVOUT(cons_cli[1,4])
                                        botao(27,24,30,97)
                                        WVW_DrawLabel(,9,24,cons_cli[1,48],,,240,, 'arial',15,10,,,,,)
                                        WVW_DrawLabel(,10,24,cons_cli[1,113],,,240,, 'arial',15,10,,,,,)
                                        WVW_DrawLabel(,11,24,cons_cli[1,114],,,240,, 'arial',15,10,,,,,)
                                        setcor(1)
                                        IF ! spc(mcod_cli,0,'*')
                                                UNLOCK
                                                LOOP
                                        ENDIF
                                        mlib_spc := '*'
                                        mdocum := cli_dup(mcod_cli)
                                        IF ! EMPTY(mdocum)
                                                atencao('Existe estes documentos deste cliente: '+mdocum,0,,,10)
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                IF cons_cli[1,41] = 'S'
                                        atencao('CLIENTE COM CREDITO BLOQUEADO PELO SISTEMA EM: '+DTOC(cons_cli[1,138])+m_qp+m_qp+'***************************************************************************'+m_qp+'M O T I V O: '+ALLTRIM(cons_cli[1,139])+m_qp+'***************************************************************************')
                                        LOOP
                                ENDIF
                                ver_aniv(mcod_cli)
                                opcao := op_simnao('S','Confirma o CLIENTE:')
                                SET KEY -8 TO                    // inclusao de clientes
                                IF opcao = 'S'
                                        setcor(1)
                                        mcod_aux  := cons_cli[1,106]
                                        mcod_ven := cons_cli[1,106]
                                        mcod_cond := VAL(cons_cli[1,133])
                                        IF cons_cli[1,45] = 'A'
                                                mvarejo := 2
                                        ELSE
                                                mvarejo := 1
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                setcor(1)
                                IF m_set[1,10] <> 'S'
                                        mcod_aux  := cons_cli[1,106]
                                        mcod_ven := cod_operado
                                ENDIF
                                mcgc := cons_cli[1,32]
                                mcpf := cons_cli[1,34]
                                minsc:= cons_cli[1,33]
                                EXIT
                        ENDDO
                /*
                ELSE
                        cons_cli := {}
                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(m_set[1,84]),,.t.,@cons_cli)
                        IF LEN(cons_cli) = 0
                                atencao('Cliente informado:'+STR(m_set[1,84],5)+' nao encontrado colocar CLIENTE DEFAULT nas configuracoes por Exemplo o CLIENTE CONSUMIDOR !!!')
                                mcod_aux  := 'XXX'
                                EXIT
                        ENDIF
                        mcod_cli := cons_cli[1,2]
                        mcod_aux  := cod_operado
                        mcod_ven := cod_operado
                        mcod_cond := VAL(cons_cli[1,133])
                ENDIF
                */
                ver_ven(mcod_ven)
                mnome_ven := sen->snome
                // SOLICITACAO DE VENDEDOR
                WHILE .T. .AND. m_set[1,108] = 'S'
                        @ 13,23 GET mcod_ven PICT '999' VALID IF(ver_ven(mcod_ven),.T.,.F.)
                        READ
                        mcod_ven := sen->scod_op
                        mnome_ven := sen->snome
                        DEVPOS(13,23);DEVOUT(mcod_ven)
                        DEVPOS(13,27);DEVOUT(mnome_ven)
                        IF m_set[1,10] = 'S' .AND. mcod_ven <> mcod_aux .AND. mcod_cli <> m_set[1,84];
                           .AND. ! aut_sen('Cod. Vend. Diferente do Vend. Resp.CLIENTE, Senha autorizacao:','LIBCLIVEN',,mcod_cli)
                                LOOP
                        ENDIF
                        EXIT
                ENDDO
                // VENDAS A VAREJO OU ATACADO
                IF m_set[1,5] = 'S'
                        op_tela(10,24,15,60,'Tipo de Venda','*','1')
                        botao1(01,01,03,16)
                        botao1(01,18,03,35)
                        setcor(10)
                        @ 02,02 PROMPT ' Venda NORMAL '
                        @ 02,19 PROMPT ' Venda ESPECIAL '
                        SET INTEN ON
                        MENU TO mvarejo
                        setcor(1)
                        IF LASTKEY() = 27
                                SET KEY -9 TO
                                RELEASE ALL
                                wvw_lclosewindow()
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                        wvw_lclosewindow()
                        IF mvarejo=1
                                DEVPOS(lba,cci+1);DEVOUT(' Normal ')
                        ELSE
                                DEVPOS(lba,cci+1);DEVOUT(' Especial ')
                        ENDIF
                ENDIF
                IF mmult_emp = 'S'
                        alt_emp('*')
                ENDIF
                // CONDICOES DE PAGAMENTO ANTE DO Orcamento
                IF m_set[1,46] = 'S'
                        WHILE .T.
                                mquantd := 1
                                mperc := mcomi_tab := mprz := 0
                                @ 21,23 GET mcod_cond PICT '999' VALID IF(ver_serie() = '141410' .AND. EMPTY(mcod_cond),.F.,ver_cond(mcod_cond,21,27))
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF mcod_cond <> VAL(cons_cli[1,133]) .AND. VAL(cons_cli[1,133]) > 0
                                        IF ! aut_sen('Alteracao da Condicao de Pagamento pre fixada do CLIENTE: de '+cons_cli[1,133]+' para '+STRZERO(mcod_cond,3)+' - Autorizacao:','LIB_CONDPAG',,mcod_cli)
                                                LOOP
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mcod_cond)
                                        mcons_tabpg:=' '
                                        cons_tabpg := {}
                                        sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_cond,3)),,.t.,@cons_tabpg)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        setcor(3)
                                        DEVPOS(21,27);DEVOUT(cons_tabpg[1,4])
                                        DEVPOS(22,23);DEVOUTPICT(cons_tabpg[1,6],'@@R 9-99')
                                        mcons_tabpg := cons_tabpg[1,6]
                                        mtipo_preco := cons_tabpg[1,24]
                                        setcor(1)
                                        mcomi_tab := cons_tabpg[1,22]
                                        m_dia[1]   := cons_tabpg[1,7]
                                        m_dia[2]   := cons_tabpg[1,8]
                                        m_dia[3]   := cons_tabpg[1,9]
                                        m_dia[4]   := cons_tabpg[1,10]
                                        m_dia[5]   := cons_tabpg[1,11]
                                        m_dia[6]   := cons_tabpg[1,12]
                                        m_dia[7]   := cons_tabpg[1,13]
                                        m_dia[8]   := cons_tabpg[1,14]
                                        m_dia[9]   := cons_tabpg[1,15]
                                        m_dia[10]  := cons_tabpg[1,16]
                                        m_dia[11]  := cons_tabpg[1,17]
                                        m_dia[12]  := cons_tabpg[1,18]
                                        m_dia[13]  := cons_tabpg[1,19]
                                        m_dia[14]  := cons_tabpg[1,20]
                                        m_dia[15]  := cons_tabpg[1,21]
                                        @ 23,23 GET m_dia[1] PICT '999'
                                        @ 23,27 GET m_dia[2] PICT '999' WHEN ! EMPTY(m_dia[1]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 1
                                        @ 23,31 GET m_dia[3] PICT '999' WHEN ! EMPTY(m_dia[2]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 2
                                        @ 23,35 GET m_dia[4] PICT '999' WHEN ! EMPTY(m_dia[3]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 3
                                        @ 23,39 GET m_dia[5] PICT '999' WHEN ! EMPTY(m_dia[4]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 4
                                        @ 23,43 GET m_dia[6] PICT '999' WHEN ! EMPTY(m_dia[5]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 5
                                        @ 23,47 GET m_dia[7] PICT '999' WHEN ! EMPTY(m_dia[6]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 6
                                        @ 23,51 GET m_dia[8] PICT '999' WHEN ! EMPTY(m_dia[7]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 7
                                        @ 23,55 GET m_dia[9] PICT '999' WHEN ! EMPTY(m_dia[8]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 8
                                        @ 23,59 GET m_dia[10] PICT '999' WHEN ! EMPTY(m_dia[9]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 9
                                        @ 23,63 GET m_dia[11] PICT '999' WHEN ! EMPTY(m_dia[10]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 10
                                        @ 23,67 GET m_dia[12] PICT '999' WHEN ! EMPTY(m_dia[11]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 11
                                        @ 23,71 GET m_dia[13] PICT '999' WHEN ! EMPTY(m_dia[12]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 12
                                        @ 23,75 GET m_dia[14] PICT '999' WHEN ! EMPTY(m_dia[13]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 13
                                        @ 23,79 GET m_dia[15] PICT '999' WHEN ! EMPTY(m_dia[14]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 14
                                        READ
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                        IF m_dia[1] > cons_tabpg[1,7] .OR. m_dia[2] > cons_tabpg[1,8] .OR. m_dia[3] > cons_tabpg[1,9] .OR. m_dia[4] > cons_tabpg[1,10] .OR. m_dia[5] > cons_tabpg[1,11];
                                           .OR. m_dia[6] > cons_tabpg[1,12] .OR. m_dia[7] > cons_tabpg[1,13] .OR. m_dia[8] > cons_tabpg[1,14] .OR. m_dia[9] > cons_tabpg[1,15] .OR. m_dia[10] > cons_tabpg[1,16];
                                           .OR. m_dia[11] > cons_tabpg[1,17] .OR. m_dia[12] > cons_tabpg[1,18] .OR. m_dia[13] > cons_tabpg[1,19] .OR. m_dia[14] > cons_tabpg[1,20] .OR. m_dia[15] > cons_tabpg[1,21]
                                                IF ! aut_sen('Alteracao de Prazo na Tabela: '+STRZERO(mcod_cond,3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        mcond_veze := cons_tabpg[1,6]
                                        mprz := m_dia[1]
                                        mperc := cons_tabpg[1,5]
                                ELSE
                                        mcons_tabpg := ' '
                                        @ 22,23 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.))
                                        READ
                                        IF(VAL(SUBSTR(mcond_veze,2,2)) >= 1,m_dia[1]:=SUBSTR(cons_cli[1,40],1,2)+' ',.T.)
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 1
                                                m_dia[1]:=VAL(SUBSTR(cons_cli[1,40],1,2))
                                                m_dia[2]:=VAL(SUBSTR(cons_cli[1,40],3,2))
                                                m_dia[3]:=VAL(SUBSTR(cons_cli[1,40],5,2))
                                        ENDIF
                                        @ 23,23 GET m_dia[1] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 1
                                        @ 23,27 GET m_dia[2] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 2 VALID ! EMPTY(m_dia[2])
                                        @ 23,31 GET m_dia[3] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 3 VALID ! EMPTY(m_dia[3])
                                        @ 23,35 GET m_dia[4] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 4 VALID ! EMPTY(m_dia[4])
                                        @ 23,39 GET m_dia[5] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 5 VALID ! EMPTY(m_dia[5])
                                        @ 23,43 GET m_dia[6] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 6 VALID ! EMPTY(m_dia[6])
                                        @ 23,47 GET m_dia[7] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 7 VALID ! EMPTY(m_dia[7])
                                        @ 23,51 GET m_dia[8] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 8 VALID ! EMPTY(m_dia[8])
                                        @ 23,55 GET m_dia[9] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 9 VALID ! EMPTY(m_dia[9])
                                        @ 23,59 GET m_dia[10] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 10 VALID ! EMPTY(m_dia[10])
                                        @ 23,63 GET m_dia[11] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 11 VALID ! EMPTY(m_dia[11])
                                        @ 23,67 GET m_dia[12] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 12 VALID ! EMPTY(m_dia[12])
                                        @ 23,71 GET m_dia[13] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 13 VALID ! EMPTY(m_dia[13])
                                        @ 23,75 GET m_dia[14] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 14 VALID ! EMPTY(m_dia[14])
                                        @ 23,79 GET m_dia[15] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 15 VALID ! EMPTY(m_dia[15])
                                        READ
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                        mqtd_dias := m_dia[1]+m_dia[2]+m_dia[3]+m_dia[4]+m_dia[5]+m_dia[6]+m_dia[7]+m_dia[8]+m_dia[9]+m_dia[10]+m_dia[11]+m_dia[12]+m_dia[13]+m_dia[14]+m_dia[15]
                                        mqtd_prz := 1
                                        IF(! EMPTY(m_dia[2]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[3]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[4]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[5]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[6]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[7]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[8]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[9]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[10]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[11]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[12]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[13]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[14]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[15]),mqtd_prz++,0)
                                        mprz := mqtd_dias / mqtd_prz
                                        IF mprz = 0
                                                mperc := 0
                                        ENDIF
                                        IF mprz > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(mprz,3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                LOOP
                                        ENDIF
                                ENDIF
                                setcor(3,'*')
                                DEVPOS(22,23);DEVOUTPICT(mcond_veze,'@@R 9-99')
                                DEVPOS(24,23);DEVOUT(TRANSFORM(mprz,'9999'))
                                DEVPOS(25,23);DEVOUT(TRANSFORM(mperc,'999.99'))
                                setcor(1)
                                opcao := op_simnao('S','Confirma o percentual:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        LOOP
                                ENDIF
                                EXIT
                        ENDDO
                ENDIF
                IF ! EMPTY(cons_cli[1,59])
                        mperc := mperc + (cons_cli[1,59] * -1)
                ENDIF
                opcao := op_simnaocan('S','CONFIRMA TODAS AS INFORMACOES DO Orcamento:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
                IF opcao = 'C'
                        wvw_lclosewindow()
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mflag := 1
                EXIT
        ENDDO
        wvw_lclosewindow()

        Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DE ORCAMENTO'+SPACE(40)+'Terminal: '+m_indiv[1,1])

        merroped := 0
        IF ! AbriArq('merc_det','deta');RETURN NIL;ENDIF
        IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
        IF ! AbriArq('sactabme','tabme');RETURN NIL;ENDIF
        IF ! AbriArq('sacdolar','dolar');RETURN NIL;ENDIF
        IF m_set[1,84] <> mcod_cli .AND. ! EMPTY(mcod_cli)
                mlimite := cons_cli[1,44]
                mcompras := ver_compras(mcod_cli)
        ENDIF
        botao(00,01,07,119)
        WVW_DrawLabel(,lci-2,cci+58,'O R C A M E N T O',,,210,, 'Arial Black',35,20,,,,,)
        WHILE .T.
                IF LEN(m_codigo) = 0
                        limpa(01,02,10,119)
                        SUB_BANNER(01,05,'TERMINAL LIVRE')
                ENDIF
                IF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                        botao(12,01,26,53)
                	WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF
                botao(27,01,37,53)
                setcor(1)
                DEVPOS(28,02);DEVOUT('Cod.Produto:')
                DEVPOS(29,02);DEVOUT('Descricao..:')
                DEVPOS(30,02);DEVOUT('Quantidade.:')
                DEVPOS(31,02);DEVOUT('Vlr.Unita..:')
                DEVPOS(32,02);DEVOUT('Vlr.Total..:')
                DEVPOS(33,02);DEVOUT('Saldo......:')
                //IF ver_serie() = '141235'
                //        DEVPOS(26,02);DEVOUT('Pct:          Pcs:    ')
                IF ver_serie() <> '141410'
	                DEVPOS(34,02);DEVOUT('Quantidade.:               ')
                ENDIF
                DEVPOS(35,02);DEVOUT('Sub-IPI....:')
                DEVPOS(35,25);DEVOUT('Total c/IPI:')
                DEVPOS(36,02);DEVOUT('Desc.(%)...:       - R$: ')
                IF mflag = 0
                        //wvw_lclosewindow()
                        EXIT
                ENDIF

                mlibera := ' '
                i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := 0
                //SETCOLOR('B/W,W/B')
                SETCOLOR('W/B+,B+/W')
                botao(lci-3,cci+55,lba,cba-1)
                WVW_DrawLabel(,lci-3,cci+65,'O R C A M E N T O',,,,, 'Arial Black',35,20,,,,,)

                mqtd_lin := 0
                mitem := 1

                cons_tela := {}
                sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_tela)
                sr_getconnection():exec('COMMIT',,.f.)

                IF LEN(cons_tela) > 20
                        mqtd_lin := LEN(cons_tela) - 20
                ENDIF
                IF ! EMPTY(mcod_cond)
                        @ lci+f,cci+55 SAY ''
                        WVW_DrawLabel(,lci+f,COL()+1,'Usando a Tabela:'+STRZERO(mcod_cond,3)+'-'+TRANSFORM(mperc,'999.99')+IF(! EMPTY(mtipo_preco),' - Preco:'+mtipo_preco,'')+IF(! EMPTY(cons_cli[1,59]),' [ Desc.Esp.:'+TRANSFORM((cons_cli[1,59] * -1),'9999.99')+' ] ',''),,,,, 'terminal',13,4,,,,,)
                        f++
                ENDIF
                @ lci+f,cci+55 SAY ''
                WVW_DrawLabel(,lci+f,COL()+1,'Cliente:'+STR(cons_cli[1,2],5)+'-'+LEFT(cons_cli[1,3],35)+' - Vend.:'+mcod_ven+'-'+LEFT(mnome_ven,25),,,,, 'terminal',13,4,,,,,)
                f++
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),104),,,,, 'terminal',13,4,,,,,)
                f++
                @ lci+f,cci+55 SAY ''
                WVW_DrawLabel(,lci+f,COL(),'Item  Cod.  Descricao                                      Quantd.   Vlr.Unit.   Vlr.Total',,,,, 'terminal',13,4,,,,,)
                f++
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),104),,,,, 'terminal',13,4,,,,,)
                f++
                i:=0
                FOR i = 1 TO LEN(m_codigo)
                        IF EMPTY(m_codigo[i]) .OR. m_codigo[i] = NIL
                                LOOP
                        ENDIF
                        mlibera := ' '
                        IF mqtd_lin < i
                                @ lci+f,cci+55 SAY ''
                                IF m_set[1,147] = 'C'
                                        IF m_matriz[i,6] = 'EV ' .OR. m_matriz[i,6] = 'PL '
                                                WVW_DrawLabel(,lci+f,COL(),STRZERO(i,4)+'  '+m_codigo[i]+'  '+LEFT(m_matriz[i,5],10)+' '+m_matriz[i,24]+' '+m_matriz[i,28]+' '+TRANSFORM(m_matriz[i,1],'99999.99')+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                                //WVW_DrawLabel(,lci+1+f,COL()+1,STRZERO(mitem++,4)+'  '+m_codigo[i]+'  '+LEFT(m_matriz[i,5],29)+' '+m_matriz[i,24]+' '+m_matriz[i,28]+' '+TRANSFORM(m_matriz[i,1],'99999.99')+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                        ELSE
                                                IF ! EMPTY(m_matriz[i,28])
                                                        WVW_DrawLabel(,lci+f,COL(),STRZERO(i,4)+'  '+m_codigo[i]+'  '+LEFT(m_matriz[i,5],21)+' '+m_matriz[i,28]+' '+TRANSFORM(m_matriz[i,1],'99999.99')+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                                ELSE
                                                        WVW_DrawLabel(,lci+f,COL(),STRZERO(i,4)+'  '+m_codigo[i]+'  '+m_matriz[i,5]+'   '+TRANSFORM(m_matriz[i,1],'99999.99')+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                                ENDIF
                                        ENDIF
                                ELSE
                                        WVW_DrawLabel(,lci+f,COL(),STRZERO(i,4)+'  '+m_cbarra[i]+'  '+LEFT(m_matriz[i,5],31)+' '+m_matriz[i,28]+' '+TRANSFORM(m_matriz[i,1],'99999.99')+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                ENDIF
                                f++
                        ENDIF
                        mtot_desc := mtot_desc + iat((m_matriz[i,1] * m_matriz[i,8]),m_set[1,103])
                        msubtotal := msubtotal + iat((m_matriz[i,1] * m_matriz[i,2]),m_set[1,103])
                        mtot_custo:= mtot_custo + iat((m_matriz[i,1] * m_matriz[i,9]),m_set[1,103])
                        mtot_ipi := mtot_ipi + ((m_matriz[i,2] * m_matriz[i,1]) * (m_matriz[i,22]/100))
                NEXT

                tela_ := {}
                tela_ := WVW_SAVESCREEN(,lci,cci+55,lba,cba-1)
                setcor(3)
                IF (mtot_desc - msubtotal) > 0
                        DEVPOS(36,14);DEVOUT(TRANSFORM(((mtot_desc - msubtotal)/mtot_desc)*100,'99.99'))
                        DEVPOS(36,26);DEVOUT(TRANSFORM((mtot_desc - msubtotal),'99,999.99'))
        
                        botao(44,01,49,53,,,'*')
                        WVW_DrawLabel(,45,02,'Economia R$:'+TRANSFORM(mtot_desc - msubtotal,'@E 99,999.99'),,,210,, 'arial black',40,17,,,,,)

                ELSE
                        DEVPOS(36,14);DEVOUT(TRANSFORM(0,'99.99'))
                        DEVPOS(36,26);DEVOUT(TRANSFORM(0,'99,999.99'))
                ENDIF
                DEVPOS(35,14);DEVOUTPICT(mtot_ipi,'99,999.99')
                DEVPOS(35,38);DEVOUTPICT(msubtotal+mtot_ipi,ALLTRIM('@E '+m_set[1,98]))

                setcor(1)
                botao(38,01,43,53,,,'*')
                DEVPOS(38,01);DEVOUT(' T O T A L   R$:')
                WVW_DrawLabel(,39,02,TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,35,,,,,)

                malterou := ' '
                mmerc := SPACE(40)
                IF mpre = ' '
                        mcod_bc := SPACE(14)
                ENDIF
                mcod_merc := mdesconto := mvlr_fat := mpromocao := 0
                IF(mquantd > 1,mquantd,mquantd=1)
                menvelope := SPACE(10)
                f4 := ' '
                setcor(1)
                // ATIVA O FECHAMENTO DO Orcamento
                SET KEY -9 TO fecha_orcam('1')       // neste mesmo PRG. <F10>Tecla
                //mensagem('Digite codigo ou Descricao - <F10>Fechamento <ALT+V>Alt.Prod. <PD>2o.Pedido ou <OR>2o.Orcamento <PRE>Lista de Presente <ESC>Sair')
                mensagem('<F10>Fechamento  - <X mais a qtd.>Informa Qtd. - <TAB>Cond.Pagamento - <PD>Recuperar Orcamento - <ESC>Sair')
                SET KEY -7 TO F8_PROD()
                mloop := 0
                @ 28,14 GET mcod_bc PICT '@!'
                READ
                IF SUBSTR(mcod_bc,1,1) = 'X' .AND. VAL(SUBSTR(mcod_bc,2)) > 0
                        mquantd := VAL(SUBSTR(mcod_bc,2))
                        LOOP
                ENDIF
                IF SUBSTR(mcod_bc,1,1) = '*'
                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,mcod_bc,STRZERO(mvarejo,1),mperc),f4_merc1(,mcod_bc,STRZERO(mvarejo,1),mperc))

                        mped_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mped_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mmerc := mped_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF LASTKEY() = 27 .AND. LEN(m_codigo) > 0
			IF 'N' = op_simnao('S','Deseja Sair o Orcamento:')
				LOOP
			ENDIF	
                        SET KEY -2 TO
                        SET KEY -7 TO
                        EXIT
                ELSEIF LASTKEY() = 27
                        SET KEY -2 TO
                        SET KEY -7 TO
                        EXIT
                ENDIF
                IF mflag = 0
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_bc)
                        IF mcod_bc = 'ALT'
                                alt_orcam()
                                LOOP
                        ELSEIF SUBSTR(mcod_bc,1,1) = '2' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                                mcod_merc := VAL(SUBSTR(mcod_bc,2,5))
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mped_merc) = 0
                                        atencao('Codigo Barra nao cadastrado')
                                        LOOP
                                ENDIF
                        ELSEIF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                mponto := ASCAN(m_Cbarra,mcod_bc)
                                IF mponto > 0 .AND. RTRIM(merc->merc) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                        alt_orcam()
                                        LOOP
                                ELSE
                                        mped_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(ALLTRIM(mcod_bc)),,.t.,@mped_merc)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(mped_merc) = 0
                                                mped_merc := {}
                                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE ref = "+sr_cdbvalue(SUBSTR(mcod_bc,1,10)),,.t.,@mped_merc)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                IF LEN(mped_merc) = 0
                                                        atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao encontrado')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                ENDIF
                                mcod_merc := VAL(mped_merc[1,8])
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                mponto := ASCAN(m_codigo,STRZERO(mcod_merc,5))
                                IF mponto > 0 .AND. RTRIM(merc->merc) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                        alt_orcam()
                                        LOOP
                                ENDIF
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mped_merc) = 0
                                        atencao('Codigo da mercadoria nao cadastrado')
                                        LOOP
                                ENDIF
                        ENDIF
                ELSEIF EMPTY(mmerc) .AND. ali = 'orcam'
                          mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,,STRZERO(mvarejo,1),mperc),f4_merc1(,,STRZERO(mvarejo,1),mperc))
                        //mcod_merc := VAL(f4_merc(,,STRZERO(mvarejo,1),mperc))
                        mped_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mped_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mmerc := mped_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF mped_merc[1,104] = 'S'
                        atencao('PRODUTO: '+mped_merc[1,8]+' - '+mped_merc[1,9]+' *** D E S C O N T I N U A D O *** ....',3)
                        LOOP
                ENDIF

                mpre := ' '
                IF FILE(ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.jpg')
                        limpa(12,01,26,53)
                        botao(12,10,26,40)
                        WVW_DrawImage( ,12,10,26,40,ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.bmp')
                        limpa(12,01,26,53)
                        botao(12,10,26,40)
                        WVW_DrawImage( ,12,10,26,40,ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.jpg')
                        limpa(12,01,26,53)
                        botao(12,10,26,40)
                        WVW_DrawImage( ,12,10,26,40,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.bmp')
                        limpa(12,01,26,53)
                        botao(12,10,26,40)
                        WVW_DrawImage( ,12,10,26,40,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                        botao(12,01,26,53)
                	WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF

                IF mcont_item >= m_set[1,34] .AND. m_set[1,34] > 0
                        atencao('Nao e possivel incluir mais item porque ja ultrapassou o numero maximo de itens estipulado que e de '+STRZERO(m_set[1,34],5))
                        WVW_RESTSCREEN(,lci,cci+55,lba,cba-1,tela_,.T.)
                        LOOP
                ENDIF
                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                        WVW_RESTSCREEN(,lci,cci+55,lba,cba-1,tela_,.T.)
                        LOOP
                ENDIF
                // DESATIVA O FECHAMENTO DO Orcamento
                SET KEY -9 TO                     // neste mesmo PRG. <F10>Tecla
                //
                IF mmult_emp = 'S' .AND. ! EMPTY(mped_merc[1,1]) .AND. mcodempresa <> mped_merc[1,1]
                        atencao('Este produto nao e da EMPRESA em uso...')
                        LOOP
                ENDIF
                mcod_merc := VAL(mped_merc[1,8])
                setcor(3)
                @ 28,14 SAY SPACE(13)
                @ 28,14 SAY mcod_merc
                @ 29,14 SAY mped_merc[1,9]
                @ 33,14 SAY mped_merc[1,56] PICT '9,999,999.99'
                IF ver_serie() <> '141410'
                        @ 34,14 SAY mped_merc[1,55] PICT '999,999.99'
                ENDIF
                IF ncnn1 > 0
                        IF SR_SetActiveConnection(nCnn1) > 0
                                m_merc1 := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@m_merc1)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_merc1) > 0
                                        setcor(1)
                                        DEVPOS(30,30);DEVOUT('Deposito:')
                                        setcor(3)
                                        DEVPOS(30,COL()+1);DEVOUT(TRANSFORM(m_merc1[1,56],'999,999.999'))
                                ENDIF
                        ENDIF
                        SR_SetActiveConnection(nCnn)
                ENDIF
                setcor(1)
                IF m_cfg[2] = 'L'
                        mvlr_fat := iat(mped_merc[1,46] * ((mped_merc[1,50]/100) + 1),,2)
                        mp_venda := mvlr_fat
                ELSEIF mavaria = 2
                        mvlr_fat := iat(mped_merc[1,45],m_set[1,103])
                        mp_venda := mvlr_fat
                ELSEIF mped_merc[1,23] > 0
                        mvlr_fat = iat(mped_merc[1,46],m_set[1,103]) - iat((mped_merc[1,46] * (mped_merc[1,23] / 100)),m_set[1,103])
                        mp_venda = mvlr_fat
                ELSEIF ! EMPTY(mtipo_preco)
                        IF mtipo_preco = '1'
                                mvlr_fat := mped_merc[1,46]
                        ELSEIF mtipo_preco = '2'
                                mvlr_fat := mped_merc[1,47]
                        ELSEIF mtipo_preco = '3'
                                mvlr_fat := mped_merc[1,100]
                        ELSEIF mtipo_preco = '4'
                                mvlr_fat := mped_merc[1,101]
                        ELSE
                                mvlr_fat := mped_merc[1,102]
                        ENDIF
                        mvlr_fat := iat(mvlr_fat,m_set[1,103])
                        IF ! EMPTY(mperc)
                                mvlr_fat := iat(mvlr_fat*((mperc/100)+1),m_set[1,103])
                        ENDIF
                        mp_venda := mvlr_fat
                ELSE
                        mvlr_fat := iat(mped_merc[1,46],m_set[1,103])
                        mp_venda := mvlr_fat
                        IF mvarejo = 2
                                IF ! EMPTY(mped_merc[1,47])
                                        mvlr_fat := mped_merc[1,47]
                                ELSE
                                        mvlr_fat := iat(mped_merc[1,46]*((mped_merc[1,50]/100)+1),m_set[1,103])
                                ENDIF
                        ENDIF
                        IF ver_descon(mcod_cli,mcod_merc,mped_merc[1,7]) > 0
                                mvlr_fat := iat(mp_venda - (mp_venda*(ver_descon(mcod_cli,mcod_merc,mped_merc[1,7])/100)),m_set[1,103])
                        ENDIF
                        IF ! EMPTY(mperc)
                                mvlr_fat := iat(mp_venda*((mperc/100)+1),m_set[1,103])
                        ENDIF
                        IF SUBSTR(mcond_veze,1,1) = 'D'
                                mvlr_fat := iat(mped_merc[1,43],m_set[1,103])
                        ENDIF
                        mp_venda := mvlr_fat

                ENDIF
                WVW_RESTSCREEN(,lci,cci+55,lba,cba-1,tela_,.T.)
                botao(00,01,10,119)
                IF mped_merc[1,23] > 0
                        setcor(6)
                        DEVPOS(00,20);DEVOUT('(Promocao)')
                ENDIF
                DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                WVW_DrawLabel(,01,02,mped_merc[1,8]+' - '+SUBSTR(mped_merc[1,9],1,30),,,,, 'arial black',60,20,,,,,)
                //WVW_DrawLabel(,04,02,'             '+SUBSTR(mped_merc[1,9],21)+' '+IF(! EMPTY(mped_merc[1,23]),'P:'+TRANSFORM(mped_merc[1,23],'99'),''),,,,, 'arial black',60,20,,,,,)
                WVW_DrawLabel(,06,02,'             '+SUBSTR(mped_merc[1,9],31),,,,, 'arial black',60,20,,,,,)
                WVW_DrawLabel(,06,02,IF(! EMPTY(mped_merc[1,23]),'P:'+TRANSFORM(mped_merc[1,23],'99')+' %',''),,,245,, 'arial black',60,20,,,,,)

                IF mped_merc[1,84] = 'S'
                        mp_venda := mvlr_fat := (mvlr_fat * ver_dolar(mdata_sis))
                ENDIF
                IF ! EMPTY(mped_merc[1,65])
                        mp_venda := mvlr_fat := (mvlr_fat * ((mped_merc[1,65]/100)+1))
                ENDIF                

                IF m_set[1,125] = 'S'
                        mdesc_prod := 0
                        @ 36,cci+46 GET mdesc_prod PICT '999.99'
                        READ
                        limpa(32,cci+46,32,cci+52)
                        IF (mdesc_prod > mped_merc[1,80] .AND. ! EMPTY(mped_merc[1,80]));
                           .OR. (mdesc_prod > m_set[1,33] .AND. EMPTY(mped_merc[1,80]))
                                IF ! aut_sen(TRANSFORM(mdesc_prod,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,mcod_merc)
                                        setcor(1)
                                        mquantd := 1
                                        LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mdesc_prod)
                                mdesc_prod:= mdesc_prod * -1
                                mp_venda = iat(mvlr_fat,m_set[1,103])
                                mvlr_fat = iat(mvlr_fat*((mdesc_prod/100)+1),m_set[1,103])
                        ENDIF
                ENDIF

                DEVPOS(00,80);DEVOUT('Preco   R$:')
                WVW_DrawLabel(,06,70,TRANSFORM(mvlr_fat,'@E 999,999.99'),,,240,, 'arial black',60,30,,,,,)
                setcor(5)
		DEVPOS(28,30);DEVOUT(IF(! EMPTY(mped_merc[1,23]),'PROMOCAO:'+TRANSFORM(mped_merc[1,23],'99')+'%',''))
                setcor(1)
                IF mped_merc[1,24] = 'N'
                        atencao('MERCADORIA NAO DISPONIVEL PARA VENDA',3)
                        LOOP
                ENDIF
                IF mped_merc[1,104] = 'S'
	                atencao('PRODUTO: '+mped_merc[1,8]+' - '+mped_merc[1,9]+' *** D E S C O N T I N U A D O *** ....',3)
                        LOOP
                ENDIF
                IF ! EMPTY(mmerc) .AND. RTRIM(mped_merc[1,9]) <> 'DIVERSOS'
                        m_produto := {}
                        sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(mped_merc[1,8]),,.t.,@m_produto)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(m_produto) > 0 .AND. RTRIM(mped_merc[1,9]) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                alt_orcam(mped_merc[1,8])
                                LOOP
                        ENDIF
                ENDIF
                setcor(1)
                mmerc := mped_merc[1,9]
                IF mped_merc[1,25] = 'S'
                        setcor(1)
                        @ 29,14 GET mmerc PICT '@!'
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF mped_merc[1,14] = 'PL '
                        op_tela(22,10,25,65,'INFORMACOES SOBRE A PLACA')
                        DEVPOS(01,01);DEVOUT('No. Placa.:')
                        DEVPOS(02,01);DEVOUT('Observacao:')
                        @ 01,13 GET menvelope PICT '@!' VALID IF(EMPTY(menvelope),.F.,.T.)
                        @ 02,13 GET mobs_prod PICT '@!' VALID IF(EMPTY(mobs_prod),.F.,.T.)
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ELSEIF mped_merc[1,14] = 'PLA'
                        op_tela(22,10,27,70,'Observacao do Produto')
                        @ 01,01 GET mdescri1
                        @ 02,01 GET mdescri2
                        @ 03,01 GET mdescri3
                        @ 04,01 GET mdescri4
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF SUBSTR(m_set[1,9],1,1) = 'P' .AND. mped_merc[1,14] <> 'PL'
                        mobs_prod := SPACE(40)
                        op_tela(22,10,24,51,' O B E R V A C A O   D O   P R O D U T O')
                        @ 01,01 GET mobs_prod VALID IF(EMPTY(mobs_prod) .AND. mped_merc[1,14]='PL',.F.,.T.)
                        READ
                        wvw_lclosewindow()
                ENDIF
                IF EMPTY(mcod_merc)
                        LOOP
                ENDIF
                mcust_real := mped_merc[1,45]
                //setcor(3)
                DEVPOS(31,14);DEVOUTPICT(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))
                IF m_indiv[1,26] <> 'T' .OR. mped_merc[1,25] = 'S' .OR. mvlr_fat = 0
                        setcor(1)
                        mensagem('<F8> para consultar aplicacao do produto')
                        mmasc_qtd := unidade(mped_merc[1,14])
                        //@ lba-6,cci+46 GET mquantd PICT ALLTRIM(mmasc_qtd) WHEN m_indiv[1,26] <> 'T' VALID IF(EMPTY(mquantd) .OR. (! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]),.F.,.T.)
                        @ 30,14 GET mquantd PICT ALLTRIM(mmasc_qtd) VALID IF(EMPTY(mquantd) .OR. mquantd < 0 .OR. (! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        //IF mped_merc[1,103] = 'S' .AND. mquantd > mped_merc[1,56]
                        //        atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                        //        LOOP
                        //ENDIF
                        IF ! EMPTY(mped_merc[1,28]) .AND. mped_merc[1,28] >= (mped_merc[1,56] - mquantd) .AND. mped_merc[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. m_indiv[1,26] <> 'T'
                                atencao('SALDO esta menor que o ESTOQUE MINIMO: '+TRANSFORM(mped_merc[1,28],'9,999,999.99')+' estipulado !!!')
                        ENDIF
/*
                        IF mquantd > mped_merc[1,56] .AND. mped_merc[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. SUBSTR(mped_merc[1,9],1,1) <> '@'
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(mped_merc[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,mcod_merc)
                                        LOOP
                                ENDIF
                                mlibera := 'S'
                        ENDIF
                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDOADM',,,mcod_merc)
                                        LOOP
                                ENDIF
                        ENDIF
*/
                        IF mped_merc[1,23] > 0
                                setcor(6)
                                DEVPOS(lba-5,cci+07);DEVOUT('Preco de Tabela R$: '+TRANSFORM(mped_merc[1,46],'999,999.99'))
                                setcor(1)
                        ENDIF
                        mpacote := mpecas := 0
                        IF ! EMPTY(mped_merc[1,19])
                                IF VAL(SUBSTR(TRANSFORM(mquantd/mped_merc[1,19],'999,999.99'),9)) > 0
                                        mquantd_aux := VAL(SUBSTR(TRANSFORM(mquantd/mped_merc[1,19],'999,999.99'),1,7)) +1
                                        mquantd := mquantd_aux * mped_merc[1,19]
                                ENDIF
                                mpacote := VAL(SUBSTR(TRANSFORM((mquantd/mped_merc[1,19])/mped_merc[1,20],'999,999.99'),1,7))
                                mpecas  := (VAL(SUBSTR(TRANSFORM((mquantd/mped_merc[1,19])/mped_merc[1,20],'999,999.99'),9))*mped_merc[1,20])/100
                        ENDIF
                        cons_formula :={}
                        sr_getconnection():exec("SELECT * FROM formula WHERE cod_merc = "+sr_cdbvalue(mped_merc[1,8]),,.t.,@cons_formula)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_formula) > 0
                                mvlr_fat := tab_formula(mped_merc[1,8])
                        ENDIF
                                
                        mensagem('Digite o valor do produto - <ESC>Sair')
                        @ 31,14 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF(mped_merc[1,23]>0 .AND. mvlr_fat < mp_venda,.F.,.T.) WHEN (m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T') .OR. mped_merc[1,25] = 'S' .OR. mvlr_fat = 0
                        READ
                        IF LASTKEY() = 27
                                UNLOCK
                                mquantd := 1
                                LOOP
                        ENDIF
                        //IF mped_merc[1,46] = 0        //Valor de TABELA
                        IF ! EMPTY(m_set[1,154]) .AND. mvlr_fat > m_set[1,154]
                                IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' - Valor por Produto Solicitada: '+ALLTRIM(TRANSFORM(mvlr_fat,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,154],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,mcod_merc)
                                        LOOP
                                ENDIF
                        ENDIF
                        mcomissao := mped_merc[1,26]
                        IF mp_venda > mvlr_fat
                                mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                IF ! EMPTY(m_set[1,113]) .AND. mdesconto >= m_set[1,114]
                                        IF m_set[1,113] > 1
                                                mcomissao := mcomissao * (m_set[1,113]/100)
                                        ELSE
                                                mcomissao := mcomissao - (iat(mdesconto,0) * m_set[1,113])
                                                IF mcomissao < 0
                                                        mcomissao := 0
                                                ENDIF
                                        ENDIF
                                ENDIF
                                IF ((mp_venda - mvlr_fat)/mp_venda)*100 > m_set[1,33] .AND. EMPTY(mped_merc[1,80]) .AND. ! EMPTY(m_set[1,33])
                                        IF ! aut_sen('Codigo do Produto: '+mped_merc[1,8]+' Vlr.Solicitado R$:'+TRANSFORM(mvlr_fat,'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mp_venda,'999,999.99')+' - '+TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ELSEIF ((mp_venda - mvlr_fat)/mp_venda)*100 > mped_merc[1,80] .AND. ! EMPTY(mped_merc[1,80])
                                        IF ver_serie() = '141220' .OR. ver_serie() = '141350' .OR. ver_serie() = '141384'
                                                atencao('Codigo do Produto: '+mped_merc[1,8]+' Vlr.Solicitado R$:'+TRANSFORM(mvlr_fat,'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mp_venda,'999,999.99')+' - '+TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,'999.99')+'% Desconto nao e permitido..')
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                        IF ! aut_sen('Codigo do Produto: '+mped_merc[1,8]+' Vlr.Solicitado R$:'+TRANSFORM(mvlr_fat,'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mp_venda,'999,999.99')+' - '+TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = 'C' .AND. mvlr_fat < mped_merc[1,45]
                                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' Vlr.Solicitado R$:'+TRANSFORM(mvlr_fat,'999,999.99')+' - Pr.Custo R$:'+TRANSFORM(mped_merc[1,45],'999,999.99')+' - Senha de autorizacao:','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = 'V' .AND. mvlr_fat < mp_venda
                                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' Vlr.Solicitado R$:'+TRANSFORM(mvlr_fat,'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mp_venda,'999,999.99')+' - Senha de autorizacao:','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                ELSE
                        mmasc_qtd := unidade(mped_merc[1,14])
                        DEVPOS(30,14);DEVOUTPICT(mquantd,ALLTRIM(mmasc_qtd))
                        DEVPOS(31,14);DEVOUTPICT(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))
                        setcor(1)
                ENDIF
                /*
                IF ! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]
                        atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                        LOOP
                ENDIF
                IF mlimite <= (mcompras+msubtotal+(mvlr_fat*mquantd)) .AND. mlimite > 0
                        atencao('Limite do Cliente foi ultrapassado em R$:'+TRANSFORM(mlimite-(mcompras+msubtotal+(mvlr_fat*mquantd)),'999,999.99'))
                ENDIF
                */
                mtot_ped = 0
                mtot_ped = mvlr_fat * mquantd
                setcor(3)
                @ 32,14 SAY mtot_ped PICT ALLTRIM(m_set[1,98])
                setcor(1)
                opcao := op_simnao('S','Confirma Inclusao da Mercadoria:')
                IF opcao = 'N'
                        DBUNLOCKALL()
                        mquantd := 1
                ELSE
                        aret:={}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        AADD(m_codigo,STRZERO(mcod_merc,5))
                        AADD(m_Cbarra,aret[1,2])
                        IF mvlr_fat = 0
                        *                         1       2        3           4     5       6          7         8           9         10        11          12        13         14              15             16          17        18       19   20        21         22         23        24       25        26        27       28      29      30       31       32       33         34         35        36        37        38          39
                        *                          40      41    42      43     44
                                AADD(m_matriz,{mquantd,mvlr_fat,        0,aret[1,7],mmerc,aret[1,14],aret[1,17],       0,         0,aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,mhoras,aret[1,82],aret[1,83],mchass,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,aret[1,75],aret[1,74],mobs_prod,mmontador,mmontador1,aret[1,27],;
                                               aret[1,47],'  ',mpacote,mpecas,mcod_pres})
                        ELSE
                                AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,aret[1,7],mmerc,aret[1,14],aret[1,17],mp_venda,aret[1,45],aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,mhoras,aret[1,82],aret[1,83],mchass,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,aret[1,75],aret[1,74],mobs_prod,mmontador,mmontador1,aret[1,27],;
                                               aret[1,47],'  ',mpacote,mpecas,mcod_pres})
                        ENDIF
                        IF aret[1,14] = 'EV'
                                AADD(m_alt,STRZERO(mcod_merc,5)+' '+LEFT(aret[1,9],27)+' '+menvelope+' '+TRANSFORM(mquantd,'99999.99')+' '+TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(mvlr_fat * mquantd,ALLTRIM('@E '+m_set[1,98])))
                        ELSE
                                AADD(m_alt,STRZERO(mcod_merc,5)+' '+LEFT(aret[1,9],38)+' '+TRANSFORM(mquantd,'99999.99')+' '+TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(mvlr_fat * mquantd,ALLTRIM('@E '+m_set[1,98])))
                        ENDIF
                        menvelope := SPACE(10)
                        mcod_pres := 0
                        mobs_prod:=SPACE(40)
                        mcont_item ++
                        mquantd := 1
                ENDIF
        ENDDO
        IF mcod_aux = 'XXX'
                EXIT
        ENDIF
ENDDO
RELEASE ALL
wvw_lclosewindow()
RETURN NIL
***************************  F I M  **********************************
* ALTERACAO DE MERCADORIA
***************************
FUNCTION alt_orcam
******************
LOCAL li:=08,ci:=10,lb:=23,cb:=89,mp_venda:=0,mtelap,telapro
MEMVAR mponto,mcod_merc,mquantd,mvlr_fat,menvelope,m_matriz,;
       m_codigo,ali,m_alt,lci,cci,lba,cba,opcao,mcomissao,cod_operado,;
       mproducao,mcont_item,mtot_ped,mdesconto,msubtotal,mtot_custo,mvarejo,;
       mperc,mcod_cli,mmasc_qtd

op_tela(li,ci,lb,cb,' ALTERACAO DE PRODUTOS ')
mensagem('Escolha com as Setas e Tecle <ENTER>p/Alterar ou <ESC>p/Sair')
setcor(1)
setcor(10);mponto := ACHOICE(00,01,18,78,m_alt,,,mponto);setcor(1)
wvw_lclosewindow()
IF mponto = 0
        RETURN .T.
ENDIF
op_tela(10,10,17,79,' ALTERACAO DE PRODUTOS ')
CLEAR GETS
DO WHILE .T.
        ***************
        SELE('merc');ORDSETFOCUS(1)
        GO TOP
        ***************
        SEEK m_codigo[mponto]
        mcod_merc := VAL(merc->cod_merc)
        IF EMPTY(mcod_merc)
					 EXIT
        ENDIF
        DEVPOS(00,00);DEVOUT('Produto....:')
        IF m_matriz[mponto,6] = 'EV'
                DEVPOS(01,00);DEVOUT('No.Envelope:')
        ELSEIF m_matriz[mponto,6] = 'PL'
                DEVPOS(01,00);DEVOUT('No.Placa...:')
        ENDIF
        DEVPOS(02,00);DEVOUT('Saldo......:')
        DEVPOS(03,00);DEVOUT('Quantidade.:')
        DEVPOS(04,00);DEVOUT('Prc.Tabela :')
        IF merc->promocao > 0
                DEVPOS(04,14);DEVOUT(TRANSFORM(merc->pr_venda,'999,999.99'))
        ENDIF
        DEVPOS(05,00);DEVOUT('Preco Venda:')
        //setcor(3)
        DEVPOS(00,14);DEVOUT(STRZERO(mcod_merc,5))
        DEVPOS(00,COL()+1);DEVOUT(merc->merc)
        DEVPOS(02,14);DEVOUTPICT(merc->saldo_mer,ALLTRIM(m_set[1,98]))
        mvlr_fat = m_matriz[mponto,2]
        mp_venda = merc->pr_venda
        IF ! EMPTY(merc->promocao)
                mp_venda := mvlr_fat
                //SETCOLOR([6])
                @ 00,COL()+1 SAY '(P)'
        ENDIF
        mquantd = m_matriz[mponto,1]
        menvelope := m_matriz[mponto,24]
        setcor(1)
        IF m_matriz[mponto,6] = 'EV'
                @ 01,14 GET menvelope PICT '@!' VALID IF(EMPTY(menvelope),.F.,.T.)
                READ
        ELSEIF m_matriz[mponto,6] = 'PL'
                @ 01,14 GET menvelope PICT '@!' VALID IF(EMPTY(menvelope),.F.,.T.)
                READ
        ENDIF
        IF LASTKEY() = 27;EXIT;ENDIF
        mmasc_qtd := unidade(merc->unidade)
        @ 03,14 GET mquantd PICT mmasc_qtd WHEN men_get(lba-10,cci+42,'Informe a quantidade que deseja, so nao pode ultrapassar o saldo da mercadoria') VALID lim_get()
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mpacote := mpecas := 0
        IF ! EMPTY(merc->metragem) .AND. mquantd > 0
                IF VAL(SUBSTR(TRANSFORM(mquantd/merc->metragem,'999,999.99'),9)) > 0
                        mquantd_aux := VAL(SUBSTR(TRANSFORM(mquantd/merc->metragem,'999,999.99'),1,7)) +1
                        mquantd := mquantd_aux * merc->metragem
                ENDIF
                mpacote := VAL(SUBSTR(TRANSFORM((mquantd/merc->metragem)/merc->pacote,'999,999.99'),1,7))
                mpecas  := VAL(SUBSTR(TRANSFORM((mquantd/merc->metragem)/merc->pacote,'999,999.9'),9))
                setcor(3,'*')
                DEVPOS(lba-6,cci+46);DEVOUTPICT(mquantd,ALLTRIM(mmasc_qtd))
                DEVPOS(lba-3,cci+05);DEVOUTPICT(mpacote,'9,999.99')
                DEVPOS(lba-3,cci+19);DEVOUTPICT(mpecas,'999')
                setcor(1)
        ENDIF
/*
        IF mquantd > merc->saldo_mer + m_matriz[mponto,1] .AND. m_set[1,107] = 'S' .AND. ali = 'ped_s'
                IF ! aut_sen('Quantidade maior que saldo... Senha de autorizacao:','LIB_SALDO',,,mcod_merc)
                        EXIT
                ENDIF
        ENDIF
*/
        IF mquantd = 0
                opcao := op_simnao('S','Confirma Exclusao da Mercadoria:')
                IF opcao = 'S'
                        mquantd = 0
                        **********
                        SELE('merc');ORDSETFOCUS(1)
                        **********
                        m_codigo[mponto] = '     '
*                       m_merc[mponto] = SPACE(40)
                        m_matriz[mponto,1] := m_matriz[mponto,2] := ;
                        m_matriz[mponto,3] := 0
                        m_alt[mponto] := SUBSTR(m_alt[mponto],1,45)+'***** Mercadoria Excluida *****'
                        mcont_item --
                        DEVPOS(lba-2,cci+10);DEVOUT(STRZERO(mcont_item,3))
                        setcor(1)
                        mquantd := 1
                        EXIT
                ELSE
                        mquantd := 1
                        EXIT
                ENDIF
        ENDIF
        IF mvarejo = 2
                IF ! EMPTY(merc->pr_venda1)
                        mp_venda = merc->pr_venda1
                ELSE
                        mp_venda = iat(merc->pr_venda*((merc->varejo/100)+1),m_set[1,103])
                ENDIF
        ELSEIF mperc > 0
                mp_venda = iat(merc->pr_venda*((mperc/100)+1),m_set[1,103])
        ELSEIF ver_descon(mcod_cli,mcod_merc,merc->gru_sub) > 0
                mp_venda = iat(merc->pr_venda - (merc->pr_venda*(ver_descon(mcod_cli,mcod_merc,merc->gru_sub)/100)),m_set[1,103])
        ELSE
                mp_venda = iat(merc->pr_venda,m_set[1,103])
        ENDIF
        mensagem('Digite o valor do produto - <ESC>Sair')
        @ 05,14 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF(merc->promocao>0 .AND. mvlr_fat < mp_venda,.F.,.T.) WHEN m_set[1,38] <> 'P'             //.AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF iat(mp_venda,m_set[1,103]) > mvlr_fat
                IF ((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100 > m_set[1,33] .AND. EMPTY(merc->desc_merc)
                        IF ! aut_sen(TRANSFORM(((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,,mcod_merc)
                                LOOP
                        ENDIF
                ENDIF
                IF (((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100 > merc->desc_merc .AND. ! EMPTY(merc->desc_merc)) .AND. ! EMPTY(merc->desc_merc)
                        IF ver_serie() = '141220' .OR. ver_serie() = '141350' .OR. ver_serie() = '141384'
                                atencao(TRANSFORM(((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100,'999.99')+'% Desconto nao e permitido.. ')
                                mquantd := 1
                                LOOP
                        ENDIF
                        IF ! aut_sen(TRANSFORM(((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,,mcod_merc)
                                LOOP
                        ENDIF
                ENDIF
        ENDIF
        IF m_set[1,38] = 'C'
                IF mvlr_fat < iat(mp_venda,m_set[1,103])
                       IF mvlr_fat < merc->cust_real
                                IF ! aut_sen('Senha de autorizacao:','LIB_DESC',,,mcod_merc)
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
        ELSEIF m_set[1,38] = 'V'
                IF mvlr_fat < iat(mp_venda,m_set[1,103])
                       IF mvlr_fat < iat(mp_venda,m_set[1,103])
                                IF ! aut_sen('Senha de autorizacao:','LIB_DESC',,,mcod_merc)
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
        ENDIF
        IF m_set[1,37] = 'S'
                mmontador := m_matriz[mponto,37]
                mmontador1 := m_matriz[mponto,38]
                op_tela(10,25,13,75,' Informe o Montador ')
                DEVPOS(00,00);DEVOUT('Montador 1:')
                DEVPOS(01,00);DEVOUT('Montador 2:')
                @ 00,14 GET mmontador PICT '999' VALID ven(mmontador,00,18)
                @ 01,14 GET mmontador1 PICT '999' VALID IF(mmontador1 = mmontador,.F.,ven(mmontador1,01,18)) WHEN ! EMPTY(mmontador)
                READ
                opcao := op_simnao('S','Confirma os Montador:')
                wvw_lclosewindow()
                IF  opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        IF m_set[1,115] = 'S'
                mcomissao := m_matriz[mponto,15]
                op_tela(10,10,11,65,'Comissao do Produto')
                DEVPOS(00,00);DEVOUT('Digite o percentual de Comissao do Vendedor [%]:')
                @ 00,COL()+1 GET mcomissao PICT '999.99' VALID IF(EMPTY(mcomissao),.F.,.T.)
                READ
                wvw_lclosewindow()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        mtot_ped = 0
        mtot_ped = mvlr_fat * mquantd
        opcao := op_simnao('S','Confirma Alteracao da Mercadoria:')
        IF opcao = 'S'
                mdesconto := 0
*               IF mvlr_fat < iat(merc->pr_venda,m_set[1,103])
*                       mdesconto := ((iat(merc->pr_venda,m_set[1,103])-mvlr_fat)/iat(merc->pr_venda,m_set[1,103]))*100
                IF mvlr_fat < iat(mp_venda,m_set[1,103])
                        mdesconto := ((iat(mp_venda,m_set[1,103])-mvlr_fat)/iat(mp_venda,m_set[1,103]))*100
                ENDIF
                m_matriz[mponto,1] = mquantd
                m_matriz[mponto,2] = mvlr_fat
                m_matriz[mponto,3] = mdesconto
                m_matriz[mponto,15] = mcomissao
                m_matriz[mponto,24] = menvelope
                m_matriz[mponto,37] = mmontador
                m_matriz[mponto,38] = mmontador1
                m_matriz[mponto,42] = mpacote
                m_matriz[mponto,43] = mpecas
                IF m_matriz[mponto,6] = 'EV'
                        m_alt[mponto] := m_codigo[mponto]+' '+LEFT(m_matriz[mponto,5],29)+' '+m_matriz[mponto,24]+' '+TRANSFORM(m_matriz[mponto,1],'99999.99')+' '+TRANSFORM(m_matriz[mponto,2],ALLTRIM(m_set[1,98]))+' '+TRANSFORM(m_matriz[mponto,2] * m_matriz[mponto,1],ALLTRIM(m_set[1,98]))
                ELSE
                        m_alt[mponto] := m_codigo[mponto]+' '+m_matriz[mponto,5]+'  '+TRANSFORM(m_matriz[mponto,1],'99999.99')+' '+TRANSFORM(m_matriz[mponto,2],ALLTRIM(m_set[1,98]))+' '+TRANSFORM(m_matriz[mponto,2] * m_matriz[mponto,1],ALLTRIM(m_set[1,98]))
                ENDIF
                **********
                SELE('merc');ORDSETFOCUS(1)
                **********
                mquantd := 1
                EXIT
        ELSE
                mquantd := 1
                EXIT
        ENDIF
ENDDO
malterou := '*'
CLEAR GETS
wvw_lclosewindow()
RETURN .T.
********************************** F I M ***************************************
* FECHAMENTO DO ORCAMENTO
*****************************
MEMVAR getlist

FUNCTION fecha_orcam(mtip,magrupar,orc_tp)
*****************
LOCAL lcia,ccia,lbaa,cbaa,mopcao,mdocum,mvenc,mcodvend,mtot_prazo:=0,mprazo_aux:=0,opcao,;
      mtotitens:=0,mtel_carro,mdesc_alt:=0,i,tela_ped,mtelemark:=' ',;
      mdesc_aux:=0,mppag:=' ',mcli_aux:=' ',mop_desc := ' ',cons_presen:={},mpd_entrega,;
      cComm,cons_ped:={}

MEMVAR ali,no,mcod_cli,mcod_ven,mnome_ven,m_matriz,m_codigo,m_num,mcod_aux,;
       mnum_ped,mlci,mlib_spc,mprz,mtp_venda,mcond_veze,mdata_sis,m_dia,cod_operado,;
       m_alt,msit_tip,sovenda,mproducao,mcont_item,mtela,m_pedido,;
       m_cbarra,mflag,mcom_oper,m_vlr,;
       mtot_limite,mlim_venc,mlim_avenc,mobs1,mobs2,mobs3,mobs4,mobs5,mobs6,mobs7,mobs8,;
       mplaca,mcarro,mmodelo,mkm,mnum_os,mcod_pres

PRIVATE mdocumento,mvalor_aux,mtipo_aux,mextenso,mhora,mdata,;
        f,mforma_pg,modo_pg,mvlr_ent,mfin,;
        mt_pedido,mtot_desc,mtot_quant,mdesconto,mtraco,mcondicao,mprazo,;
        mperc,mlinha,lin,mlin,mdesc,mvlr_desc,mcartao,mdup,mcheque,;
        mdinheiro,mend,mbairro,mcidade,muf,minsc,mcgc,mcpf,;
        mcond_int,mvia,mtot_itens,malteracao:=0,;
        mdif,mnome,tela,mpoint,mquantd_prod,mtaxa_adm:=0,;
        mnome_cli,mjuros,mjuros_aux,mlimite:=0,mautoriza,;
        mpagina,mp,mtipo_fin,maliq_fin,mcobra_fin,mcod_fin,mtaxa_fin,;
        mvalor_pres,mvalor_fin,mporta_imp,;
        mnome_trans,mcgc_trans,mend_trans,mmun_trans,muf_trans,minsc_trans,;
        mplaca_trans,mcod_tran,mnum_trans,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtipo_pg,mmontador:=0,mmontador1:=0,;
        memissao:=CTOD('  /  /  '),mcart_ban:=' '
ali := 'orcam'
SET KEY -8 TO sac130()           // inclusao de clientes
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacoss','oss');RETURN NIL;ENDIF
IF ! AbriArq('sacospro','ospro');RETURN NIL;ENDIF
*IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('merc_det','deta');RETURN NIL;ENDIF
IF ! AbriArq('sactran','tran');RETURN NIL;ENDIF
//IF ! AbriArq('sacnoped','noped');RETURN NIL;ENDIF
//IF ! AbriArq('flag_ped','flag');RETURN NIL;ENDIF
CLEAR GETS
lcia := ccia := 0
lbaa := 24
cbaa := 75
mtraco := REPLI('=',80)
mlinha := lin := mlin := mtot_limite:= mlim_venc := mlim_avenc := mautoriza := ;
mvlr_ent := 0
i = 1
//IF ! AbriArq('sacorcam','orcam');RETURN NIL;ENDIF
//IF ! AbriArq('sacnoorc','noorc');RETURN NIL;ENDIF
CLEAR GETS
mp := ' '
i:=0
IF m_set[1,84] > 0 .AND. (mtip = 'SAC23P1' .OR. mtip = '1' .OR. mtip = 'SAC23ORC') .AND. EMPTY(mcod_cli)
        mcod_cli := m_set[1,84]
ENDIF

/*cons_ped := {}
sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
IF LEN(cons_ped) = 0
        atencao('Nao existe nenhum Produto neste ORCAMENTO...')
        RETURN NIL
ENDIF
*/
mt_pedido := 0
op_tela(10,10,13,70,' Confirmacao de Vendedor ')
WHILE .T.
        exibi_prg('SAC23ORC')
        muf_trans := SPACE(2)
        mcod_tran := SPACE(4)
        mplaca_trans := SPACE(7)
        mnum_trans := SPACE(8)
        minsc_trans := SPACE(11)
        mcgc_trans := SPACE(13)
        mmun_trans := SPACE(20)
        mnome_trans := SPACE(30)
        mend_trans := SPACE(40)
        mcodvend := mcod_ven
        IF m_set[1,108] = 'S'           //.AND. m_indiv[1,26] = 'N'
                DEVPOS(01,01);DEVOUT('Vendedor:')
                setcor(3)
                DEVPOS(01,11);DEVOUT(mcod_ven+'-'+mnome_ven)
                DEVPOS(02,01);DEVOUT('Pressione <ENTER> p/continuar ou Altere o Vendedor')
                setcor(1)
                @ 01,11 GET mcod_ven PICT '999' VALID IF(ver_ven(mcod_ven),.T.,.F.)
                READ
                mnome_ven := sen->snome
                IF m_set[1,10] = 'S' .AND. mcod_ven <> mcod_aux;
                   .AND. mcod_cli <> m_set[1,84];
                   .AND. ! aut_sen('Cod. Vend. Diferente do Vend. Resp.CLIENTE, Senha autorizacao:','LIBCLIVEN',,mcod_cli)
                        LOOP
                ENDIF
                IF mcodvend <> mcod_ven
                        mopcao := ' '
                        DEVPOS(01,01);DEVOUT('Vendedor:')
                        setcor(3)
                        DEVPOS(01,11);DEVOUT(mcod_ven+'-'+mnome_ven)
                        DEVPOS(02,01);DEVOUT('Para Confirma pressione qualquer tecla ou <ESC>retornar')
                        setcor(1)
                        @ 50,00 GET mopcao
                        READ
                        //INKEY(0)
                        IF LASTKEY() = 27
                                SET KEY 28 TO menu_cons()
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                ENDIF
                IF m_set[1,153] = 'S' .AND. mcod_ven <> cod_operado
                        mtelemark := mensagem1('Esta Venda e [T]->TELE MARKETING ou [N]->NORMAL:',' ','T,N')
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
        ENDIF
        EXIT
ENDDO
wvw_lclosewindow()
op_tela(05,10,34,85,'F E C H A M E N T O    D O    O R C A M E N T O ')
WHILE .T.
        exibi_prg('SAC23ORC')
        SET KEY 28 TO menu_cons()
        mpd_entrega := CTOD('  /  /  ')
        mnome_cli := mnome := SPACE(40)
        mcartao := mdup := mcheque := mdinheiro := mcobra_fin := SPACE(1)
        mend := SPACE(35)
        mbairro := mcidade := SPACE(20)
        muf := mcond_int := SPACE(2)
        minsc := mcgc := SPACE(14)
        mcpf = SPACE(11)
        mtipo_fin := SPACE(3)
        mvlr_desc := mdesc := maliq_fin := mcod_fin := ;
        mtaxa_fin := mvalor_aux := mvalor_pres := mvalor_fin := mdesc_alt := ;
        mmontador := mmontador1 := 0
        mensagem('Preencha os campos de acordo com o HELP - <ESC> p/retornar')
        //botao(lcia,ccia,lbaa,cbaa)
        @ lcia+2,ccia TO lcia+2,cbaa
        @ lcia+6,ccia TO lcia+6,cbaa
        @ lcia+17,ccia TO lcia+17,cbaa
        @ lcia+19,ccia TO lcia+19,cbaa

        setcor(1)
        IF m_indiv[1,9] <> 'V'
                DEVPOS(lcia+01,ccia+1);DEVOUT('Sub-Total do Orcamento:')
                DEVPOS(lcia+02,ccia+20);DEVOUT('Indentificacao Cliente')
                DEVPOS(lcia+06,ccia+20);DEVOUT('Condicoes de Pagamento')
                DEVPOS(lcia+3,ccia+1);DEVOUT('Cod.:')
                DEVPOS(lcia+4,ccia+1);DEVOUT('CPF.:')
                DEVPOS(lcia+4,ccia+28);DEVOUT('| Media de dias em Atraso:')
                DEVPOS(lcia+5,ccia+1);DEVOUT('CGC.:')
                DEVPOS(lcia+5,ccia+28);DEVOUT('| Quantidade Documento...:')
                DEVPOS(lcia+16,ccia+1);DEVOUT('Previsao de Entrega......:')
                DEVPOS(lcia+20,ccia+1);DEVOUT('Observacoes:')
                ****
        ELSE
                DEVPOS(lcia+01,ccia+1);DEVOUT('Sub-Total do Orcamento:')
                DEVPOS(lcia+17,ccia+1);DEVOUT('Vaqueiros..:')
                DEVPOS(lcia+18,ccia+1);DEVOUT('Patrocinio.:')
                DEVPOS(lcia+21,ccia+1);DEVOUT('Sub-Total do Orcamento:')
        ENDIF
        IF mtip = '1' .OR. mtip = 'SAC23ORC'
                mtipo_imp := m_indiv[1,10]
                mporta_imp := m_indiv[1,7]
                mquantd := m_indiv[1,11]
                IF magrupar = 100
                        mobs1 := aret[1,86]
                        mobs2 := aret[1,87]
                        mobs3 := aret[1,88]
                        mobs4 := aret[1,89]
                        mobs5 := aret[1,113]
                        mobs6 := aret[1,114]
                        mobs7 := aret[1,115]
                        mobs8 := aret[1,116]
                ENDIF
                ****
                mnum_ped := mt_pedido := i := mtotitens := 0
                mvia := '1a.via'
                FOR i = 1 TO LEN(m_codigo)
                        IF m_matriz[i,1] = NIL
                                LOOP
                        ENDIF
                        IF m_matriz[i,2] < m_matriz[i,8]
                                mdesc_alt := mdesc_alt + ((m_matriz[i,1] * m_matriz[i,2]) - (m_matriz[i,1] * m_matriz[i,8]))
                        ENDIF
                        mt_pedido = mt_pedido + (m_matriz[i,2] * m_matriz[i,1])
                        mtotitens ++
                NEXT
                IF LEN(m_codigo) = 0
                        atencao('Nao foi Solicitacao nenhum Pedido neste momento')
                        SET KEY -8 TO
                        EXIT
                ENDIF
                i = 1

                ***
        ELSEIF mtip = '*'
                mtipo_imp := m_indiv[1,10]
                mporta_imp := m_indiv[1,7]
                mquantd := m_indiv[1,11]
                ***
                mvia := '2a.Alt'
                aret:={}
                cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                sr_getconnection():exec(ccomm,,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) = 0
                        EXIT
                ENDIF
                mcod_cli := aret[1,23]
                mmontador := VAL(aret[1,36])
                mmontador1 := VAL(aret[1,38])
                mplaca := aret[1,26]
                mcarro := aret[1,27]
                mmodelo := aret[1,28]
                mkm     := aret[1,29]
                mobs1 := aret[1,86]
                mobs2 := aret[1,87]
                mobs3 := aret[1,88]
                mobs4 := aret[1,89]
                mobs5 := aret[1,113]
                mobs6 := aret[1,114]
                mobs7 := aret[1,115]
                mobs8 := aret[1,116]
                mt_pedido := 0
                mtp_venda := aret[1,45]
                mpd_entrega := aret[1,101]
                i:=0
                FOR i = 1 TO LEN(aret)
                        mt_pedido := mt_pedido + aret[i,14] * aret[i,17]
                        IF aret[i,17] < aret[i,20]
                                mdesc_alt := mdesc_alt + ((aret[i,14] * aret[i,17]) - (aret[i,14] * aret[i,21]))
                        ENDIF
                NEXT
        ELSE
                SET KEY -8 TO
                EXIT
        ENDIF
        IF ali = 'orcam'
                janela(lcia,cbaa,' FECHAMENTO DO ORCAMENTO ','*')
                mtipo_imp := m_indiv[1,10]
                mporta_imp := m_indiv[1,12]
                mquantd := m_indiv[1,15]
                mvia := 'ORCAM'
        ENDIF
        IF SUBSTR(m_set[1,9],1,1) = 'S' .OR. SUBSTR(m_set[1,9],2,1) = 'S' .OR. magrupar = 1
                IF magrupar = 1
                        mobs1 := mobs2 := mobs3 := mobs4 := SPACE(40)
                        i := 0
                        FOR i =1 TO LEN(m_num)
                                IF i > 0 .AND. i <=6
                                        mobs1 := RTRIM(mobs1)+m_num[i]+','
                                ELSEIF i > 7 .AND. i <= 12
                                        mobs2 := RTRIM(mobs2)+m_num[i]+','
                                ELSEIF i > 14 .AND. i <= 18
                                        mobs3 := RTRIM(mobs3)+m_num[i]+','
                                ELSEIF i > 21 .AND. i <= 24
                                        mobs4 := RTRIM(mobs4)+m_num[i]+','
                                ENDIF
                        NEXT
                        mobs1 := SUBSTR(mobs1,1,40)
                        mobs2 := SUBSTR(mobs2,1,40)
                        mobs3 := SUBSTR(mobs3,1,40)
                        mobs4 := SUBSTR(mobs4,1,40)
                ENDIF
                //SET KEY 28 TO
                WHILE .T. .AND. m_indiv[1,26] = 'N'
                        IF m_indiv[1,9] <> 'V'
                                @ lcia+20,ccia+14 GET mobs1
                        ELSE
                                @ lcia+20,ccia+14 GET mobs1 VALID IF(EMPTY(mobs1),.F.,.T.)
                        ENDIF
                                @ lcia+21,ccia+14 GET mobs2 WHEN ! EMPTY(mobs1)
                                @ lcia+22,ccia+14 GET mobs3 WHEN ! EMPTY(mobs2)
                                @ lcia+23,ccia+14 GET mobs4 WHEN ! EMPTY(mobs3)
                                @ lcia+23,ccia+14 GET mobs5 WHEN ! EMPTY(mobs4)
                                @ lcia+23,ccia+14 GET mobs6 WHEN ! EMPTY(mobs5)
                                @ lcia+23,ccia+14 GET mobs7 WHEN ! EMPTY(mobs6)
                                @ lcia+23,ccia+14 GET mobs8 WHEN ! EMPTY(mobs7)
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        opcao := op_simnao('S','Confirma as OBSERVACOES [S/n]:')
                        IF opcao = 'N'
                                LOOP
                        ENDIF
                        EXIT
                ENDDO
        ENDIF
        SET KEY 28 TO menu_cons()
        setcor(3)
        WVW_DrawLabel(,lcia+01,ccia+26,ALLTRIM(TRANSFORM(mt_pedido,'99,999,999.99')),,,,, 'Arial Black',23,30,,,,,)
        setcor(1)
        mcli_aux := mcod_cli
    IF m_indiv[1,9] <> 'V'
        IF mtip = '*'
                @ lcia+3,ccia+7 GET mcod_cli PICT '99999'       //WHEN m_set[1,17] = 'S' .AND. m_set[1,100] = 'N' .AND. m_set[1,10] = 'N' .AND. ali <> 'ped_s'    // men_get(lcia+4,ccia+7,'Informe o Cod.do Cliente - <ENTER>outro campo - <F1>Pesquisar - <F9>p/Incluir Clientes') .AND.          //.AND. m_indiv[1,26] = 'N'
        ELSE
                @ lcia+3,ccia+7 GET mcod_cli PICT '99999' WHEN m_set[1,17] = 'S' .AND. m_set[1,10] = 'N'    // men_get(lcia+4,ccia+7,'Informe o Cod.do Cliente - <ENTER>outro campo - <F1>Pesquisar - <F9>p/Incluir Clientes') .AND.          //.AND. m_indiv[1,26] = 'N'
        ENDIF
        @ lcia+3,ccia+14 GET mnome_cli PICT '@!' WHEN EMPTY(mcod_cli)
        @ lcia+4,ccia+7 GET mcpf PICT '@@R 999.999.999-99' WHEN EMPTY(mcod_cli) .AND. EMPTY(mnome_cli)          //.AND. men_get(lcia+5,ccia+7,'Informe o CPF do Cliente - <ENTER>outro campo - <F7>p/pesquisar')
        @ lcia+5,ccia+7 GET mcgc PICT '@@R 99.999.999/9999-99' WHEN EMPTY(mcod_cli) .AND. EMPTY(mnome_cli)
        READ
        IF mp = '*'
                mp := ' '
                LOOP
        ENDIF
        IF LASTKEY() = 27
                IF mtip = '*' .AND. malteracao = 1
                        atencao('Voce nao pode Sair esta alteracao sem fazer o FECHAMENTO porque este Orcamento ja foi ALTERADO OK')
                        LOOP
                ENDIF
                CLEAR GETS
                SET KEY -8 TO
                EXIT
        ENDIF
        IF ! EMPTY(mcod_cli)
                cons_cli := {}
                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_cli) = 0
                        atencao('Cliente nao cadastrado !!!')
                        LOOP
                ENDIF
                mcod_cli := cons_cli[1,2]
        ELSEIF ! EMPTY(mnome_cli)
                cons_cli := {}
                sr_getconnection():exec("SELECT * FROM saccli WHERE razao = "+sr_cdbvalue(RTRIM(mnome_cli)),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_cli) = 0
                        atencao('Cliente nao cadastrado !!!')
                        LOOP
                ELSE
                        f7_cli()
                        mcod_cli := cons_cli[1,2]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
        ENDIF
        IF cons_cli[1,41] = 'S'
                atencao('Este CLIENTE ESTA COM CREDITO BLOQUEADO PELO SISTEMA EM '+DTOC(cons_cli[1,138]))
                LOOP
        ENDIF
        //SET KEY 28 TO
        IF ! EMPTY(mnome_cli) .OR. ! EMPTY(mcod_cli) .OR. ! EMPTY(mcpf) .OR. ! EMPTY(mcgc)
                setcor(3)
                DEVPOS(lcia+3,ccia+7);DEVOUT(STR(mcod_cli))
                DEVPOS(lcia+3,ccia+14);DEVOUT(cons_cli[1,3])
                setcor(1)
                mcod_cli = cons_cli[1,2]
                mnome_cli = cons_cli[1,3]
                mend := cons_cli[1,21]+', '+RTRIM(cons_cli[1,136])+IF(! EMPTY(RTRIM(cons_cli[1,137])),' - Compl.:'+RTRIM(cons_cli[1,137]),'')
                mbairro := cons_cli[1,22]
                mcidade := cons_cli[1,24]
                muf := cons_cli[1,25]
                mcgc := cons_cli[1,32]
                mcpf := cons_cli[1,34]
                minsc := cons_cli[1,33]
                mlimite := cons_cli[1,44]
                cons_cli := {}
                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_cli) = 0
                        atencao('Cliente nao cadastrado !!!')
                        LOOP
                ENDIF
                IF mcod_cli <> m_set[1,84] .AND. ! limite(mcod_cli,mt_pedido,'*')
                        UNLOCK
                        LOOP
                ENDIF
                IF ! EMPTY(mdocum)
                        atencao('Existe estes documentos deste cliente: '+mdocum,9)
                ENDIF
        ENDIF
        setcor(3)
        DEVPOS(lcia+3,ccia+7);DEVOUTPICT(mcod_cli,'99999')
        DEVPOS(lcia+4,ccia+7);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(lcia+4,ccia+55);DEVOUTPICT(cons_cli[1,46],'999.99')
        DEVPOS(lcia+5,ccia+7);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(lcia+5,ccia+55);DEVOUTPICT(cons_cli[1,47],'9999')
        setcor(1)
        IF mcli_aux <> mcod_cli
                mlib_spc := ' '
                IF ! spc(mcod_cli,mt_pedido,,,)
                        LOOP
                ENDIF
        ENDIF
    ENDIF
        setcor(1)
        mjuros := mjuros_aux := mforma_pg := 0
        IF m_indiv[1,26] = 'N' .OR. ver_serie() = '141414'         // NAO AUTOCAIXA
                DEVPOS(lcia+7,ccia+1);DEVOUT('Forma de Pagamento:')
                IF SUBSTR(cons_cli[1,40],1,2) = '00' .OR. (EMPTY(VAL(mcons_tabpg)) .AND. ! EMPTY(mcod_cond))
                        SETCOLOR('W/B,B/W')
                        DEVPOS(lcia+7,ccia+20);DEVOUT('1> AVISTA')
                        setcor(1)
                        DEVPOS(lcia+7,ccia+34);DEVOUT('1> Aprazo')
                        mforma_pg := 1
                ELSEIF EMPTY(mprz)
                        setcor(10)
                        @ lcia+7,ccia+20 PROMPT '1> Avista'
                        @ lcia+7,ccia+34 PROMPT '2> Aprazo'
                        SET INTEN ON
                        MENU TO mforma_pg
                        setcor(1)
                ELSE
                        DEVPOS(lcia+7,ccia+20);DEVOUT('1> Avista')
                        SETCOLOR('W/B,B/W')
                        DEVPOS(lcia+7,ccia+34);DEVOUT('2> APRAZO')
                        setcor(1)
                        mforma_pg := 2
                ENDIF
                IF mtp_venda = 'AV' .AND. mtip = '*'
                        IF mforma_pg = 2
                                IF ! aut_sen('Forma de Pagamento estar Diferente da Emissao, Senha autorizacao:','FORMPAGPED',,mcod_cli)
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF

                DO CASE
                        CASE mforma_pg = 1
                                mtp_venda = 'AV'
                                modo_pg := 0
                                DEVPOS(lcia+8,ccia+1);DEVOUT('Modo de Pagamento:')
                                setcor(10)
                                @ lcia+8,ccia+20 PROMPT '1> Dinheiro'
                                @ lcia+8,ccia+34 PROMPT '2> Cheque'
                                SET INTEN ON
                                MENU TO modo_pg
                                setcor(1)
                                IF modo_pg = 1
                                        mtipo_pg := 'DN'
                                        mdinheiro := '*'
                                ELSEIF modo_pg = 2
                                        mtipo_pg := 'CH'
                                        mcheque := '*'
                                        IF ! spc(mcod_cli,mt_pedido,,,mlib_spc)
                                                UNLOCK
                                                LOOP
                                        ELSEIF ! limite(mcod_cli,mt_pedido)
                                                UNLOCK
                                                LOOP
                                        ENDIF
                                ENDIF
                        CASE mforma_pg = 2
                                IF ! spc(mcod_cli,mt_pedido,,,mlib_spc)
                                        UNLOCK
                                        LOOP
                                ELSEIF ! limite(mcod_cli,mt_pedido)
                                        UNLOCK
                                        LOOP
                                ENDIF
                                mtp_venda = 'AP'
                                modo_pg := 0
                                DEVPOS(lcia+8,ccia+1);DEVOUT('Modo de Pag.:')
                                setcor(10)
                                @ lcia+8,ccia+15 PROMPT '1> Cheque'
                                @ lcia+8,ccia+25 PROMPT '2> Cartao'
                                @ lcia+8,ccia+35 PROMPT '3> Duplicata'
                                @ lcia+8,ccia+48 PROMPT '4> Financiamento'
                                SET INTEN ON
                                MENU TO modo_pg
                                setcor(1)
                                DO CASE
                                        CASE modo_pg = 2
                                                mtipo_pg := 'CT'
                                                mcond_veze := '01 '
                                                mcond_int := ' '
                                                mcartao := '*'
                                                DEVPOS(lcia+9,ccia+1);DEVOUT('Condicoes de Pagamento: A PRAZO')
                                                DEVPOS(lcia+10,ccia+1);DEVOUT('Quatidade de vezes:')
                                                @ lcia+10,ccia+21 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.))
                                                READ
                                                IF m_dia[1] > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(m_dia[1],3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                        DBUNLOCK();LOOP
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,1,1)) = 1
                                                        DEVPOS(lcia+11,ccia+1);devout('Valor Entrada R$..:')
                                                        @ lcia+11,ccia+21 GET mvlr_ent PICT '99,999.99' VALID IF(EMPTY(mvlr_ent),.F.,.T.)
                                                        READ
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,2,2)) > 0
                                                        m_dia[1]:=IF(EMPTY(m_dia[1]),VAL(SUBSTR(cons_cli[1,40],1,2)),m_dia[1])
                                                        m_dia[2]:=IF(EMPTY(m_dia[2]),VAL(SUBSTR(cons_cli[1,40],3,2)),m_dia[2])
                                                        m_dia[3]:=IF(EMPTY(m_dia[3]),VAL(SUBSTR(cons_cli[1,40],5,2)),m_dia[3])
                                                        DEVPOS(lcia+10,ccia+25);DEVOUT('Para os Dias:')
                                                        @ lcia+10,ccia+39 GET m_dia[1] PICT '999' VALID ! EMPTY(m_dia[1])
                                                        @ lcia+10,ccia+43 GET m_dia[2] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 2 VALID ! EMPTY(m_dia[2])
                                                        @ lcia+10,ccia+47 GET m_dia[3] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 3 VALID ! EMPTY(m_dia[3])
                                                        @ lcia+10,ccia+51 GET m_dia[4] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 4 VALID ! EMPTY(m_dia[4])
                                                        @ lcia+10,ccia+55 GET m_dia[5] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 5 VALID ! EMPTY(m_dia[5])
                                                        @ lcia+10,ccia+59 GET m_dia[6] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 6 VALID ! EMPTY(m_dia[6])
                                                        @ lcia+10,ccia+63 GET m_dia[7] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 7 VALID ! EMPTY(m_dia[7])
                                                        @ lcia+11,ccia+39 GET m_dia[8] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 8 VALID ! EMPTY(m_dia[8])
                                                        @ lcia+11,ccia+43 GET m_dia[9] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 9 VALID ! EMPTY(m_dia[9])
                                                        @ lcia+11,ccia+47 GET m_dia[10] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 10 VALID ! EMPTY(m_dia[10])
                                                        @ lcia+11,ccia+51 GET m_dia[11] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 11 VALID ! EMPTY(m_dia[11])
                                                        @ lcia+11,ccia+55 GET m_dia[12] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 12 VALID ! EMPTY(m_dia[12])
                                                        @ lcia+11,ccia+59 GET m_dia[13] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 13 VALID ! EMPTY(m_dia[13])
                                                        @ lcia+11,ccia+63 GET m_dia[14] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 14 VALID ! EMPTY(m_dia[14])
                                                        @ lcia+12,ccia+39 GET m_dia[15] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 15 VALID ! EMPTY(m_dia[15])
                                                        READ
                                                ENDIF
                                        CASE modo_pg = 4
                                                mtipo_pg := 'FI'
                                                mfin := '*'
                                                mtipo_fin := SPACE(3)
                                                mcobra_fin := SPACE(1)
                                                mvlr_ent := maliq_fin := ;
                                                mcod_fin := mtaxa_fin := ;
                                                mvalor_aux := mvalor_pres := ;
                                                mvalor_fin := mtaxa_fin := 0
                                                DEVPOS(lcia+9,ccia+1);DEVOUT('Cod.do Financiamento..:')
                                                DEVPOS(lcia+10,ccia+1);devout('Tipo do Financiamento:')
                                                DEVPOS(lcia+10,ccia+32);DEVOUT('Aliquota:')
                                                DEVPOS(lcia+11,ccia+1);DEVOUT('Valor da Entrada.....:')
                                                DEVPOS(lcia+12,ccia+1);DEVOUT('Valor das prestacoes.:')
                                                DEVPOS(lcia+12,ccia+39);DEVOUT('Taxa R$:')
                                                @ lcia+9,ccia+25 GET mcod_fin PICT '999' VALID ver_finan(mcod_fin,lcia+9,ccia+29)
                                                @ lcia+10,ccia+25 GET mtipo_fin PICT '@R 9+99' VALID IF(LEN(ALLTRIM(mtipo_fin))<3,.F.,.T.) .AND. ver_aliq(mcod_fin,mtipo_fin)
                                                READ
                                                mcond_veze := mtipo_fin
                                                mcond_int  := '30'
                                                setcor(3)
                                                DEVPOS(lcia+10,ccia+42);DEVOUTPICT(maliq_fin,'99.999999')
                                                setcor(1)
                                                IF maliq_fin > 0
                                                        mvalor_pres := iat(((mt_pedido - (mt_pedido * mdesc)) + mtaxa_fin) * maliq_fin,2) + mtaxa_adm
                                                        IF VAL(SUBSTR(mtipo_fin,1,1)) > 0
                                                                mvlr_ent := mvalor_pres
                                                        ENDIF
                                                        @ lcia+11,ccia+28 GET mvlr_ent PICT '99,999.99' WHEN SUBSTR(mtipo_fin,1,1) = '1'              //.AND. men_get(lcia+12,ccia+21,'Valor da Entrada do Fiananciamento')  VALID lim_get()
                                                        READ
                                                        IF mvlr_ent <> mvalor_pres
                                                                mvalor_pres := mvalor_fin := ;
                                                                mvalor_aux := 0
                                                                mtipo_aux := '0'+SUBSTR(mtipo_fin,2,2)
                                                                IF ! ver_aliq(mcod_fin,mtipo_aux)
                                                                        LOOP
                                                                ENDIF
                                                                setcor(3)
                                                                DEVPOS(lcia+10,ccia+42);DEVOUTPICT(maliq_fin,'99.999999')
                                                                setcor(1)
                                                                mvalor_aux := (mt_pedido + mtaxa_fin) - mvlr_ent
                                                                mvalor_pres := iat(mvalor_aux * maliq_fin,2) + mtaxa_adm
                                                                mvalor_fin := (VAL(SUBSTR(mtipo_fin,2,2)) * mvalor_pres) + mvlr_ent
                                                        ELSE
*                                                               mvalor_aux := mt_pedido - mvlr_ent
*                                                               mvalor_pres := iat((mvalor_aux + mtaxa_fin) * maliq_fin,2)
                                                                mvalor_fin := (VAL(SUBSTR(mtipo_fin,1,1))+VAL(SUBSTR(mtipo_fin,2,2))) * mvalor_pres
                                                        ENDIF
                                                ELSE
                                                        @ lcia+11,ccia+28 GET mvlr_ent PICT '99,999.99' WHEN SUBSTR(mtipo_fin,1,1) = '1'              //.AND. men_get(lcia+12,ccia+21,'Valor da Entrada do Fiananciamento')  VALID lim_get()
                                                        @ lcia+12,ccia+28 GET mvalor_pres PICT '99,999.99'
                                                        READ
                                                        mvalor_fin := (VAL(SUBSTR(mtipo_fin,2,2)) * mvalor_pres) + mvlr_ent
                                                        IF mvalor_fin < mt_pedido
                                                                atencao('O Valor do financiamento estar menor que o Valor do Orcamento')
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                                IF mcobra_fin = 'S'
                                                        mjuros := (mvalor_fin/mt_pedido)
                                                        mt_pedido := mvalor_fin
                                                ELSE
                                                        mjuros := 1
                                                        mt_pedido := mvalor_fin
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lcia+10,ccia+42);DEVOUTPICT(mjuros,'99.999999')
                                                setcor(1)
                                                setcor(3)
                                                DEVPOS(lcia+12,ccia+25);DEVOUT(SUBSTR(mtipo_fin,2,2)+'X')
                                                DEVPOS(lcia+12,ccia+28);DEVOUTPICT(mvalor_pres,'99,999.99')
                                                DEVPOS(lcia+12,ccia+48);DEVOUTPICT(mtaxa_fin,'99,999.99')
                                                DEVPOS(lcia+12,COL()+1);DEVOUTPICT(mtaxa_adm,'99,999.99')
                                                setcor(1)
                                        CASE modo_pg = 1  .OR. modo_pg = 3
                                                IF modo_pg = 1
                                                        mtipo_pg := 'CH'
                                                        mcheque := '*'
                                                ELSEIF modo_pg = 3
                                                        mtipo_pg := 'DU'
                                                        mdup := '*'
                                                        mcart_ban := ' '
                                                        IF ver_serie() = '141410'
                                                                mcart_ban := mensagem1('Tipo de Duplicata:','C','C,B',,,'*')
                                                        ENDIF
                                                ENDIF
                                                IF ! EMPTY(cons_cli[1,60]) .OR. ! EMPTY(cons_cli[1,63])
                                                        IF VAL(SUBSTR(DTOC(mdata_sis),1,2)) >= VAL(cons_cli[1,60]) .AND. VAL(SUBSTR(DTOC(mdata_sis),1,2)) <= VAL(cons_cli[1,61])
                                                                mcond_int := STRZERO(CTOD(cons_cli[1,62]+SUBSTR(DTOC(mdata_sis),3)) - mdata_sis,2)
                                                                m_dia[1] := VAL(mcond_int)
                                                        ELSEIF VAL(SUBSTR(DTOC(mdata_sis),1,2)) >= VAL(cons_cli[1,63]) .AND. VAL(SUBSTR(DTOC(mdata_sis),1,2)) <= VAL(cons_cli[1,64])
*                                                               mcond_int := STRZERO(CTOD(cons_cli[1,65]+'/'+STRZERO(VAL(SUBSTR(DTOC(mdata_sis),4,2))+1,2)+'/'+IF(VAL(SUBSTR(DTOC(mdata_sis),7))=12,STRZERO(VAL(SUBSTR(DTOC(mdata_sis),7))+1,2),SUBSTR(DTOC(mdata_sis),7)))-mdata_sis,2)
                                                                mcond_int := STRZERO(CTOD(cons_cli[1,65]+'/';
                                                                +STRZERO(IF(VAL(SUBSTR(DTOC(mdata_sis),4,2))<12,VAL(SUBSTR(DTOC(mdata_sis),4,2))+1,1),2);
                                                                +'/';
                                                                +IF(VAL(SUBSTR(DTOC(mdata_sis),4,2))=12,STRZERO(IF(VAL(SUBSTR(DTOC(mdata_sis),7))=99,00,VAL(SUBSTR(DTOC(mdata_sis),7))+1),2),SUBSTR(DTOC(mdata_sis),7)))-mdata_sis,2)
                                                                m_dia[1] := VAL(mcond_int)
                                                        ENDIF
                                                ENDIF
                                                DEVPOS(lcia+9,ccia+1);DEVOUT('Condicoes de Pagamento: A PRAZO')
                                                DEVPOS(lcia+10,ccia+1);DEVOUT('Quatidade de vezes:')
                                                IF ver_serie() = '141410'
                                                        @ lcia+10,ccia+21 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.))
                                                ELSE
                                                        @ lcia+10,ccia+21 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.)) WHEN EMPTY(mcod_cond)
                                                ENDIF
                                                READ
                                                IF EMPTY(mcod_cond) .AND. m_dia[1] > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(m_dia[1],3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                        DBUNLOCK();LOOP
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,1,1)) = 1
                                                        DEVPOS(lcia+11,ccia+1);devout('Valor Entrada R$..:')
                                                        @ lcia+11,ccia+21 GET mvlr_ent PICT '99,999.99' VALID IF(EMPTY(mvlr_ent),.F.,.T.)
                                                        READ
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,2,2)) > 0
                                                        m_dia[1]:=IF(EMPTY(m_dia[1]),VAL(SUBSTR(cons_cli[1,40],1,2)),m_dia[1])
                                                        m_dia[2]:=IF(EMPTY(m_dia[2]),VAL(SUBSTR(cons_cli[1,40],3,2)),m_dia[2])
                                                        m_dia[3]:=IF(EMPTY(m_dia[3]),VAL(SUBSTR(cons_cli[1,40],5,2)),m_dia[3])
                                                        DEVPOS(lcia+10,ccia+25);DEVOUT('Para os Dias:')
                                                        @ lcia+10,ccia+39 GET m_dia[1] PICT '999' VALID ! EMPTY(m_dia[1]) .AND. vencim((mdata_sis+m_dia[1]))
                                                        @ lcia+10,ccia+43 GET m_dia[2] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 2 VALID ! EMPTY(m_dia[2])
                                                        @ lcia+10,ccia+47 GET m_dia[3] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 3 VALID ! EMPTY(m_dia[3])
                                                        @ lcia+10,ccia+51 GET m_dia[4] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 4 VALID ! EMPTY(m_dia[4])
                                                        @ lcia+10,ccia+55 GET m_dia[5] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 5 VALID ! EMPTY(m_dia[5])
                                                        @ lcia+10,ccia+59 GET m_dia[6] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 6 VALID ! EMPTY(m_dia[6])
                                                        @ lcia+10,ccia+63 GET m_dia[7] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 7 VALID ! EMPTY(m_dia[7])
                                                        @ lcia+11,ccia+39 GET m_dia[8] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 8 VALID ! EMPTY(m_dia[8])
                                                        @ lcia+11,ccia+43 GET m_dia[9] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 9 VALID ! EMPTY(m_dia[9])
                                                        @ lcia+11,ccia+47 GET m_dia[10] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 10 VALID ! EMPTY(m_dia[10])
                                                        @ lcia+11,ccia+51 GET m_dia[11] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 11 VALID ! EMPTY(m_dia[11])
                                                        @ lcia+11,ccia+55 GET m_dia[12] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 12 VALID ! EMPTY(m_dia[12])
                                                        @ lcia+11,ccia+59 GET m_dia[13] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 13 VALID ! EMPTY(m_dia[13])
                                                        @ lcia+11,ccia+63 GET m_dia[14] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 14 VALID ! EMPTY(m_dia[14])
                                                        @ lcia+12,ccia+39 GET m_dia[15] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 15 VALID ! EMPTY(m_dia[15])
                                                        READ
                                                ENDIF
                                ENDCASE
                                IF LASTKEY() = 27;LOOP;ENDIF
                ENDCASE
                IF LASTKEY() = 27;LOOP;ENDIF
                IF ((mtp_venda = 'AV' .OR. m_set[1,35] = 'S' .OR. malteracao = 1) .AND. m_set[1,105] = 'S' .AND. mdesc_alt = 0 .AND. m_set[1,125] <> 'S') .OR. (mtipo_pg = 'FI' .AND. ver_serie() = '141416')    // .AND. mtipo_pg <> 'FI'
                        mop_desc := ' '
			DEVPOS(lcia+13,ccia+1);DEVOUT('Desconto [1] (%)  [2] (R$):')
			@ lcia+13,COL()+1 GET mop_desc VALID mop_desc $ '1,2, '
                        READ
                        IF mop_desc = '1'
                                SETCOLOR('i*')
                                DEVPOS(lcia+13,ccia+10);DEVOUT('[1] (%)')
                                setcor(1)
                                @ lcia+13,ccia+29 GET mdesc PICT ALLTRIM(m_set[1,98])
                                READ
                                IF mdesc > m_set[1,33] .AND. ! aut_sen('Desconto a maior.. senha de autorizacao:','LIB_DESC',,mcod_cli)
                                        LOOP
                                ENDIF
                                mdesc := mdesc/100
                                mvlr_desc := mt_pedido * mdesc
                                mt_pedido := mt_pedido - (mt_pedido * mdesc)
                        ELSEIF mop_desc = '2'
                                SETCOLOR('i*')
                                DEVPOS(lcia+13,ccia+19);DEVOUT('[2] (R$)')
                                setcor(1)
                                @ lcia+13,ccia+29 GET mdesc PICT ALLTRIM(m_set[1,98])
                                READ
                                mvlr_desc := mdesc
                                mdesc := (mdesc/mt_pedido)
                                IF mdesc*100 > m_set[1,33] .AND. ! aut_sen('Desconto a maior.. senha de autorizacao:','LIB_DESC',,mcod_cli)
                                        LOOP
                                ENDIF
                                mt_pedido := mt_pedido - (mt_pedido * mdesc)
                        ELSE
                                SETCOLOR('i*')
                                DEVPOS(lcia+13,ccia+29);DEVOUT('Nenhum Desconto')
                                setcor(1)
                                mdesc := 0
                        ENDIF
                        setcor(3)
                        DEVPOS(lcia+18,ccia+01);DEVOUT('Desconto R$:')
                        setcor(1)
                        DEVPOS(lcia+18,ccia+14);DEVOUT(TRANSFORM(mvlr_desc,'999,999,999.99'))
                        setcor(3)
                ENDIF
                IF LASTKEY() = 27
                        LOOP
                ENDIF

        ELSE
                IF ! EMPTY(mprz)
                        mtp_venda = 'AP'
                        modo_pg := mforma_pg := 2
                        DEVPOS(lcia+8,ccia+1);DEVOUT('Modo de Pagamento:')
                        setcor(3)
                        DEVPOS(lcia+7,ccia+22);DEVOUT('2> Aprazo')
                        setcor(1)
                        mtipo_pg := 'DU'
                        mdup := '*'
                        m_dia[1] := mprz
                ELSE
                        mtp_venda = 'AV'
                        modo_pg := mforma_pg := 1
                        DEVPOS(lcia+8,ccia+1);DEVOUT('Modo de Pagamento:')
                        setcor(3)
                        DEVPOS(lcia+7,ccia+22);DEVOUT('1> Avista')
                        setcor(1)
                        mtipo_pg := 'DN'
                        mdinheiro := '*'
                ENDIF
        ENDIF           // autocaixa
        @ lcia+17,ccia+1 TO lcia+17,cbaa-1
        DEVPOS(lcia+18,ccia+30);DEVOUT('TOTAL Orcamento:')
        setcor(1)
        DEVPOS(lcia+18,ccia+48);DEVOUT(TRANSFORM(mt_pedido,'999,999,999.99'))
        mopcao := op_simnao('S','Confirma Fechamento do Orcamento [S/n]:')
        IF mopcao = 'N'
                SET KEY -8 TO
                EXIT
        ELSEIF mopcao = 'S'
                i:=0
                FOR i = 1 TO LEN(m_codigo)
                        IF EMPTY(m_codigo[i]) .OR. m_codigo[i] = NIL
                                LOOP
                        ENDIF
                        IF m_matriz[i,2] < m_matriz[i,8]
                                mvlr_desc := mvlr_desc + (m_matriz[i,1] * (m_matriz[i,8] - m_matriz[i,2]))
                        ENDIF
                NEXT
                IF mtip = '1' .OR. mtip = 'SAC23ORC'
                        mensagem('Aguarde um momento Gerando NUMERO para o Orcamento....')
                        //sr_starttrace()
                        lExit := .T.
                        while lExit
                                sr_begintransaction()
                                try
                                aret:={}
                                sr_getconnection():exec( "select numero from  sacnoorc where sr_recno = 1 for update with lock",,.t.,@aret)
                                if len(aRet)  = 0
                                        sr_getconnection():exec("insert into sacnoorc (numero,sr_deleted,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ',1)",,.f.)
                                        mnum_ped = 1
                                else
                                        mnum_ped = VAL(aret[1,1])+1
                                        mnum = strzero(VAL(aret[1,1])+1,6)
                                        sr_getconnection():exec("update sacnoorc set numero = " + sr_cdbvalue(mnum) + ", data_ped = " + sr_cdbvalue( mdata_sis) + " where sr_recno = 1 ",,.f.)
                                endif
                                sr_committransaction()
                                lExit:=.F.
                                catch e
                                tracelog(valtoprg())
                                sr_COMMITtransaction()

                        END
                        sr_endtransaction()
                        END
                        IF mjuros = 0;mjuros := 1;ENDIF
                        IF ver_ven(mcod_ven)
                                mnome_ven := sen->snome
                        ENDIF

                        mcont_item := 0
                        i := 0
                        mcampo_arq := 'pempresa,'   ;//1
                                      +'pnum_ped,'  ;//2
                                      +'ptermina,'  ;//3
                                      +'pdat_ped,'  ;//4
                                      +'pgru_sub,'  ;//5
                                      +'pcod_merc,' ;//6
                                      +'pmerc,'     ;//7
                                      +'punidade,'  ;//8
                                      +'pespecie,'  ;//9
                                      +'penvelope,' ;//10
                                      +'ppeso,'     ;//11
                                      +'ppeso_liq,' ;//12
                                      +'pgramatura,';//13
                                      +'pquantd,'   ;//14
                                      +'ppacote,'   ;//15
                                      +'ppecas,'    ;//16
                                      +'ppre_dig,'  ;//17
                                      +'pdesc,'     ;//18
                                      +'pvlr_fat,'  ;//19
                                      +'ppre_venda,';//20
                                      +'ppr_venda1,';//21
                                      +'pcust_real,';//22
                                      +'pcust_merc,';//23
                                      +'pcod_cli,'  ;//24
                                      +'pcgc,'      ;//25
                                      +'pcpf,'      ;//26
                                      +'pplaca,'    ;//27
                                      +'pcarro,'    ;//28
                                      +'pmodelo,'   ;//29
                                      +'pkm,'       ;//30
                                      +'pcod_fab,'  ;//31
                                      +'pfabrica,'  ;//32
                                      +'pcod_oper,' ;//33
                                      +'pcomi_oper,';//34
                                      +'pcod_vend,' ;//35
                                      +'pvendedor,' ;//36
                                      +'palimento ,';//37
                                      +'pcod_fin  ,';//38
                                      +'pcod_tab  ,';//39
                                      +'pvlr_pres ,';//40
                                      +'pcond_veze,';//41
                                      +'pcond_inte,';//42
                                      +'phora     ,';//43
                                      +'ptp_vend  ,';//44
                                      +'pvlr_ent  ,';//45
                                      +'pisento   ,';//46
                                      +'ppromocao ,';//47
                                      +'pmontador ,';//48
                                      +'pmontador1,';//49
                                      +'pcomissao ,';//50
                                      +'pcom_mont ,';//51
                                      +'pprazo    ,';//52
                                      +'pbebida   ,';//53
                                      +'pipi      ,';//54
                                      +'pobs_prod ,';//55
                                      +'pind_icms ,';//56
                                      +'pstat_item,';//57
                                      +'psit_trib ,';//58
                                      +'pobs1,'     ;//59
                                      +'pobs2,'     ;//60
                                      +'pobs3,'     ;//61
                                      +'pobs4,'     ;//62
                                      +'pobs5,'     ;//62
                                      +'pobs6,'     ;//62
                                      +'pobs7,'     ;//62
                                      +'pobs8,'     ;//62
                                      +'plocal,'    ;//63
                                      +'chassis,'   ;//64
                                      +'descri1,'   ;//65
                                      +'descri2,'   ;//66
                                      +'descri3,'   ;//67
                                      +'descri4,'   ;//68
                                      +'descri5,'   ;//69
                                      +'pproducao,' ;//70
                                      +'pcod_tran,' ;//71
                                      +'pos,'       ;//72
                                      +'cod_pres,'  ;//73
                                      +'pd_entrega,';//74
                                      +'pdesc_merc,';//75
                                      +'pfecha'      //76
                        FOR i = 1 TO LEN(m_codigo)
                                IF EMPTY(m_codigo[i]) .OR. m_codigo[i] = NIL
                                        LOOP
                                ENDIF
                                mensagem('Aguarde um momento Atualizando o Arquivo de Orcamento... Codigo da Mercadoria: '+m_codigo[i])
		                cons_merc := {}
		                cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[i])
		                sr_getconnection():exec(ccomm,,.t.,@cons_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
		                IF LEN(cons_merc) = 0
		                	LOOP
		              	ENDIF
                                mvlr_fat := m_matriz[i,2]
                                IF EMPTY(m_matriz[i,14])
                                        mdesc_aux := mdesc
        	                        IF m_matriz[i,2] < m_matriz[i,8]
                	                        IF ! EMPTY(cons_merc[1,76]) .AND. mdesc > cons_merc[1,76]/100 .AND. (ver_serie() = '141220' .OR. ver_serie() = '141350' .OR. ver_serie()='141384')
                        	                        mdesc_aux := cons_merc[1,76]/100
                                	        ENDIF
                                        	m_matriz[i,2] := m_matriz[i,8] - (m_matriz[i,8] * (mdesc_aux + (m_matriz[i,3]/100)))
	                                ELSE
        	                                IF ! EMPTY(cons_merc[1,76]) .AND. mdesc > cons_merc[1,76]/100 .AND. (ver_serie() = '141220' .OR. ver_serie() = '141350' .OR. ver_serie()='141384')
                	                                mdesc_aux := cons_merc[1,76]/100
                                        ENDIF
                        	                m_matriz[i,2] := m_matriz[i,2] - (m_matriz[i,2] * mdesc_aux)
                                	ENDIF
	 			ENDIF			                                	
                                cComm  := 'INSERT INTO sacorcam ('+mcampo_arq+',sr_deleted) VALUES ('
                                cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                                sr_cdbvalue(STRZERO(mnum_ped,6))+','+;//2
                                sr_cdbvalue(SUBSTR(NETNAME(),1,10))+','+;//3
                                sr_cdbvalue(mdata_sis)+','+;//4
                                sr_cdbvalue(m_matriz[i,4]           )+','+;//5
                                sr_cdbvalue(m_codigo[i]             )+','+;//6
                                sr_cdbvalue(m_matriz[i,5]           )+','+;//7
                                sr_cdbvalue(m_matriz[i,6]           )+','+;//8
                                sr_cdbvalue(m_matriz[i,23]          )+','+;//9
                                sr_cdbvalue(IF(! EMPTY(mplaca),mplaca,m_matriz[i,24]))+','+;//10
                                sr_cdbvalue(m_matriz[i,7]           )+','+;//11
                                sr_cdbvalue(m_matriz[i,17]          )+','+;//12
                                sr_cdbvalue(m_matriz[i,35]          )+','+;//13
                                sr_cdbvalue(m_matriz[i,1]           )+','+;//14
                                sr_cdbvalue(m_matriz[i,42]          )+','+;//15
                                sr_cdbvalue(m_matriz[i,43]          )+','+;//16
                                sr_cdbvalue(mvlr_fat                )+','+;//17
                                sr_cdbvalue(IF(m_matriz[i,2] < m_matriz[i,8],m_matriz[i,3] + (mdesc_aux * 100),pdesc := mdesc_aux * 100))+','+;//18
                                sr_cdbvalue(m_matriz[i,2]         )+','+;//19
                                sr_cdbvalue(m_matriz[i,8]       )+','+;//20
                                sr_cdbvalue(m_matriz[i,40])+','+;                            //21
                                sr_cdbvalue(m_matriz[i,9])+','+;                             //22
                                sr_cdbvalue(m_matriz[i,18])+','+;                            //23
                                sr_cdbvalue(mcod_cli)+','+;                       //24
                                sr_cdbvalue(mcgc)+','+;                                      //25
                                sr_cdbvalue(mcpf)+','+;                                      //26
                                sr_cdbvalue(mplaca)+','+;                                    //27
                                sr_cdbvalue(mcarro)+','+;                                    //28
                                sr_cdbvalue(mmodelo)+','+;                                   //29
                                sr_cdbvalue(mkm)+','+;                                       //30
                                sr_cdbvalue(m_matriz[i,10])+','+;                            //31
                                sr_cdbvalue(LEFT(m_matriz[i,11],30))+','+;                   //32
                                sr_cdbvalue(cod_operado)+','+;                               //33
                                sr_cdbvalue(mcom_oper)+','+;                                 //34
                                sr_cdbvalue(IF(magrupar > 1,mcod_ven,m_pedido[1,9]))+','+;  //35
                                sr_cdbvalue(IF(magrupar > 1,mnome_ven,m_pedido[1,10]))+','+; //36
                                sr_cdbvalue(m_matriz[i,12])+','+;                            //37
                                sr_cdbvalue(STRZERO(mcod_fin,3))+','+;                       //38
                                sr_cdbvalue(STRZERO(mcod_cond,3))+','+;                      //39
                                sr_cdbvalue(mvalor_pres)+','+;                               //40
                                sr_cdbvalue(mcond_veze)+','+;                                //41
                                sr_cdbvalue(IF(! EMPTY(mcond_int),mtipo_pg+STRZERO(VAL(mcond_int),3),mtipo_pg+STRZERO(m_dia[1],3)+STRZERO(m_dia[2],3)+STRZERO(m_dia[3],3)+STRZERO(m_dia[4],3)+STRZERO(m_dia[5],3)+STRZERO(m_dia[6],3)+STRZERO(m_dia[7],3)+STRZERO(m_dia[8],3)+STRZERO(m_dia[9],3)+STRZERO(m_dia[10],3)+STRZERO(m_dia[11],3)+STRZERO(m_dia[12],3)+STRZERO(m_dia[13],3)+STRZERO(m_dia[14],3)+STRZERO(m_dia[15],3)))+','+;//42
                                sr_cdbvalue(m_matriz[i,25])+','+;             //43
                                sr_cdbvalue(mtp_venda)+','+;                  //44
                                sr_cdbvalue(mvlr_ent)+','+;                   //45
                                sr_cdbvalue(m_matriz[i,13])+','+;             //46
                                sr_cdbvalue(m_matriz[i,14])+','+;             //47
                                sr_cdbvalue(STRZERO(m_matriz[i,37],3))+','+;  //48
                                sr_cdbvalue(STRZERO(m_matriz[i,38],3))+','+;  //49
                                sr_cdbvalue(m_matriz[i,15])+','+;             //50
                                sr_cdbvalue(m_matriz[i,39])+','+;             //51
                                sr_cdbvalue(m_matriz[i,34])+','+;             //52
                                sr_cdbvalue(m_matriz[i,16])+','+;             //53
                                sr_cdbvalue(m_matriz[i,22])+','+;             //54
                                sr_cdbvalue(m_matriz[i,36])+','+;             //55
                                sr_cdbvalue(m_matriz[i,26])+','+;             //56
                                sr_cdbvalue(mtelemark)+','+;                  //57
                                sr_cdbvalue(m_matriz[i,27])+','+;             //58
                                sr_cdbvalue(mobs1)+','+;                      //59
                                sr_cdbvalue(mobs2)+','+;                      //60
                                sr_cdbvalue(mobs3)+','+;                      //61
                                sr_cdbvalue(mobs4)+','+;                      //62
                                sr_cdbvalue(mobs5)+','+;                      //62
                                sr_cdbvalue(mobs6)+','+;                      //62
                                sr_cdbvalue(mobs7)+','+;                      //62
                                sr_cdbvalue(mobs8)+','+;                      //62
                                sr_cdbvalue(SUBSTR(m_matriz[i,21],1,2))+','+; //63
                                sr_cdbvalue(m_matriz[i,28])+','+;             //64
                                sr_cdbvalue(m_matriz[i,29])+','+;             //65
                                sr_cdbvalue(m_matriz[i,30])+','+;             //66
                                sr_cdbvalue(m_matriz[i,31])+','+;             //67
                                sr_cdbvalue(m_matriz[i,32])+','+;             //68
                                sr_cdbvalue(m_matriz[i,33])+','+;             //69
                                sr_cdbvalue(mproducao)+','+;                  //70
                                sr_cdbvalue(mcod_tran)+','+;                  //71
                                sr_cdbvalue(mnum_os)+','+;         //72
                                sr_cdbvalue(STRZERO(m_matriz[i,44],5))+','+;  //73
                                IF(! EMPTY(mpd_entrega),sr_cdbvalue(mpd_entrega),'NULL')+','+; //74
                                sr_cdbvalue(mvlr_desc)+','+;                  //71
                                sr_cdbvalue('F')+','+;                        //75
                                sr_cdbvalue(' ')+')'
                                sr_getconnection():exec(ccomm,,.f.)
                                m_codigo[i] = '     '
*                               IF magrupar > 1
*                                       m_merc[i] = SPACE(40)
*                               ENDIF
                                m_matriz[i,1] := m_matriz[i,2] := m_matriz[i,3] = 0
                                sr_getconnection():exec("COMMIT",,.f.)
                        NEXT
                        lExit := .T.
                	while lExit
                                sr_begintransaction()
                                try
                                sr_getconnection():exec("UPDATE saccli SET ult_orc="+sr_cdbvalue(mdata_sis)+" WHERE  cod_cli = "+sr_cdbvalue(mcod_cli),,.f.)
                                sr_committransaction()
                                lExit:=.F.
                        	catch e
                                tracelog(valtoprg())
                                sr_COMMITtransaction()
                	end
                        sr_endtransaction()
                        end
                        sr_getconnection():exec("COMMIT",,.f.)
*                       ASIZE(m_merc,0)
                        //op_tela(02,10,08,89,,'1','1')
                        //op_tela(02,10,08,110,,'1')
                        //SUB_BANNER(01,01,'ORCAMENTO:'+STRZERO(mnum_ped,6))
                        //DEVPOS(13,01);DEVOUT(PADC('Pressione qualquer tecla p/continuar',78))
                        //setcor(1)
                        //atencao('Foi Gerada o Numero do ORCAMENTO: '+STRZERO(mnum_ped,6))
                        //wvw_lclosewindow()
                ELSE
                        cons_ped := {}
                        cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        FOR i = 1 TO LEN(cons_ped)
                                ccomm := 'UPDATE sacorcam SET pcod_cli = '+sr_cdbvalue(mcod_cli)
                                IF mdesc_alt = 0
                                        ccomm := ccomm + ',ppre_dig = '+sr_cdbvalue(cons_ped[i,17] - (cons_ped[i,17] * mdesc))
                                        ccomm := ccomm + ',pdesc = '+sr_cdbvalue(mdesc * 100)
                                ENDIF
                                ccomm := ccomm + ',pvlr_fat = '+sr_cdbvalue(iat(cons_ped[i,18] - (cons_ped[i,18] * mdesc),2))
                                ccomm := ccomm + ',pobs1 = '+sr_cdbvalue(mobs1)
                                ccomm := ccomm + ',pobs2 = '+sr_cdbvalue(mobs2)
                                ccomm := ccomm + ',pobs3 = '+sr_cdbvalue(mobs3)
                                ccomm := ccomm + ',pobs4 = '+sr_cdbvalue(mobs4)
                                ccomm := ccomm + ',pobs5 = '+sr_cdbvalue(mobs5)
                                ccomm := ccomm + ',pobs6 = '+sr_cdbvalue(mobs6)
                                ccomm := ccomm + ',pobs7 = '+sr_cdbvalue(mobs7)
                                ccomm := ccomm + ',pobs8 = '+sr_cdbvalue(mobs8)
                                ccomm := ccomm + ',pcond_veze = '+sr_cdbvalue(mcond_veze)
                                ccomm := ccomm + ',pcond_inte = '+IF(! EMPTY(mcond_int),sr_cdbvalue(mtipo_pg+STRZERO(VAL(mcond_int),3)),sr_cdbvalue(mtipo_pg+STRZERO(m_dia[1],3)+STRZERO(m_dia[2],3)+STRZERO(m_dia[3],3)+STRZERO(m_dia[4],3)+STRZERO(m_dia[5],3)+STRZERO(m_dia[6],3)+STRZERO(m_dia[7],3)+STRZERO(m_dia[8],3)+STRZERO(m_dia[9],3)+STRZERO(m_dia[10],3)+STRZERO(m_dia[11],3)+STRZERO(m_dia[12],3)+STRZERO(m_dia[13],3)+STRZERO(m_dia[14],3)+STRZERO(m_dia[15],3)))
                                ccomm := ccomm + ',ptp_vend   = '+sr_cdbvalue(mtp_venda)
                                ccomm := ccomm + ',pdesc_merc   = '+sr_cdbvalue(mvlr_desc)
                                ccomm := ccomm + " WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(cons_ped[i,6])
                                sr_getconnection():exec(ccomm,,.f.)
                        NEXT
                        sr_getconnection():exec("COMMIT",,.f.)
                ENDIF
                MYRUN('DEL SACROT.DBF')
                cons_ped := {}
                cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                mtot_itens := 0
                mcondicao := cons_ped[1,43]
                IF VAL(SUBSTR(mcond_veze,2,2)) = 1
                        mprazo := SUBSTR(cons_ped[1,44],3,3)
                ELSE
                        mprazo := STRZERO(m_dia[1],3)
                ENDIF
                mdata := cons_ped[1,4]
                mhora := cons_ped[1,47]
                m_matriz:={}
                m_codigo:={}
                m_Cbarra:={}
                m_alt:={}
                SET KEY 28 TO menu_cons()
                IF ver_serie() = '141302' .AND. SUBSTR(mvia,1,6) = '2a.via'
                        boleto()
                        mflag := 0
                ELSE
                        IF (ali = 'orcam' .AND. m_indiv[1,14] = 'B') .OR. m_indiv[1,9] = 'B'
                                boleto()
                                mflag := 0
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'L') .OR. m_indiv[1,9] = 'L'
                                boleto('*')
                                mflag := 0
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'T') .OR. m_indiv[1,9] = 'T'
                                bole_term()
                                mflag := 0
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'F') .OR. m_indiv[1,9] = 'F'
                                formula()
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'F1') .OR. m_indiv[1,9] = 'F1'
                                formula()
                        ENDIF
                ENDIF
                mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := mobs7 := mobs8 := SPACE(39)
                mt_pedido := 0
                CLEAR GETS
                **********
                SELE('merc');ORDSETFOCUS(1)
                **********
                mflag := 0
                CLEAR GETS
                SET KEY -8 TO
                i:=0
                FOR i = 1 TO 15
                        m_dia[i] := m_vlr[i] := 0
                NEXT
                EXIT
        ENDIF
ENDDO
SET KEY -8 TO
SET KEY 28 TO menu_cons()
wvw_lclosewindow()
RETURN NIL


