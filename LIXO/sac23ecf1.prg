#include "sqlrdd.ch"
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"
//#include "EasyTEF.ch"
#include "ecf.ch"
********************************
* SOLICITAR PEDIDO ECF
*******************************
MEMVAR mtip_term,nivel_acess,cod_operado,getlist,inicio_protocolo,fim_protocolo_driver,;
       prepara_string,tamanho_de_retorno,mdata_sis,string_devolvida

FUNCTION sac23ecf1(m_mtr,msc)        // CODIGO DE BARRA
*****************************
LOCAL MPRG:="SAC23ECF1",;
      mp_venda,msele,morde,mcont,f,mvar,mtelap,mtot_ipi,mperc,mtelaobs,;
      mdocum,mcomissao := 0,mqtd,mpreco:=0,mvlr_aliq:='  ',mtot_,qtd:=0,nBota,;
      m_data:={},mvalor_aliq:=0

PRIVATE nErr, nPos,cComm, apCode,m_param:={},aret:={},mcons_ped := {},cons_merc:={},mecf_cpf:='',mnum_pv:=0,;
        m_matriz:={},m_codigo:={},m_merc:={},m_Cbarra:={},i,opcao,;
        mcod_merc,mquantd:=1,mdesconto:=0,mvlr_fat,mtot_ped,mmerc,mpr_venda,;
        li,lb,cb,mnome_ven,lci,lba,cba,tela,mautoriz,mlibera,;
        mcod_bc,mcont_item,mobs1,mobs2,mobs3,orcamento,sovenda,mvarejo,tela_ant,f4,;
        mprz,mnum_ped:=0,menvelope,mcod_cli:=0,mnome_cli,mponto,m_flag,ali,no,mcod_vend:=1,;
        msubtotal,mtot_custo:=0,mcod_aux,mproducao,mdocumento:=SPACE(8),mnum_ecf:=SPACE(8),mtot_nota:=0,;
        mabrir_cp:="",mretorno:=" ",mnum_aux:="",cnumpdv:=" ",cnumcupom:=" ",;
        cont_itens:=0,mcod_fab,mfabrica,mdesc_cart,mobs_prod:=SPACE(40),mobs_prod1:=SPACE(40),mcod_cond:=0,mpago:=' ',;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,msld_aux:=' ',mcond_veze:=SPACE(3),mprz,m_dia[15],m_vlr[15],;
        mcons_tabpg,mtipo_preco,mcomi_tab,cons_cli:={},;
        mvalor_trans := ' ',mnome_rede := ' ',mnum_transacao := ' ',mfinal_transacao := ' ',mtot_bruto:=0,mtot_desc:=0,;
        mcliente := SPACE(40),mcpf := SPACE(11),mcgc := SPACE(14),minsc := SPACE(14),mnum_item:=0,mnum_ccf:='',;
        mtot_imposto:=0,msem_cx := 0

SET KEY -4 TO f5_qtd()                    // INFORMA QUANTIDADE PRODUTO NO PRG SACROT
SET KEY -2 TO C_PROD()                    // CONSULTAR PRODUTO F3
SET KEY -1 TO abrir_gaveta()
*SET KEY -6 TO canultitem()                 // CANCELA ULTIMO ITEM VENDIDO F7
SET KEY -7 TO can_item()                 // CANCELA ITEM VENDIDO GENERICO F8
SET KEY -9 TO fecha_ecf1("1")             // neste mesmo PRG. <F10>Tecla
//SET KEY 274 TO sac23ecf2()             // neste mesmo PRG. <ALT + E>Tecla
SET KEY -40 TO f7_cli("*")             // CADASTRO DE CLIENTES <F11>tecla
//SET KEY 274 TO sem_cx()             // neste mesmo PRG. <ALT + E>Tecla
*---------------------------------------------
mtip_term := m_cfg[2]
IF ! AbriArq("insopera","sen");RETURN NIL;ENDIF
IF ! AbriArq("sacmerc","merc");RETURN NIL;ENDIF
IF ! AbriArq("sactabme","tabme");RETURN NIL;ENDIF
IF ! AbriArq("sacdolar","dolar");RETURN NIL;ENDIF
IF ! AbriArq("saccep","cep");RETURN NIL;ENDIF
IF ! AbriArq("regiao","reg");RETURN NIL;ENDIF
*---------------------------------------------
setcor(1)
lci:=15
cba:=120
lba:=49
m_flag := 0

IF msc # NIL
        msem_cx := 1
        IF ! ver_nivel(mprg,'VENDA ECF COM ALT+E','125',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ENDIF
/*
m_data:={}
sr_getconnection():exec("SELECT MAX(data_mov) FROM r6",,.t.,@m_data)
IF LEN(m_data) = 0 .OR. m_data[1,1] < mdata_sis
        atencao('Nao foi aberto o caixa por isso nao pode emitir o cupom')
        RETURN
ENDIF
*/
* ERRO DO SISTEMA**********
m_set:={}
sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
m_set[1,123] := DCRIPTO(SUBSTR(m_set[1,123],1,14))+DCRIPTO(SUBSTR(m_set[1,123],15,6))

IF ! EMPTY(m_set[1,82]) .AND. (DATE() >= CTOD(SUBSTR(m_set[1,82],1,2)+'/'+SUBSTR(m_set[1,82],3,2)+'/'+SUBSTR(m_set[1,82],5,2));
                .OR. SUBSTR(m_set[1,82],12,1) = '*')
        erro()
ENDIF
********************
IF AT('.',m_set[1,97]) > 0
        qtd := LEN(SUBSTR(m_set[1,97],AT('.',m_set[1,97])+1))
ENDIF
WHILE .T.
        IF !Veri_Transacao()
                RETURN(.f.)
        ENDIF
        exibi_prg(mprg)
        //mpago:=' '
        IF m_flag = 0
                op_tela(00,01,31,110,mversao+'  -   A B E R T U R A   D O   C U P O M ',,1)
                lim_get()
                botao(0,0,5,99)
                //botao(01,01,12,101)
		//WVW_DrawImage( ,00,00,31,109,ALLTRIM(m_indiv[1,3])+'HTItl.jpg',.F.,.F.)


                IF msem_cx = 1
                        SUB_BANNER(01,12,'TERMINAL LIVRE',1)
                ELSE
                        SUB_BANNER(01,12,'TERMINAL LIVRE')
                ENDIF
                IF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                        botao(08,21,18,73)
        	       WVW_DrawImage( ,08,21,18,73,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF
                IF m_set[1,80] = "S"
                        IF ! alt_sen("1",1)
                                wvw_lclosewindow()
                                SET KEY -9 TO
                                RELEASE ALL
                                RETURN NIL
                        ENDIF
                        mnome_ven := SPACE(30)
                        ver_ven(cod_operado)
                        mnome_ven := sen->snome
                ELSE
                        ver_ven(cod_operado)
                        mnome_ven := sen->snome
                        atencao(" Operador:"+cod_operado+"-"+RTRIM(mnome_ven),1)
                ENDIF
                mproducao := mabrir_cp := " "
                mcod_vend := VAL(cod_operado)
                mtot_custo := m_flag := msubtotal := mtot_ipi  := mcod_cli := mnum_ped := mnum_pv := mtot_bruto := 0
                //IF msld <> NIL
                //        msld_aux := msld
                //ENDIF
                mnome_ven := SPACE(30)
                // VENDAS A VAREJO OU ATACADO
                mvarejo := 1
                // PERCENTUAL DE DESCONTO ANTES DO PEDIDO
                mautoriz := SPACE(3)
                ASIZE(m_merc,0)
                ASIZE(m_matriz,0)
                ASIZE(m_codigo,0)
                ASIZE(m_Cbarra,0)
                IF m_set[1,5] = "S"
                        mvarejo := 1
                        op_tela(15,24,17,56," Tipo de Venda ")
                        @ 01,01 PROMPT " Venda Normal " 
                        @ 01,15 PROMPT " Venda Especial "
                        SET INTEN ON
                        MENU TO mvarejo
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                wvw_lclosewindow()
                                SET KEY -9 TO
                                RETURN NIL
                        ENDIF
                ENDIF
                IF m_set[1,46] = 'S'
                        mcond_veze := '00 '
                        i:=0
                        FOR i = 1 TO 15
                                m_dia[i]:=m_vlr[i]:=0
                        NEXT
                        op_tela(20,20,26,89,' CONDICOES DE PAGAMENTO ')
                        WHILE .T.
                                mensagem('Escolha a condicao de pagamento...')
                                DEVPOS(01,00);DEVOUT('Codigo Condicao Pagto:')
                                DEVPOS(02,00);DEVOUT('Condicao de Pagamento:')
                                DEVPOS(03,00);DEVOUT('Quantidades de Dias..:')
                                DEVPOS(04,00);DEVOUT('Media Dias...........:')
                                DEVPOS(05,00);DEVOUT('Percentual...........:')
                                mquantd := 1
                                mperc := mcomi_tab := mprz := mcod_cond := 0
                                WVW_DrawBoxGet(,21,23,3)
                                @ 01,23 GET mcod_cond PICT '999' VALID IF(ver_serie() = '141410' .AND. EMPTY(mcod_cond),.F.,ver_cond(mcod_cond,01,27))
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mcod_cond)
                                        mcons_tabpg:=' '
                                        cons_tabpg := {}
                                        sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_cond,3)),,.t.,@cons_tabpg)
                                        setcor(3)
                                        WVW_DrawBoxGet(,02,23,4)
                                        DEVPOS(01,27);DEVOUT(cons_tabpg[1,4])
                                        DEVPOS(02,23);DEVOUTPICT(cons_tabpg[1,6],'@@R 9-99')
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
                                        @ 03,23 GET m_dia[1] PICT '999'
                                        @ 03,27 GET m_dia[2] PICT '999' WHEN ! EMPTY(m_dia[1]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 1
                                        @ 03,31 GET m_dia[3] PICT '999' WHEN ! EMPTY(m_dia[2]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 2
                                        @ 03,35 GET m_dia[4] PICT '999' WHEN ! EMPTY(m_dia[3]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 3
                                        @ 03,39 GET m_dia[5] PICT '999' WHEN ! EMPTY(m_dia[4]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 4
                                        @ 03,43 GET m_dia[6] PICT '999' WHEN ! EMPTY(m_dia[5]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 5
                                        @ 03,47 GET m_dia[7] PICT '999' WHEN ! EMPTY(m_dia[6]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 6
                                        @ 03,51 GET m_dia[8] PICT '999' WHEN ! EMPTY(m_dia[7]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 7
                                        @ 03,55 GET m_dia[9] PICT '999' WHEN ! EMPTY(m_dia[8]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 8
                                        @ 03,59 GET m_dia[10] PICT '999' WHEN ! EMPTY(m_dia[9]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 9
                                        @ 03,63 GET m_dia[11] PICT '999' WHEN ! EMPTY(m_dia[10]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 10
                                        @ 03,67 GET m_dia[12] PICT '999' WHEN ! EMPTY(m_dia[11]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 11
                                        @ 03,71 GET m_dia[13] PICT '999' WHEN ! EMPTY(m_dia[12]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 12
                                        @ 03,75 GET m_dia[14] PICT '999' WHEN ! EMPTY(m_dia[13]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 13
                                        @ 03,79 GET m_dia[15] PICT '999' WHEN ! EMPTY(m_dia[14]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 14
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
                                        @ 02,23 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.))
                                        READ
                                        //IF(VAL(SUBSTR(mcond_veze,2,2)) >= 1,m_dia[1]:=SUBSTR(cons_cli[1,40],1,2)+' ',.T.)
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 1
                                                //m_dia[1]:=VAL(SUBSTR(cons_cli[1,40],1,2))
                                                //m_dia[2]:=VAL(SUBSTR(cons_cli[1,40],3,2))
                                                //m_dia[3]:=VAL(SUBSTR(cons_cli[1,40],5,2))
                                        ENDIF
                                        @ 03,23 GET m_dia[1] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 1
                                        @ 03,27 GET m_dia[2] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 2 VALID ! EMPTY(m_dia[2])
                                        @ 03,31 GET m_dia[3] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 3 VALID ! EMPTY(m_dia[3])
                                        @ 03,35 GET m_dia[4] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 4 VALID ! EMPTY(m_dia[4])
                                        @ 03,39 GET m_dia[5] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 5 VALID ! EMPTY(m_dia[5])
                                        @ 03,43 GET m_dia[6] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 6 VALID ! EMPTY(m_dia[6])
                                        @ 03,47 GET m_dia[7] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 7 VALID ! EMPTY(m_dia[7])
                                        @ 03,51 GET m_dia[8] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 8 VALID ! EMPTY(m_dia[8])
                                        @ 03,55 GET m_dia[9] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 9 VALID ! EMPTY(m_dia[9])
                                        @ 03,59 GET m_dia[10] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 10 VALID ! EMPTY(m_dia[10])
                                        @ 03,63 GET m_dia[11] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 11 VALID ! EMPTY(m_dia[11])
                                        @ 03,67 GET m_dia[12] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 12 VALID ! EMPTY(m_dia[12])
                                        @ 03,71 GET m_dia[13] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 13 VALID ! EMPTY(m_dia[13])
                                        @ 03,75 GET m_dia[14] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 14 VALID ! EMPTY(m_dia[14])
                                        @ 03,79 GET m_dia[15] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 15 VALID ! EMPTY(m_dia[15])
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
                                        ELSEIF mprz >= m_set[1,71] .AND. mprz < m_set[1,73]
                                                mperc := m_set[1,72]
                                        ELSEIF (mprz >= m_set[1,73] .AND. mprz < m_set[1,75]) .OR. (mprz >= m_set[1,73] .AND. EMPTY(m_set[1,75]))
                                                mperc := m_set[1,74]
                                        ELSEIF (mprz >= m_set[1,75] .AND. mprz < m_set[1,77]) .OR. (mprz >= m_set[1,75] .AND. EMPTY(m_set[1,77]))
                                                mperc := m_set[1,76]
                                        ELSE
                                                mperc := m_set[1,78]
                                        ENDIF
                                        IF mprz > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(mprz,3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                LOOP
                                        ENDIF
                                ENDIF
                                setcor(3,'*')
                                DEVPOS(02,23);DEVOUTPICT(mcond_veze,'@@R 9-99')
                                DEVPOS(04,23);DEVOUT(TRANSFORM(mprz,'9999'))
                                DEVPOS(05,23);DEVOUT(TRANSFORM(mperc,'999.99'))
                                setcor(1)
                                opcao := op_simnao('S','Confirma o percentual:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        LOOP
                                ENDIF
                                EXIT
                        ENDDO
                        wvw_lclosewindow()
                ENDIF
                mcod_cli := IF(EMPTY(m_set[1,84]),1,VAL(m_set[1,84]))
                mnome_cli := SPACE(40)
                mcod_vend := VAL(cod_operado)
                m_flag := 1
                IF m_indiv[1,26] = 'T' .AND. m_set[1,100] = 'S'
                        botao(24,0,30,97)
                        DEVPOS(25,01);DEVOUT('Codigo do Cliente....:')
                        DEVPOS(26,01);DEVOUT('Nome Fantasia........:')
                        DEVPOS(27,01);DEVOUT('Observacao...........:')
                        WHILE .T.
                                SET KEY -8 TO sac130()           // inclusao de clientes
                                IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
                                @ 25,24 GET mcod_cli PICT '99999'
                                @ 25,30 GET mnome_cli PICT '@!' WHEN EMPTY(mcod_cli)
                                READ
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        RETURN
                                ENDIF
                                IF ! EMPTY(mcod_cli)
                                        cons_cli := {}
                                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                                        IF LEN(cons_cli) = 0
                                                atencao('Cliente nao cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE    //IF ! EMPTY(mnome_cli)
                                        //f7_cli()
                                        mcod_cli := f7_cli()
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                ENDIF
                                cons_cli := {}
                                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                                IF LEN(cons_cli) = 0
                                        atencao('Cliente nao cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mnome_cli) .OR. ! EMPTY(mcod_cli)
                                        DEVPOS(25,24);DEVOUT(cons_cli[1,2])
                                        DEVPOS(25,30);DEVOUT(cons_cli[1,3])
                                        DEVPOS(26,24);DEVOUT(cons_cli[1,4])
                                        botao(27,24,30,97)
                                        WVW_DrawLabel(,27,24,cons_cli[1,48],,,240,, 'arial',15,10,,,,,)
                                        WVW_DrawLabel(,28,24,cons_cli[1,113],,,240,, 'arial',15,10,,,,,)
                                        WVW_DrawLabel(,29,24,cons_cli[1,114],,,240,, 'arial',15,10,,,,,)
                                        setcor(1)
                                        IF ! spc(mcod_cli,0,'*')
                                                UNLOCK
                                                LOOP
                                        ENDIF
                                        mdocum := cli_dup(mcod_cli)
                                        IF ! EMPTY(mdocum)
                                                atencao('Existe estes documentos deste cliente: '+mdocum,0,,,10)
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                IF cons_cli[1,41] = 'S'
                                        atencao('Este CLIENTE ESTA COM CREDITO BLOQUEADO PELO SISTEMA EM '+DTOC(cons_cli[1,138]))
                                        LOOP
                                ENDIF
                                ver_aniv(mcod_cli)
                                opcao := op_simnao('S','Confirma o CLIENTE:')
                                SET KEY -8 TO                    // inclusao de clientes
                                IF opcao = 'N'
                                        LOOP
                                ENDIF
                                setcor(1)
                                mcgc := cons_cli[1,32]
                                mcpf := cons_cli[1,34]
                                minsc:= cons_cli[1,33]
                                EXIT
                        ENDDO
                ENDIF
                mquantd=1
                mcont_item := cont_itens := 0
                m_flag := 1
                wvw_lclosewindow()
        ENDIF
        op_tela(00,00,53,120,memp_resa+SPACE(30)+mversao+'  -  V E N D A S  '+SPACE(30)+'Terminal: '+m_cfg[1],,1)
        WvW_PBSetFont( NIL, "Courier New", 15, 0,)
        nBota := wvw_pbCreate(NIL,51,80,52,100,'[F10] Fechar Cupom',NIL,{||fecha_ecf1("1")})
        WVW_PBEnable( NIL, nBota, .F. )
        IF m_mtr # NIL
                mdocumento := NUM_CUPOM()
                mnum_ecf   := NUM_CAIXA()
                mnum_ccf   := NUM_CCF()
                IF mnum_ccf = '0'
                        cancelar_cupom('1')
                ENDIF
                mcons_r51 := {}
                sr_getconnection():exec("SELECT * FROM r5 WHERE numero_usu = "+sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+" AND data_mov >= "+sr_cdbvalue(mdata_sis - 5),,.t.,@mcons_r51)
                IF LEN(mcons_r51) > 0
                        mcoo := mcons_r51[LEN(mcons_r51),5]
                        i := 0
                        mcons_r5 := {}
                        sr_getconnection():exec("SELECT * FROM r5 WHERE numero_usu = "+sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+" AND coo = "+sr_cdbvalue(mcoo),,.t.,@mcons_r5)
                        FOR i = 1 TO LEN(mcons_r5)
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mcons_r5[i,8]),5)),,.t.,@cons_merc)
                                IF LEN(cons_merc) = 0
                                        LOOP
                                ENDIF
                                mver_isento := vercst(cons_merc[1,68])
                                mvalor_aliq := 0
                                IF mver_isento = 'I'
                                        mvlr_aliq := 'II'
                                        maliq_prod := 'I1'
                                ELSEIF mver_isento = 'N'
                                        mvlr_aliq := 'NN'
                                        maliq_prod := 'N1'
                                ELSEIF mver_isento = 'F'
                                        maliq_prod := 'F1'
                                        mvlr_aliq := 'FF'
                                ELSEIF mver_isento = 'S'
                                        IF cons_merc[1,62] > 0
                                                mvlr_aliq := maliq_prod := ALLTRIM(STR(cons_merc[1,62])+'S')
                                                //maliq_prod := STR(cons_merc[1,62])+'S'
                                        ELSE
                                                maliq_prod := 'SI'
                                                mvlr_aliq := 'SI'
                                        ENDIF
                                ELSE
                                        IF cons_merc[1,62] > 0
                                                mvlr_aliq := cons_merc[1,62]
                                        ELSE
                                                cons_merc[1,62] := m_set[1,20]
                                                mvlr_aliq := m_set[1,20]
                                        ENDIF
                                        mvalor_aliq := mvlr_aliq
                                        maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},30,.T. )
                                        IF SUBSTR(maliq_prod,1,2) # 'OK'
                                                maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},30,.T. )
                                                IF SUBSTR(maliq_prod,1,2) # 'OK'
                                                        atencao('Esta Aliquota nao estar cadastrada no ECF...')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        IF m_indiv[1,37] = 'C:\ACBRMONITORPLUS\'
                                                maliq_prod := SUBSTR(maliq_prod,10)
                                                mvlr_aliq := maliq_prod
                                        ELSE
                                                maliq_prod := 'T'+SUBSTR(maliq_prod,5,2)
                                                mvlr_aliq := maliq_prod
                                        ENDIF
                                ENDIF
                                *                          1                   2                          3                   4                 5             6            7                       8                9              10             11               12             13            14           15          16               17              18    19  20        21                  22         23         24  25         26             27           28        29        30        31       32       33             34            35           36         37       38          39            40           41 42 43    44            45     46                          47
                                AADD(m_matriz,{VAL(mcons_r5[i,10])/1000,VAL(mcons_r5[i,15])/100,VAL(mcons_r5[i,13])/100,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],VAL(mcons_r5[i,12])/100,cons_merc[1,45],cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],0,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],' ',' ',cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],' ',' ',cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],SPACE(3),SPACE(3),SPACE(3),cons_merc[1,27],cons_merc[1,47],'  ',0,0,VAL(mcons_r5[i,7]),0,mvalor_aliq,ver_ncm(cons_merc[1,70],cons_merc[1,68])})
                                AADD(m_merc,cons_merc[1,9])
                                AADD(m_codigo,cons_merc[1,8])
                                AADD(m_Cbarra,cons_merc[1,2])

                        NEXT
                        m_mtr := NIL
                ENDIF
        ENDIF
        WHILE .T.
                botao(00,01,10,119)
                limpa(01,02,09,119)
                setcor(1)
                SUB_BANNER(01,10,'P R O D U T O')
                IF LEN(m_codigo) = 0
                        WVW_PBEnable( NIL, nBota, .F. )
                        limpa(01,02,09,119)
                        setcor(1)
                        IF m_indiv[1,26] = 'T'
                                IF msem_cx = 1
                                        SUB_BANNER(01,05,'CAIXA LIVRE',1)
                                ELSE
                                        SUB_BANNER(01,05,'CAIXA LIVRE')
                                ENDIF
                        ELSE
                                IF msem_cx = 1
                                        SUB_BANNER(01,05,'TERMINAL LIVRE',1)
                                ELSE
                                        SUB_BANNER(01,05,'TERMINAL LIVRE')
                                ENDIF
                        ENDIF
                ELSE
                        WVW_PBEnable( NIL, nBota, .T. )
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
                IF ver_serie() <> '141410'
	                DEVPOS(34,02);DEVOUT('Quantidade.:               ')
                ENDIF
                //DEVPOS(35,02);DEVOUT('Sub-IPI....:')
                //DEVPOS(35,25);DEVOUT('Total c/IPI:')
                DEVPOS(36,02);DEVOUT('Desc.(%)...:       - R$: ')
                IF m_flag = 0
                        SET KEY -9 TO
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mlibera := ' '
                i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := mtot_bruto := mtot_imposto := 0
                SETCOLOR('n/w,n/w')
                botao(lci-3,55,lba,cba-1)
                mqtd_lin := 0
                mitem := 1
                IF LEN(m_codigo) > 20
                        mqtd_lin := LEN(m_codigo) - 10
                ENDIF
                WVW_DrawLabel(,lci-3,58,'No.Cupom: '+mdocumento+'  -  Caixa: '+mnum_ecf,,,210,, 'Arial Black',25,10,,,,,)
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),143),,,,, 'terminal',13,8,,,,,)
                f++
                @ lci+f,55 SAY ''
                WVW_DrawLabel(,lci+f,COL(),'  Item  Cod.  Descricao                                      Quantd.   Vlr.Unit.   Vlr.Total',,,,, 'terminal',13,11,,,,,)
                f++
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),143),,,,, 'terminal',13,8,,,,,)
                FOR i = 1 TO LEN(m_codigo)
                        //IF m_codigo[i] = '     ' .OR. m_codigo[i] = NIL
                        //        LOOP
                        //ENDIF
                        mlibera := ' '
                        SETCOLOR('W/b,W/b')
                        IF mqtd_lin < i
                                @ lci+1+f,55 SAY ''
                                IF m_set[1,147] = 'C'
                                        IF m_matriz[i,6] = 'EV ' .OR. m_matriz[i,6] = 'PL '
                                                WVW_DrawLabel(,lci+1+f,COL()+1,'  '+STRZERO(i,4)+'  '+m_codigo[i]+'  '+LEFT(m_matriz[i,5],29)+' '+m_matriz[i,24],,,,, 'terminal',13,11,,,,,)
                                                f++
                                                WVW_DrawLabel(,lci+1+f,COL()+1,' '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' X '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' = '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,46],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,11,,,,,)
                                                IF m_matriz[i,45] = 1
                                                        f++
                                                        WVW_DrawLabel(,lci+f,COL(),'  ITEM CANCELADO: '+STRZERO(i,3),,,,, 'terminal',13,4,,,,,)
                                                ENDIF
                                                f++
                                                WVW_DrawLabel(,lci+f,COL(),REPLI('-',143),,,,, 'terminal',13,8,,,,,)
                                        ELSE
                                                IF ! EMPTY(ALLTRIM(m_matriz[i,28]))
                                                        WVW_DrawLabel(,lci+1+f,COL()+1,'  '+STRZERO(i,4)+'  '+m_codigo[i]+'  '+LEFT(m_matriz[i,5],19)+' '+m_matriz[i,28],,,,, 'terminal',13,4,,,,,)
                                                        f++
                                                        WVW_DrawLabel(,lci+1+f,COL()+1,'  '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' X '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' = '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,46],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,11,,,,,)
                                                        IF m_matriz[i,45] = 1
                                                                f++
                                                                WVW_DrawLabel(,lci+f,COL(),'  ITEM CANCELADO: '+STRZERO(i,3),,,,, 'terminal',13,11,,,,,)
                                                        ENDIF
                                                ELSE
                                                        WVW_DrawLabel(,lci+1+f,COL()+1,'  '+STRZERO(i,4)+'  '+m_codigo[i]+'  '+m_matriz[i,5],,,,, 'terminal',13,11,,,,,)
                                                        f++
                                                        WVW_DrawLabel(,lci+1+f,COL()+1,'  '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' X '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' = '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,46],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,11,,,,,)
                                                        IF m_matriz[i,45] = 1
                                                                f++
                                                                WVW_DrawLabel(,lci+f,COL(),'  ITEM CANCELADO: '+STRZERO(i,3),,,,, 'terminal',13,11,,,,,)
                                                        ENDIF
                                                ENDIF
                                                f++
                                                WVW_DrawLabel(,lci+f,COL(),REPLI('-',143),,,,, 'terminal',13,8,,,,,)
                                        ENDIF
                                ELSE
                                        WVW_DrawLabel(,lci+1+f,COL()+1,'  '+STRZERO(i,4)+'  '+m_cbarra[i]+'  '+LEFT(m_matriz[i,5],30)+' '+m_matriz[i,28],,,,, 'terminal',13,11,,,,,)
                                        f++
                                        WVW_DrawLabel(,lci+1+f,COL()+1,'  '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' X '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' = '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,46],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,11,,,,,)
                                        IF m_matriz[i,45] = 1
                                                f++
                                                WVW_DrawLabel(,lci+f,COL(),'  ITEM CANCELADO: '+STRZERO(i,3),,,,, 'terminal',13,11,,,,,)
                                        ENDIF
                                        f++
                                        WVW_DrawLabel(,lci+f,COL(),REPLI('-',143),,,,, 'terminal',13,8,,,,,)
                                ENDIF
                                IF ! EMPTY(m_matriz[i,36])
                                        f++
                                        WVW_DrawLabel(,lci+f,COL(),'  OBS.: '+m_matriz[i,36],,,,, 'terminal',13,11,,,,,)
                                ENDIF
                                f++
                        ENDIF
                        IF m_matriz[i,45] = 0
                                mtot_imposto := mtot_imposto + iat(((m_matriz[i,1] * m_matriz[i,8]) * (m_matriz[i,47] / 100)),m_set[1,103])
                                mtot_desc := mtot_desc + iat((m_matriz[i,1] * m_matriz[i,8]),m_set[1,103])
                                msubtotal := msubtotal + iat((m_matriz[i,1] * m_matriz[i,2]),m_set[1,103])
                                mtot_custo:= mtot_custo + iat((m_matriz[i,1] * m_matriz[i,9]),m_set[1,103])
                                mtot_ipi := mtot_ipi + ((m_matriz[i,2] * m_matriz[i,1]) * (m_matriz[i,22]/100))
                        ENDIF
                NEXT
                tela_ := {}
                tela_ := WVW_SAVESCREEN(,lci,55,lba,cba-1)
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
                setcor(1)
                botao(38,01,43,53,,,'*')
                DEVPOS(38,01);DEVOUT(' T O T A L   R$:')
                WVW_DrawLabel(,39,02,TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,35,,,,,)
                mmerc := SPACE(40)
                mcod_bc := SPACE(14)
                IF(mquantd > 1,mquantd,mquantd=1)
                mcod_merc := mdesconto := mvlr_fat := 0
                mobs1 := mobs2 := SPACE(77)
                menvelope := SPACE(10)
                f4 := " "
                // ATIVA O FECHAMENTO DO PEDIDO
                SET KEY -9 TO fecha_ecf1("1")       // neste mesmo PRG. <F10>Tecla
                setcor(1)
                mensagem("Tecle: <X mais a qtd.>Informa Qtd. - <F8>Canc.Item - <F10>Fechamento - <PV> Pre_venda - <F4> Abrir Gaveta - <F3> Consulta Produto - <ESC>Retornar")
                @ 28,14 GET mcod_bc PICT '@!'
                READ
/*
                mstatus = 'ONLINE'
                mconexao := SR_AddConnection(CONNECT_FIREBIRD,cConnString)
                        ATENCAO(mconexao)
                IF  mconexao == -1
                        atencao('Sistema em OFF LINE')
                        mstatus = 'OFFLINE'
                        LOOP
                ELSEIF mstatus = 'OFFLINE'
                        SR_SetActiveConnection(1)
                        atencao('Sistema em ON LINE')
                        mstatus = 'ONLINE'
                ELSE
                        SR_EndConn ection(mconexao)
                ENDIF
                IF mstatus = 'ONLINE'
                        mstatus = ''
                        LOOP
                ENDIF
*/
                IF SUBSTR(mcod_bc,1,1) = 'X' .AND. VAL(SUBSTR(mcod_bc,2)) > 0
                        mquantd := VAL(SUBSTR(mcod_bc,2))
                        LOOP
                ENDIF
                IF SUBSTR(mcod_bc,1,1) = '*'
                        //mcod_merc := VAL(f4_merc(,SUBSTR(mcod_bc,2),STRZERO(mvarejo,1),mperc))
                        //mcod_merc := VAL(f4_merc(,mcod_bc,STRZERO(mvarejo,1),mperc))
                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,mcod_bc,STRZERO(mvarejo,1),mperc),f4_merc1(,mcod_bc,STRZERO(mvarejo,1),mperc))
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                        IF LEN(cons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mmerc := cons_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF mcod_bc = "FIM"
                        LOOP
                ENDIF
                IF LASTKEY() = 27 .OR. mcod_bc = "FIM"
                        IF ! EMPTY(m_codigo)              //IBR_CUPOM_ABERTO()
                                opcao := op_simnao("N","Deseja CANCELAR O CUPOM Agora:")
                                IF opcao = "S"
                                        //IBR_CAN_CUPOM()
                                        IF ! CANCELAR_CUPOM()
                                                LOOP
                                        ENDIF
                                        **********
                                        SELE('merc');ORDSETFOCUS(1)
                                        **********
                                        SR_BEGINTRANSACTION()
                                        i := 0
                                        FOR i = 1 TO LEN(m_codigo)
                                                IF EMPTY(m_codigo[i]) .OR. m_codigo[i] = NIL    //.OR. m_matriz[i,41] = 'OS'
                                                        LOOP
                                                ENDIF
                                                cons_merc := {}
                                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.t.,@cons_merc)
                                                mlinha := cons_merc[1,2]+cons_merc[1,8]+cons_merc[1,9]+cons_merc[1,14]+STRZERO((iat(cons_merc[1,56] + m_matriz[i,1]))*1000,13)+STRZERO(iat(cons_merc[1,46])*100,14)+cons_merc[1,68]
                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(cons_merc[1,55] +  m_matriz[i,1])+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.f.)
                                                //IF msld = NIL .AND. EMPTY(mnum_ped) .AND. EMPTY(mnum_pv)
                                                IF EMPTY(mnum_ped) .AND. EMPTY(mnum_pv)
                                                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(iat(cons_merc[1,56] +  m_matriz[i,1]))+",chv_cript = "+sr_cdbvalue(criptografia(mlinha,'C'))+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.f.)
                                                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                                                ' VALUES ('+;
                                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                                sr_cdbvalue(m_codigo[i])+','+; //4
                                                                                                sr_cdbvalue(m_matriz[i,1])+','+; //5
                                                                                                sr_cdbvalue(cons_merc[1,56])+','+; //6
                                                                                                sr_cdbvalue(cons_merc[1,56] + m_matriz[i,1])+','+; //7
                                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                                sr_cdbvalue('SAC23ECF1')+','+; //9
                                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                                sr_cdbvalue('CANCELANDO CUPOM FISCAL')+','+; //11
                                                                                                sr_cdbvalue('E')+','+; //11
                                                                                                sr_cdbvalue(' ')+')',,.f.)

                                                ENDIF
                                        NEXT
                                        SET CENTURY ON
                                        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                                                  'CP'+; //2
                                                  m_ModeloImp+; //3
                                                  STRZERO(VAL(m_numerocaixa),2)+; //4
                                                  SUBSTR(mnum_ccf,1,6)+;
                                                  mdocumento+; //6
                                                  SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+; //7
                                                  STRZERO(mtot_nota*100,14)+; //8
                                                  STRZERO(0,13)+; //9
                                                  'V'+; //10
                                                  STRZERO(0,13)+; //11
                                                  'V'+; //12
                                                  STRZERO(mtot_nota*100,14)+; //13
                                                  'S'+; //14
                                                  STRZERO(0,13)+; //15
                                                  'D'+; //16
                                                  mcliente+; //17
                                                  IF(! EMPTY(mcgc),mcgc,mcpf)+SPACE(14-LEN(IF(! EMPTY(mcgc),mcgc,mcpf)))+; //18
                                                  DTOC(mdata_sis)
                                        sr_getconnection():exec('INSERT INTO r4 ('+;
                                                'NUMERO_FAB   ,'+; //1
                                                'MF_ADICIONAL ,'+; //2
                                                'MODELO_ECF   ,'+; //3
                                                'NUMERO_USU   ,'+; //4
                                                'CCF_CVC_CBP  ,'+; //5
                                                'COO          ,'+; //6
                                                'DATA_INI     ,'+; //7
                                                'SUB_TOTAL    ,'+; //8
                                                'DESCONT      ,'+; //9
                                                'IND_DESCONT  ,'+; //10
                                                'ACRES_SUB    ,'+; //11
                                                'IND_ACRESC   ,'+; //12
                                                'VLR_LIQ      ,'+; //13
                                                'IND_CANCEL   ,'+; //14
                                                'CANCEL_ACRESC,'+; //15
                                                'ORD_DESC_ACRE,'+; //16
                                                'NOME_CLIENTE ,'+; //17
                                                'CNPJ_CPF     ,'+; //18
                                                'DATA_MOV     ,'+; //19
                                                'CHV_CRIPT    ,'+; //19
                                                'SR_DELETED )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(m_numeroSerie)+','+; //1
                                                sr_cdbvalue(m_MFAdicional)+','+; //2
                                                sr_cdbvalue(m_ModeloImp)+','+; //3
                                                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                                                sr_cdbvalue(mnum_ccf)+','+; //5
                                                sr_cdbvalue(mdocumento)+','+; //6
                                                sr_cdbvalue(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2))+','+; //7
                                                sr_cdbvalue(STRZERO(0,14))+','+; //8
                                                sr_cdbvalue(STRZERO(0,13))+','+; //9
                                                sr_cdbvalue('V')+','+; //10
                                                sr_cdbvalue(STRZERO(0,13))+','+; //11
                                                sr_cdbvalue('V')+','+; //12
                                                sr_cdbvalue(STRZERO(mtot_nota*100,14))+','+; //13
                                                sr_cdbvalue('S')+','+; //14
                                                sr_cdbvalue(STRZERO(0,13))+','+; //15
                                                sr_cdbvalue('D')+','+; //16
                                                sr_cdbvalue(mcliente)+','+; //17
                                                sr_cdbvalue(IF(! EMPTY(mcgc),mcgc,mcpf))+','+; //18
                                                sr_cdbvalue(mdata_sis)+','+; //13
                                                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //19
                                                sr_cdbvalue(' ')+')',,.f.)

                                        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                                                m_MFAdicional+; //2
                                                m_ModeloImp+; //3
                                                STRZERO(VAL(m_numerocaixa),2)+; //4
                                                mdocumento+SPACE(6-LEN(mdocumento))+; //5
                                                mnum_ccf+; //6
                                                STRZERO(0,6)+; //7
                                                SPACE(15)+; //8
                                                STRZERO(0,13)+; //9
                                                'N'+; //10
                                                STRZERO(0,13)+; //11
                                                DTOC(mdata_sis)

                                        sr_getconnection():exec('INSERT INTO r7 ('+;
                                                'NUMERO_FAB  ,'+; //1
                                                'MF_ADICIONAL,'+; //2
                                                'MODELO_ECF  ,'+; //3
                                                'NUMERO_USU  ,'+; //4
                                                'COO         ,'+; //5
                                                'CCF         ,'+; //6
                                                'GNF         ,'+; //7
                                                'MEIO_PAG    ,'+; //8
                                                'VLR_PAGO    ,'+; //9
                                                'IND_ESTORNO ,'+; //10
                                                'VLR_ESTORNO ,'+; //11
                                                'DATA_MOV    ,'+; //12
                                                'CHV_CRIPT   ,'+; //13
                                                'SR_DELETED )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(m_numeroSerie)+','+; //1
                                                sr_cdbvalue(m_MFAdicional)+','+; //2
                                                sr_cdbvalue(m_ModeloImp)+','+; //3
                                                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                                                sr_cdbvalue(mdocumento)+','+; //5
                                                sr_cdbvalue(mnum_ccf)+','+; //6
                                                sr_cdbvalue(STRZERO(0,6))+','+; //7
                                                sr_cdbvalue(SPACE(15))+','+; //8
                                                sr_cdbvalue(STRZERO(0,13))+','+; //9
                                                sr_cdbvalue('N')+','+; //10
                                                sr_cdbvalue(STRZERO(0,13))+','+; //11
                                                sr_cdbvalue(mdata_sis)+','+; //12
                                                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                                                sr_cdbvalue(' ')+')',,.f.)

                                                cons_r5 := {}
                                                sr_getconnection():exec("SELECT * FROM r5 WHERE numero_fab = "+sr_cdbvalue(m_numeroSerie)+" AND coo = "+sr_cdbvalue(mdocumento)+" AND ccf_cvc_cbp = "+sr_cdbvalue(mnum_ccf),,.t.,@cons_r5)
                                                i := 0
                                                FOR i = 1 TO LEN(cons_r5)
                                                        mlinha := cons_r5[i,1]+; //1
                                                                cons_r5[i,2]+; //2
                                                                cons_r5[i,3]+; //3
                                                                cons_r5[i,4]+; //4
                                                                cons_r5[i,5]+; //5
                                                                cons_r5[i,6]+; //6
                                                                cons_r5[i,7]+; //7
                                                                cons_r5[i,8]+; //8
                                                                cons_r5[i,9]+; //9
                                                                cons_r5[i,10]+; //10
                                                                cons_r5[i,11]+; //11
                                                                cons_r5[i,12]+; //12
                                                                cons_r5[i,13]+; //13
                                                                cons_r5[i,14]+; //14
                                                                cons_r5[i,15]+; //15
                                                                cons_r5[i,16]+; //16
                                                                'S'+; //17
                                                                cons_r5[i,18]+; //18
                                                                cons_r5[i,19]+; //19
                                                                cons_r5[i,20]+; //20
                                                                cons_r5[i,21]+; //21
                                                                cons_r5[i,22]+; //22
                                                                cons_r5[i,23]+; //23
                                                                cons_r5[i,24]+; //24
                                                                DTOC(cons_r5[i,25])   //25
                                                        sr_getconnection():exec("UPDATE r5 SET ind_cancel = 'S', CHV_CRIPT = "+sr_cdbvalue(criptografia(mlinha,'C'))+" WHERE numero_fab = "+sr_cdbvalue(m_numeroSerie)+" AND coo = "+sr_cdbvalue(mdocumento)+" AND ccf_cvc_cbp = "+sr_cdbvalue(mnum_ccf)+" AND cod_prod = "+sr_cdbvalue(cons_r5[i,8]),,.f.)
                                                NEXT
                                                atu_gt()
                                                SET CENTURY OFF
                                                sr_committransaction()
                                        sr_endtransaction()
                                        IF m_mtr # NIL
                                                m_mtr := NIL
                                        ENDIF
                                        *******
                                        SELE('merc');ORDSETFOCUS(1)
                                        **********
                                ELSE
                                        LOOP
                                ENDIF
                        ENDIF
                        SET KEY -2 TO
                        SET KEY -7 TO
                        m_codigo:={}
                        m_matriz:={}
                        wvw_lclosewindow()
                        **** apagando VARIAVEIS PRIVATE *****
                        RELEASE ALL
                        SET KEY -9 TO
                        RETURN NIL
                ENDIF
                IF m_flag = 0
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_bc)
                        IF ALLTRIM(mcod_bc) = "PV" 
                                IF ! EMPTY(mnum_pv) .OR. ! EMPTY(mnum_ped)
                                        atencao('Ja foi informado um Pre-Venda...')
                                        LOOP
                                ENDIF
                                mnum_pv := VAL(SUBSTR(mcod_bc,2))
                                op_tela(10,10,11,40,'NUMERO PRE-VENDA')
                                DEVPOS(00,01);DEVOUT('No. Pre-Venda...:')
                                DEVPOS(01,01);DEVOUT('Valor...........:')
                                @ 00,19 GET mnum_pv PICT '999999'
                                READ
                                IF LASTKEY() = 27
                                        mnum_pv := 0
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                mcons_ped := {}
                                sr_getconnection():exec("SELECT * FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pv,6)),,.t.,@mcons_ped)
                                IF LEN(mcons_ped) = 0 
                                        atencao('Pre-Venda nao encontrado em nosso arquivos...')
                                        wvw_lclosewindow()
                                        mnum_pv := 0
                                        LOOP
                                ENDIF
                                mcod_cli := VAL(mcons_ped[1,23])
                                mpago := ' '
                                p := mtot_ := 0
                                FOR p = 1 TO LEN(mcons_ped)
                                        mtot_ := mtot_ + (mcons_ped[p,14]*mcons_ped[p,18])
                                NEXT
                                setcor(3)
                                DEVPOS(01,19);DEVOUT(TRANSFORM(mtot_,'999,999.99'))
                                setcor(1)
                                IF mcons_ped[1,49] = 'C'
                                        atencao('Este Pre-Venda foi CANCELADO....')
                                ELSEIF mcons_ped[1,49] = '*'
                                        atencao('Este Pre-Venda ja foi PAGO !!!')
                                        mpago := '*'
                                ELSE
                                        mpago := ' '
                                ENDIF
                                IF mcons_ped[1,4] > mdata_sis
                                        atencao('Este Pre-Venda nao pode ser Recebido com esta DATA !!!')
                                        LOOP
                                ENDIF
                                IF 'N' = op_simnao('S','Confirma o Pre-Venda:') .OR. LASTKEY() = 27
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                wvw_lclosewindow()
                                mcod_vend := VAL(mcons_ped[1,32])
                                p:=0
                                FOR p = 1 TO LEN(mcons_ped)
                                        cons_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_ped[p,6]),,.t.,@cons_merc)
                                        WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                                        botao(00,01,07,99)
                                        IF cons_merc[1,23] > 0
                                                setcor(6)  
                                                DEVPOS(00,20);DEVOUT('(Promocao)')
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                                        WVW_DrawLabel(,01,02,mcons_ped[p,6]+' - '+SUBSTR(mcons_ped[p,7],1,20),,,,, 'arial black',60,20,,,,,)
                                        WVW_DrawLabel(,04,02,'             '+SUBSTR(mcons_ped[p,7],21),,,,, 'arial black',60,20,,,,,)       
                                        mcod_merc := VAL(mcons_ped[p,6])
                                        mp_venda := mcons_ped[p,20]
                                        mvlr_fat := mcons_ped[p,18]

                                        mvlr_fat := iat(mvlr_fat,mcons_ped[p,81])

                                        DEVPOS(00,80);DEVOUT('Preco   R$:')
                                        WVW_DrawLabel(,04,70,TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98])),,,240,, 'arial black',60,30,,,,,)
                                        setcor(1)                                                                                 
                                        mobs_prod := mcons_ped[p,58]                                                              
                                        mquantd := mcons_ped[p,14]                                                                
                                        IF ! EMPTY(cons_merc[1,28]) .AND. cons_merc[1,28] >= (cons_merc[1,56] - mquantd) .AND. cons_merc[1,9] <> "DIVERSOS" .AND. m_set[1,107] = "S" .AND. m_indiv[1,26] <> "T"
                                                atencao("SALDO esta menor que o ESTOQUE MINIMO: "+TRANSFORM(cons_merc[1,28],"9,999,999.99")+" estipulado !!!")                                       
                                        ENDIF                                                                                                                                                              
                                        mcomissao := mcons_ped[p,53]                                                                                                                                                                                                                       
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
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                                
                                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]                                                                                                                                                                                                                                                                                                                              
                                                atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                                                LOOP                                                                                                                                                                                                                                                                                                                                                                 
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        IF mcons_ped[p,14] > cons_merc[1,55] .AND. m_set[1,16] = 'S'
                                                IF ! aut_sen('Produto: '+cons_merc[1,8]+'-'+cons_merc[1,9]+m_qp+'Saldo: '+TRANSFORM(cons_merc[1,55],'99,999.9999')+' MENOR que solicitado !!!'+m_qp+'Senha Autorizacao:','LIBSLDNF')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        setcor(1)
                                        mcod_fab := cons_merc[1,30]                                                                                                                                                                                                                                                                                                                                                    
                                        mfabrica := cons_merc[1,31]                                                                                                                                                                                                                                                                                                                                                    
                                        mtot_ped = 0                                                                                                                                                                                                                                                                                                                                                                 
                                        mtot_ped = mvlr_fat * mquantd                                                                                                                                                                                                                                                                                                                                                

                                        IF LEN(m_merc) = 0                                                                                                                                                                                                                                                                                                                                                           
                                                abrir_cupom()
                                                mdocumento := NUM_CUPOM()
                                                mnum_ecf   := NUM_CAIXA()
                                                mnum_ccf   := NUM_CCF()
                                                mnum_item  := 0
                                                maliq_prod := ''
                                                //IF EMPTY(mdocumento) .OR. EMPTY(mnum_ecf)
                                                //        atencao('Nao foi possivel obter o numero do CUPOM...')
                                                //        LOOP
                                                //ENDIF
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        mabrir_cp := "*"                                                                                                                                                                                                                                                                                                                                                             
                                        AADD(m_merc,cons_merc[1,9])
                                        AADD(m_codigo,cons_merc[1,8])
                                        AADD(m_Cbarra,cons_merc[1,2])
                                        SR_BEGINTRANSACTION()
                                                TRY
                                                aret:={}
                                                cComm  := "select saldo_mer,saldo_fis,sr_recno from sacmerc where cod_merc = "+sr_cdbvalue(mcod_merc)
                                                sr_getconnection():exec(ccomm,,.t.,@aret)
                                                ccomm :="update sacmerc set saldo_fis = "+sr_cdbvalue(aret[1,2] - mquantd)+" where cod_merc = "+sr_cdbvalue(mcod_merc)
                                                sr_getconnection():exec(ccomm,,.f.)
                                                sr_committransaction()
                                                CATCH e                                                                                                                                                                                                                                                                                                                                                                      
                                        SR_ENDTRANSACTION()                                                                                                                                                                                                                                                                                                                                                          
                                        END                                                                                                                                                                                                                                                                                                                                                                          
                                        mdesconto := mpreco := 0
                                        IF mp_venda < mvlr_fat
                                                mdesconto := 0
                                                mpreco := mvlr_fat
                                        ELSE
                                                mpreco := mp_venda
                                                //IF m_cfg[89] = '%'
                                                //        mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                                //ELSE
                                                        mdesconto := mquantd*mp_venda - mquantd*mvlr_fat
                                                //ENDIF
                                        ENDIF

                                        //mver_isento := cons_merc[1,61] //vlr_isento(mcod_merc)
                                        mver_isento := vercst(cons_merc[1,68])
                                        mvalor_aliq := 0
                                        IF mver_isento = 'I'
                                                mvlr_aliq := 'II'
                                                maliq_prod := 'I1'
                                        ELSEIF mver_isento = 'N'
                                                mvlr_aliq := 'NN'
                                                maliq_prod := 'N1'
                                        ELSEIF mver_isento = 'F'
                                                maliq_prod := 'F1'
                                                mvlr_aliq := 'FF'
                                        ELSEIF mver_isento = 'S'
                                                IF cons_merc[1,62] > 0
                                                        mvlr_aliq := maliq_prod := ALLTRIM(STR(cons_merc[1,62])+'S')
                                                        //maliq_prod := STR(cons_merc[1,62])+'S'
                                                ELSE
                                                        maliq_prod := 'SI'
                                                        mvlr_aliq := 'SI'
                                                ENDIF
                                        ELSE
                                                IF cons_merc[1,62] > 0
                                                        mvlr_aliq := cons_merc[1,62]
                                                ELSE
                                                        cons_merc[1,62] := m_set[1,20]
                                                        mvlr_aliq := m_set[1,20]
                                                ENDIF
                                                mvalor_aliq := mvlr_aliq
                                                //mtot_imposto := mtot_imposto + ((mquantd * mpreco) * (mvlr_aliq / 100))
                                                maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},30,.T. )
                                                IF SUBSTR(maliq_prod,1,2) # 'OK'
                                                        maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},30,.T. )
                                                        IF SUBSTR(maliq_prod,1,2) # 'OK'
                                                                atencao('Esta Aliquota nao estar cadastrada no ECF...')
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                                IF m_indiv[1,37] = 'C:\ACBRMONITORPLUS\'
                                                        maliq_prod := SUBSTR(maliq_prod,10)
                                                        mvlr_aliq := maliq_prod
                                                ELSE
                                                        maliq_prod := 'T'+SUBSTR(maliq_prod,5,2)
                                                        mvlr_aliq := maliq_prod
                                                ENDIF
                                        ENDIF
                                        //atencao(mvlr_aliq)
                                        cont_itens ++                                                                                                                                                                                                                                                                                                                                                                
                                        IF mvlr_fat = 0                                                                                                                                                                                                                                                                                                                                                              
                                        *                         1       2        3           4                 5             6            7              8           9              10             11               12             13            14               15          16               17              18          19   20        21                  22         23              24      25             26             27           28        29        30        31       32       33             34            35           36         37       38          39
                                        *                             40        41 42 43    44     45    46
                                                AADD(m_matriz,{mquantd,mvlr_fat,        0,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],       0,              0,cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,phora_ecf,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                               cons_merc[1,47],'  ',0,0,cont_itens,0,mvalor_aliq,ver_ncm(cons_merc[1,70],cons_merc[1,68])})
                                        ELSE                                                                                                                                                                                                                                                                                                                                                                         
                                                AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],mp_venda,cons_merc[1,45],cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,phora_ecf,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                               cons_merc[1,47],'  ',0,0,cont_itens,0,mvalor_aliq,ver_ncm(cons_merc[1,70],cons_merc[1,68])})
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        mensagem("Imprimindo o Produto: "+cons_merc[1,8]+' - '+cons_merc[1,9])
                                        vende_prod(STRZERO(VAL(cons_merc[1,8]),13),cons_merc[1,9]+'  '+ALLTRIM(mobs_prod),mvlr_aliq,'F',mquantd,qtd,mpreco,'$',IF(mdesconto<0,mdesconto*-1,mdesconto),cons_merc[1,14],IF(mdesconto<0,'A','D'))
                                        IF mcons_ped[p,106] = 1
                                                cancelar_item(P)
                                                //can_item(STRZERO(p,5))
                                        ENDIF
                                        mdesconto := 0                                                                                                                                                                                                                                                                                                                                                               
                                        mcont_item ++                                                                                                                                                                                                                                                                                                                                                                
                                        // ATUALIZANDO ARQUIVO DE MOVIMENTOS                                                                                                                                                                                                                                                                                                                                         
                                        mcampo_arq :=  'empresa         ,';//1                                                                                                                                                                                                                                                                                                                                       
                                                      +'documento       ,';//2                                                                                                                                                                                                                                                                                                                                       
                                                      +'num_ecf         ,';//3                                                                                                                                                                                                                                                                                                                                       
                                                      +'gru_sub         ,';//4                                                                                                                                                                                                                                                                                                                                       
                                                      +'codigo          ,';//5                                                                                                                                                                                                                                                                                                                                       
                                                      +'produto         ,';//6                                                                                                                                                                                                                                                                                                                                       
                                                      +'cod_fab         ,';//7                                                                                                                                                                                                                                                                                                                                       
                                                      +'fabrica         ,';//8                                                                                                                                                                                                                                                                                                                                       
                                                      +'unidade         ,';//9                                                                                                                                                                                                                                                                                                                                       
                                                      +'data_s_e        ,';//10                                                                                                                                                                                                                                                                                                                                      
                                                      +'ent_sai         ,';//11                                                                                                                                                                                                                                                                                                                                      
                                                      +'quantd          ,';//12                                                                                                                                                                                                                                                                                                                                      
                                                      +'pr_venda        ,';//13                                                                                                                                                                                                                                                                                                                                      
                                                      +'vl_vend         ,';//14                                                                                                                                                                                                                                                                                                                                      
                                                      +'cod_vend        ,';//15                                                                                                                                                                                                                                                                                                                                      
                                                      +'vl_fatura       ,';//16                                                                                                                                                                                                                                                                                                                                      
                                                      +'pr_unit         ,';//17                                                                                                                                                                                                                                                                                                                                      
                                                      +'cod_nota        ,';//18                                                                                                                                                                                                                                                                                                                                      
                                                      +'isento          ,';//19                                                                                                                                                                                                                                                                                                                                      
                                                      +'alimento        ,';//20                                                                                                                                                                                                                                                                                                                                      
                                                      +'bebida          ,';//21                                                                                                                                                                                                                                                                                                                                      
                                                      +'icm             ,';//22                                                                                                                                                                                                                                                                                                                                      
                                                      +'tipo            ,';//23
                                                      +'num_ped          ' //24
                                                                                                      //    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24                                                                                                                                                                                                                                             
                                        cComm  := "INSERT INTO sacmovnt ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? , ?,' ')"
                                        apCode := SR_SQLParse( cComm, @nErr, @nPos )                                                                                                                                                                                                                                                                                                                                 
                                        cComm  := SR_SQLCodeGen(apCode,;                                                                                                                                                                                                                                                                                                                                             
                                               {mcodempresa         ,;//1                                                                                                                                                                                                                                                                                                                                            
                                                'CP'+mdocumento     ,;//2                                                                                                                                                                                                                                                                                                                                            
                                                mnum_ecf            ,;//3                                                                                                                                                                                                                                                                                                                                            
                                                cons_merc[1,7]       ,;//4                                                                                                                                                                                                                                                                                                                                            
                                                mcod_merc,;//5                                                                                                                                                                                                                                                                                                                                            
                                                cons_merc[1,9]      ,;//6                                                                                                                                                                                                                                                                                                                                            
                                                cons_merc[1,30]       ,;//7                                                                                                                                                                                                                                                                                                                                            
                                                SUBSTR(cons_merc[1,31],1,30),;//8                                                                                                                                                                                                                                                                                                                                      
                                                cons_merc[1,14]       ,;//9                                                                                                                                                                                                                                                                                                                                            
                                                mdata_sis           ,;//10                                                                                                                                                                                                                                                                                                                                           
                                                "S"                 ,;//11                                                                                                                                                                                                                                                                                                                                           
                                                mquantd             ,;//12                                                                                                                                                                                                                                                                                                                                           
                                                mvlr_fat            ,;//13                                                                                                                                                                                                                                                                                                                                           
                                                mvlr_fat            ,;//14                                                                                                                                                                                                                                                                                                                                           
                                                cod_operado         ,;//15                                                                                                                                                                                                                                                                                                                                           
                                                mvlr_fat            ,;//16                                                                                                                                                                                                                                                                                                                                           
                                                cons_merc[1,42]       ,;//17                                                                                                                                                                                                                                                                                                                                           
                                                "B"                 ,;//18                                                                                                                                                                                                                                                                                                                                           
                                                cons_merc[1,61]        ,;//19                                                                                                                                                                                                                                                                                                                                           
                                                cons_merc[1,21]      ,;//20                                                                                                                                                                                                                                                                                                                                           
                                                cons_merc[1,62]        ,;//21                                                                                                                                                                                                                                                                                                                                           
                                                IF(cons_merc[1,83] = "T",17,0),;//22 IF(msld = NIL,"01","03"),;//23
                                                "01",;//23
                                                STRZERO(mnum_pv,6);//24
                                                },sr_getconnection():nsystemid)                                                                                                                                                                                                                                                                                                                                      
                                                sr_getconnection():exec(ccomm,,.f.)                                                                                                                                                                                                                                                                                                                                  

                                        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                                                m_MFAdicional+; //2
                                                m_ModeloImp+; //3
                                                STRZERO(VAL(m_numerocaixa),2)+; //4
                                                mdocumento+SPACE(6-LEN(mdocumento))+; //5
                                                SUBSTR(mnum_ccf,1,6)+; //6
                                                STRZERO(mnum_item,3)+; //7
                                                STRZERO(mcod_merc,10)+SPACE(14-LEN(STRZERO(mcod_merc,10)))+; //8
                                                cons_merc[1,9]+SPACE(100-LEN(cons_merc[1,9]))+; //9
                                                STRZERO(mquantd*1000,7)+; //10
                                                cons_merc[1,14]+; //11
                                                STRZERO(cons_merc[1,46]*100,8)+; //12
                                                STRZERO(IF(cons_merc[1,46] > mvlr_fat,(cons_merc[1,46] - mvlr_fat)*100,0),8)+; //13
                                                STRZERO(IF(cons_merc[1,46] < mvlr_fat,(mvlr_fat - cons_merc[1,46])*100,0),8)+; //14
                                                STRZERO(mvlr_fat*100,14)+; //15
                                                maliq_prod+SPACE(7-LEN(maliq_prod))+; //16
                                                'N'+; //17
                                                STRZERO(0,7)+; //18
                                                STRZERO(0,13)+; //19
                                                STRZERO(0,13)+; //20
                                                cons_merc[1,81]+; //21
                                                cons_merc[1,91]+; //22
                                                '3'+; //23
                                                '2'+; //24
                                                DTOC(mdata_sis)

                                        sr_getconnection():exec('INSERT INTO r5 ('+;
                                                'NUMERO_FAB   ,'+; //1
                                                'MF_ADICIONAL ,'+; //2
                                                'MODELO_ECF   ,'+; //3
                                                'NUMERO_USU   ,'+; //4
                                                'COO          ,'+; //5
                                                'CCF_CVC_CBP  ,'+; //6
                                                'NUM_ITEM     ,'+; //7
                                                'COD_PROD     ,'+; //8
                                                'DESCRICAO    ,'+; //9
                                                'QUANTIDADE   ,'+; //10
                                                'UNIDADE      ,'+; //11
                                                'VLR_UNIT     ,'+; //12
                                                'DESCON_ITEM  ,'+; //13
                                                'ACRESC_ITEM  ,'+; //14
                                                'VLR_LIQ      ,'+; //15
                                                'TOTAL_PARCIAL,'+; //16
                                                'IND_CANCEL   ,'+; //17
                                                'QUANT_CANCEL ,'+; //18
                                                'VLR_CANCEL   ,'+; //19
                                                'CANCEL_ACRES ,'+; //20
                                                'IAT          ,'+; //21
                                                'IPPT         ,'+; //22
                                                'CASASDECQTD,'+; //23
                                                'CASASDECUNI,'+; //24
                                                'DATA_MOV     ,'+; //25
                                                'CHV_CRIPT    ,'+; //26
                                                'SR_DELETED )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(m_numeroSerie)+','+; //1
                                                sr_cdbvalue(m_MFAdicional)+','+; //2
                                                sr_cdbvalue(m_ModeloImp)+','+; //3
                                                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                                                sr_cdbvalue(mdocumento)+','+; //5
                                                sr_cdbvalue(mnum_ccf)+','+; //6
                                                sr_cdbvalue(STRZERO(mnum_item,3))+','+; //7
                                                sr_cdbvalue(STRZERO(mcod_merc,10))+','+; //8
                                                sr_cdbvalue(cons_merc[1,9])+','+; //9
                                                sr_cdbvalue(STRZERO(mquantd*1000,7))+','+; //10
                                                sr_cdbvalue(cons_merc[1,14])+','+; //11
                                                sr_cdbvalue(STRZERO(cons_merc[1,46]*100,8))+','+; //12
                                                sr_cdbvalue(STRZERO(IF(cons_merc[1,46] > mvlr_fat,(cons_merc[1,46] - mvlr_fat)*100,0),8))+','+; //13
                                                sr_cdbvalue(STRZERO(IF(cons_merc[1,46] < mvlr_fat,(mvlr_fat - cons_merc[1,46])*100,0),8))+','+; //14
                                                sr_cdbvalue(STRZERO(mvlr_fat*100,14))+','+; //15
                                                sr_cdbvalue(maliq_prod)+','+; //16
                                                sr_cdbvalue('N')+','+; //17
                                                sr_cdbvalue(STRZERO(0,7))+','+; //18
                                                sr_cdbvalue(STRZERO(0,13))+','+; //19
                                                sr_cdbvalue(STRZERO(0,13))+','+; //20
                                                sr_cdbvalue(cons_merc[1,81])+','+; //21
                                                sr_cdbvalue(cons_merc[1,91])+','+; //22
                                                sr_cdbvalue('3')+','+; //23
                                                sr_cdbvalue('2')+','+; //24
                                                sr_cdbvalue(mdata_sis)+','+; //25
                                                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                                                sr_cdbvalue(' ')+')',,.f.)
                                        mquantd := 1

                                NEXT
                                atu_gt()
                                sr_getconnection():exec('COMMIT',,.f.)
                                atu_gt()
                                LOOP
                        ELSEIF ALLTRIM(mcod_bc) = "APV" 
				mnum_pv := VAL(sac_pv1())
				IF mnum_pv = 0
                                	LOOP
                                ENDIF
				mcons_ped := {}
                                sr_getconnection():exec("SELECT * FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pv,6)),,.t.,@mcons_ped)
                                IF LEN(mcons_ped) = 0 
                                        atencao('Pre-Venda nao encontrado em nosso arquivos...')
                                        wvw_lclosewindow()
                                        mnum_pv := 0
                                        LOOP
                                ENDIF
                                mcod_cli := VAL(mcons_ped[1,23])
                                mpago := ' '
                                p := mtot_ := 0
                                FOR p = 1 TO LEN(mcons_ped)
                                        mtot_ := mtot_ + (mcons_ped[p,14]*mcons_ped[p,18])
                                NEXT
                                mcod_vend := VAL(mcons_ped[1,32])
                                p:=0
                                FOR p = 1 TO LEN(mcons_ped)
                                        cons_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_ped[p,6]),,.t.,@cons_merc)
                                        WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                                        botao(00,01,07,99)
                                        IF cons_merc[1,23] > 0
                                                setcor(6)  
                                                DEVPOS(00,20);DEVOUT('(Promocao)')
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                                        WVW_DrawLabel(,01,02,mcons_ped[p,6]+' - '+SUBSTR(mcons_ped[p,7],1,20),,,,, 'arial black',60,20,,,,,)
                                        WVW_DrawLabel(,04,02,'             '+SUBSTR(mcons_ped[p,7],21),,,,, 'arial black',60,20,,,,,)       
                                        mcod_merc := VAL(mcons_ped[p,6])
                                        mp_venda := mcons_ped[p,20]
                                        mvlr_fat := mcons_ped[p,18]
                                        mvlr_fat := iat(mvlr_fat,mcons_ped[p,81])
                                        DEVPOS(00,80);DEVOUT('Preco   R$:')
                                        WVW_DrawLabel(,04,70,TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98])),,,240,, 'arial black',60,30,,,,,)
                                        setcor(1)                                                                                 
                                        mobs_prod := mcons_ped[p,58]                                                              
                                        mquantd := mcons_ped[p,14]                                                                
                                        IF ! EMPTY(cons_merc[1,28]) .AND. cons_merc[1,28] >= (cons_merc[1,56] - mquantd) .AND. cons_merc[1,9] <> "DIVERSOS" .AND. m_set[1,107] = "S" .AND. m_indiv[1,26] <> "T"
                                                atencao("SALDO esta menor que o ESTOQUE MINIMO: "+TRANSFORM(cons_merc[1,28],"9,999,999.99")+" estipulado !!!")                                       
                                        ENDIF                                                                                                                                                              
                                        mcomissao := mcons_ped[p,53]                                                                                                                                                                                                                       
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
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                                
                                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]                                                                                                                                                                                                                                                                                                                              
                                                atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')                                                                                                                                                                                                                                                                                                        
                                                LOOP                                                                                                                                                                                                                                                                                                                                                                 
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        IF mcons_ped[p,14] > cons_merc[1,55] .AND. m_set[1,16] = 'S'
                                                IF ! aut_sen('Produto: '+cons_merc[1,8]+'-'+cons_merc[1,9]+m_qp+'Saldo: '+TRANSFORM(cons_merc[1,55],'99,999.9999')+' MENOR que solicitado !!!'+m_qp+'Senha Autorizacao:','LIBSLDNF')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        setcor(1)
                                        mcod_fab := cons_merc[1,30]                                                                                                                                                                                                                                                                                                                                                    
                                        mfabrica := cons_merc[1,31]                                                                                                                                                                                                                                                                                                                                                    
                                        mtot_ped = 0                                                                                                                                                                                                                                                                                                                                                                 
                                        mtot_ped = mvlr_fat * mquantd                                                                                                                                                                                                                                                                                                                                                
                                        IF LEN(m_merc) = 0                                                                                                                                                                                                                                                                                                                                                           
                                                abrir_cupom()                                                                                                                                                                                                                                                                                                                                                
                                                mdocumento := NUM_CUPOM()                                                                                                                                                                                                                                                                                                                                    
                                                mnum_ecf   := NUM_CAIXA()                                                                                                                                                                                                                                                                                                                                    
                                                mnum_ccf   := NUM_CCF()
                                                mnum_item  := 0
                                                maliq_prod := ''
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        mabrir_cp := "*"                                                                                                                                                                                                                                                                                                                                                             
                                        AADD(m_merc,cons_merc[1,9])
                                        AADD(m_codigo,cons_merc[1,8])
                                        AADD(m_Cbarra,cons_merc[1,2])
                                        SR_BEGINTRANSACTION()                                                                                                                                                                                                                                                                                                                                                        
                                                TRY                                                                                                                                                                                                                                                                                                                                                                          
                                                aret:={}
                                                cComm  := "select saldo_mer,saldo_fis,sr_recno from sacmerc where cod_merc = "+sr_cdbvalue(mcod_merc)
                                                sr_getconnection():exec(ccomm,,.t.,@aret)
                                                ccomm :="update sacmerc set saldo_fis = "+sr_cdbvalue(aret[1,2] - mquantd)+" where cod_merc = "+sr_cdbvalue(mcod_merc)
                                                sr_getconnection():exec(ccomm,,.f.)
                                                sr_committransaction()
                                                CATCH e                                                                                                                                                                                                                                                                                                                                                                      
                                        SR_ENDTRANSACTION()                                                                                                                                                                                                                                                                                                                                                          
                                        END                                                                                                                                                                                                                                                                                                                                                                          
                                        mdesconto := mpreco := 0
                                        IF mp_venda < mvlr_fat
                                                mdesconto := 0
                                                mpreco := mvlr_fat
                                        ELSE
                                                mpreco := mp_venda
                                                //IF m_cfg[89] = '%'
                                                //        mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                                //ELSE
                                                        mdesconto := mquantd*mp_venda - mquantd*mvlr_fat
                                                //ENDIF
                                        ENDIF
                                        mver_isento := vercst(cons_merc[1,68])
                                        //mver_isento := cons_merc[1,61]  //vlr_isento(mcod_merc)
                                        mvalor_aliq := 0
                                        IF mver_isento = 'I'
                                                mvlr_aliq := 'II'
                                                maliq_prod := 'I1'
                                        ELSEIF mver_isento = 'N'
                                                mvlr_aliq := 'NN'
                                                maliq_prod := 'N1'
                                        ELSEIF mver_isento = 'F'
                                                maliq_prod := 'F1'
                                                mvlr_aliq := 'FF'
                                        ELSEIF mver_isento = 'S'
                                                IF cons_merc[1,62] > 0
                                                        mvlr_aliq := maliq_prod := ALLTRIM(STR(cons_merc[1,62])+'S')
                                                ELSE
                                                        maliq_prod := 'SI'
                                                        mvlr_aliq := 'SI'
                                                ENDIF
                                        ELSE
                                                IF cons_merc[1,62] > 0
                                                        mvlr_aliq := cons_merc[1,62]
                                                ELSE
                                                        cons_merc[1,62] := m_set[1,20]
                                                        mvlr_aliq := m_set[1,20]
                                                ENDIF
                                                mvalor_aliq := mvlr_aliq
                                                //mtot_imposto := mtot_imposto + ((mquantd * mpreco) * (mvlr_aliq / 100))
                                                maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},30,.T. )
                                                IF SUBSTR(maliq_prod,1,2) # 'OK'
                                                        maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},30,.T. )
                                                        IF SUBSTR(maliq_prod,1,2) # 'OK'
                                                                atencao('Esta Aliquota nao estar cadastrada no ECF...')
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                                IF m_indiv[1,37] = 'C:\ACBRMONITORPLUS\'
                                                        maliq_prod := SUBSTR(maliq_prod,10)
                                                        mvlr_aliq := maliq_prod
                                                ELSE
                                                        maliq_prod := 'T'+SUBSTR(maliq_prod,5,2)
                                                        mvlr_aliq := maliq_prod
                                                ENDIF
                                        ENDIF
                                        cont_itens ++
                                        IF mvlr_fat = 0                                                                                                                                                                                                                                                                                                                                                              
                                        *                         1       2        3           4          5        6            7         8           9            10             11              12            13           14           15          16          17              18           19   20        21         22         23           24      25        26             27           28        29        30        31       32       33         34            35           36         37       38          39
                                        *                             40        41 42 43    44                                                                                                                                                                                                                                                                                                                       
                                                AADD(m_matriz,{mquantd,mvlr_fat,        0,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],       0,              0,cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,phora_ecf,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                               cons_merc[1,47],'  ',0,0,cont_itens,0,mvalor_aliq,ver_ncm(cons_merc[1,70],cons_merc[1,68])})
                                        ELSE                                                                                                                                                                                                                                                                                                                                                                         
                                                AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],mp_venda,cons_merc[1,45],cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,phora_ecf,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                               cons_merc[1,47],'  ',0,0,cont_itens,0,mvalor_aliq,ver_ncm(cons_merc[1,70],cons_merc[1,68])})
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        mensagem("Imprimindo o Produto")                                                                                                                                                                                                                                                                                                                                             
                                        vende_prod(STRZERO(VAL(cons_merc[1,8]),13),cons_merc[1,9]+'  '+ALLTRIM(mobs_prod),mvlr_aliq,'F',mquantd,qtd,mpreco,'$',IF(mdesconto<0,mdesconto*-1,mdesconto),cons_merc[1,14],IF(mdesconto<0,'A','D'))
                                        mdesconto := 0                                                                                                                                                                                                                                                                                                                                                               
                                        mcont_item ++                                                                                                                                                                                                                                                                                                                                                                
                                        // ATUALIZANDO ARQUIVO DE MOVIMENTOS                                                                                                                                                                                                                                                                                                                                         
                                        mcampo_arq :=  'empresa         ,';//1
                                                      +'documento       ,';//2
                                                      +'num_ecf         ,';//3
                                                      +'gru_sub         ,';//4
                                                      +'codigo          ,';//5
                                                      +'produto         ,';//6
                                                      +'cod_fab         ,';//7
                                                      +'fabrica         ,';//8
                                                      +'unidade         ,';//9
                                                      +'data_s_e        ,';//10
                                                      +'ent_sai         ,';//11
                                                      +'quantd          ,';//12
                                                      +'pr_venda        ,';//13
                                                      +'vl_vend         ,';//14
                                                      +'cod_vend        ,';//15
                                                      +'vl_fatura       ,';//16
                                                      +'pr_unit         ,';//17
                                                      +'cod_nota        ,';//18
                                                      +'isento          ,';//19
                                                      +'alimento        ,';//20
                                                      +'bebida          ,';//21
                                                      +'icm             ,';//22
                                                      +'tipo            ,';//23
                                                      +'num_ped          ' //24
                                                                                                      //    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24                                                                                                                                                                                                                                             
                                        cComm  := "INSERT INTO sacmovnt ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? , ?,' ')"
                                        apCode := SR_SQLParse( cComm, @nErr, @nPos )                                                                                                                                                                                                                                                                                                                                 
                                        cComm  := SR_SQLCodeGen(apCode,;                                                                                                                                                                                                                                                                                                                                             
                                               {mcodempresa         ,;//1
                                                'CP'+mdocumento     ,;//2
                                                mnum_ecf            ,;//3                                                                                                                                                                                                                                                                                                                                            
                                                cons_merc[1,7]       ,;//4
                                                mcod_merc,;//5
                                                cons_merc[1,9]      ,;//6
                                                cons_merc[1,30]       ,;//7
                                                SUBSTR(cons_merc[1,31],1,30),;//8
                                                cons_merc[1,14]       ,;//9
                                                mdata_sis           ,;//10
                                                "S"                 ,;//11
                                                mquantd             ,;//12
                                                mvlr_fat            ,;//13
                                                mvlr_fat            ,;//14
                                                cod_operado         ,;//15
                                                mvlr_fat            ,;//16
                                                cons_merc[1,42]       ,;//17
                                                "B"                 ,;//18
                                                cons_merc[1,61]        ,;//19
                                                cons_merc[1,21]      ,;//20
                                                cons_merc[1,62]        ,;//21
                                                IF(cons_merc[1,83] = "T",17,0),;//22
                                                "01",;//23
                                                STRZERO(mnum_pv,6);//24
                                                },sr_getconnection():nsystemid)
                                                sr_getconnection():exec(ccomm,,.f.)

                                        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                                                m_MFAdicional+; //2
                                                m_ModeloImp+; //3
                                                STRZERO(VAL(m_numerocaixa),2)+; //4
                                                mdocumento+SPACE(6-LEN(mdocumento))+; //5
                                                SUBSTR(mnum_ccf,1,6)+; //6
                                                STRZERO(mnum_item,3)+; //7
                                                STRZERO(mcod_merc,10)+SPACE(14-LEN(STRZERO(mcod_merc,10)))+; //8
                                                cons_merc[1,9]+SPACE(100-LEN(cons_merc[1,9]))+; //9
                                                STRZERO(mquantd*1000,7)+; //10
                                                cons_merc[1,14]+; //11
                                                STRZERO(cons_merc[1,46]*100,8)+; //12
                                                STRZERO(IF(cons_merc[1,46] > mvlr_fat,(cons_merc[1,46] - mvlr_fat)*100,0),8)+; //13
                                                STRZERO(IF(cons_merc[1,46] < mvlr_fat,(mvlr_fat - cons_merc[1,46])*100,0),8)+; //14
                                                STRZERO(mvlr_fat*100,14)+; //15
                                                maliq_prod+SPACE(7-LEN(maliq_prod))+; //16
                                                'N'+; //17
                                                STRZERO(0,7)+; //18
                                                STRZERO(0,13)+; //19
                                                STRZERO(0,13)+; //20
                                                cons_merc[1,81]+; //21
                                                cons_merc[1,91]+; //22
                                                '3'+; //23
                                                '2' //24
                                                DTOC(mdata_sis)
                                        sr_getconnection():exec('INSERT INTO r5 ('+;
                                                'NUMERO_FAB   ,'+; //1
                                                'MF_ADICIONAL ,'+; //2
                                                'MODELO_ECF   ,'+; //3
                                                'NUMERO_USU   ,'+; //4
                                                'COO          ,'+; //5
                                                'CCF_CVC_CBP  ,'+; //6
                                                'NUM_ITEM     ,'+; //7
                                                'COD_PROD     ,'+; //8
                                                'DESCRICAO    ,'+; //9
                                                'QUANTIDADE   ,'+; //10
                                                'UNIDADE      ,'+; //11
                                                'VLR_UNIT     ,'+; //12
                                                'DESCON_ITEM  ,'+; //13
                                                'ACRESC_ITEM  ,'+; //14
                                                'VLR_LIQ      ,'+; //15
                                                'TOTAL_PARCIAL,'+; //16
                                                'IND_CANCEL   ,'+; //17
                                                'QUANT_CANCEL ,'+; //18
                                                'VLR_CANCEL   ,'+; //19
                                                'CANCEL_ACRES ,'+; //20
                                                'IAT          ,'+; //21
                                                'IPPT         ,'+; //22
                                                'CASASDECQTD,'+; //23
                                                'CASASDECUNI,'+; //24
                                                'DATA_MOV     ,'+; //25
                                                'CHV_CRIPT    ,'+; //26
                                                'SR_DELETED )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(m_numeroSerie)+','+; //1
                                                sr_cdbvalue(m_MFAdicional)+','+; //2
                                                sr_cdbvalue(m_ModeloImp)+','+; //3
                                                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                                                sr_cdbvalue(mdocumento)+','+; //5
                                                sr_cdbvalue(mnum_ccf)+','+; //6
                                                sr_cdbvalue(STRZERO(mnum_item,3))+','+; //7
                                                sr_cdbvalue(STRZERO(mcod_merc,10))+','+; //8
                                                sr_cdbvalue(cons_merc[1,9])+','+; //9
                                                sr_cdbvalue(STRZERO(mquantd*1000,7))+','+; //10
                                                sr_cdbvalue(cons_merc[1,14])+','+; //11
                                                sr_cdbvalue(STRZERO(cons_merc[1,46]*100,8))+','+; //12
                                                sr_cdbvalue(STRZERO(IF(cons_merc[1,46] > mvlr_fat,(cons_merc[1,46] - mvlr_fat)*100,0),8))+','+; //13
                                                sr_cdbvalue(STRZERO(IF(cons_merc[1,46] < mvlr_fat,(mvlr_fat - cons_merc[1,46])*100,0),8))+','+; //14
                                                sr_cdbvalue(STRZERO(mvlr_fat*100,14))+','+; //15
                                                sr_cdbvalue(maliq_prod)+','+; //16
                                                sr_cdbvalue('N')+','+; //17
                                                sr_cdbvalue(STRZERO(0,7))+','+; //18
                                                sr_cdbvalue(STRZERO(0,13))+','+; //19
                                                sr_cdbvalue(STRZERO(0,13))+','+; //20
                                                sr_cdbvalue(cons_merc[1,81])+','+; //21
                                                sr_cdbvalue(cons_merc[1,91])+','+; //22
                                                sr_cdbvalue('3')+','+; //23
                                                sr_cdbvalue('2')+','+; //24
                                                sr_cdbvalue(mdata_sis)+','+; //25
                                                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                                                sr_cdbvalue(' ')+')',,.f.)


                                        mquantd := 1                                                                                                                                                                                                                                                                                                                                                                 
                                        sr_getconnection():exec('COMMIT',,.f.)                                                                                                                                                                                                                                                                                                                                       
                                NEXT
                                atu_gt()
                                LOOP
                        ELSEIF SUBSTR(mcod_bc,1,1) = "P" 
                                IF ! EMPTY(mnum_pv) .OR. ! EMPTY(mnum_ped)
                                        atencao('Ja foi informado um Pedido...')
                                        LOOP
                                ENDIF
                                mnum_ped := VAL(SUBSTR(mcod_bc,2))
                                op_tela(10,10,11,40,'NUMERO DO PEDIDO')
                                DEVPOS(00,01);DEVOUT('Numero do Pedido:')
                                DEVPOS(01,01);DEVOUT('Valor...........:')
                                @ 00,19 GET mnum_ped PICT '999999'
                                READ
                                IF LASTKEY() = 27
                                        mnum_ped := 0
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                mcons_ped := {}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@mcons_ped)
                                IF LEN(mcons_ped) = 0 
                                        atencao('Pedido nao encontrado em nosso arquivos...')
                                        wvw_lclosewindow()
                                        mnum_ped := 0
                                        LOOP
                                ENDIF
                                mpago := ' '
                                p := mtot_ := 0
                                mcod_cli := VAL(mcons_ped[1,23])
                                FOR p = 1 TO LEN(mcons_ped)
                                        mtot_ := mtot_ + (mcons_ped[p,14]*mcons_ped[p,18])
                                NEXT
                                setcor(3)
                                DEVPOS(01,19);DEVOUT(TRANSFORM(mtot_,'999,999.99'))
                                setcor(1)
                                IF mcons_ped[1,49] = 'C'
                                        atencao('Este pedido foi CANCELADO....')
                                ELSEIF mcons_ped[1,49] = '*'
                                        atencao('Este pedido ja foi PAGO !!!')
                                        mpago := '*'
                                ELSE
                                        mpago := ' '
                                ENDIF
                                IF mcons_ped[1,4] > mdata_sis
                                        atencao('Este pedido nao pode ser Recebido com esta DATA !!!')
                                        LOOP
                                ENDIF
                                IF 'N' = op_simnao('S','Confirma o Pedido:') .OR. LASTKEY() = 27
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                wvw_lclosewindow()
                                mcod_vend := VAL(mcons_ped[1,32])
                                p:=0
                                FOR p = 1 TO LEN(mcons_ped)
                                        cons_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_ped[p,6]),,.t.,@cons_merc)
                                        WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                                        botao(00,01,07,99)
                                        IF LEN(cons_merc) = 0
                                                atencao('Produto nao encontrado...')
                                                LOOP
                                        ENDIF
                                        IF cons_merc[1,23] > 0
                                                setcor(6)  
                                                DEVPOS(00,20);DEVOUT('(Promocao)')
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                                        WVW_DrawLabel(,01,02,mcons_ped[p,6]+' - '+SUBSTR(mcons_ped[p,7],1,20),,,,, 'arial black',60,20,,,,,)
                                        WVW_DrawLabel(,04,02,'             '+SUBSTR(mcons_ped[p,7],21),,,,, 'arial black',60,20,,,,,)       
                                        mcod_merc := VAL(mcons_ped[p,6])
                                        mp_venda := iat(mcons_ped[p,20],cons_merc[1,81])
                                        mvlr_fat := iat(mcons_ped[p,18],cons_merc[1,81])

                                        DEVPOS(00,80);DEVOUT('Preco   R$:')
                                        WVW_DrawLabel(,04,70,TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98])),,,240,, 'arial black',60,30,,,,,)
                                        setcor(1)                                                                                 
                                        mobs_prod := mcons_ped[p,58]                                                              
                                        mquantd := mcons_ped[p,14]                                                                
                                        IF ! EMPTY(cons_merc[1,28]) .AND. cons_merc[1,28] >= (cons_merc[1,56] - mquantd) .AND. cons_merc[1,9] <> "DIVERSOS" .AND. m_set[1,107] = "S" .AND. m_indiv[1,26] <> "T"
                                                atencao("SALDO esta menor que o ESTOQUE MINIMO: "+TRANSFORM(cons_merc[1,28],"9,999,999.99")+" estipulado !!!")                                       
                                        ENDIF                                                                                                                                                              
                                        mcomissao := mcons_ped[p,53]                                                                                                                                                                                                                       
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
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                                
                                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]                                                                                                                                                                                                                                                                                                                              
                                                atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                                                LOOP                                                                                                                                                                                                                                                                                                                                                                 
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        IF mcons_ped[p,14] > cons_merc[1,55] .AND. m_set[1,16] = 'S'
                                                IF ! aut_sen('Produto: '+cons_merc[1,8]+'-'+cons_merc[1,9]+m_qp+'Saldo: '+TRANSFORM(cons_merc[1,55],'99,999.9999')+' MENOR que solicitado !!!'+m_qp+'Senha Autorizacao:','LIBSLDNF')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        setcor(1)
                                        mcod_fab := cons_merc[1,30]                                                                                                                                                                                                                                                                                                                                                    
                                        mfabrica := cons_merc[1,31]                                                                                                                                                                                                                                                                                                                                                    
                                        mtot_ped = 0                                                                                                                                                                                                                                                                                                                                                                 
                                        mtot_ped = mvlr_fat * mquantd                                                                                                                                                                                                                                                                                                                                                
                                        IF LEN(m_merc) = 0                                                                                                                                                                                                                                                                                                                                                           
                                                abrir_cupom()
                                                mdocumento := NUM_CUPOM()                                                                                                                                                                                                                                                                                                                                    
                                                mnum_ecf   := NUM_CAIXA()                                                                                                                                                                                                                                                                                                                                    
                                                mnum_ccf   := NUM_CCF()
                                                mnum_item  := 0
                                                maliq_prod := ''
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        mabrir_cp := "*"                                                                                                                                                                                                                                                                                                                                                             
                                        AADD(m_merc,cons_merc[1,9])
                                        AADD(m_codigo,cons_merc[1,8])
                                        AADD(m_Cbarra,cons_merc[1,2])
                                        SR_BEGINTRANSACTION()                                                                                                                                                                                                                                                                                                                                                        
                                                TRY                                                                                                                                                                                                                                                                                                                                                                          
                                                aret:={}
                                                cComm  := "select saldo_mer,saldo_fis,sr_recno from sacmerc where cod_merc = "+sr_cdbvalue(mcod_merc)
                                                sr_getconnection():exec(ccomm,,.t.,@aret)
                                                ccomm :="update sacmerc set saldo_fis = "+sr_cdbvalue(aret[1,2] - mquantd)+" where cod_merc = "+sr_cdbvalue(mcod_merc)
                                                sr_getconnection():exec(ccomm,,.f.)
                                                sr_committransaction()
                                                CATCH e                                                                                                                                                                                                                                                                                                                                                                      
                                        SR_ENDTRANSACTION()                                                                                                                                                                                                                                                                                                                                                          
                                        END                                                                                                                                                                                                                                                                                                                                                                          
                                        mdesconto := mpreco := 0
                                        IF mp_venda < mvlr_fat
                                                mdesconto := 0
                                                mpreco := mvlr_fat
                                        ELSE
                                                mpreco := mp_venda
                                                //IF m_cfg[89] = '%'
                                                //        mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                                //ELSE
                                                        mdesconto := (mquantd*mp_venda) - (mquantd*mvlr_fat)
                                                //ENDIF
                                        ENDIF
                                        mver_isento := vercst(cons_merc[1,68])
                                        //mver_isento := cons_merc[1,61]  //vlr_isento(mcod_merc)
                                        mvalor_aliq := 0
                                        IF mver_isento = 'I'
                                                mvlr_aliq := 'II'
                                                maliq_prod := 'I1'
                                        ELSEIF mver_isento = 'N'
                                                mvlr_aliq := 'NN'
                                                maliq_prod := 'N1'
                                        ELSEIF mver_isento = 'F'
                                                maliq_prod := 'F1'
                                                mvlr_aliq := 'FF'
                                        ELSEIF mver_isento = 'S'
                                                IF cons_merc[1,62] > 0
                                                        mvlr_aliq := maliq_prod := ALLTRIM(STR(cons_merc[1,62])+'S')
                                                ELSE
                                                        maliq_prod := 'SI'
                                                        mvlr_aliq := 'SI'
                                                ENDIF
                                        ELSE
                                                IF cons_merc[1,62] > 0
                                                        mvlr_aliq := cons_merc[1,62]
                                                ELSE
                                                        cons_merc[1,62] := m_set[1,20]
                                                        mvlr_aliq := m_set[1,20]
                                                ENDIF
                                                mvalor_aliq := mvlr_aliq
                                                //mtot_imposto := mtot_imposto + ((mquantd * mpreco) * (mvlr_aliq / 100))
                                                maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},30,.T. )
                                                IF SUBSTR(maliq_prod,1,2) # 'OK'
                                                        maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},30,.T. )
                                                        IF SUBSTR(maliq_prod,1,2) # 'OK'
                                                                atencao('Esta Aliquota nao estar cadastrada no ECF...')
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                                IF m_indiv[1,37] = 'C:\ACBRMONITORPLUS\'
                                                        maliq_prod := SUBSTR(maliq_prod,10)
                                                        mvlr_aliq := maliq_prod
                                                ELSE
                                                        maliq_prod := 'T'+SUBSTR(maliq_prod,5,2)
                                                        mvlr_aliq := maliq_prod
                                                ENDIF
                                        ENDIF
                                        cont_itens ++
                                        IF mvlr_fat = 0                                                                                                                                                                                                                                                                                                                                                              
                                        *                         1       2        3           4          5        6            7         8           9            10             11              12            13           14           15          16          17              18           19   20        21         22         23           24      25        26             27           28        29        30        31       32       33         34            35           36         37       38          39
                                        *                             40        41 42 43    44                                                                                                                                                                                                                                                                                                                       
                                                AADD(m_matriz,{mquantd,mvlr_fat,        0,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],       0,              0,cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,phora_ecf,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                               cons_merc[1,47],'  ',0,0,cont_itens,0,mvalor_aliq,ver_ncm(cons_merc[1,70],cons_merc[1,68])})
                                        ELSE                                                                                                                                                                                                                                                                                                                                                                         
                                                AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],mp_venda,cons_merc[1,45],cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,phora_ecf,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                               cons_merc[1,47],'  ',0,0,cont_itens,0,mvalor_aliq,ver_ncm(cons_merc[1,70],cons_merc[1,68])})
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                                        //ATENCAO(STRZERO(MDESCONTO,10,2))
                                        mensagem("Imprimindo o Produto")
                                        vende_prod(STRZERO(VAL(cons_merc[1,8]),13),cons_merc[1,9]+'  '+ALLTRIM(mobs_prod),mvlr_aliq,'F',mquantd,qtd,mpreco,'$',IF(mdesconto<0,mdesconto*-1,mdesconto),cons_merc[1,14],IF(mdesconto<0,'A','D'))
                                        mdesconto := 0                                                                                                                                                                                                                                                                                                                                                               
                                        mcont_item ++                                                                                                                                                                                                                                                                                                                                                                
                                        // ATUALIZANDO ARQUIVO DE MOVIMENTOS                                                                                                                                                                                                                                                                                                                                         
                                        mcampo_arq :=  'empresa         ,';//1                                                                                                                                                                                                                                                                                                                                       
                                                      +'documento       ,';//2                                                                                                                                                                                                                                                                                                                                       
                                                      +'num_ecf         ,';//3                                                                                                                                                                                                                                                                                                                                       
                                                      +'gru_sub         ,';//4                                                                                                                                                                                                                                                                                                                                       
                                                      +'codigo          ,';//5                                                                                                                                                                                                                                                                                                                                       
                                                      +'produto         ,';//6                                                                                                                                                                                                                                                                                                                                       
                                                      +'cod_fab         ,';//7                                                                                                                                                                                                                                                                                                                                       
                                                      +'fabrica         ,';//8                                                                                                                                                                                                                                                                                                                                       
                                                      +'unidade         ,';//9                                                                                                                                                                                                                                                                                                                                       
                                                      +'data_s_e        ,';//10                                                                                                                                                                                                                                                                                                                                      
                                                      +'ent_sai         ,';//11                                                                                                                                                                                                                                                                                                                                      
                                                      +'quantd          ,';//12                                                                                                                                                                                                                                                                                                                                      
                                                      +'pr_venda        ,';//13                                                                                                                                                                                                                                                                                                                                      
                                                      +'vl_vend         ,';//14                                                                                                                                                                                                                                                                                                                                      
                                                      +'cod_vend        ,';//15                                                                                                                                                                                                                                                                                                                                      
                                                      +'vl_fatura       ,';//16                                                                                                                                                                                                                                                                                                                                      
                                                      +'pr_unit         ,';//17                                                                                                                                                                                                                                                                                                                                      
                                                      +'cod_nota        ,';//18                                                                                                                                                                                                                                                                                                                                      
                                                      +'isento          ,';//19                                                                                                                                                                                                                                                                                                                                      
                                                      +'alimento        ,';//20                                                                                                                                                                                                                                                                                                                                      
                                                      +'bebida          ,';//21                                                                                                                                                                                                                                                                                                                                      
                                                      +'icm             ,';//22                                                                                                                                                                                                                                                                                                                                      
                                                      +'tipo            ,';//23
                                                      +'num_ped          ' //24
                                                                                                      //    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24                                                                                                                                                                                                                                             
                                        cComm  := "INSERT INTO sacmovnt ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? , ?,' ')"
                                        apCode := SR_SQLParse( cComm, @nErr, @nPos )                                                                                                                                                                                                                                                                                                                                 
                                        cComm  := SR_SQLCodeGen(apCode,;                                                                                                                                                                                                                                                                                                                                             
                                               {mcodempresa         ,;//1                                                                                                                                                                                                                                                                                                                                            
                                                'CP'+mdocumento     ,;//2                                                                                                                                                                                                                                                                                                                                            
                                                mnum_ecf            ,;//3                                                                                                                                                                                                                                                                                                                                            
                                                cons_merc[1,7]       ,;//4                                                                                                                                                                                                                                                                                                                                            
                                                mcod_merc,;//5                                                                                                                                                                                                                                                                                                                                            
                                                cons_merc[1,9]      ,;//6                                                                                                                                                                                                                                                                                                                                            
                                                cons_merc[1,30]       ,;//7                                                                                                                                                                                                                                                                                                                                            
                                                SUBSTR(cons_merc[1,31],1,30),;//8                                                                                                                                                                                                                                                                                                                                      
                                                cons_merc[1,14]       ,;//9                                                                                                                                                                                                                                                                                                                                            
                                                mdata_sis           ,;//10                                                                                                                                                                                                                                                                                                                                           
                                                "S"                 ,;//11                                                                                                                                                                                                                                                                                                                                           
                                                mquantd             ,;//12                                                                                                                                                                                                                                                                                                                                           
                                                mvlr_fat            ,;//13                                                                                                                                                                                                                                                                                                                                           
                                                mvlr_fat            ,;//14                                                                                                                                                                                                                                                                                                                                           
                                                cod_operado         ,;//15                                                                                                                                                                                                                                                                                                                                           
                                                mvlr_fat            ,;//16                                                                                                                                                                                                                                                                                                                                           
                                                cons_merc[1,42]       ,;//17                                                                                                                                                                                                                                                                                                                                           
                                                "B"                 ,;//18                                                                                                                                                                                                                                                                                                                                           
                                                cons_merc[1,61]        ,;//19                                                                                                                                                                                                                                                                                                                                           
                                                cons_merc[1,21]      ,;//20                                                                                                                                                                                                                                                                                                                                           
                                                cons_merc[1,62]        ,;//21                                                                                                                                                                                                                                                                                                                                           
                                                IF(cons_merc[1,83] = "T",17,0),;//22                                                                                                                                                                                                                                                                                                                                  
                                                "01",;//23
                                                STRZERO(mnum_ped,6);//24
                                                },sr_getconnection():nsystemid)                                                                                                                                                                                                                                                                                                                                      
                                                sr_getconnection():exec(ccomm,,.f.)                                                                                                                                                                                                                                                                                                                                  
                                        mquantd := 1                                                                                                                                                                                                                                                                                                                                                                 

                                        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                                        m_MFAdicional+; //2
                                        m_ModeloImp+; //3
                                        STRZERO(VAL(m_numerocaixa),2)+; //4
                                        mdocumento+SPACE(6-LEN(mdocumento))+; //5
                                        SUBSTR(mnum_ccf,1,6)+; //6
                                        STRZERO(mnum_item,3)+; //7
                                        STRZERO(mcod_merc,10)+SPACE(14-LEN(STRZERO(mcod_merc,10)))+; //8
                                        cons_merc[1,9]+SPACE(100-LEN(cons_merc[1,9]))+; //9
                                        STRZERO(mquantd*1000,7)+; //10
                                        cons_merc[1,14]+; //11
                                        STRZERO(cons_merc[1,46]*100,8)+; //12
                                        STRZERO(IF(cons_merc[1,46] > mvlr_fat,(cons_merc[1,46] - mvlr_fat)*100,0),8)+; //13
                                        STRZERO(IF(cons_merc[1,46] < mvlr_fat,(mvlr_fat - cons_merc[1,46])*100,0),8)+; //14
                                        STRZERO(mvlr_fat*100,14)+; //15
                                        maliq_prod+SPACE(7-LEN(maliq_prod))+; //16
                                        'N'+; //17
                                        STRZERO(0,7)+; //18
                                        STRZERO(0,13)+; //19
                                        STRZERO(0,13)+; //20
                                        cons_merc[1,81]+; //21
                                        cons_merc[1,91]+; //22
                                        '3'+; //23
                                        '2'+; //24
                                        DTOC(mdata_sis)
                                        sr_getconnection():exec('INSERT INTO r5 ('+;
                                                'NUMERO_FAB   ,'+; //1
                                                'MF_ADICIONAL ,'+; //2
                                                'MODELO_ECF   ,'+; //3
                                                'NUMERO_USU   ,'+; //4
                                                'COO          ,'+; //5
                                                'CCF_CVC_CBP  ,'+; //6
                                                'NUM_ITEM     ,'+; //7
                                                'COD_PROD     ,'+; //8
                                                'DESCRICAO    ,'+; //9
                                                'QUANTIDADE   ,'+; //10
                                                'UNIDADE      ,'+; //11
                                                'VLR_UNIT     ,'+; //12
                                                'DESCON_ITEM  ,'+; //13
                                                'ACRESC_ITEM  ,'+; //14
                                                'VLR_LIQ      ,'+; //15
                                                'TOTAL_PARCIAL,'+; //16
                                                'IND_CANCEL   ,'+; //17
                                                'QUANT_CANCEL ,'+; //18
                                                'VLR_CANCEL   ,'+; //19
                                                'CANCEL_ACRES ,'+; //20
                                                'IAT          ,'+; //21
                                                'IPPT         ,'+; //22
                                                'CASASDECQTD,'+; //23
                                                'CASASDECUNI,'+; //24
                                                'DATA_MOV     ,'+; //25
                                                'CHV_CRIPT    ,'+; //26
                                                'SR_DELETED )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(m_numeroSerie)+','+; //1
                                                sr_cdbvalue(m_MFAdicional)+','+; //2
                                                sr_cdbvalue(m_ModeloImp)+','+; //3
                                                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                                                sr_cdbvalue(mdocumento)+','+; //5
                                                sr_cdbvalue(mnum_ccf)+','+; //6
                                                sr_cdbvalue(STRZERO(mnum_item,3))+','+; //7
                                                sr_cdbvalue(STRZERO(mcod_merc,10))+','+; //8
                                                sr_cdbvalue(cons_merc[1,9])+','+; //9
                                                sr_cdbvalue(STRZERO(mquantd*1000,7))+','+; //10
                                                sr_cdbvalue(cons_merc[1,14])+','+; //11
                                                sr_cdbvalue(STRZERO(cons_merc[1,46]*100,8))+','+; //12
                                                sr_cdbvalue(STRZERO(IF(cons_merc[1,46] > mvlr_fat,(cons_merc[1,46] - mvlr_fat)*100,0),8))+','+; //13
                                                sr_cdbvalue(STRZERO(IF(cons_merc[1,46] < mvlr_fat,(mvlr_fat - cons_merc[1,46])*100,0),8))+','+; //14
                                                sr_cdbvalue(STRZERO(mvlr_fat*100,14))+','+; //15
                                                sr_cdbvalue(maliq_prod)+','+; //16
                                                sr_cdbvalue('N')+','+; //17
                                                sr_cdbvalue(STRZERO(0,7))+','+; //18
                                                sr_cdbvalue(STRZERO(0,13))+','+; //19
                                                sr_cdbvalue(STRZERO(0,13))+','+; //20
                                                sr_cdbvalue(cons_merc[1,81])+','+; //21
                                                sr_cdbvalue(cons_merc[1,91])+','+; //22
                                                sr_cdbvalue('3')+','+; //23
                                                sr_cdbvalue('2')+','+; //24
                                                sr_cdbvalue(mdata_sis)+','+; //25
                                                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                                                sr_cdbvalue(' ')+')',,.f.)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                NEXT
                                atu_gt()
                                LOOP
                        ENDIF

                        IF SUBSTR(mcod_bc,1,1) = "2" .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                                IF ALLTRIM(m_set[1,179]) = 'TOLEDO'
                                        IF m_set[1,159] = 'V'
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,5))
                                        ELSE
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,6))
                                        ENDIF
                                ELSE
                                        IF m_set[1,159] = 'V'
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,6))
                                        ELSE
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,5))
                                        ENDIF
                                ENDIF
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                                IF LEN(cons_merc) = 0
                                        atencao("Codigo Barra nao cadastrado")
                                        LOOP
                                ENDIF
                        /*
                        ELSEIF SUBSTR(mcod_bc,1,1) = '4' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0) .AND. m_set[1,159] <> 'N'
                                mcod_merc := VAL(SUBSTR(mcod_bc,2,4))
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                                IF LEN(cons_merc) = 0
                                        atencao('Codigo Barra nao cadastrado')
                                        LOOP
                                ENDIF
                                mmerc := cons_merc[1,9]
                        */
                        ELSEIF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_bc),,.t.,@cons_merc)
                                IF LEN(cons_merc) > 0
                                        m_produto := {}
                                        IF ! EMPTY(mnum_ped)
                                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(cons_merc[1,8]),,.t.,@m_produto)
                                        ELSEIF ! EMPTY(mnum_pv)
                                                sr_getconnection():exec("SELECT * FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pv,6))+" AND pcod_merc = "+sr_cdbvalue(cons_merc[1,8]),,.t.,@m_produto)
                                        ENDIF
                                        IF LEN(m_produto) > 0 .AND. RTRIM(cons_merc[1,9]) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                                alt_prod2()
                                                LOOP
                                        ENDIF
                                ELSE
                                        cons_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE ref = "+sr_cdbvalue(SUBSTR(mcod_bc,1,10)),,.t.,@cons_merc)
                                        IF LEN(cons_merc) = 0
                                                atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                                LOOP
                                        ENDIF
                                ENDIF
                                mcod_merc := VAL(mcod_bc)
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                                IF LEN(cons_merc) = 0
                                        atencao("Codigo da mercadoria nao cadastrado")
                                        LOOP
                                ENDIF
                        ENDIF
                ELSEIF EMPTY(mmerc)
                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,,STRZERO(mvarejo,1),mperc),f4_merc1(,,STRZERO(mvarejo,1),mperc))
                        //mcod_merc := VAL(f4_merc(,,STRZERO(mvarejo,1),mperc))
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                        IF LEN(cons_merc) = 0
                                atencao("Codigo da mercadoria nao cadastrado")
                                LOOP
                        ENDIF
                        mmerc := cons_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF FILE(ALLTRIM(m_indiv[1,29])+'P'+cons_merc[1,8]+'.jpg')
                        limpa(12,01,26,53)
                        botao(12,01,26,53)
                        WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_indiv[1,29])+'P'+cons_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,29])+'P'+cons_merc[1,8]+'.bmp')
                        limpa(12,01,26,53)
                        botao(12,01,26,53)
                        WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_indiv[1,29])+'P'+cons_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+cons_merc[1,8]+'.jpg')
                        limpa(12,01,26,53)
                        botao(12,01,26,53)
                        WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+cons_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+cons_merc[1,8]+'.bmp')
                        limpa(12,01,26,53)
                        botao(12,01,26,53)
                        WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+cons_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                        botao(12,01,26,53)
                	WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF
                IF mcont_item >= m_set[1,34] .AND. m_set[1,34] > 0
                        atencao('Nao e possivel incluir mais item porque ja ultrapassou o numero maximo de itens estipulado que e de '+STRZERO(m_set[1,34],5))
                        WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                        LOOP
                ENDIF
                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                        WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                        LOOP
                ENDIF
                // DESATIVA O FECHAMENTO DO PEDIDO
                SET KEY -9 TO                     // neste mesmo PRG. <F10>Tecla
                //
                mcod_merc := VAL(cons_merc[1,8])
                setcor(3)
                @ 28,14 SAY mcod_merc
                @ 29,14 SAY cons_merc[1,9]
                @ 33,14 SAY cons_merc[1,56] PICT '9,999,999.99'
                @ 34,14 SAY cons_merc[1,55] PICT '9,999,999.99'
                setcor(1)
                mperc := 0
                IF cons_merc[1,23] > 0
                        mvlr_fat = iat(cons_merc[1,46] - (cons_merc[1,46] * (cons_merc[1,23] / 100)),cons_merc[1,81])
                        mp_venda = iat(cons_merc[1,46],cons_merc[1,81])

                        //mp_venda = mvlr_fat
                ELSE
/*
                        IF ver_serie() = "141225" .OR. ver_serie() = "141534" .OR. m_set[1,43] = 'S'
                                mperc := 0
                                @ 36,46 GET mperc PICT '999.99'
                                READ
                                IF (mperc > cons_merc[1,80] .AND. ! EMPTY(cons_merc[1,80]));
                                   .OR. (mperc > m_set[1,33] .AND. EMPTY(cons_merc[1,80]))
                                        IF ! aut_sen(TRANSFORM(mperc,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,mcod_merc)
                                                setcor(1)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mperc);mperc:= mperc * -1;ENDIF
                        ENDIF

                        IF mvarejo = 2
                                mvlr_fat = iat(cons_merc[1,46]*((cons_merc[1,50]/100)+1),m_set[1,103])
                                mp_venda = iat(cons_merc[1,46]*((cons_merc[1,50]/100)+1),m_set[1,103])
/*
                        ELSEIF ! EMPTY(mperc)   // > 0
                                mvlr_fat = iat(cons_merc[1,46]*((mperc/100)+1),m_set[1,103])
                                //IF ver_serie() ="141340" .OR. ver_serie() = "141225" .OR. ver_serie() = "141411"
                                IF ver_serie() = "141225" .OR. ver_serie() = "141534" .OR. m_set[1,43] = 'S'
                                        mp_venda = iat(cons_merc[1,46],m_set[1,103])
                                ELSE
                                        mp_venda = iat(cons_merc[1,46]*((mperc/100)+1),m_set[1,103])
                                ENDIF
*/
                        //ELSE
                                mp_venda := iat(cons_merc[1,46],cons_merc[1,81])
                                mvlr_fat := mp_venda
                        //ENDIF
                ENDIF
                WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                botao(00,01,10,119)
                IF cons_merc[1,23] > 0
                        setcor(6)
                        DEVPOS(00,20);DEVOUT('(Promocao)')
                ENDIF
                DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                WVW_DrawLabel(,01,02,cons_merc[1,8]+' - '+SUBSTR(cons_merc[1,9],1,30),,,,, 'arial black',60,15,,,,,)
                WVW_DrawLabel(,06,02,'             '+SUBSTR(cons_merc[1,9],31),,,,, 'arial black',60,15,,,,,)
                WVW_DrawLabel(,06,02,IF(! EMPTY(cons_merc[1,23]),'P:'+TRANSFORM(cons_merc[1,23],'99')+' %',''),,,245,, 'arial black',60,15,,,,,)
                IF cons_merc[1,84] = 'S'
                        mp_venda := mvlr_fat := iat((mvlr_fat * ver_dolar(mdata_sis)),cons_merc[1,81])
                ENDIF
                IF m_set[1,125] = 'S' .AND. cons_merc[1,23] = 0
                        mperc := 0
                        @ 36,46 GET mperc PICT '999.99'
                        READ
                        limpa(32,46,32,52)
                        IF (mperc > cons_merc[1,80] .AND. ! EMPTY(cons_merc[1,80]));
                           .OR. (mperc > m_set[1,33] .AND. EMPTY(cons_merc[1,80]))
                                IF ! aut_sen(TRANSFORM(mperc,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,mcod_merc)
                                        setcor(1)
                                        mquantd := 1
                                        LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mperc)
                                mperc:= mperc * -1
                                mp_venda = mvlr_fat
                                mvlr_fat = mvlr_fat*((mperc/100)+1)
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

                        ENDIF
                ENDIF
                mp_venda := iat(mp_venda,cons_merc[1,81])
                mvlr_fat := iat(mvlr_fat,cons_merc[1,81])
                DEVPOS(00,80);DEVOUT('Preco   R$:')
                WVW_DrawLabel(,06,70,TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98])),,,240,, 'arial black',60,30,,,,,)
                setcor(1)
                IF cons_merc[1,24] = 'N'
                        atencao('MERCADORIA NAO DISPONIVEL PARA VENDA',3)
                        LOOP
                ENDIF
                mmerc := cons_merc[1,9]
                IF cons_merc[1,25] = "S"
                        @ 21,14 GET mmerc PICT '@!'
                        READ
                ENDIF
                IF LASTKEY() = 27;LOOP;ENDIF
                IF SUBSTR(m_set[1,9],1,1) = 'P' .AND. cons_merc[1,14] <> 'PL' .OR. cons_merc[1,73] = 'SERI'
                        mobs_prod := SPACE(40)
                        mobs_prod1 := SPACE(40)
                        op_tela(22,10,24,51,' O B E R V A C A O   D O   P R O D U T O')
                        WVW_DrawBoxGet(,01,01,LEN(mobs_prod))
                        @ 00,01 GET mobs_prod VALID IF(EMPTY(mobs_prod) .AND. cons_merc[1,14]='PL',.F.,.T.)
                        @ 01,01 GET mobs_prod1
                        READ
                        wvw_lclosewindow()
                ENDIF
                mensagem("<F8> para consultar aplicacao do produto")
                IF SUBSTR(mcod_bc,1,1) = '2'  .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                        IF ALLTRIM(m_set[1,179]) = 'TOLEDO'
                                IF m_set[1,159] = 'V'
                                        mquantd := (VAL(SUBSTR(mcod_bc,8,5))/100) / mvlr_fat
                                ELSE
                                        mquantd := (VAL(SUBSTR(mcod_bc,8,5))/1000)
                                ENDIF
                        ELSE
                                IF m_set[1,159] = 'V'
                                        mquantd := (VAL(SUBSTR(mcod_bc,8,5))/1000)
                                ELSE
                                        mquantd := (VAL(SUBSTR(mcod_bc,8,5))/100) / mvlr_fat
                                ENDIF
                        ENDIF
                        DEVPOS(lba-3,53);DEVOUTPICT(mquantd,ALLTRIM(m_set[1,99]))
                        DEVPOS(lba-3,65);DEVOUTPICT(mvlr_fat,ALLTRIM(m_set[1,98]))
                        mcomissao := cons_merc[1,26]
                        setcor(1)
                ELSE
                        setcor(1)
                        mensagem("<F8> para consultar aplicacao do produto")
                        mmasc_qtd := unidade(cons_merc[1,14])
                        //mquantd := 1
                        //@ lba-3,53 GET mquantd PICT ALLTRIM(m_set[1,99]) WHEN m_indiv[1,26] <> "T" VALID IF(EMPTY(mquantd),.F.,.T.)
                        @ 30,14 GET mquantd PICT ALLTRIM(mmasc_qtd) WHEN m_indiv[1,26] <> "T" VALID IF(EMPTY(mquantd),.F.,.T.)
                        READ
                        IF LASTKEY() = 27;LOOP;ENDIF

                        IF cons_merc[1,103] = 'S' .AND. mquantd > cons_merc[1,56]
                                atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                                LOOP
                        ENDIF
                        IF mquantd > cons_merc[1,56] .AND. cons_merc[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. SUBSTR(cons_merc[1,9],1,1) <> '@' .AND. (ver_serie() = '141490' .OR. ver_serie() = '141491' .OR. ver_serie() = '141492' .OR. ver_serie() = '141493')
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(cons_merc[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,mcod_merc)
                                        LOOP
                                ENDIF
                                mlibera := 'S'
                        ENDIF
                        IF ! EMPTY(cons_merc[1,28]) .AND. cons_merc[1,28] >= (cons_merc[1,56] - mquantd) .AND. cons_merc[1,9] <> "DIVERSOS" .AND. m_set[1,107] = "S" .AND. m_indiv[1,26] <> "T"
                                atencao("SALDO esta menor que o ESTOQUE MINIMO: "+TRANSFORM(cons_merc[1,28],"9,999,999.99")+" estipulado !!!")
                        ENDIF
                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,mcod_merc)
                                        LOOP
                                ENDIF
                        ENDIF
                        mensagem("Digite o valor do produto - <ESC>Abandonar")
                        @ 31,14 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF((cons_merc[1,23]>0 .AND. mvlr_fat < mp_venda) .OR. mvlr_fat = 0,.F.,.T.) WHEN m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T' .AND. EMPTY(mperc) .OR. mvlr_fat = 0
                        READ
                        IF LASTKEY() = 27
                                //UNLOCK
                                LOOP
                        ENDIF
                        IF ! EMPTY(m_set[1,154]) .AND. mvlr_fat > m_set[1,154]
                                IF ! aut_sen('Valor do Produto Solicitada: '+ALLTRIM(TRANSFORM(mvlr_fat,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,154],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,mcod_merc)
                                        LOOP
                                ENDIF
                        ENDIF
                        mcomissao := cons_merc[1,26]
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
                                IF ((mp_venda - mvlr_fat)/mp_venda)*100 > m_set[1,33] .AND. EMPTY(cons_merc[1,80]) .AND. EMPTY(mperc)
                                        IF ! aut_sen(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,mcod_merc)
                                                setcor(1)
                                                LOOP
                                        ENDIF
                                ELSEIF ((mp_venda - mvlr_fat)/mp_venda)*100 > cons_merc[1,80] .AND. ! EMPTY(cons_merc[1,80]) .AND. EMPTY(mperc)
                                        IF ver_serie() = "141220" .OR. ver_serie() = "141350" .OR. ver_serie() = "141384"
                                                atencao(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido..")
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                        IF ! aut_sen(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,mcod_merc)
                                                setcor(1)
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = "C" .AND. mvlr_fat < cons_merc[1,45]
                                        IF ! aut_sen("Senha de autorizacao:","LIB_DESC",,,mcod_merc)
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = "V" .AND. mvlr_fat < mp_venda
                                        IF ! aut_sen("Senha de autorizacao:","LIB_DESC",,,mcod_merc)
                                                LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                ENDIF
                IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                        atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                        LOOP
                ENDIF
                IF mquantd > cons_merc[1,55] .AND. m_set[1,16] = 'S'
                        IF ! aut_sen('Produto: '+cons_merc[1,8]+'-'+cons_merc[1,9]+m_qp+'Saldo: '+TRANSFORM(cons_merc[1,55],'99,999.9999')+' MENOR que solicitado !!!'+m_qp+'Senha Autorizacao:','LIBSLDNF')
                                LOOP
                        ENDIF
                ENDIF
                setcor(1)
                mvlr_fat := iat(mvlr_fat,cons_merc[1,81])
                mcod_fab := cons_merc[1,30]
                mfabrica := cons_merc[1,31]
                mtot_ped = 0
                mtot_ped = mvlr_fat * mquantd
                setcor(3)
                @ 32,14 SAY mtot_ped PICT ALLTRIM(m_set[1,98])
                setcor(1)
                //mcomissao := cons_merc[1,26]
                opcao := 'S'
                IF m_indiv[1,26] <> 'T'
                        opcao := op_simnao('S','Confirma Inclusao da Mercadoria:')
                ELSE
                        opcao := 'S'
                ENDIF
                IF opcao = "S"
		        IF LEN(m_merc) = 0
                                abrir_cupom(mecf_cpf)
                                mdocumento := NUM_CUPOM()
                        	mnum_ecf   := NUM_CAIXA()
                                mnum_ccf   := NUM_CCF()
                                mnum_item  := 0
                                maliq_prod := ''
        		ENDIF
                        mabrir_cp := "*"
                        mensagem("Imprimindo o Produto")
                        mdesconto := mpreco := 0
                        //IF mp_venda < mvlr_fat
                        //        mdesconto := 0
                        //        mpreco := mvlr_fat
                        //ELSE
                                mpreco := mp_venda
                                //IF m_cfg[89] = '%'
                                //        mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                //ELSE
                                        mdesconto := mquantd*mp_venda - mquantd*mvlr_fat
                                //ENDIF
                        //ENDIF
                                //mver_isento := cons_merc[1,61]  //vlr_isento(mcod_merc)
                                mver_isento := vercst(cons_merc[1,68])
                                mvalor_aliq := 0
                                IF mver_isento = 'I'
                                        mvlr_aliq := 'II'
                                        maliq_prod := 'I1'
                                ELSEIF mver_isento = 'N'
                                        mvlr_aliq := 'NN'
                                        maliq_prod := 'N1'
                                ELSEIF mver_isento = 'F'
                                        maliq_prod := 'F1'
                                        mvlr_aliq := 'FF'
                                ELSEIF mver_isento = 'S'
                                        IF cons_merc[1,62] > 0
                                                mvlr_aliq := maliq_prod := ALLTRIM(STR(cons_merc[1,62])+'S')
                                        ELSE
                                                maliq_prod := 'SI'
                                                mvlr_aliq := 'SI'
                                        ENDIF
                                ELSE
                                        IF cons_merc[1,62] > 0
                                                mvlr_aliq := cons_merc[1,62]
                                        ELSE
                                                cons_merc[1,62] := m_set[1,20]
                                                mvlr_aliq := m_set[1,20]
                                        ENDIF
                                        mvalor_aliq := mvlr_aliq
                                        maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},30,.T. )
                                        //atencao(maliq_prod)
                                        IF SUBSTR(maliq_prod,1,2) # 'OK'
                                                maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},30,.T. )
                                                IF SUBSTR(maliq_prod,1,2) # 'OK'
                                                        atencao('Esta Aliquota nao estar cadastrada no ECF...')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        //mtot_imposto := mtot_imposto + ((mquantd * mpreco) * (mvlr_aliq / 100))
                                        //atencao(maliq_prod+ ' - '+SUBSTR(maliq_prod,10))
                                        IF m_indiv[1,37] = 'C:\ACBRMONITORPLUS\'
                                                maliq_prod := SUBSTR(maliq_prod,10)
                                                mvlr_aliq := maliq_prod
                                        ELSE
                                                maliq_prod := 'T'+SUBSTR(maliq_prod,5,2)
                                                mvlr_aliq := maliq_prod
                                        ENDIF
                                ENDIF
                                IF ! vende_prod(STRZERO(VAL(cons_merc[1,8]),13),cons_merc[1,9]+'  '+ALLTRIM(mobs_prod)+' '+ALLTRIM(mobs_prod1),mvlr_aliq,'F',mquantd,qtd,mpreco,'$',IF(mdesconto<0,mdesconto*-1,mdesconto),cons_merc[1,14],IF(mdesconto<0,'A','D'))
                                        LOOP
                                ENDIF
                                mnum_item ++
                        AADD(m_merc,cons_merc[1,9])
                        AADD(m_codigo,mcod_merc)
                        AADD(m_Cbarra,cons_merc[1,2])
                        aret:={}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@aret)
                        mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] - mquantd)*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                        SR_BEGINTRANSACTION()
                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(aret[1,55] - mquantd)+" WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.f.)
                                        IF msem_cx = 0
                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] - mquantd)+",data_atu = "+sr_cdbvalue(mdata_sis)+" WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.f.)
                                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(mcod_merc)+','+; //4
                                                                                sr_cdbvalue(mquantd)+','+; //5
                                                                                sr_cdbvalue(aret[1,56])+','+; //6
                                                                                sr_cdbvalue(aret[1,56] - mquantd)+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC23ECF1')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue('INCLUSAO PRODUTO CUPOM')+','+; //11
                                                                                sr_cdbvalue('S')+','+; //11
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                        ENDIF
                                cont_itens ++
                                IF mvlr_fat = 0
                                *                         1       2        3            4          5        6               7            8            9               10             11              12            13               14            15            16            17              18           19   20           21             22               23          24        25        26             27              28        29        30        31       32         33         34              35                36      37      38          39
                                *                             40        41 42 43    44     45
                                        AADD(m_matriz,{mquantd,mvlr_fat,        0,cons_merc[1,7],mmerc,cons_merc[1,14],cons_merc[1,17],       0,              0,cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,phora_ecf,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                       cons_merc[1,47],'  ',0,0,cont_itens,0,mvalor_aliq,ver_ncm(cons_merc[1,70],cons_merc[1,68])})
                                ELSE
                                        AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,cons_merc[1,7],mmerc,cons_merc[1,14],cons_merc[1,17],mp_venda,cons_merc[1,45],cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,phora_ecf,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                       cons_merc[1,47],'  ',0,0,cont_itens,0,mvalor_aliq,ver_ncm(cons_merc[1,70],cons_merc[1,68])})
                                ENDIF
                                mdesconto := 0
                                mcont_item ++
                                // ATUALIZANDO ARQUIVO DE MOVIMENTOS
                                mcampo_arq :=  'empresa         ,';//1
                                              +'documento       ,';//2
                                              +'num_ecf         ,';//3
                                              +'gru_sub         ,';//4
                                              +'codigo          ,';//5
                                              +'produto         ,';//6
                                              +'cod_fab         ,';//7
                                              +'fabrica         ,';//8
                                              +'unidade         ,';//9
                                              +'data_s_e        ,';//10
                                              +'ent_sai         ,';//11
                                              +'quantd          ,';//12
                                              +'pr_venda        ,';//13
                                              +'vl_vend         ,';//14
                                              +'cod_vend        ,';//15
                                              +'vl_fatura       ,';//16
                                              +'pr_unit         ,';//17
                                              +'cod_nota        ,';//18
                                              +'isento          ,';//19
                                              +'alimento        ,';//20
                                              +'bebida          ,';//21
                                              +'icm             ,';//22
                                              +'tipo              '//23
                                                                                      //    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23
                                cComm  := "INSERT INTO sacmovnt ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,' ')"
                                apCode := SR_SQLParse( cComm, @nErr, @nPos )
                                cComm  := SR_SQLCodeGen(apCode,;
                                       {mcodempresa         ,;//1
                                        'CP'+mdocumento     ,;//2
                                        mnum_ecf            ,;//3
                                        cons_merc[1,7]       ,;//4
                                        mcod_merc,;//5
                                        mmerc               ,;//6
                                        cons_merc[1,30]       ,;//7
                                        SUBSTR(cons_merc[1,31],1,30),;//8
                                        cons_merc[1,14]       ,;//9
                                        mdata_sis           ,;//10
                                        "S"                 ,;//11
                                        mquantd             ,;//12
                                        mvlr_fat            ,;//13
                                        mvlr_fat            ,;//14
                                        cod_operado         ,;//15
                                        mvlr_fat            ,;//16
                                        cons_merc[1,42]       ,;//17
                                        "B"                 ,;//18
                                        cons_merc[1,61]        ,;//19
                                        cons_merc[1,21]      ,;//20
                                        cons_merc[1,62]        ,;//21
                                        IF(cons_merc[1,83] = "T",17,0),;//22
                                        "01";//23
                                        },sr_getconnection():nsystemid)
                                        sr_getconnection():exec(ccomm,,.f.)

                                mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                                        m_MFAdicional+; //2
                                        m_ModeloImp+; //3
                                        STRZERO(VAL(m_numerocaixa),2)+; //4
                                        mdocumento+SPACE(6-LEN(mdocumento))+; //5
                                        SUBSTR(mnum_ccf,1,6)+; //6
                                        STRZERO(mnum_item,3)+; //7
                                        STRZERO(mcod_merc,10)+SPACE(14-LEN(STRZERO(mcod_merc,10)))+; //8
                                        cons_merc[1,9]+SPACE(100-LEN(cons_merc[1,9]))+; //9
                                        STRZERO(mquantd*1000,7)+; //10
                                        cons_merc[1,14]+; //11
                                        STRZERO(cons_merc[1,46]*100,8)+; //12
                                        STRZERO(IF(cons_merc[1,46] > mvlr_fat,(cons_merc[1,46] - mvlr_fat)*100,0),8)+; //13
                                        STRZERO(IF(cons_merc[1,46] < mvlr_fat,(mvlr_fat - cons_merc[1,46])*100,0),8)+; //14
                                        STRZERO(mvlr_fat*100,14)+; //15
                                        maliq_prod+SPACE(7-LEN(maliq_prod))+; //16
                                        'N'+; //17
                                        STRZERO(0,7)+; //18
                                        STRZERO(0,13)+; //19
                                        STRZERO(0,13)+; //20
                                        cons_merc[1,81]+; //21
                                        cons_merc[1,91]+; //22
                                        '3'+; //23
                                        '2'+; //24
                                        DTOC(mdata_sis)
                                sr_getconnection():exec('INSERT INTO r5 ('+;
                                        'NUMERO_FAB   ,'+; //1
                                        'MF_ADICIONAL ,'+; //2
                                        'MODELO_ECF   ,'+; //3
                                        'NUMERO_USU   ,'+; //4
                                        'COO          ,'+; //5
                                        'CCF_CVC_CBP  ,'+; //6
                                        'NUM_ITEM     ,'+; //7
                                        'COD_PROD     ,'+; //8
                                        'DESCRICAO    ,'+; //9
                                        'QUANTIDADE   ,'+; //10
                                        'UNIDADE      ,'+; //11
                                        'VLR_UNIT     ,'+; //12
                                        'DESCON_ITEM  ,'+; //13
                                        'ACRESC_ITEM  ,'+; //14
                                        'VLR_LIQ      ,'+; //15
                                        'TOTAL_PARCIAL,'+; //16
                                        'IND_CANCEL   ,'+; //17
                                        'QUANT_CANCEL ,'+; //18
                                        'VLR_CANCEL   ,'+; //19
                                        'CANCEL_ACRES ,'+; //20
                                        'IAT          ,'+; //21
                                        'IPPT         ,'+; //22
                                        'CASASDECQTD,'+; //23
                                        'CASASDECUNI,'+; //24
                                        'DATA_MOV     ,'+; //25
                                        'CHV_CRIPT    ,'+; //26
                                        'SR_DELETED )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(m_numeroSerie)+','+; //1
                                        sr_cdbvalue(m_MFAdicional)+','+; //2
                                        sr_cdbvalue(m_ModeloImp)+','+; //3
                                        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                                        sr_cdbvalue(mdocumento)+','+; //5
                                        sr_cdbvalue(mnum_ccf)+','+; //6
                                        sr_cdbvalue(STRZERO(mnum_item,3))+','+; //7
                                        sr_cdbvalue(STRZERO(mcod_merc,10))+','+; //8
                                        sr_cdbvalue(mmerc)+','+; //9
                                        sr_cdbvalue(STRZERO(mquantd*1000,7))+','+; //10
                                        sr_cdbvalue(cons_merc[1,14])+','+; //11
                                        sr_cdbvalue(STRZERO(cons_merc[1,46]*100,8))+','+; //12
                                        sr_cdbvalue(STRZERO(IF(cons_merc[1,46] > mvlr_fat,(cons_merc[1,46] - mvlr_fat)*100,0),8))+','+; //13
                                        sr_cdbvalue(STRZERO(IF(cons_merc[1,46] < mvlr_fat,(mvlr_fat - cons_merc[1,46])*100,0),8))+','+; //14
                                        sr_cdbvalue(STRZERO(mvlr_fat*100,14))+','+; //15
                                        sr_cdbvalue(maliq_prod)+','+; //16
                                        sr_cdbvalue('N')+','+; //17
                                        sr_cdbvalue(STRZERO(0,7))+','+; //18
                                        sr_cdbvalue(STRZERO(0,13))+','+; //19
                                        sr_cdbvalue(STRZERO(0,13))+','+; //20
                                        sr_cdbvalue(cons_merc[1,81])+','+; //21
                                        sr_cdbvalue(cons_merc[1,91])+','+; //22
                                        sr_cdbvalue('3')+','+; //23
                                        sr_cdbvalue('2')+','+; //24
                                        sr_cdbvalue(mdata_sis)+','+; //25
                                        sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                                        sr_cdbvalue(' ')+')',,.f.)
                                atu_gt()
                                sr_committransaction()
                        sr_endtransaction()
                        mquantd := 1
                        **********
                        SELE("merc");ORDSETFOCUS(1)
                        **********
                        EXIT
                ENDIF
        ENDDO
        wvw_lclosewindow()
ENDDO
RETURN NIL
***************************  F I M  **********************************
*RECEBIMENTO DE TP"s
*********************
FUNCTION fecha_ecf1
*******************
LOCAL MPRG:="FECHA_ECF",;
      opcao,lci,lba,cba,i,mopcao,f,mtipo_comp,mtipo_pag,mtot_verif,mperc_comissao,li,lb,cb,mdiferenca,mtroco:=0,;
      m_recebe:={},mdinheiro,mn_banco,mn_cheque,mn_dup,mn_trans,mvencimento,mt_pag,mvalor,mn_fin,mtot_ipi,mbox_rece,;
      magencia,mc_c,mcorrente,mcartao_sn:=" ",aret:={},mvlr_cred:=0,mcredito_aux:=0,m_credito:={},Operacoes,;
      mdesc_tot:=0,mvlr_cartao:=0

MEMVAR mtot_nota,m_codigo,m_merc,m_matriz,mdocumento,mnum_ecf,mcod_bc,m_flag,mcgc,mcpf,minsc,mcliente,mcod_vend,mnum_ccf

PRIVATE mlin,mcartao,mprazo_cart,mdesc_cart,mcobra_fin,mtaxa_fin,m_desc:={},mdesconto,mreceb,mcom_ven,mcom_ap,mbanco,;
        mnome_vend,mperc,mcond_vezes,mcond_intev,mtp_vend,msub_total,mvl_vend:=0,mtot_icm:=0,mtipo_pg:=0,mvalor_aux,;
        string_devolvida,mtot_rece:=0,mn_cupom,mnome_arq:=' ',mvalor_cart:=0,mcod_cart,mdesc_cx:=0,mdesc_perc:=0,;
        mcredito:=0,mn_cred:=SPACE(8),nTotalAPagar:=0,mind_cartao:='00',m_flag_f:=' ',mdesc_p,mdesc_r,mdesc_u,;
        EasyTEF,mqtd_parc := 0,mind_tef:=' ',mdif_parc:=0
CLEAR GETS
mreceb := "R"
lci = 04
lba = 23
cba = 100
*----------------------------------------------
IF ! AbriArq("sacfin","fin");RETURN NIL;ENDIF
IF ! AbriArq("insopera","sen");RETURN NIL;ENDIF
IF ! AbriArq("saccli","cli");RETURN NIL;ENDIF
IF ! AbriArq("saccarta","car");RETURN NIL;ENDIF
*----------------------------------------------
ver_ven(cod_operado)
atencao(" Operador:"+cod_operado+"-"+RTRIM(sen->snome))
mtot_nota := sub_total()        //IBR_SUBTOTAL()
IF mtot_nota = 0
        atencao('O total da nota estar com valor zero....')
        RETURN NIL
ENDIF
/*
WHILE .T.
        i := mtot_nota := 0
        FOR i = 1 TO LEN(m_matriz)
                mtot_nota := mtot_nota + (m_matriz[i,1] * m_matriz[i,2])
        NEXT
        mtot_aux := sub_total()        //IBR_SUBTOTAL()
        IF mtot_aux = mtot_nota
                EXIT
        ENDIF
ENDDO
*/
//op_tela(00,00,50,50," RECEBIMENTOS CAIXA   -    TEF: "+m_indiv[1,41],,1)

tela_fecha := {}
tela_fecha := WVW_SAVESCREEN(,0,0,50,120)
botao(02,00,50,54,," RECEBIMENTOS CAIXA   -    TEF: "+m_indiv[1,41])
mdocumento := NUM_CUPOM()
mnum_ecf   := NUM_CAIXA()
mnum_ccf   := NUM_CCF()

li := 03
ci := 00
lb := 22
cb := 54
WHILE .T.
        ASIZE(m_desc,0)
        mensagem("Preencha os Campos - <ESC> p/Retornar ")
        mcom_ven := mcom_ap := mperc := mvl_vend := mperc_comissao := mprazo_cart := mdesc_cart := mtot_icm :=;
        mdinheiro := mcod_cart := mvalor := mtot_verif := mtot_ipi := mdiferenca := i := f := mtot_verif := mtot_rece := ;
        mvlr_cred := mdesc_p := mdesc_r := mdesc_u := mdesconto := 0
        mcliente = SPACE(40)
        mcpf := SPACE(11)
        mcgc := minsc := SPACE(14)
        mnome_vend := SPACE(30)
        opcao = "S"
        mtp_vend := mcond_vezes := mcond_intev := SPACE(2)
        mbanco := "C"
        mtipo_comp := "AV"
        mtipo_pag := mcartao_sn := SPACE(1)
        mn_banco := SPACE(3)
        mn_cheque := SPACE(6)
        mn_dup := mn_trans := magencia := SPACE(8)
        mc_c := SPACE(13)
        mvencimento := CTOD(" /  /  ")
        mt_pag := SPACE(1)
        mn_cupom := mn_cred:=SPACE(8)        
        i := 1

        ASIZE(m_recebe,0)
        DEVPOS(li  ,1);DEVOUT("Vend...:")
        DEVPOS(li+1,1);DEVOUT("Cliente:")
        DEVPOS(li+2,1);DEVOUT("CPF....:")
        DEVPOS(li+3,1);DEVOUT("CNPJ...:")
        DEVPOS(li+4,1);DEVOUT("End....:")
        DEVPOS(li+5,1);DEVOUT("Bairro.:")
        DEVPOS(li+6,1);DEVOUT("Cidade.:")
        DEVPOS(li+7,1);DEVOUT("Estado.:")
        DEVPOS(li+7,20);DEVOUT("CEP:")
        DEVPOS(li+9,1);DEVOUT("CREDITO:")
        @ li+10,0 TO li+10,cb
        DEVPOS(li+11,1);DEVOUT("Total da COMPRA R$:")
        @ li+17,0 TO li+17,cb
        DEVPOS(li+18,1);DEVOUT("Total RECEBIDO..R$:")
        DEVPOS(li+19,1);DEVOUT("Valor a RECEBER R$:")
        @ li+20,0 TO li+20,cb
        IF LASTKEY() = 27
                UNLOCK
                WVW_RESTSCREEN(,0,0,50,120,tela_fecha,.T.)
                RETURN NIL
        ENDIF
        mcod_cli := IF(EMPTY(mcod_cli),VAL(m_set[1,84]),mcod_cli)
        ***************
        SELE("cli");ORDSETFOCUS(1)
        GO TOP
        ***************
        @ li  ,09 GET mcod_vend PICT "999" VALID IF(EMPTY(mcod_vend),.F.,ven(@mcod_vend,li,14)) WHEN  EMPTY(mnum_ped) .AND. EMPTY(mnum_pv)
        @ li+1,09 GET mcod_cli PICT "99999" VALID ver_cli(mcod_cli,li+1,14)
        @ li+2,09 GET mcpf PICT "@@R 999.999.999-99" VALID IF(mcpf = SPACE(11),.T.,ver_cpf(mcpf)) WHEN mcod_cli = 0
        @ li+3,09 GET mcgc PICT "@@R 99.999.999/9999-99" VALID IF(mcgc = SPACE(14),.T.,ver_cgc(mcgc)) WHEN mcod_cli = 0 .AND. mcpf = SPACE(11)
        READ
        IF LASTKEY() = 27
                DBUNLOCKALL()
                LOOP
        ENDIF
        IF (m_set[1,43] = 'T' .OR. m_set[1,43] = 'S') .AND. m_set[1,125] = 'N'
                op_tela(10,10,13,54," DESCONTO ")
                DEVPOS(00,01);DEVOUT("Total Cupom..:")
                @ 01,00 TO 01,90
                DEVPOS(02,01);DEVOUT("Desconto (%).:")
                DEVPOS(03,01);DEVOUT("Desconto (R$):")
                setcor(3)
                DEVPOS(00,16);DEVOUT(TRANSFORM(mtot_nota,'999,999.99'))
                setcor(1)
                @ 02,16 GET mdesc_p PICT "999.99" WHEN men_get(0,0,'Desconto em PERCENTUAL')
                @ 03,16 GET mdesc_r PICT "999,999.99" WHEN EMPTY(mdesc_p) .AND. men_get(0,0,'Desconto em VALOR R$')
                READ
                fecha_tela()
                IF LASTKEY() = 27
                        DBUNLOCKALL()
                        LOOP
                ENDIF
        ENDIF
        ven(@mcod_vend,li,14)
        IF ! EMPTY(mdesc_p)
                mtot_aux  :=  mtot_nota 
                mdesc_tot  := mtot_aux * (mdesc_p / 100)
                mtot_nota := iat(mtot_nota - (mtot_nota * (mdesc_p/100)),2)
                //mdesconto := (mtot_nota * (mdesc_p/100))
                mdesconto := mtot_aux - mtot_nota
                mdesconto := mdesconto * -1
                mdesc_u := mdesc_p
        ELSEIF ! EMPTY(mdesc_r)
                mdesc_tot  := mdesc_r
                mtot_nota := mtot_nota - mdesc_r
                mdesconto := mdesc_r  * -1
                mdesc_u := iat((mdesc_r / mtot_nota) * 100,3)
        ENDIF
        IF mdesc_u > m_set[1,33]
                IF ! aut_sen('Desconto solicitado de '+TRANSFORM(mdesc_u,'9999.99')+' maior que o Autorizado de '+TRANSFORM(m_set[1,33],'9999.99')+'.. Senha de autorizacao:','LIB_DESC',,mcod_cli)
                        LOOP
                ENDIF
        ENDIF
        cons_cli := {}
        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
        IF LEN(cons_cli) = 0
                atencao('Cliente nao cadastrado !!!')
                LOOP
        ENDIF
        IF mcod_cli <> 0
                mcpf := cons_cli[1,34]
                mcgc := cons_cli[1,32]
                minsc := cons_cli[1,33]
        ENDIF
        setcor(3)
        DEVPOS(li+1,09);DEVOUT(STR(mcod_cli))
        DEVPOS(li+1,COL()+1);DEVOUT(cons_cli[1,3])
        DEVPOS(li+2,09);DEVOUTPICT(mcpf,"@@R 999.999.999-99")
        DEVPOS(li+3,09);DEVOUTPICT(mcgc,"@@R 99.999.999/9999-99")
        setcor(1)
        IF EMPTY(cons_cli[1,34]) .AND. EMPTY(cons_cli[1,32])
                @ li+1,14 GET cons_cli[1,3] PICT "@!"
                @ li+2,09 GET cons_cli[1,34] PICT "@@R 999.999.999-99" VALID IF(cons_cli[1,34] = SPACE(11),.T.,pesq_cpf(cons_cli[1,34],'cli',))        //VALID ver_cpf(cons_cli[1,34])
                @ li+3,09 GET cons_cli[1,32] PICT "@@R 99.999.999/9999-99" VALID IF(cons_cli[1,32] = SPACE(14),.T.,pesq_cgc(cons_cli[1,32],'cli',,'cli')) WHEN EMPTY(cons_cli[1,34])  //VALID ver_cgc(cons_cli[1,32])
                @ li+4,09 GET cons_cli[1,21] PICT "@!"
                @ li+5,09 GET cons_cli[1,22] PICT "@!"
                @ li+6,09 GET cons_cli[1,24] PICT "@!"
                @ li+7,09 GET cons_cli[1,25] PICT "@!"
                @ li+7,25 GET cons_cli[1,26] PICT "@!"
                READ
                IF LASTKEY() = 27
                        DBUNLOCKALL()
                        LOOP
                ENDIF
        ENDIF

        //WVW_DrawLabel(,li+8,ci,TRANSFORM(mtot_nota,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,35,,,,,)
        //SUB_BANNER(li+8,26,TRANSFORM(mtot_nota,"999,999.99"))
        //SUB_BANNER(li+5,30,TRANSFORM(mtot_nota,"999,999.99"))
        setcor(1)
        mdiferenca := iat(mtot_nota - mtot_verif)
        mcredito := 0
        mcredito := cli_dup(mcod_cli,'*')
        IF mcredito > 0
                setcor(3,'*')
                DEVPOS(li+9,9);DEVOUT(TRANSFORM(mcredito,'999,999.99'))
                setcor(1)
                mtipo_pg := 7
        ENDIF
        WHILE .T.
                IF msem_cx = 0
                        WVW_DrawLabel(,li+12,0,TRANSFORM(mtot_nota,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,35,,,,,)
                ELSE
                        WVW_DrawLabel(,li+12,0,TRANSFORM(mtot_nota,ALLTRIM('@E '+m_set[1,98])),,,,, 'arial black',60,35,,,,,)
                        DEVPOS(li+9,cb-5);DEVOUT("S/C")
                ENDIF
                //SUB_BANNER(li+8,26,TRANSFORM(mtot_nota,"999,999.99"))
                mensagem("Escolha a opcao que deseja fazer o Recebimento  -  <ESC> Retorna" )
                mtroco := mdinheiro := mcod_cart := mvalor := 0
                mn_banco := SPACE(3)
                mn_cheque := SPACE(6)
                mn_dup := mn_trans := mn_fin := magencia := SPACE(8)
                mc_c := SPACE(13)
                mvencimento := CTOD("  /  /  ")
                mt_pag := "C"
                mn_cupom := SPACE(10)
                mopcao := m_flag_f := SPACE(1)
                mcorrente := SPACE(35)
                botao(li+21,1,li+23,17)
                botao(li+21,18,li+23,34)
                botao(li+21,35,li+23,51)

                botao(li+24,1 ,li+26,17)
                botao(li+24,18,li+26,34)
                botao(li+24,35,li+26,51)
                setcor(1)
                @ li+22,2 PROMPT  "  1-Dinheiro   "
                @ li+22,19 PROMPT "   2-Cheque    "
                @ li+22,36 PROMPT "  3-Duplicata  "
                @ li+25,2  PROMPT "4-Financiamento"
                @ li+25,19 PROMPT "   5-Cartao    "
                @ li+25,36 PROMPT "  7-Credito    "
                SET INTEN ON
                MENU TO mtipo_pg
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                setcor(1)
                IF mtipo_pg = 1
                        op_tela(20,1,22,40,' DINHEIRO')
                        DEVPOS(1,2);DEVOUT("Dinheiro............R$:")
                        @ 1,25 GET mdinheiro PICT "999,999,999.99"
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                ELSEIF mtipo_pg = 2
                        IF EMPTY(mcod_cli)
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        op_tela(20,15,28,75,'CHEQUES')
                        setcor(1)
                        DEVPOS(1,1);DEVOUT("No.Banco...:")
                        DEVPOS(2,1);DEVOUT("Agencia....:")
                        DEVPOS(3,1);DEVOUT("C/C........:")
                        DEVPOS(4,1);DEVOUT("No.Cheque..:")
                        DEVPOS(5,1);DEVOUT("Vencimento.:")
                        DEVPOS(6,1);DEVOUT("Valor......:")
                        DEVPOS(7,1);DEVOUT("Correntista:")
                        @ 1,14 GET mn_banco PICT "9999" WHEN EMPTY(mdinheiro)
                        @ 2,14 GET magencia PICT "@!"
                        @ 3,14 GET mc_c PICT "@!" VALID qtd_chq(mcod_cli,mn_banco,magencia,mc_c)
                        @ 4,14 GET mn_cheque PICT "99999999" VALID IF(! EMPTY(mn_banco) .AND. EMPTY(mn_cheque),.F.,.T.) WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ 5,14 GET mvencimento WHEN ! EMPTY(mn_banco) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 6,14 GET mvalor PICT "9,999,999.99" WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ 7,14 GET mcorrente PICT "@!"
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_banco)
                                fecha_tela()
                                LOOP
                        ENDIF
                        IF mvencimento > mdata_sis
                                mtipo_comp = "AP"
                        ENDIF
               ELSEIF mtipo_pg = 3
                        IF EMPTY(mcod_cli)
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        op_tela(20,27,25,56,'DUPLICATA')
                        mn_dup := ALLTRIM(mdocumento)+SPACE(8-LEN(ALLTRIM(mdocumento)))
                        DEVPOS(1,1);DEVOUT("No.Duplicata.:")
                        DEVPOS(2,1);DEVOUT("Vencimento...:")
                        DEVPOS(3,1);DEVOUT("C>art. B>anco:")
                        DEVPOS(4,1);DEVOUT("Valor R$.....:")
                        @ 1,16 GET mn_dup PICT "@!"
                        @ 2,16 GET mvencimento WHEN ! EMPTY(mn_dup) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 3,16 GET mt_pag PICT "@!" VALID mt_pag $ "C,B" WHEN ! EMPTY(mn_dup)
                        @ 4,16 GET mvalor PICT "9,999,999.99" WHEN ! EMPTY(mn_dup)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_dup)
                                fecha_tela()
                                LOOP
                        ENDIF
                        mtipo_comp = "AP"
                ELSEIF mtipo_pg = 4
                        IF EMPTY(mcod_cli)
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        op_tela(20,12,25,74,'FINANCEIRA')
                        DEVPOS(1,1);DEVOUT("Cod.Financeira...:")
                        DEVPOS(2,1);DEVOUT("No.Financiamento.:")
                        DEVPOS(3,1);DEVOUT("Vencimento.......:")
                        DEVPOS(4,1);DEVOUT("Valor R$.........:")
                        @ 1,20 GET mcod_cart PICT "999" VALID ver_finan(mcod_cart,1,24)
                        @ 2,20 GET mn_fin PICT "99999999" WHEN EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup)
                        @ 3,20 GET mvencimento  VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 4,20 GET mvalor PICT "9,999,999.99" WHEN ! EMPTY(mn_fin)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_fin)
                                fecha_tela()
                                LOOP
                        ENDIF
                        mtipo_comp = "AP"
               ELSEIF mtipo_pg = 5
                        mvalor := mdiferenca
                        mn_cupom := mdocumento
                        op_tela(20,40,26,79,'CARTAO')
                        DEVPOS(1,1);DEVOUT("Cod.Cartao:")
                        DEVPOS(3,1);DEVOUT("No.Cupom..:")
                        DEVPOS(4,1);DEVOUT('Qtd. vezes:')
                        DEVPOS(5,1);DEVOUT('Valor.....:')
                        @ 1,13 GET mcod_cart PICT "999" VALID IF(EMPTY(mcod_cart),.F.,ver_cartao(mcod_cart,1,17))
                        @ 5,13 GET mvalor PICT "999,999.99" VALID IF(mvalor > mdiferenca,.F.,.T.) WHEN car->tef # 'S'
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                fecha_tela()
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(1,13);DEVOUT(STRZERO(mcod_cart,3))
                        setcor(1)
                        ver_cartao(mcod_cart,1,17)
                        mvencimento := mdata_sis + car->prazo
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                LOOP
                        ENDIF
                        IF car->tef = 'S'
                                //IBR_INI_FECHA(mdesconto)
                                mqtd_parc := 1
                                mgerenciador := ALLTRIM(car->cartao)
                                nTotalAPagar := mvalor
                                NumeroCupom := num_cupom()                                     // Retorna ao numero do cupom ECF
                                        IF m_indiv[1,41] = 'PAYGOMULT'
                                                mensagem('Chamando o Gerenciador: PAY & GO MULT')
                                        ELSEIF m_indiv[1,41] = 'PAYGO'
                                                mensagem('Chamando o Gerenciador: '+IF(SUBSTR(UPPER(mgerenciador),1,5) = 'HIPER','HIPERCARD','PAY & GO'))
                                        ELSE
                                                mensagem('Chamando o Gerenciador: '+IF(SUBSTR(UPPER(mgerenciador),1,5) = 'HIPER','HIPERCARD','PADRAO'))
                                        ENDIF
                                        IF trata_tef(NumeroCupom,0,nTotalAPagar)
                                                m_flag_f := 'T'
                                        ELSE
                                                atencao("Transa??o n?o foi aprovada !")
                                                fecha_tela()
                                                mvalor := 0
                                                m_flag_f := ''
                                                LOOP
                                        ENDIF

                                m_intevalo :={}
                                m_parcela  :={}
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        AADD(m_intevalo,car->prazo*i)
                                NEXT
                                //atencao(transform(iat(mvalor/mqtd_parc,'T',2),'999,999.9999')+' - '+transform(iat(mvalor),'999,999.99'))
                                IF iat((mvalor/mqtd_parc),'T',2)*mqtd_parc # iat(mvalor)
                                        mdif_parc := iat(mvalor) - iat(mvalor/mqtd_parc,'T',2)*mqtd_parc
                                ENDIF
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        mvencimento := mdata_sis + m_intevalo[i]
                                        IF mqtd_parc > 9
                                                        AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2),mvencimento,iat(mvalor/mqtd_parc,'T',2),car->cod_forn,car->tipo_conta})
                                        ELSE
                                                        AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1),mvencimento,iat(mvalor/mqtd_parc,'T',2),car->cod_forn,car->tipo_conta})
                                        ENDIF
                                NEXT
                                IF mdif_parc # 0
                                        m_parcela[1,3] := m_parcela[1,3] + mdif_parc
                                ENDIF
                                IF car->tipo_venda = 'A' .OR. car->prazo = 0
                                        mtipo_comp = 'AV'
                                ELSE
                                        mtipo_comp = 'AP'
                                ENDIF
                                i := mvalor := 0
                                FOR i = 1 TO mqtd_parc 
                                        mvalor := mvalor + m_parcela[i,3]
                                NEXT
                        ELSE
                                NumeroCupom := IBR_NUM_CUPOM()                                     // Retorna ao numero do cupom ECF
                                mqtd_parc := 1
                                setcor(1)
                                @ 3,13 GET NumeroCupom
                                @ 4,13 GET mqtd_parc PICT '99' VALID IF(EMPTY(mqtd_parc) .OR. mqtd_parc > 15,.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                IF op_simnao('S','Confirma Inclusao da FORMA DE PAGAMENTO:') = 'N'
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                m_intevalo :={}
                                m_parcela  :={}
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        AADD(m_intevalo,car->prazo*i)
                                NEXT
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        mvencimento := mdata_sis + m_intevalo[i]
                                        IF mqtd_parc > 9
                                                AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2),mvencimento,iat(mvalor/mqtd_parc,2),car->cod_forn,car->tipo_conta})
                                        ELSE
                                                AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1),mvencimento,iat(mvalor/mqtd_parc,2),car->cod_forn,car->tipo_conta})
                                        ENDIF
                                NEXT
                                IF mvalor - (iat((mvalor/mqtd_parc),2) * mqtd_parc) > 0
                                        m_parcela[1,3] := m_parcela[1,3] + (mvalor - (iat((mvalor/mqtd_parc),2) * mqtd_parc))
                                ENDIF
                                IF car->tipo_venda = 'A' .OR. car->prazo = 0
                                        mtipo_comp = 'AV'
                                ELSE
                                        mtipo_comp = 'AP'
                                ENDIF
                                i := mvalor := 0
                                FOR i = 1 TO mqtd_parc 
                                        mvalor := mvalor + m_parcela[i,3]
                                NEXT
                        ENDIF
                        //mtipo_comp = "AP"
                ELSEIF mtipo_pg = 6
                        IF mcredito = 0
                                atencao('Esta opcao nao pode ser usada pois o Cliente nao tem CREDITO')
                                LOOP
                        ENDIF
                        c_credito()
                        op_tela(20,27,24,56,' CREDITO CLIENTE ')
                        /*
                        IF ! EMPTY(mnum_ped)
                                mn_cred := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        ELSE
                                mn_cred := SPACE(8)
                        ENDIF
                        */
                        mvencimento := mdata_sis
                        DEVPOS(0,1);DEVOUT('No.CREDITO...:')
                        DEVPOS(1,1);DEVOUT('Data.........:')
                        DEVPOS(2,1);DEVOUT('Valor R$.....:')
                        setcor(3)
                        setcor(1)
                        @ 0,16 GET mn_cred
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        achou := f := 0
                        FOR f = 1 TO LEN(m_recebe)
                                IF m_recebe[f,5] = mn_cred
                                        atencao('Este Credito ja foi solicitado....')
                                        achou := 1
                                        EXIT
                                ENDIF
                        NEXT
                        IF achou > 0
                                LOOP
                        ENDIF
                        mcredito_aux := cli_dup(mcod_cli,'*',mn_cred)
                        IF mcredito_aux = 0
                                atencao('Nao existe CREDITO com esse Numero ....')
                                fecha_tela()
                                LOOP
                        ENDIF
                        IF mdiferenca < mcredito_aux
                                mvalor := mdiferenca
                        ELSE
                                mvalor := mcredito_aux
                        ENDIF
                        @ 1,16 SAY mvencimento
                        setcor(1)
                        @ 2,16 GET mvalor PICT '9,999,999.99' VALID IF(mvalor>mcredito,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        mtipo_comp = 'AV'
                ELSE
                        LOOP
                ENDIF
                fecha_tela()
                IF EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup) .AND. EMPTY(mn_fin) .AND.;
                   EMPTY(mcod_cart) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred) .AND. mvalor+mdinheiro > 0
                        LOOP
                ENDIF
                IF (! EMPTY(mn_banco) .OR. ! EMPTY(mn_dup) .OR. ! EMPTY(mn_fin) .OR. ! EMPTY(mcod_cart) .OR. ! EMPTY(mn_cred)) .AND. ! EMPTY(mn_trans) .AND. EMPTY(mcod_cli)
                        atencao("Este tipo de operacao exige cliente para que nao haja problemas futuros")
                       LOOP
                ENDIF
                IF m_flag_f = 'T'
                        mopcao := 'S'
                ELSE
                        mopcao := op_simnao("S","Confirma a Inclusao:")
                ENDIF               
                //setcor(1)
                //WVW_DrawLabel(,li+12,ci,TRANSFORM(mtot_nota,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,35,,,,,)

                //SUB_BANNER(li+8,26,TRANSFORM(mtot_nota,"999,999.99"))
                IF mopcao = "N"
                        LOOP
                ENDIF
                IF mopcao = "S"
                        mtot_rece := mtot_rece + mvalor + mdinheiro
                        IF ! (EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND.;
                             EMPTY(mn_dup) .AND. EMPTY(mcod_cart) .AND. EMPTY(mn_fin) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred));
                              .OR. mdinheiro = mtot_nota
                                IF ! EMPTY(mdinheiro) .OR. mdinheiro = mtot_nota
                                        IF mdinheiro + mtot_verif > mtot_nota
                                                mtroco := (mdinheiro+mtot_verif) - (mtot_nota)
                                                mvalor := mtot_nota - mtot_verif
                                                mdinheiro := 0
                                        ELSE
                                                mvalor := mdinheiro
                                        ENDIF
                                        //               1    2      3         4       5        6        7         8                  8       10     11       12    13      14
                                        AADD(m_recebe,{"DN","AV",mn_banco,mn_cheque,"99999999",mdata_sis,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                ELSE
                                        IF ! EMPTY(mn_banco)
                                                IF mvencimento > mdata_sis
                                                        //               1    2      3         4       5        6        7         8                  8       10     11       12    13      14
                                                        AADD(m_recebe,{"CH","AP",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ELSE
                                                        AADD(m_recebe,{"CH","AV",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_dup)
                                                 AADD(m_recebe,{"DU","AP",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                        ELSEIF ! EMPTY(mn_cupom)
                                                i := 0
                                                FOR i = 1 TO LEN(m_parcela)
                                                        IF EMPTY(m_parcela[i,1])
                                                                LOOP
                                                        ENDIF
                                                        IF m_parcela[i,2] > mdata_sis
                                                                //               1        2       3        4       5          6        7           8                 9            10          11      12       13       14        15         16            17            18
                                                                AADD(m_recebe,{'CT',mtipo_comp,SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],' '})
                                                        ELSE
                                        
                                                                AADD(m_recebe,{'CT',mtipo_comp,SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],' '})
                                                        ENDIF
                                                NEXT
/*
*                                               mvencimento := mdata_sis + mprazo_cart
                                                IF mvencimento > mdata_sis
                                                        AADD(m_recebe,{"CT","AP",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ELSE
                                                                  //     1    2     3         4         5       6       7          8               9       10      11    12        13     14    15
                                                        AADD(m_recebe,{"CT","AV",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ENDIF
*/
                                        ELSEIF ! EMPTY(mn_fin)
                                                IF mvencimento > mdata_sis
                                                        AADD(m_recebe,{"FI","AP",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ELSE
                                                        AADD(m_recebe,{"FI","AV",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_trans)
                                                AADD(m_recebe,{"TR","AP",mn_banco,mn_cheque,mn_trans,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                        ELSEIF ! EMPTY(mn_cred)
                                                mcredito := mcredito - mvalor
                                                AADD(m_recebe,{'CR','AV',SPACE(3),SPACE(6) ,mn_cred,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',' '})
                                        ENDIF
                                ENDIF
                        ENDIF
                        mtot_verif := mtot_verif + mvalor       //+ mdinheiro
                        mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
                        setcor(3)
                        DEVPOS(li+18,21);DEVOUTPICT(mtot_verif,"9,999,999.99")
                        DEVPOS(li+19,21);DEVOUTPICT(mtot_nota - mtot_verif,"9,999,999.99")
                        limpa(li+27,1,lb-1,cb-1)
                        f := 1
                        i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                DEVPOS(li+27+f,1)
                                IF m_recebe[i,1] = "DN"
                                        //DEVPOS(li+23+f,1);DEVOUT("DINHEIRO.....: ")
                                        DEVOUT("DINHEIRO.....: ")
                                ELSEIF m_recebe[i,1] = "CH"
                                        //DEVOUT("CHEQUE.......: Bco.: "+m_recebe[i,3]+" No.: "+m_recebe[i,4]+" Venc.:"+DTOC(m_recebe[i,6]))
                                        DEVOUT("CHEQUE.......: No: "+m_recebe[i,4]+" Vc:"+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "DU"
                                        DEVOUT("DUPLICATA....: No: "+m_recebe[i,5]+" Vc:"+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "CT"
                                        DEVOUT("CARTAO.......: "+m_recebe[i,8]+"-"+LEFT(m_recebe[i,12],10)+" Cupom: "+m_recebe[i,9])
                                ELSEIF m_recebe[i,1] = "FI"
                                        DEVOUT("FINANCIAMENTO: "+m_recebe[i,11]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "TR"
                                        DEVOUT("TRANSFERENCIA: "+m_recebe[i,11]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "CR"
                                        DEVOUT("CREDITO......: ")
                                ENDIF
                                DEVPOS(li+27+f,39);DEVOUT("Vlr:"+TRANSFORM(m_recebe[i,10],"999,999.99"))
                                IF i > 4
                                        SCROLL(li+27,1,lb-1,cb-1,1)
                                ELSE
                                        f++
                                ENDIF
                        NEXT
                        mdinheiro := 0
                        setcor(1)
                        IF mtot_verif >= mtot_nota
                                IF m_flag_f = 'T'
                                        mopcao := 'S'
                                ELSE
                                        mopcao := op_simnao("S","Todas informacoes [OK], Confirma Dados Preenchido:")
                                ENDIF               
                                IF mopcao = "N"
                                        ASIZE(m_recebe,0)
                                        mtot_verif := 0
                                        setcor(3)
                                        DEVPOS(li+18,21);DEVOUTPICT(mtot_verif,"9,999,999.99")
                                        DEVPOS(li+19,21);DEVOUTPICT(mtot_nota,"9,999,999.99")
                                        setcor(1)
                                        limpa(li+27,1,lb-1,cb-1)
                                        LOOP
                                ENDIF
                                IF mopcao = "S"
                                        IF mtroco > 0
                                                //op_tela(10,05,40,95,' T R O C O ')
                                                //DEVPOS(0,0);DEVOUT('')
                                                //WVW_DrawLabel(,00,0,'   Troco',,,210,, 'arial black',60,35,,,,,)
                                                //WVW_DrawLabel(,05,0,'R$:'+TRANSFORM(mtroco,ALLTRIM('@E 99,999.99')),,,210,, 'arial black',60,35,,,,,)
                                                //botao1(30,0,45,120,' T R O C O ')
                                                WVW_DrawLabel(,32,1,'   Troco',,,210,, 'arial black',60,25,,,,,)
                                                WVW_DrawLabel(,37,1,'R$:'+TRANSFORM(mtroco,ALLTRIM('@E 99,999.99')),,,210,, 'arial black',60,25,,,,,)
                                                INKEY(.90,850)
                                                //fecha_tela()
                                        ENDIF
                                        EXIT
                                ENDIF
                        ENDIF
                ENDIF
        ENDDO
        IF LASTKEY() = 27;LOOP;ENDIF
                IBR_INI_FECHA(mdesconto)
                mensagem("Aguarde Finalizando o Cupom Fiscal...")
                Operacoes = Space(7)
                Operacoes := SUBSTR(IBR_COMANDO( 'ECF.NumGNF',,,.T. ),5)
                Operacoes := SUBSTR(Operacoes,1,6)

                mnome_arq := ' '
                mvalor_cart := 0
                mind_pg := '  '
                mtef := ' '
                i := 0
                IF m_flag_f # 'T'
                        //ATENCAO(TRANSFORM(mdesc_tot,'9999.99'))
                        //ini_fechamento(mdesc_tot)
                ENDIF

                mforma_pag := ''
                i:=0
                FOR i = 1 TO LEN(m_recebe)
                        IF m_recebe[i,1] = 'DN'
                                mforma_pag := 'DINHEIRO'
                                mind_cartao := forma_pag('DINHEIRO',m_recebe[i,10]+mtroco)
                                //mind_cartao := forma_pag('DINHEIRO',m_recebe[i,10]-10)
                        ELSEIF m_recebe[i,1] = 'CH'
                                mforma_pag := 'CHEQUE'
                                mind_cartao := forma_pag('CHEQUE',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'DU'
                                mforma_pag := 'DUPLICATA'
                                mind_cartao := forma_pag('DUPLICATA',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'FI'
                                mforma_pag := 'FINANCIAMENTO'
                                mind_cartao := forma_pag('FINANCIAMENTO',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'CR'
                                mforma_pag := 'CREDITO'
                                mind_cartao := forma_pag('CREDITO',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'CT'
                                LOOP
                                //cons_forma := {}
                                //sr_getconnection():exec("SELECT * FROM saccarta WHERE codigo = "+sr_cdbvalue(m_recebe[i,8]),,.t.,@cons_forma)
                                //IF LEN(cons_forma) = 0
                                //        LOOP
                                //ENDIF
                                /*
                                mvlr := y := 0
                                FOR y = 1 TO LEN(m_recebe)
                                        IF m_recebe[y,1] # 'CT'
                                                LOOP
                                        ENDIF
                                        cons_forma := {}
                                        sr_getconnection():exec("SELECT * FROM saccarta WHERE codigo = "+sr_cdbvalue(m_recebe[y,8]),,.t.,@cons_forma)
                                        IF LEN(cons_forma) = 0
                                                LOOP
                                        ENDIF
                                        mind_cartao := forma_pag(ALLTRIM(cons_forma[1,2]),m_recebe[y,10])
                                        //mvlr := mvlr + m_recebe[y,10]
                                NEXT
                                mind_tef := mind_cartao
                                */
                        ENDIF
                        SET CENTURY ON
                        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                                m_MFAdicional+; //2
                                m_ModeloImp+; //3
                                STRZERO(VAL(m_numerocaixa),2)+; //4
                                mdocumento+SPACE(6-LEN(mdocumento))+; //5
                                mnum_ccf+; //6
                                operacoes+; //7
                                mforma_pag+SPACE(15-LEN(mforma_pag))+; //8
                                STRZERO(m_recebe[i,10]*100,13)+; //9
                                'N'+; //10
                                STRZERO(0,13)+; //11
                                DTOC(mdata_sis)
                        sr_getconnection():exec('INSERT INTO r7 ('+;  //VERIFICAR
                                'NUMERO_FAB  ,'+; //1
                                'MF_ADICIONAL,'+; //2
                                'MODELO_ECF  ,'+; //3
                                'NUMERO_USU  ,'+; //4
                                'COO         ,'+; //5
                                'CCF         ,'+; //6
                                'GNF         ,'+; //7
                                'MEIO_PAG    ,'+; //8
                                'VLR_PAGO    ,'+; //9
                                'IND_ESTORNO ,'+; //10
                                'VLR_ESTORNO ,'+; //11
                                'DATA_MOV    ,'+; //12
                                'CHV_CRIPT   ,'+; //13
                                'SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(m_numeroSerie)+','+; //1
                                sr_cdbvalue(m_MFAdicional)+','+; //2
                                sr_cdbvalue(m_ModeloImp)+','+; //3
                                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                                sr_cdbvalue(mdocumento)+','+; //5
                                sr_cdbvalue(mnum_ccf)+','+; //6
                                sr_cdbvalue(operacoes)+','+; //7
                                sr_cdbvalue(mforma_pag+SPACE(15-LEN(mforma_pag)))+','+; //8
                                sr_cdbvalue(STRZERO(m_recebe[i,10]*100,13))+','+; //9
                                sr_cdbvalue('N')+','+; //10
                                sr_cdbvalue(STRZERO(0,13))+','+; //11
                                sr_cdbvalue(mdata_sis)+','+; //12
                                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                                sr_cdbvalue(' ')+')',,.f.)
                                SET CENTURY OFF
                NEXT
                y := mvlr_cartao := 0
                FOR y = 1 TO LEN(m_recebe)
                        IF m_recebe[y,1] # 'CT'
                                LOOP
                        ENDIF
                        cons_forma := {}
                        sr_getconnection():exec("SELECT * FROM saccarta WHERE codigo = "+sr_cdbvalue(m_recebe[y,8]),,.t.,@cons_forma)
                        IF LEN(cons_forma) = 0
                                LOOP
                        ENDIF
                        mvlr_cartao := mvlr_cartao + m_recebe[y,10]
                NEXT
                IF mvlr_cartao > 0
                        mind_cartao := forma_pag(ALLTRIM(cons_forma[1,2]),mvlr_cartao)
                        SET CENTURY ON
                        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                                m_MFAdicional+; //2
                                m_ModeloImp+; //3
                                STRZERO(VAL(m_numerocaixa),2)+; //4
                                mdocumento+SPACE(6-LEN(mdocumento))+; //5
                                mnum_ccf+; //6
                                operacoes+; //7
                                SUBSTR(cons_forma[1,2],1,15)+; //8
                                STRZERO(mvlr_cartao*100,13)+; //9
                                'N'+; //10
                                STRZERO(0,13)+; //11
                                DTOC(mdata_sis)
                        sr_getconnection():exec('INSERT INTO r7 ('+;  //VERIFICAR
                                'NUMERO_FAB  ,'+; //1
                                'MF_ADICIONAL,'+; //2
                                'MODELO_ECF  ,'+; //3
                                'NUMERO_USU  ,'+; //4
                                'COO         ,'+; //5
                                'CCF         ,'+; //6
                                'GNF         ,'+; //7
                                'MEIO_PAG    ,'+; //8
                                'VLR_PAGO    ,'+; //9
                                'IND_ESTORNO ,'+; //10
                                'VLR_ESTORNO ,'+; //11
                                'DATA_MOV    ,'+; //12
                                'CHV_CRIPT   ,'+; //13
                                'SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(m_numeroSerie)+','+; //1
                                sr_cdbvalue(m_MFAdicional)+','+; //2
                                sr_cdbvalue(m_ModeloImp)+','+; //3
                                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                                sr_cdbvalue(mdocumento)+','+; //5
                                sr_cdbvalue(mnum_ccf)+','+; //6
                                sr_cdbvalue(operacoes)+','+; //7
                                sr_cdbvalue(SUBSTR(cons_forma[1,2],1,15))+','+; //8
                                sr_cdbvalue(STRZERO(mvlr_cartao*100,13))+','+; //9
                                sr_cdbvalue('N')+','+; //10
                                sr_cdbvalue(STRZERO(0,13))+','+; //11
                                sr_cdbvalue(mdata_sis)+','+; //12
                                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                                sr_cdbvalue(' ')+')',,.f.)
                                SET CENTURY OFF
                        mind_tef := mind_cartao
                ENDIF
                //NEXT
                IF mtef = '*'
                        LOOP
                ENDIF
                // Mensagem rodape do cumpom fiscal.  
                SET CENTURY ON
                mcpf_cnpj := IF(! EMPTY(cons_cli[1,34]),TRANSFORM(cons_cli[1,34],'@@R 999.999.999-99'),IF(! EMPTY(cons_cli[1,32]),TRANSFORM(cons_cli[1,32],'@@R 99.999.999/9999-99'),''))
                mcpf_cnpj_cli := STRTRAN(mcpf_cnpj,'.','')
                mcpf_cnpj_cli := ALLTRIM(STRTRAN(mcpf_cnpj_cli,'-',''))
                mnome_cli := cons_cli[1,2]+'-'+cons_cli[1,3]
                mend_aux  := IF(! EMPTY(cons_cli[1,21]),ALLTRIM(cons_cli[1,22])+'-'+ALLTRIM(cons_cli[1,24])+' - '+ALLTRIM(cons_cli[1,25])+'-'+ALLTRIM(cons_cli[1,26]),'')
                mend_cli  := IF(! EMPTY(cons_cli[1,21]),RTRIM(cons_cli[1,21]),'')
                mlinha1 := ALLTRIM(mmd5)
                mlinha2 := ALLTRIM(mmd5)+m_qp+IF(! EMPTY(mnum_pv),'PV: '+STRZERO(mnum_pv,10)+m_qp,'')+;
                           IF(muf_firm = 'MG','MINAS LEGAL:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;
                           IF(muf_firm = 'PB' .AND. ! EMPTY(mcpf_cnpj_cli),'PARAIBA LEGAL - RECEITA CIDADA'+m_qp+'TORPEDO PREMIADO:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+' '+mcpf_cnpj_cli+m_qp,'')

                           //IF(muf_firm = 'RJ','CUPOM MANIA:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;

                IBR_COMANDO('ECF.IdentificaPAF',{mlinha1, mlinha2},,,.T. )
                IF ! EMPTY(mcpf_cnpj)
                        IBR_COMANDO('ECF.IdentificaConsumidor',{mcpf_cnpj, mnome_cli,mend_cli+' '+mend_aux},,,.T. )
                ENDIF
                IF m_indiv[1,45] = 'EPSON'
                        fim_fecha('Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte:IBPT'+m_qp+'HTI SISTEMAS 81'+mfone_HTI+'-Aplic:'+mpaf_HTI+' '+mpaf_ver+m_qp+;
                                ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                ELSE
                        fim_fecha('<n>Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte:IBPT</n>'+m_qp+'HTI SISTEMAS 81'+mfone_HTI+'-Aplic:'+mpaf_HTI+' '+mpaf_ver+m_qp+;
                                ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                ENDIF
                //fim_fecha('Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte:IBPT'+m_qp+'HTI SISTEMAS 81'+mfone_HTI+'-Aplic:'+mpaf_HTI+' '+mpaf_ver+m_qp+;
                //                ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                mtot_imposto := 0
                /*
                fim_fecha(IF(! EMPTY(mnum_pv),'PV: '+STRZERO(mnum_pv,10)+m_qp,'')+;
                                IF(muf_firm = 'MG','Minas Legal:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;
                                IF(muf_firm = 'RJ','Cupom Mania:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;
                                IF(muf_firm = 'PB','PARAIBA LEGAL - RECEITA CIDADA'+m_qp+'TORPEDO PREMIADO:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+' '+mcpf_cnpj+m_qp,'')+;
                                ALLTRIM(m_set[1,25])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                                //ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                */
                SET CENTURY OFF
                IF m_flag_f = 'T'
                        //ATENCAO(NumeroCupom+' - '+mind_tef+' - '+transform(mvalor,'999,999.99'))
                        PAC00TEF(NumeroCupom,mind_tef,mvalor)
                ENDIF
        IF mtroco > 0
                INKEY(3)
                RESTSCREEN(00,00,24,79,mbox_rece)
        ENDIF
        IF ! EMPTY(mdesconto)
                sr_getconnection():exec("UPDATE sacmovnt SET vl_fatura = vl_fatura - (vl_fatura * "+sr_cdbvalue(mdesc_u/100)+") WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
        ENDIF                
        SET CENTURY ON
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  SUBSTR(mnum_ccf,1,6)+;
                  mdocumento+;
                  SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+;
                  STRZERO(mtot_desc*100,14)+;
                  STRZERO(IF(mtot_desc > mtot_nota,(mtot_desc - mtot_nota)*100,0),13)+;
                  'V'+;
                  STRZERO(IF(mtot_desc < mtot_nota,(mtot_nota - mtot_desc)*100,0),13)+;
                  'V'+;
                  STRZERO(mtot_nota*100,14)+;
                  'N'+;
                  STRZERO(0,13)+;
                  'D'+;
                  mcliente+;
                  IF(! EMPTY(mcgc),mcgc,mcpf)+SPACE(14-LEN(IF(! EMPTY(mcgc),mcgc,mcpf)))+;
                  DTOC(mdata_sis)

        sr_getconnection():exec('INSERT INTO r4 ('+;
                'NUMERO_FAB   ,'+; //1
                'MF_ADICIONAL ,'+; //2
                'MODELO_ECF   ,'+; //3
                'NUMERO_USU   ,'+; //4
                'CCF_CVC_CBP  ,'+; //5
                'COO          ,'+; //6
                'DATA_INI     ,'+; //7
                'SUB_TOTAL    ,'+; //8
                'DESCONT      ,'+; //9
                'IND_DESCONT  ,'+; //10
                'ACRES_SUB    ,'+; //11
                'IND_ACRESC   ,'+; //12
                'VLR_LIQ      ,'+; //13
                'IND_CANCEL   ,'+; //14
                'CANCEL_ACRESC,'+; //15
                'ORD_DESC_ACRE,'+; //16
                'NOME_CLIENTE ,'+; //17
                'CNPJ_CPF     ,'+; //18
                'DATA_MOV     ,'+; //19
                'CHV_CRIPT    ,'+; //19
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(mnum_ccf)+','+; //5
                sr_cdbvalue(mdocumento)+','+; //6
                sr_cdbvalue(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2))+','+; //7
                sr_cdbvalue(STRZERO(mtot_desc*100,14))+','+; //8
                sr_cdbvalue(STRZERO(IF(mtot_desc > mtot_nota,(mtot_desc - mtot_nota)*100,0),13))+','+; //9
                sr_cdbvalue('V')+','+; //10
                sr_cdbvalue(STRZERO(IF(mtot_desc < mtot_nota,(mtot_nota - mtot_desc)*100,0),13))+','+; //11
                sr_cdbvalue('V')+','+; //12
                sr_cdbvalue(STRZERO(mtot_nota*100,14))+','+; //13
                sr_cdbvalue('N')+','+; //14
                sr_cdbvalue(STRZERO(0,13))+','+; //15
                sr_cdbvalue('D')+','+; //16
                sr_cdbvalue(mcliente)+','+; //17
                sr_cdbvalue(IF(! EMPTY(mcgc),mcgc,mcpf))+','+; //18
                sr_cdbvalue(mdata_sis)+','+; //13
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //19
                sr_cdbvalue(' ')+')',,.f.)

                /*
                mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                        m_MFAdicional+; //2
                        m_ModeloImp+; //3
                        STRZERO(VAL(m_numerocaixa),2)+; //4
                        mdocumento+SPACE(6-LEN(mdocumento))+; //5
                        mnum_ccf+; //6
                        operacoes+; //7
                        SPACE(15)+; //8
                        STRZERO(mtot_nota*100,13)+; //9
                        'N'+; //10
                        STRZERO(0,13)+; //11
                        DTOC(mdata_sis)

                sr_getconnection():exec('INSERT INTO r7 ('+;  //VERIFICAR
                        'NUMERO_FAB  ,'+; //1
                        'MF_ADICIONAL,'+; //2
                        'MODELO_ECF  ,'+; //3
                        'NUMERO_USU  ,'+; //4
                        'COO         ,'+; //5
                        'CCF         ,'+; //6
                        'GNF         ,'+; //7
                        'MEIO_PAG    ,'+; //8
                        'VLR_PAGO    ,'+; //9
                        'IND_ESTORNO ,'+; //10
                        'VLR_ESTORNO ,'+; //11
                        'DATA_MOV    ,'+; //12
                        'CHV_CRIPT   ,'+; //13
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(m_numeroSerie)+','+; //1
                        sr_cdbvalue(m_MFAdicional)+','+; //2
                        sr_cdbvalue(m_ModeloImp)+','+; //3
                        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                        sr_cdbvalue(mdocumento)+','+; //5
                        sr_cdbvalue(mnum_ccf)+','+; //6
                        sr_cdbvalue(operacoes)+','+; //7
                        sr_cdbvalue(SPACE(15))+','+; //8
                        sr_cdbvalue(STRZERO(mtot_nota*100,13))+','+; //9
                        sr_cdbvalue('N')+','+; //10
                        sr_cdbvalue(STRZERO(0,13))+','+; //11
                        sr_cdbvalue(mdata_sis)+','+; //12
                        sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                        sr_cdbvalue(' ')+')',,.f.)
                */
        SET CENTURY OFF
        IF EMPTY(mpago) .AND. msem_cx = 0
                mensagem("Atualizando o Arquivo de CAIXA....")
                i = 0
                FOR i = 1 TO LEN(m_recebe)
                        IF EMPTY(m_recebe[i,1])
                                LOOP
                        ENDIF
                        m_recebe[i,10] := iat(m_recebe[i,10],3)
                        mcampo_arq :=  'empresa   ,';//1
                                      +'data      ,';//2
                                      +'tipo      ,';//3
                                      +'tipo_comp ,';//4
                                      +'nota      ,';//5
                                      +'cod_cli   ,';//6
                                      +'cod_vend  ,';//7
                                      +'cod_opera ,';//8
                                      +'hora      ,';//9
                                      +'valor_com ,';//10
                                      +'comissao  ,';//11
                                      +'venci     ,';//12
                                      +'valor     ,';//13
                                      +'num_ban   ,';//14
                                      +'cod_ct    ,';//15
                                      +'c_s       ,';//16
                                      +'num_dup   ,';//17
                                      +'documento ,';//18
                                      +'descri2   ,';//19
                                      +'num_cup    ' //20
                        IF m_recebe[i,1] = 'DN'
                                mnum_dup := STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)
                                mdup_num := '99999999'
                        ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := m_recebe[i,5]
                        ELSEIF m_recebe[i,1] = 'CH'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := m_recebe[i,4]
                        ELSEIF m_recebe[i,1] = 'CT'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := m_recebe[i,9]
                        ELSEIF m_recebe[i,1] = 'FI'
                                mnum_dup := m_recebe[i,11]
                                mdup_num := m_recebe[i,11]
                        ENDIF

                        aret:={}
                        cComm  := "INSERT INTO saccaixa ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,' ')"
                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                        cComm  := SR_SQLCodeGen(apCode,;
                               {mcodempresa                            ,;//1
                                mdata_sis                              ,;//2
                                m_recebe[i,1]                          ,;//3
                                m_recebe[i,2]                          ,;//4
                                IF(EMPTY(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv)),'CP'+mdocumento,'PD'+STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)),;//5
                                mcod_cli                    ,;//6
                                STRZERO(mcod_vend,3)                   ,;//7
                                cod_operado                            ,;//8
                                phora_ecf                                 ,;//9
                                iat(m_recebe[i,10],3)                ,;//10
                                mperc_comissao                         ,;//11
                                m_recebe[i,6]                          ,;//12
                                iat(m_recebe[i,10],3)                ,;//13
                                m_recebe[i,3]                          ,;//14
                                m_recebe[i,8]                          ,;//15
                                'C'                                    ,;//16
                                mnum_dup                               ,;//17
                                mdup_num                               ,;//18
                                IF(m_recebe[i,1] = 'CT',m_recebe[i,12],' '),;//19
                                mdocumento                             ;//20
                                },sr_getconnection():nsystemid)
                                sr_getconnection():exec(ccomm,,.f.)
                NEXT
                mensagem('Atualizando o DUPLICATAS....')
                c := i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF EMPTY(m_recebe[i,1]);LOOP;ENDIF
                        mcampo_arq :=  'empresa         ,';//1
                                      +'emissao         ,';//2
                                      +'tipo            ,';//3
                                      +'tip_cli         ,';//4
                                      +'fornec          ,';//5
                                      +'cliente         ,';//6
                                      +'venc            ,';//7
                                      +'venc1           ,';//8
                                      +'comissao        ,';//9
                                      +'comissao1       ,';//10
                                      +'operador        ,';//11
                                      +'vendedor        ,';//12
                                      +'num_ped         ,';//13
                                      +'ope_venda       ,';//15
                                      +'mov_cx          ,';//16
                                      +'c_cpfcnpj       ,';//17
                                      +'numero          ,';//18
                                      +'duplicata       ,';//19
                                      +'valor_dup       ,';//20
                                      +'valor           ,';//21
                                      +'agencia         ,';//22
                                      +'c_c             ,';//23
                                      +'datpag          ,';//24
                                      +'vlpago          ,';//25
                                      +'pago            ,';//26
                                      +'banco           ,';//27
                                      +'corrente         ' //28
                        IF m_recebe[i,1] = 'DN'
                                mnum_dup := STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)
                        ELSEIF m_recebe[i,1] = 'CH'
                                mnum_dup := m_recebe[i,4]
                        ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR'
                                mnum_dup := m_recebe[i,5]
                        ELSEIF m_recebe[i,1] = 'FI'
                                mnum_dup := m_recebe[i,11]
                        ELSEIF m_recebe[i,1] = 'CT'
                                mnum_dup := m_recebe[i,9]
                        ENDIF
                                                                                    //     1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28
                        cComm  := "INSERT INTO sacdupr ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,' ')"
                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                        cComm  := SR_SQLCodeGen(apCode,;
                               {mcodempresa                            ,;//1
                                mdata_sis                              ,;//2
                                m_recebe[i,1]                          ,;//3
                                cons_cli[1,8]                              ,;//4
                                mcod_cli                    ,;//5
                                mcliente                               ,;//6
                                m_recebe[i,6]                          ,;//7
                                m_recebe[i,6]                          ,;//8
                                mperc_comissao                         ,;//9
                                0                                      ,;//10
                                cod_operado                            ,;//11
                                STRZERO(mcod_vend,3)                   ,;//12
                                STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)                    ,;//13
                                STRZERO(mcod_oper,3)                   ,;//15
                                'C'                                    ,;//16
                                IF(! EMPTY(cons_cli[1,32]),cons_cli[1,32],cons_cli[1,34]),;//17
                                IF(m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT',m_recebe[i,8],m_recebe[i,3]),;//18
                                mnum_dup                                ,;//19
                                m_recebe[i,10]                          ,;//20
                                IF(m_recebe[i,1] = 'CT',m_recebe[i,10] - (m_recebe[i,10] * (m_recebe[i,16] / 100)),m_recebe[i,10]),;//21
                                m_recebe[i,13]                          ,;//22
                                m_recebe[i,14]                          ,;//23
                                IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),m_recebe[i,6],CTOD('  /  /  ')),;//24
                                IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),m_recebe[i,10],0),;//25
                                IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),'B',' '),;//26
                                IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR','C',' '),;//27
                                m_recebe[i,15]                           ;//28
                                },sr_getconnection():nsystemid)
                                sr_getconnection():exec(ccomm,,.f.)
                NEXT
                i := 0
                mensagem('Atualizando o MOVIMENTO....')
                SR_BEGINTRANSACTION()
                FOR i = 1 TO LEN(m_codigo)
                        IF EMPTY(m_codigo[i]);LOOP;ENDIF
                        IF m_matriz[i,45] = 1;LOOP;ENDIF
                                aret:={}
                                sr_getconnection():exec("UPDATE sacmerc SET dat_ult_s = "+sr_cdbvalue(mdata_sis)+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.f.)
                        //sr_getconnection():exec('COMMIT',,.f.)
                        mcampo_arq :=  'empresa     ,';//1      mov-> empresa     :=
                                      +'num_ped     ,';//2      mov-> num_ped     :=
                                      +'data_ped    ,';//3      mov-> data_ped    :=
                                      +'documento   ,';//4      mov-> documento   :=
                                      +'codigo      ,';//5      mov-> codigo      :=
                                      +'gru_sub     ,';//6      mov-> gru_sub     :=
                                      +'produto     ,';//7      mov-> produto     :=
                                      +'especie     ,';//8      mov-> especie     :=
                                      +'cod_fab     ,';//9      mov-> cod_fab     :=
                                      +'fabrica     ,';//10     mov-> fabrica     :=
                                      +'data_s_e    ,';//11     mov-> data_s_e    :=
                                      +'ent_sai     ,';//12     mov-> ent_sai     :=
                                      +'quantd      ,';//13     mov-> quantd      :=
                                      +'pr_venda    ,';//14     mov-> pr_venda    :=
                                      +'vl_vend     ,';//15     mov-> vl_vend     :=
                                      +'cod_vend    ,';//16     mov-> cod_vend    :=
                                      +'cod_oper    ,';//17     mov-> cod_oper    :=
                                      +'cod_cli     ,';//18     mov-> cod_cli     :=
                                      +'cliente     ,';//19     mov-> cliente     :=
                                      +'vl_fatura   ,';//20     mov-> vl_fatura   :=
                                      +'tipo        ,';//21     mov-> tipo        :=
                                      +'pr_unit     ,';//22     mov-> pr_unit     :=
                                      +'cust_mer    ,';//23     mov-> cust_mer    :=
                                      +'isento      ,';//24     mov-> isento      :=
                                      +'comissao    ,';//25     mov->comissao
                                      +'tp_venda    ,';//26     mov-> tp_venda    :=
                                      +'cond_vezes  ,';//27     mov-> cond_vezes  :=
                                      +'cond_intev   ' //28     mov-> cond_intev  :=
                        aret := {}  
                        cComm  := "INSERT INTO sacmov ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,' ')"
                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                        cComm  := SR_SQLCodeGen(apCode,;
                               {mcodempresa             ,;//1
                                STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)     ,;//2
                                mdata_sis               ,;//3
                                'CP'+mdocumento         ,;//4
                                m_codigo[i]             ,;//5
                                m_matriz[i,4]           ,;//6
                                m_matriz[i,5]           ,;//7
                                m_matriz[i,23]          ,;//8
                                m_matriz[i,10]          ,;//9
                                SUBSTR(m_matriz[i,11],1,30),;//10
                                mdata_sis               ,;//11
                                "S"                     ,;//12
                                m_matriz[i,1]           ,;//13
                                m_matriz[i,8]           ,;//14
                                m_matriz[i,2]           ,;//15
                                STRZERO(mcod_vend,3)    ,;//16
                                cod_operado             ,;//17
                                mcod_cli     ,;//18
                                SUBSTR(mcliente,1,30)   ,;//19
                                m_matriz[i,2]           ,;//20
                                "02"                    ,;//21
                                m_matriz[i,9]           ,;//22
                                m_matriz[i,18]          ,;//23
                                m_matriz[i,13]          ,;//24
                                IF(mtipo_comp = "AV",m_matriz[i,15] + mcom_ven,m_matriz[i,15] + mcom_ap),;//25
                                mtipo_comp              ,;//26
                                mcond_vezes             ,;//27
                                mcond_intev              ;//28
                                },sr_getconnection():nsystemid)
                                sr_getconnection():exec(ccomm,,.f.)
                NEXT
                IF ! EMPTY(mnum_pv)
                        mensagem('Atualizando o ARQUIVO DE PRE-PEDIDO....')
                                aret:={}
                                cComm  := "UPDATE sacpv SET "
                                ccomm := ccomm +"ppag  = '*'"
                                ccomm := ccomm +",pdatapag = "+sr_cdbvalue(mdata_sis)
                                ccomm := ccomm +",phora_pg = "+sr_cdbvalue(TIME())
                                ccomm := ccomm +",pnum_pdv = "+sr_cdbvalue(mnum_ecf)
                                ccomm := ccomm +",pnum_cup = "+sr_cdbvalue(mdocumento)
                                ccomm := ccomm +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pv,6))
                                sr_getconnection():exec(ccomm,,.f.)
                ELSEIF ! EMPTY(mnum_ped)
                        //mensagem('Atualizando o ARQUIVO DE PEDIDO....')
                                aret:={}
                                cComm  := "UPDATE sacped_s SET "
                                ccomm := ccomm +"ppag  = '*'"
                                ccomm := ccomm +",pdatapag = "+sr_cdbvalue(mdata_sis)
                                ccomm := ccomm +",phora_pg = "+sr_cdbvalue(TIME())
                                ccomm := ccomm +",pnum_pdv = "+sr_cdbvalue(mnum_ecf)
                                ccomm := ccomm +",pnum_cup = "+sr_cdbvalue(mdocumento)
                                ccomm := ccomm +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                                sr_getconnection():exec(ccomm,,.f.)
                ENDIF
                sr_committransaction()
                sr_endtransaction()
                mensagem('Atualizando o CONTA A PAGAR....')
                c := i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF EMPTY(m_recebe[i,1]) .OR. EMPTY(VAL(m_recebe[i,17]))
                                LOOP
                        ENDIF
                        sr_getconnection():exec('INSERT INTO sacdupp (empresa ,';//1
                                        +'tipo      ,';//2
                                        +'numero    ,';//3
                                        +'duplicata ,';//4
                                        +'valor_dup ,';//5
                                        +'tip_for   ,';//6
                                        +'fornec    ,';//7
                                        +'cliente   ,';//8
                                        +'emissao   ,';//9
                                        +'venc      ,';//10
                                        +'datpag    ,';//11
                                        +'valor     ,';//12
                                        +'vlpago    ,';//13
                                        +'banco     ,';//14
                                        +'pago      ,';//15
                                        +'operador  ,';//16
                                        +'num_ped   ,';//17
                                        +'obs       ,';//18
                                        +'sr_deleted)       '+;
                                        ' VALUES ('+;
                                        sr_cdbvalue('001'                                             )+','+; //1
                                        sr_cdbvalue('PA'                                              )+','+; //2
                                        sr_cdbvalue(m_recebe[i,8]                                     )+','+; //3
                                        sr_cdbvalue(m_recebe[i,9]                                     )+','+; //4
                                        sr_cdbvalue(iat((m_recebe[i,10] * (m_recebe[i,16] / 100)),2))+','+; //5
                                        sr_cdbvalue(m_recebe[i,18]                                    )+','+; //6
                                        sr_cdbvalue(m_recebe[i,17]                                    )+','+; //7
                                        sr_cdbvalue(IF(v_fornece(VAL(m_recebe[i,17])),forn->razao,'DESCONTO DO CARTAO DE CREDITO'))    +','+; //8
                                        sr_cdbvalue(mdata_sis                                         )+','+; //9
                                        sr_cdbvalue(mdata_sis                                         )+','+; //10
                                        sr_cdbvalue(mdata_sis                                         )+','+; //11
                                        sr_cdbvalue(iat((m_recebe[i,10] * (m_recebe[i,16] / 100)),2))+','+; //12
                                        sr_cdbvalue(ROUN((m_recebe[i,10] * (m_recebe[i,16] / 100)),2) )+','+; //13
                                        sr_cdbvalue('C'                                               )+','+; //14
                                        sr_cdbvalue('B'                                               )+','+; //15
                                        sr_cdbvalue(cod_operado                                       )+','+; //16
                                        sr_cdbvalue(STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)                               )+','+; //17
                                        sr_cdbvalue('Pedido:'+STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)+' DESCONTO DE CARTAO')+','+; //18
                                        sr_cdbvalue(' ')+')',,.f.)
                NEXT
                mensagem('Atualizando o CREDITO....')
                i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF m_recebe[i,1] = 'CR'
                                cons_cred := {}
                                mcomando := "SELECT * FROM saccred WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                sr_getconnection():exec(mcomando,,.t.,@cons_cred)
                                IF m_recebe[i,10] = cons_cred[1,19]
                                        mcomando := "UPDATE saccred "
                                        mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                        mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                        mcomando := mcomando + ",pago = 'B'"
                                        mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                        mcomando := mcomando + ",conta = '*'"
                                        mcomando := mcomando + ",mov_cx = 'C'"
                                        mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                        sr_getconnection():exec(mcomando,,.f.)
                                ELSE
                                        mcomando := "UPDATE saccred "
                                        mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                        mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                        mcomando := mcomando + ",pago = 'B'"
                                        mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                        mcomando := mcomando + ",conta = '*'"
                                        mcomando := mcomando + ",mov_cx = 'C'"
                                        mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                        sr_getconnection():exec(mcomando,,.f.)
                
                                        cComm  := "INSERT INTO saccred (empresa,tipo,duplicata,valor_dup,"
                                        ccomm  := ccomm + "fornec,cliente,emissao,venc1,venc,valor,vendedor,"
                                        ccomm  := ccomm + "num_ped,operador,obs,conta,sr_deleted)"
                                        ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mcodempresa)+",'CR',"+sr_cdbvalue(m_recebe[i,5])
                                        ccomm  := ccomm + ","+sr_cdbvalue(iat(m_recebe[i,10],2))+","+sr_cdbvalue(mcod_cli)+","+sr_cdbvalue(mcliente)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)
                                        ccomm  := ccomm + ","+sr_cdbvalue(iat(cons_cred[1,19]-m_recebe[i,10],2))+","+sr_cdbvalue(cons_cred[1,30])+","+sr_cdbvalue(STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6))+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(cons_cred[1,46])+",'*',' ')"
                                        sr_getconnection():exec(ccomm,,.f.)
                                ENDIF
                        ENDIF
                NEXT
        ENDIF
        /*
        IF msem_cx = 1 .AND. EMPTY(mnum_ped)
                i := 0
                FOR i = 1 TO LEN(m_codigo)
                        IF EMPTY(m_codigo[i]);LOOP;ENDIF
                        SR_BEGINTRANSACTION()
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.t.,@cons_merc)
                                mlinha := cons_merc[1,2]+cons_merc[1,8]+cons_merc[1,9]+cons_merc[1,14]+STRZERO((cons_merc[1,56] + m_matriz[i,1])*1000,13)+STRZERO(iat(cons_merc[1,46])*100,14)+cons_merc[1,68]
                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = saldo_mer + "+sr_cdbvalue(m_matriz[i,1])+",chv_cript = "+sr_cdbvalue(criptografia(mlinha,'C'))+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.f.)
                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(mcod_merc)+','+; //4
                                                        sr_cdbvalue(mquantd)+','+; //5
                                                        sr_cdbvalue(cons_merc[1,56])+','+; //6
                                                        sr_cdbvalue(cons_merc[1,56] + m_matriz[i,1])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SAC23ECF1')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('CUPOM S/C: '+mdocumento)+','+; //11
                                                        sr_cdbvalue('E')+','+; //11
                                                        sr_cdbvalue(' ')+')',,.f.)

                                sr_committransaction()
                        SR_ENDTRANSACTION()
                NEXT
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        */
        mpago := ' '
        mabrir_cp := m_flag_f := " "
        ASIZE(m_codigo,0)
        ASIZE(m_merc,0)
        ASIZE(m_matriz,0)
        ASIZE(m_recebe,0)
        ASIZE(m_desc,0)
        m_flag :=0
        mdocumento := mnum_ecf:=SPACE(8)
        CLEAR GETS
        EXIT
ENDDO
WVW_RESTSCREEN(,0,0,50,120,tela_fecha,.T.)
//wvw_lclosewindow()
RETURN NIL
*********************** FIM ***************************
FUNCTION c_prod()
MEMVAR mcod_bc,mmerc,mcod_merc
CLEAR GETS
op_tela(10,10,14,70," CONSULTA DE PRODUTO ")
WHILE .T.
        limpa(00,00,33,100)
        setcor(1)
        DEVPOS(01,01);DEVOUT("Codigo:")
        mensagem("Digite codigo ou Descricao - <ESC>Abandonar")
        mcod_bc := SPACE(14)
        mcod_merc := 0
        @ 01,09 GET mcod_bc PICT "@!"     //VALID lim_get() WHEN men_get(lba-09,2,"Informe o Cod.do produto <ENTER>descricao <F4>pesquisar <ALT+A>Alterar Produto")
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mcod_bc)
                @ 01,17 GET mmerc PICT "@!"               //VALID lim_get() WHEN men_get(lba-09,13,"<Digite descricao mercadoria> <ENTER>retornar <F4>pesquisar <ALT+A>Alterar Produto")
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
        ENDIF
        IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                LOOP
        ENDIF
        IF ! EMPTY(mcod_bc)
                IF LEN(RTRIM(mcod_bc)) > 5
                        *************
                        SELE("merc");ORDSETFOCUS(6)
                        *************
                        SEEK mcod_bc
                        IF ! FOUND()
                                atencao("Codigo de BARRA nao cadastrado")
                                LOOP
                        ENDIF
                        mcod_merc := VAL(mcod_bc)
                ELSE
                        mcod_merc := VAL(mcod_bc)
                        *************
                        SELE("merc");ORDSETFOCUS(1)
                        *************
                        SEEK mcod_merc
                        IF ! FOUND()
                                atencao("Codigo da mercadoria nao cadastrado")
                                LOOP
                        ENDIF
                ENDIF
        ELSEIF ! EMPTY(mmerc)
                *************
                SELE("merc");ORDSETFOCUS(3)
                *************
                SEEK RTRIM(mmerc)
                IF ! FOUND()
                        atencao("Esta mercadoria nao cadastrada")
                        LOOP
                ENDIF
                IF merc->cod_merc = SPACE(5)
                        WHILE ! EOF() .AND. merc->cod_merc = SPACE(5)
                                SKIP
                        ENDDO
                ENDIF
                IF EOF() .OR. merc->cod_merc = SPACE(5)
                        atencao("Mercadoria nao cadastrada")
                        LOOP
                ENDIF
                IF(m_set[1,93] <> 'A',f4_merc(),f4_merc1())
                //f4_merc()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        setcor(3)
        DEVPOS(01,09);DEVOUT(merc->cod_merc+"-"+merc->merc)
        DEVPOS(02,01);DEVOUT("Preco: "+TRANSFORM(merc->pr_venda,"999,999.99"))
        DEVPOS(03,01);DEVOUT("Pressione qualquer tecla p/ continuar")
        INKEY(0)
        CLEAR GETS
        setcor(1)
ENDDO
CLEAR GETS
wvw_lclosewindow()
RETURN NIL
************************ F I M **************************
//FUNCTION sem_cx
***************
//msem_cx := 1
//RETURN NIL