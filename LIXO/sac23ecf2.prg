#include "sqlrdd.ch"
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"
//#include "EasyTEF.ch"
********************************
* SOLICITAR PEDIDO ECF
*******************************
MEMVAR mtip_term,nivel_acess,cod_operado,getlist,inicio_protocolo,fim_protocolo_driver,;
       prepara_string,tamanho_de_retorno,mdata_sis,string_devolvida

FUNCTION sac23ecf2(msld)        // CODIGO DE BARRA
***************
#include "ecf.ch"
//#include "\clipper5\inkey.ch"
LOCAL MPRG:="SAC23ECF2",;
      mp_venda,msele,morde,mcont,f,mvar,mtelap,mtot_ipi,mperc,mtelaobs,;
      mdocum,mqtd,mpreco:=0,mvlr_aliq:='  ',mtot_

PRIVATE nErr, nPos,cComm, apCode,m_param:={},aret:={},mcons_ped := {},cons_merc:={},mecf_cpf:='',mnum_pv:=0,;
        m_matriz:={},m_codigo:={},m_merc:={},m_Cbarra:={},i,opcao,;
        mcod_merc,mquantd:=1,mdesconto:=0,mvlr_fat,mtot_ped,mmerc,mpr_venda,;
        lb,cb,mnome_ven,lci,lba,cba,tela,mautoriz,mlibera,;
        mcod_bc,mcont_item,mobs1,mobs2,mobs3,orcamento,sovenda,mvarejo,tela_ant,f4,;
        mprz,mnum_ped:=0,menvelope,mcod_cli:=0,mnome_cli,mponto,m_flag,ali,no,mcod_vend,;
        msubtotal,mtot_custo:=0,mcod_aux,mdocumento:=SPACE(8),mnum_ecf:=SPACE(8),mtot_nota:=0,;
        mhoras:=SPACE(5),mabrir_cp:="",mretorno:=" ",mnum_aux:="",cnumpdv:=" ",cnumcupom:=" ",;
        cont_itens:=0,mcod_fab,mfabrica,mdesc_cart,mobs_prod:=SPACE(40),mcod_cond:=0,mpago:=' ',;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,msld_aux:=' ',mcond_veze:=SPACE(3),mprz,m_dia[15],m_vlr[15],;
        mcons_tabpg,mtipo_preco,mcomi_tab,cons_cli:={},mcomissao := 0

SET KEY -4 TO f5_qtd()                    // INFORMA QUANTIDADE PRODUTO NO PRG SACROT
SET KEY -2 TO C_PROD()                    // CONSULTAR PRODUTO F3
SET KEY -1 TO abrir_gaveta()
SET KEY -7 TO can_item()                 // CANCELA ITEM VENDIDO GENERICO F8
SET KEY -9 TO alt_fecf1("1")             // neste mesmo PRG. <F10>Tecla
SET KEY -40 TO f7_cli("*")             // CADASTRO DE CLIENTES <F11>tecla
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
* ERRO DO SISTEMA**********
m_set:={}
sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
m_set[1,123] := DCRIPTO(SUBSTR(m_set[1,123],1,14))+DCRIPTO(SUBSTR(m_set[1,123],15,6))
IF ! EMPTY(m_set[1,82]) .AND. (DATE() >= CTOD(SUBSTR(m_set[1,82],1,2)+'/'+SUBSTR(m_set[1,82],3,2)+'/'+SUBSTR(m_set[1,82],5,2));
                .OR. SUBSTR(m_set[1,82],12,1) = '*')
        erro()
ENDIF
********************
WHILE .T.
        exibi_prg(mprg)
        IF m_flag = 0
                op_tela(00,01,31,110,mversao+'  -   A B E R T U R A   D O   C U P O M ',,1)
                lim_get()
                botao(0,0,5,99)
                SUB_BANNER(01,02,'TERMINAL LIVRE','*')
                IF FILE(ALLTRIM(m_indiv[1,3])+'hrbfirma.jpg')
                        botao(08,21,18,73)
        	       WVW_DrawImage( ,08,21,18,73,ALLTRIM(m_indiv[1,3])+'HRBFIRMA.JPG',.T.,.F.)
                ENDIF
                IF ! ini_ecf(1)
                        atencao('Nao pode continuar pois estar ocorrendo algum problema o ECF....')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mabrir_cp := " "
                mcod_vend := cod_operado
                mtot_custo := m_flag := msubtotal := mtot_ipi  := mcod_cli := mnum_ped := mnum_pv := 0
                IF msld <> NIL
                        msld_aux := msld
                ENDIF
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
                                                IF ! aut_sen('Alteracao de Prazo na Tabela: '+STRZERO(mcod_cond,3)+' - Autorizacao:','LIB_PRZ',,STRZERO(mcod_cli,5))
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
                                        IF LASTKEY() = 27
                                                LOOP
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
                                        ENDIF
                                        IF mprz > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(mprz,3)+' - Autorizacao:','LIB_PRZ',,STRZERO(mcod_cli,5))
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
                mcod_vend := cod_operado
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
                                        wvw_lclosewindow()
                                        RETURN
                                ENDIF
                                IF ! EMPTY(mcod_cli)
                                        cons_cli := {}
                                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5)),,.t.,@cons_cli)
                                        IF LEN(cons_cli) = 0
                                                atencao('Cliente nao cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE    
                                        mcod_cli := f7_cli()
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                ENDIF
                                cons_cli := {}
                                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5)),,.t.,@cons_cli)
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
                IF m_set[1,80] = "S"
                        IF ! alt_sen("1",1)
                                wvw_lclosewindow()
                                wvw_lclosewindow()
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
                mcont_item := cont_itens := 0
                m_flag := 1
                wvw_lclosewindow()
        ENDIF
        op_tela(00,00,50,120,memp_resa+SPACE(50)+mversao+'  -  V E N D A S  **'+SPACE(40)+'Terminal: '+m_indiv[1,1])
        WHILE .T.
                botao(00,01,10,119)
                limpa(01,02,09,119)
                setcor(1)
                SUB_BANNER(01,10,'P R O D U T O','*')
                IF LEN(m_codigo) = 0
                        limpa(01,02,09,119)
                        setcor(1)
                        IF m_indiv[1,26] = 'T'
                                SUB_BANNER(01,05,'CAIXA LIVRE','*')
                        ELSE
                                SUB_BANNER(01,05,'TERMINAL LIVRE','*')
                        ENDIF
                ENDIF
                IF FILE(ALLTRIM(m_indiv[1,3])+'hrbfirma.jpg')
                        botao(12,01,26,53)
                	WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_indiv[1,3])+'HRBFIRMA.JPG',.T.,.F.)
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
                i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := 0
                SETCOLOR('B/w,B/w')
                botao(lci-3,55,lba,cba-1)
                mqtd_lin := 0
                mitem := 1
                IF LEN(m_codigo) > 20
                        mqtd_lin := LEN(m_codigo) - 20
                ENDIF
                WVW_DrawLabel(,lci-3,58,'No.Cupom: '+mdocumento+'  -  Caixa: '+mnum_ecf,,,210,, 'Arial Black',25,10,,,,,)

                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),104),,,,, 'terminal',13,4,,,,,)
                f++
                @ lci+f,55 SAY ''
                WVW_DrawLabel(,lci+f,COL(),'Item  Cod.  Descricao                                      Quantd.   Vlr.Unit.   Vlr.Total',,,,, 'terminal',13,4,,,,,)
                f++
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),104),,,,, 'terminal',13,4,,,,,)
                FOR i = 1 TO LEN(m_codigo)
                        IF m_codigo[i] = '     ' .OR. m_codigo[i] = NIL
                                LOOP
                        ENDIF
                        mlibera := ' '
                        SETCOLOR('W/b,W/b')
                        IF mqtd_lin < i
                        @ lci+1+f,55 SAY ''
                        IF m_set[1,147] = 'C'

                                IF m_matriz[i,6] = 'EV ' .OR. m_matriz[i,6] = 'PL '
                                        WVW_DrawLabel(,lci+1+f,COL()+1,STRZERO(i,4)+'  '+m_codigo[i]+'  '+LEFT(m_matriz[i,5],29)+' '+m_matriz[i,24]+' '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                ELSE
                                        IF ! EMPTY(ALLTRIM(m_matriz[i,28]))
                                                WVW_DrawLabel(,lci+1+f,COL()+1,STRZERO(i,4)+'  '+m_codigo[i]+'  '+LEFT(m_matriz[i,5],19)+' '+m_matriz[i,28]+' '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                        ELSE
                                                WVW_DrawLabel(,lci+1+f,COL()+1,STRZERO(i,4)+'  '+m_codigo[i]+'  '+m_matriz[i,5]+' '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                        ENDIF
                                ENDIF
                        ELSE
                                WVW_DrawLabel(,lci+1+f,COL()+1,STRZERO(i,4)+'  '+m_cbarra[i]+'  '+LEFT(m_matriz[i,5],30)+' '+m_matriz[i,28]+' '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,2] * m_matriz[i,1],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                        ENDIF
                        f++
                        ENDIF
                        mtot_desc := mtot_desc + iat((m_matriz[i,1] * m_matriz[i,8]),m_set[1,103])
                        msubtotal := msubtotal + iat((m_matriz[i,1] * m_matriz[i,2]),m_set[1,103])
                        mtot_custo:= mtot_custo + iat((m_matriz[i,1] * m_matriz[i,9]),m_set[1,103])
                        mtot_ipi := mtot_ipi + ((m_matriz[i,2] * m_matriz[i,1]) * (m_matriz[i,22]/100))
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
                SET KEY -9 TO alt_fecf1("1")       // neste mesmo PRG. <F10>Tecla
                setcor(1)
                mensagem("Tecle: <X mais a qtd.>Informa Qtd. - <F8>Canc.Item - <F10>Fechamento - <F4> Abrir Gaveta - <F3> Consulta Produto - <ESC>Retornar")
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
                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,mcod_bc,STRZERO(mvarejo,1),mperc),f4_merc1(,mcod_bc,STRZERO(mvarejo,1),mperc))
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
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
                        IF ! EMPTY(m_codigo)               //IBR_CUPOM_ABERTO()
                                opcao := op_simnao("N","Deseja CANCELAR O CUPOM Agora:")
                                IF opcao = "S"
                                        //IBR_CAN_CUPOM()
                                        IF ! CANCELAR_CUPOM(,1)
                                                LOOP
                                        ENDIF
                                        **********
                                        SELE('merc');ORDSETFOCUS(1)
                                        **********
                                        i := 0
                                        FOR i = 1 TO LEN(m_codigo)
                                                IF EMPTY(m_codigo[i]) .OR. m_codigo[i] = NIL    //.OR. m_matriz[i,41] = 'OS'
                                                        LOOP
                                                ENDIF
                                                cons_merc := {}
                                                sr_getconnection():exec("SELECT saldo_mer,saldo_fis FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.t.,@cons_merc)
                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(cons_merc[1,2] +  m_matriz[i,1])+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.f.)
                                        NEXT
                                        sr_getconnection():exec("COMMIT",,.f.)
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
                                        DEVPOS(00,80);DEVOUT('Preco   R$:')
                                        WVW_DrawLabel(,04,70,TRANSFORM(mvlr_fat,'@E 999,999.99'),,,240,, 'arial black',60,30,,,,,)
                                        setcor(1)                                                                                 
                                        mobs_prod := mcons_ped[p,58]                                                              
                                                                                                                                  
                                        mquantd := mcons_ped[p,14]                                                                
                                        IF ! EMPTY(cons_merc[1,28]) .AND. cons_merc[1,28] >= (cons_merc[1,56] - mquantd) .AND. cons_merc[1,9] <> "DIVERSOS" .AND. m_set[1,107] = "S" .AND. m_indiv[1,26] <> "T"
                                                atencao("SALDO esta menor que o ESTOQUE MINIMO: "+TRANSFORM(cons_merc[1,28],"9,999,999.99")+" estipulado !!!")                                       
                                        ENDIF                                                                                                                                                              
                                        IF ! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]                                                                                                                                                                                                                                                                                                                              
                                                atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')                                                                                                                                                                                                                                                                                                        
                                                LOOP                                                                                                                                                                                                                                                                                                                                                                 
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
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        mhoras     := TIME()                                                                                                                                                                                                                                                                                                                                                         
                                        mabrir_cp := "*"                                                                                                                                                                                                                                                                                                                                                             
                                        AADD(m_merc,cons_merc[1,9])
                                        AADD(m_codigo,cons_merc[1,8])
                                        AADD(m_Cbarra,cons_merc[1,2])
                                        SR_BEGINTRANSACTION()                                                                                                                                                                                                                                                                                                                                                        
                                                TRY                                                                                                                                                                                                                                                                                                                                                                          
                                                aret:={}
                                                cComm  := "select saldo_mer,saldo_fis,sr_recno from sacmerc where cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                                                sr_getconnection():exec(ccomm,,.t.,@aret)
                                                ccomm :="update sacmerc set saldo_fis = "+sr_cdbvalue(aret[1,2] - mquantd)+" where cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                                                sr_getconnection():exec(ccomm,,.f.)
                                                sr_committransaction()
                                                CATCH e                                                                                                                                                                                                                                                                                                                                                                      
                                        SR_ENDTRANSACTION()                                                                                                                                                                                                                                                                                                                                                          
                                        END                                                                                                                                                                                                                                                                                                                                                                          
                                        cont_itens ++                                                                                                                                                                                                                                                                                                                                                                
                                        IF mvlr_fat = 0                                                                                                                                                                                                                                                                                                                                                              
                                        *                         1       2        3           4          5        6            7         8           9            10             11              12            13           14           15          16          17              18           19   20        21         22         23           24      25        26             27           28        29        30        31       32       33         34            35           36         37       38          39
                                        *                             40        41 42 43    44                                                                                                                                                                                                                                                                                                                       
                                                AADD(m_matriz,{mquantd,mvlr_fat,        0,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],       0,              0,cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,mhoras,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                               cons_merc[1,47],'  ',0,0,cont_itens})                                                                                                                                                                                                                                                                                                                 
                                        ELSE                                                                                                                                                                                                                                                                                                                                                                         
                                                AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],mp_venda,cons_merc[1,45],cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,mhoras,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                               cons_merc[1,47],'  ',0,0,cont_itens})                                                                                                                                                                                                                                                                                                                 
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        mensagem("Imprimindo o Produto")                                                                                                                                                                                                                                                                                                                                             
                                        mdesconto := mpreco := 0                                                                                                                                                                                                                                                                                                                                                     
                                        IF mp_venda < mvlr_fat
                                                mdesconto := 0
                                                mpreco := mvlr_fat
                                        ELSE                                                                                                                                                                                                                                                                                                                                                                         
                                                mpreco := mp_venda                                                                                                                                                                                                                                                                                                                                                   
                                                mdesconto := mquantd*mp_venda - mquantd*mvlr_fat
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                                IF cons_merc[1,61] = 'S'
                                                        mvlr_aliq := 'II'
                                                ELSEIF cons_merc[1,61] = 'T'
                                                        mvlr_aliq := 'NN'   
                                                ELSEIF cons_merc[1,61] = 'F'
                                                        mvlr_aliq := 'FF'
                                                ELSEIF cons_merc[1,62] > 0
                                                        mvlr_aliq := 'T'+SUBSTR(IBR_ACHA_ALIQ(cons_merc[1,62]),2,1)
                                                ELSEIF cons_merc[1,63] > 0
                                                        mvlr_aliq := 'F1'                                                                                                                                                                                                                                                                                                                                            
                                                ELSE                                                                                                                                                                                                                                                                                                                                                                 
                                                        mvlr_aliq := 'T'+SUBSTR(IBR_ACHA_ALIQ(17),2,1)
                                                ENDIF                                                                                                                                                                                                                                                                                                                                                                
                                                vende_prod(STRZERO(VAL(cons_merc[1,8]),13),cons_merc[1,9]+'  '+ALLTRIM(mobs_prod),mvlr_aliq,'F',mquantd,3,mpreco,'$',mdesconto,cons_merc[1,14])
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
                                                STRZERO(mcod_merc,5),;//5                                                                                                                                                                                                                                                                                                                                            
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
                                                IF(msld = NIL,"01","03"),;//23
                                                STRZERO(mnum_pv,6);//24
                                                },sr_getconnection():nsystemid)                                                                                                                                                                                                                                                                                                                                      
                                                sr_getconnection():exec(ccomm,,.f.)                                                                                                                                                                                                                                                                                                                                  
                                        mquantd := 1                                                                                                                                                                                                                                                                                                                                                                 
                                        sr_getconnection():exec('COMMIT',,.f.)                                                                                                                                                                                                                                                                                                                                       
                                NEXT
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
                                        DEVPOS(00,80);DEVOUT('Preco   R$:')
                                        WVW_DrawLabel(,04,70,TRANSFORM(mvlr_fat,'@E 999,999.99'),,,240,, 'arial black',60,30,,,,,)
                                        setcor(1)                                                                                 
                                        mobs_prod := mcons_ped[p,58]                                                              
                                                                                                                                  
                                        mquantd := mcons_ped[p,14]                                                                
                                        IF ! EMPTY(cons_merc[1,28]) .AND. cons_merc[1,28] >= (cons_merc[1,56] - mquantd) .AND. cons_merc[1,9] <> "DIVERSOS" .AND. m_set[1,107] = "S" .AND. m_indiv[1,26] <> "T"
                                                atencao("SALDO esta menor que o ESTOQUE MINIMO: "+TRANSFORM(cons_merc[1,28],"9,999,999.99")+" estipulado !!!")                                       
                                        ENDIF                                                                                                                                                              
                                        IF mp_venda > mvlr_fat
                                                mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                                
                                        IF ! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]                                                                                                                                                                                                                                                                                                                              
                                                atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')                                                                                                                                                                                                                                                                                                        
                                                LOOP                                                                                                                                                                                                                                                                                                                                                                 
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
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        mhoras     := TIME()                                                                                                                                                                                                                                                                                                                                                         
                                        mabrir_cp := "*"                                                                                                                                                                                                                                                                                                                                                             
                                        AADD(m_merc,cons_merc[1,9])
                                        AADD(m_codigo,cons_merc[1,8])
                                        AADD(m_Cbarra,cons_merc[1,2])
                                        SR_BEGINTRANSACTION()                                                                                                                                                                                                                                                                                                                                                        
                                                TRY                                                                                                                                                                                                                                                                                                                                                                          
                                                aret:={}
                                                cComm  := "select saldo_mer,saldo_fis,sr_recno from sacmerc where cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                                                sr_getconnection():exec(ccomm,,.t.,@aret)
                                                ccomm :="update sacmerc set saldo_fis = "+sr_cdbvalue(aret[1,2] - mquantd)+" where cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                                                sr_getconnection():exec(ccomm,,.f.)
                                                sr_committransaction()
                                                CATCH e                                                                                                                                                                                                                                                                                                                                                                      
                                        SR_ENDTRANSACTION()                                                                                                                                                                                                                                                                                                                                                          
                                        END                                                                                                                                                                                                                                                                                                                                                                          
                                        cont_itens ++                                                                                                                                                                                                                                                                                                                                                                
                                        IF mvlr_fat = 0                                                                                                                                                                                                                                                                                                                                                              
                                        *                         1       2        3           4          5        6            7         8           9            10             11              12            13           14           15          16          17              18           19   20        21         22         23           24      25        26             27           28        29        30        31       32       33         34            35           36         37       38          39
                                        *                             40        41 42 43    44                                                                                                                                                                                                                                                                                                                       
                                                AADD(m_matriz,{mquantd,mvlr_fat,        0,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],       0,              0,cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,mhoras,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                               cons_merc[1,47],'  ',0,0,cont_itens})                                                                                                                                                                                                                                                                                                                 
                                        ELSE                                                                                                                                                                                                                                                                                                                                                                         
                                                AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,cons_merc[1,7],cons_merc[1,9],cons_merc[1,14],cons_merc[1,17],mp_venda,cons_merc[1,45],cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,mhoras,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                                               cons_merc[1,47],'  ',0,0,cont_itens})                                                                                                                                                                                                                                                                                                                 
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                        mensagem("Imprimindo o Produto")                                                                                                                                                                                                                                                                                                                                             
                                        mdesconto := mpreco := 0                                                                                                                                                                                                                                                                                                                                                     
                                        IF mp_venda < mvlr_fat
                                                mdesconto := 0
                                                mpreco := mvlr_fat
                                        ELSE                                                                                                                                                                                                                                                                                                                                                                         
                                                mpreco := mp_venda                                                                                                                                                                                                                                                                                                                                                   
                                                mdesconto := mquantd*mp_venda - mquantd*mvlr_fat
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                                                IF cons_merc[1,61] = 'S'
                                                        mvlr_aliq := 'II'
                                                ELSEIF cons_merc[1,61] = 'T'
                                                        mvlr_aliq := 'NN'   
                                                ELSEIF cons_merc[1,61] = 'F'
                                                        mvlr_aliq := 'FF'
                                                ELSEIF cons_merc[1,62] > 0
                                                        mvlr_aliq := 'T'+SUBSTR(IBR_ACHA_ALIQ(cons_merc[1,62]),2,1)
                                                ELSEIF cons_merc[1,63] > 0
                                                        mvlr_aliq := 'F1'                                                                                                                                                                                                                                                                                                                                            
                                                ELSE                                                                                                                                                                                                                                                                                                                                                                 
                                                        mvlr_aliq := 'T'+SUBSTR(IBR_ACHA_ALIQ(17),2,1)
                                                ENDIF                                                                                                                                                                                                                                                                                                                                                                
                                                vende_prod(STRZERO(VAL(cons_merc[1,8]),13),cons_merc[1,9]+'  '+ALLTRIM(mobs_prod),mvlr_aliq,'F',mquantd,3,mpreco,'$',mdesconto,cons_merc[1,14])
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
                                                STRZERO(mcod_merc,5),;//5                                                                                                                                                                                                                                                                                                                                            
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
                                                IF(msld = NIL,"01","03"),;//23
                                                STRZERO(mnum_ped,6);//24
                                                },sr_getconnection():nsystemid)                                                                                                                                                                                                                                                                                                                                      
                                                sr_getconnection():exec(ccomm,,.f.)                                                                                                                                                                                                                                                                                                                                  
                                        mquantd := 1                                                                                                                                                                                                                                                                                                                                                                 
                                        sr_getconnection():exec('COMMIT',,.f.)                                                                                                                                                                                                                                                                                                                                       
                                NEXT
                                LOOP
                        ENDIF

                        IF SUBSTR(mcod_bc,1,1) = "2" .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                                IF m_set[1,159] = 'V'
                                        mcod_merc := VAL(SUBSTR(mcod_bc,2,6))
                                ELSE
                                        mcod_merc := VAL(SUBSTR(mcod_bc,2,5))
                                ENDIF
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
                                IF LEN(cons_merc) = 0
                                        atencao("Codigo Barra nao cadastrado")
                                        LOOP
                                ENDIF
                        ELSEIF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                IF LEN(RTRIM(mcod_bc)) = 12
                                        mcod_bc := '0'+mcod_bc
                                ENDIF
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
/*
                        ELSEIF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_bc),,.t.,@cons_merc)
                                IF LEN(cons_merc) = 0
                                        cons_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE ref = "+sr_cdbvalue(mcod_bc),,.t.,@cons_merc)
                                        IF LEN(cons_merc) = 0
                                                atencao("Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado")
                                                LOOP
                                        ENDIF
                                ENDIF
                                mcod_merc := VAL(cons_ref(cons_merc[1,6]))
*/
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
                                IF LEN(cons_merc) = 0
                                        atencao("Codigo da mercadoria nao cadastrado")
                                        LOOP
                                ENDIF
                        ENDIF
                ELSEIF EMPTY(mmerc)
                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,,STRZERO(mvarejo,1),mperc),f4_merc1(,,STRZERO(mvarejo,1),mperc))
                        //mcod_merc := VAL(f4_merc(,,STRZERO(mvarejo,1),mperc))
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
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
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'hrbfirma.jpg')
                        botao(12,01,26,53)
                	WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_indiv[1,3])+'HRBFIRMA.JPG',.T.,.F.)
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
                @ 28,14 SAY STRZERO(mcod_merc,5)
                @ 29,14 SAY cons_merc[1,9]
                @ 33,14 SAY cons_merc[1,56] PICT '9,999,999.99'
                @ 34,14 SAY cons_merc[1,55] PICT '9,999,999.99'
                setcor(1)
                mperc := 0
                IF cons_merc[1,23] > 0
                        mvlr_fat = iat(cons_merc[1,46],m_set[1,103]) - iat((cons_merc[1,46] * (cons_merc[1,23] / 100)),m_set[1,103])
                        mp_venda = mvlr_fat
                ELSE
                        IF mvarejo = 2
                                mvlr_fat = iat(cons_merc[1,46]*((cons_merc[1,50]/100)+1),m_set[1,103])
                                mp_venda = iat(cons_merc[1,46]*((cons_merc[1,50]/100)+1),m_set[1,103])
                        ELSE
                                mvlr_fat = iat(cons_merc[1,46],m_set[1,103])
                                mp_venda = iat(cons_merc[1,46],m_set[1,103])
                        ENDIF
                ENDIF
                WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                botao(00,01,10,119)
                IF cons_merc[1,23] > 0
                        setcor(6)
                        DEVPOS(00,20);DEVOUT('(Promocao)')
                ENDIF
                DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                WVW_DrawLabel(,01,02,cons_merc[1,8]+' - '+SUBSTR(cons_merc[1,9],1,30),,,,, 'arial black',60,20,,,,,)
                WVW_DrawLabel(,06,02,'             '+SUBSTR(cons_merc[1,9],31),,,,, 'arial black',60,20,,,,,)
                WVW_DrawLabel(,06,02,IF(! EMPTY(cons_merc[1,23]),'P:'+TRANSFORM(cons_merc[1,23],'99')+' %',''),,,245,, 'arial black',60,20,,,,,)
                IF cons_merc[1,84] = 'S'
                        mp_venda := mvlr_fat := (mvlr_fat * ver_dolar(mdata_sis))
                ENDIF

                IF m_set[1,125] = 'S' .AND. cons_merc[1,23] = 0
                        mperc := 0
                        @ 36,46 GET mperc PICT '999.99'
                        READ
                        limpa(32,46,32,52)
                        IF (mperc > cons_merc[1,80] .AND. ! EMPTY(cons_merc[1,80]));
                           .OR. (mperc > m_set[1,33] .AND. EMPTY(cons_merc[1,80]))
                                IF ! aut_sen(TRANSFORM(mperc,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,STRZERO(mcod_merc,5))
                                        setcor(1)
                                        mquantd := 1
                                        LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mperc)
                                mperc:= mperc * -1
                                mp_venda = iat(mvlr_fat,m_set[1,103])
                                mvlr_fat = iat(mvlr_fat*((mperc/100)+1),m_set[1,103])
                        ENDIF
                ENDIF

                DEVPOS(00,80);DEVOUT('Preco   R$:')
                WVW_DrawLabel(,06,70,TRANSFORM(mvlr_fat,'@E 999,999.99'),,,240,, 'arial black',60,30,,,,,)
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
                        op_tela(22,10,24,51,' O B E R V A C A O   D O   P R O D U T O')
                        WVW_DrawBoxGet(,01,01,LEN(mobs_prod))
                        @ 01,01 GET mobs_prod VALID IF(EMPTY(mobs_prod) .AND. cons_merc[1,14]='PL',.F.,.T.)
                        READ
                        wvw_lclosewindow()
                ENDIF
                mensagem("<F8> para consultar aplicacao do produto")
                IF SUBSTR(mcod_bc,1,1) = '2' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                        IF m_set[1,159] = 'V'
                                mquantd := (VAL(SUBSTR(mcod_bc,8,5))/1000)
                        ELSE
                                mquantd := (VAL(SUBSTR(mcod_bc,8,5))/100) / mvlr_fat
                        ENDIF
                        DEVPOS(lba-3,53);DEVOUTPICT(mquantd,ALLTRIM(m_set[1,99]))
                        DEVPOS(lba-3,65);DEVOUTPICT(mvlr_fat,ALLTRIM(m_set[1,98]))
                        setcor(1)
                ELSE
                        setcor(1)
                        mensagem("<F8> para consultar aplicacao do produto")
                        //mquantd := 1
                        @ 30,14 GET mquantd PICT ALLTRIM(m_set[1,99]) WHEN m_indiv[1,26] <> "T" VALID IF(EMPTY(mquantd),.F.,.T.)
                        READ
                        IF LASTKEY() = 27;LOOP;ENDIF
/*
                        IF cons_merc[1,103] = 'S' .AND. mquantd > cons_merc[1,56]
                                atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                                LOOP
                        ENDIF
                        IF mquantd > cons_merc[1,56] .AND. cons_merc[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. SUBSTR(cons_merc[1,9],1,1) <> '@' .AND. (ver_serie() = '141490' .OR. ver_serie() = '141491' .OR. ver_serie() = '141492' .OR. ver_serie() = '141493')
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(cons_merc[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,'',STRZERO(mcod_merc,5))
                                        LOOP
                                ENDIF
                                mlibera := 'S'
                        ENDIF
                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,STRZERO(mcod_merc,5))
                                        LOOP
                                ENDIF
                        ENDIF
*/
                        IF ! EMPTY(cons_merc[1,28]) .AND. cons_merc[1,28] >= (cons_merc[1,56] - mquantd) .AND. cons_merc[1,9] <> "DIVERSOS" .AND. m_set[1,107] = "S" .AND. m_indiv[1,26] <> "T"
                                atencao("SALDO esta menor que o ESTOQUE MINIMO: "+TRANSFORM(cons_merc[1,28],"9,999,999.99")+" estipulado !!!")
                        ENDIF

                        mensagem("Digite o valor do produto - <ESC>Abandonar")
                        @ 31,14 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF((cons_merc[1,23]>0 .AND. mvlr_fat < mp_venda) .OR. mvlr_fat = 0,.F.,.T.) WHEN m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T' .AND. EMPTY(mperc) .OR. mvlr_fat = 0
                        READ
                        IF LASTKEY() = 27
                                UNLOCK
                                LOOP
                        ENDIF
                        IF ! EMPTY(m_set[1,154]) .AND. mvlr_fat > m_set[1,154]
                                IF ! aut_sen('Valor do Produto Solicitada: '+ALLTRIM(TRANSFORM(mvlr_fat,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,154],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,STRZERO(mcod_merc,5))
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mvlr_fat > 0
                        ENDIF
                        IF mp_venda > mvlr_fat
                                mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                IF ((mp_venda - mvlr_fat)/mp_venda)*100 > m_set[1,33] .AND. EMPTY(cons_merc[1,80]) .AND. EMPTY(mperc)
                                        IF ! aut_sen(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,STRZERO(mcod_merc,5))
                                                setcor(1)
                                                LOOP
                                        ENDIF
                                ELSEIF ((mp_venda - mvlr_fat)/mp_venda)*100 > cons_merc[1,80] .AND. ! EMPTY(cons_merc[1,80]) .AND. EMPTY(mperc)
                                        IF ver_serie() = "141220" .OR. ver_serie() = "141350" .OR. ver_serie() = "141384"
                                                atencao(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido..")
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                        IF ! aut_sen(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,STRZERO(mcod_merc,5))
                                                setcor(1)
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = "C" .AND. mvlr_fat < cons_merc[1,45]
                                        IF ! aut_sen("Senha de autorizacao:","LIB_DESC",,,STRZERO(mcod_merc,5))
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = "V" .AND. mvlr_fat < mp_venda
                                        IF ! aut_sen("Senha de autorizacao:","LIB_DESC",,,STRZERO(mcod_merc,5))
                                                LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                ENDIF
                IF ! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]
                        atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                        LOOP
                ENDIF
                setcor(1)
                mcod_fab := cons_merc[1,30]
                mfabrica := cons_merc[1,31]
                mtot_ped = 0
                mtot_ped = mvlr_fat * mquantd
                setcor(3)
                @ 32,14 SAY mtot_ped PICT ALLTRIM(m_set[1,98])
                setcor(1)
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
        		ENDIF
        			
		      	mhoras     := TIME()
                        mabrir_cp := "*"
                        mensagem("Imprimindo o Produto")
                        mdesconto := mpreco := 0
                        IF mp_venda < mvlr_fat
                                mdesconto := 0
                                mpreco := mvlr_fat
                        ELSE
                                mpreco := mp_venda
                                mdesconto := mquantd*mp_venda - mquantd*mvlr_fat
                        ENDIF
                                IF cons_merc[1,61] = 'S'
                                        //mvlr_aliq := 'I1'
                                        mvlr_aliq := 'II'
                                ELSEIF cons_merc[1,61] = 'T'
                                        mvlr_aliq := 'NN'
                                ELSEIF cons_merc[1,61] = 'F'
                                        mvlr_aliq := 'FF'
                                ELSEIF cons_merc[1,62] > 0
                                        mvlr_aliq := 'T'+SUBSTR(IBR_ACHA_ALIQ(cons_merc[1,62]),2,1)
                                ELSEIF cons_merc[1,63] > 0
                                        mvlr_aliq := 'F1'
                                ELSE
                                        mvlr_aliq := 'T'+SUBSTR(IBR_ACHA_ALIQ(17),2,1)
                                ENDIF
                                IF ! vende_prod(STRZERO(VAL(cons_merc[1,8]),13),cons_merc[1,9]+'  '+ALLTRIM(mobs_prod),mvlr_aliq,'F',mquantd,3,mpreco,'$',mdesconto,cons_merc[1,14])
                                        LOOP
                                ENDIF

                                //IBR_ITEM(STRZERO(VAL(cons_merc[1,8]),13),cons_merc[1,9]+'  '+ALLTRIM(mobs_prod),mvlr_aliq,TRANSFORM(mquantd,"999999.99"),TRANSFORM(mpreco,"9999999.999"),TRANSFORM(mdesconto,"999.99"),cons_merc[1,14])
                        AADD(m_merc,cons_merc[1,9])
                        AADD(m_codigo,STRZERO(mcod_merc,5))
                        AADD(m_Cbarra,cons_merc[1,2])
                        SR_BEGINTRANSACTION()
                        TRY
                                aret:={}
                                cComm  := "select saldo_mer,saldo_fis,sr_recno from sacmerc where cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                                sr_getconnection():exec(ccomm,,.t.,@aret)
                                ccomm :="update sacmerc set saldo_fis = "+sr_cdbvalue(aret[1,2] - mquantd)+" where cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                                sr_getconnection():exec(ccomm,,.f.)
                        sr_committransaction()
                        CATCH e
                        SR_ENDTRANSACTION()
                        END
                        cont_itens ++
                        IF mvlr_fat = 0
                        *                         1       2        3           4          5        6            7         8           9            10             11              12            13           14           15          16          17              18           19   20        21         22         23           24      25        26             27           28        29        30        31       32       33         34            35           36         37       38          39
                        *                             40        41 42 43    44
                                AADD(m_matriz,{mquantd,mvlr_fat,        0,cons_merc[1,7],mmerc,cons_merc[1,14],cons_merc[1,17],       0,              0,cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,mhoras,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                               cons_merc[1,47],'  ',0,0,cont_itens})
                        ELSE
                                AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,cons_merc[1,7],mmerc,cons_merc[1,14],cons_merc[1,17],mp_venda,cons_merc[1,45],cons_merc[1,30],cons_merc[1,31],cons_merc[1,21],cons_merc[1,61],cons_merc[1,23],mcomissao,cons_merc[1,62],cons_merc[1,16],cons_merc[1,44],mobs1,mobs2,cons_merc[1,73],cons_merc[1,65],cons_merc[1,15],menvelope,mhoras,cons_merc[1,82],cons_merc[1,83],SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),cons_merc[1,75],cons_merc[1,74],mobs_prod,SPACE(3),SPACE(3),cons_merc[1,27],;
                                               cons_merc[1,47],'  ',0,0,cont_itens})
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
                                STRZERO(mcod_merc,5),;//5
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
                                IF(msld = NIL,"01","03");//23
                                },sr_getconnection():nsystemid)
                                sr_getconnection():exec(ccomm,,.f.)
                        mquantd := 1
                        sr_getconnection():exec('COMMIT',,.f.)
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
//#include "EasyTEF.ch"
*******************************
* RECEBIMENTO DE TP"s
*******************************
FUNCTION alt_fecf1
***************
LOCAL MPRG:="SAC23ECF2",;
      opcao,lci,lba,cba,i,mopcao,f,mtipo_comp,mtipo_pag,mtot_verif,;
      mperc_comissao,li,lb,cb,mdiferenca,mtroco:=0,;
      m_recebe:={},mdinheiro,mn_banco,mn_cheque,mn_dup,mn_trans,mvencimento,mt_pag,;
      mvalor,mn_fin,mtot_ipi,mbox_rece,magencia,mc_c,mcorrente,mcartao_sn:=" ",;
      aret:={},mvlr_cred:=0,mcredito_aux:=0,m_credito:={}

MEMVAR mtot_nota,m_codigo,m_merc,m_matriz,mdocumento,mnum_ecf,mcod_bc,m_flag,mhoras

PRIVATE mlin,mcartao,mprazo_cart,mdesc_cart,mcobra_fin,mtaxa_fin,;
        m_desc:={},mdesconto,mreceb,mcom_ven,mcom_ap,mbanco,;
        mcliente,mnome_vend,mperc,mcgc,mcpf,mcod_vend,;
        minsc,mcond_vezes,mcond_intev,mtp_vend,mtot_desc,msub_total,;
        mvl_vend:=0,mtot_icm:=0,mtipo_pg:=0,mvalor_aux,string_devolvida,mtot_rece:=0,;
        mn_cupom,mcli:=" ",mnome_arq:=' ',mvalor_cart:=0,mcod_cart,mdesc_cx:=0,mdesc_perc:=0,;
        mcredito:=0,mn_cred:=SPACE(8),nTotalAPagar:=0,mind_cartao:='',m_flag_f:=' ',mdesc_p,mdesc_r,mdesc_u,mdesconto
        //EasyTEF

CLEAR GETS
mreceb := "R"
lci = 04
lba = 23
cba = 100
*----------------------------------------------------
IF ! AbriArq("sacfin","fin");RETURN NIL;ENDIF
IF ! AbriArq("insopera","sen");RETURN NIL;ENDIF
IF ! AbriArq("sacped_s","ped_s");RETURN NIL;ENDIF
IF ! AbriArq("saccli","cli");RETURN NIL;ENDIF
IF ! AbriArq("sacmerc","merc");RETURN NIL;ENDIF
IF ! AbriArq("sacmov","mov");RETURN NIL;ENDIF
IF ! AbriArq("saccarta","car");RETURN NIL;ENDIF
*---------------------------------------------
ver_ven(cod_operado)
atencao(" Operador:"+cod_operado+"-"+RTRIM(sen->snome))
mtot_nota := sub_total()        //IBR_SUBTOTAL()
IF mtot_nota = 0
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
op_tela(00,00,30,100," RECEBIMENTOS    -    TEF: "+m_indiv[1,41])
WHILE .T.
        ASIZE(m_desc,0)
        SET INTEN ON
        mensagem("Preencha os Campos - <ESC> p/Retornar ")
        mcom_ven := mcom_ap := mdesconto := mperc := mcod_cli := mvl_vend :=;
        mperc_comissao := mprazo_cart := mdesc_cart := mtot_icm :=;
        mdinheiro := mcod_cart := mvalor := mtot_desc := mtot_verif := ;
        mtot_ipi := mdiferenca := i := f := mtot_verif := mtot_rece := mvlr_cred := mdesc_p := mdesc_r := mdesc_u := ;
        mdesconto := 0
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
        i := mcod_vend := 1

        mbox := SAVESCREEN(01,00,24,79)
        ASIZE(m_recebe,0)
        lb := 22
        cb := 100
        DEVPOS(0,1);DEVOUT("Cod.Vendedor:")
        DEVPOS(1,1);DEVOUT("Cod.Cliente.:")
        DEVPOS(2,1);DEVOUT("C.P.F.......:")
        DEVPOS(2,32);DEVOUT("C.G.C.:")
        DEVPOS(3,1);DEVOUT("Desconto(%).:")
        DEVPOS(3,32);DEVOUT("Desconto (R$):")
        @ 4,0 TO 4,cb
        DEVPOS(12,1);DEVOUT("Total da COMPRA.....R$:")
        @ 13,0 TO 13,cb
        DEVPOS(14,1);DEVOUT("Total RECEBIDO......R$:")
        DEVPOS(14,40);DEVOUT("a RECEBER R$:")
        @ 15,0 TO 15,cb
        @ 19,0 TO 19,cb
        janela(19,cb," Formas de Pagamentos ","*")

        IF LASTKEY() = 27
                UNLOCK
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cli := VAL(m_set[1,84])
        ***************
        SELE("cli");ORDSETFOCUS(1)
        GO TOP
        ***************
        @ li  ,15 GET mcod_vend PICT "999" VALID IF(EMPTY(mcod_vend),.F.,ven(@mcod_vend,li,20))
        @ 1,15 GET mcod_cli PICT "99999" VALID ver_cli(mcod_cli,1,21)
        @ 2,15 GET mcpf PICT "@@R 999.999.999-99" VALID IF(mcpf = SPACE(11),.T.,ver_cpf(mcpf)) WHEN mcod_cli = 0
        @ 2,39 GET mcgc PICT "@@R 99.999.999/9999-99" VALID IF(mcgc = SPACE(14),.T.,ver_cgc(mcgc)) WHEN mcod_cli = 0 .AND. mcpf = SPACE(11)
        @ 3,15 GET mdesc_p PICT "999.99" WHEN m_set[1,43] = 'T' .AND. m_set[1,125] = 'N'
        @ 3,46 GET mdesc_r PICT "999,999.99" WHEN EMPTY(mdesc_p) .AND. m_set[1,43] = 'T' .AND. m_set[1,125] = 'N'
        READ
        IF INKEY() = 27
                DBUNLOCKALL()
                LOOP
        ENDIF
        //ver_cli(mcod_cli,2,21)
        IF ! EMPTY(mdesc_p)
                mtot_aux  :=  mtot_nota 
                mtot_nota := iat(mtot_nota - (mtot_nota * (mdesc_p/100)),2)
                //mdesconto := (mtot_nota * (mdesc_p/100))
                mdesconto := mtot_aux - mtot_nota
                mdesconto := mdesconto * -1
                mdesc_u := mdesc_p
        ELSEIF ! EMPTY(mdesc_r)
                mtot_nota := mtot_nota - mdesc_r
                mdesconto := mdesc_r  * -1
                mdesc_u := iat((mdesc_r / mtot_nota) * 100,3)
        ENDIF
        IF mdesc_u > m_set[1,33] .AND. ! aut_sen('Desconto solicitado de '+TRANSFORM(mdesc_u,'9999.99')+' maior que o Autorizado de '+TRANSFORM(m_set[1,33],'9999.99')+'.. Senha de autorizacao:','LIB_DESC',,STRZERO(mcod_cli,5))
                LOOP
        ENDIF
        cons_cli := {}
        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5)),,.t.,@cons_cli)
        IF LEN(cons_cli) = 0
                atencao('Cliente nao cadastrado !!!')
                LOOP
        ENDIF
        IF mcod_cli <> 0
                mcpf := cons_cli[1,34]
                mcgc := cons_cli[1,32]
                minsc := cons_cli[1,33]
        ENDIF
        mcli := "Cliente:"+STRZERO(mcod_cli,5)+"-"+ALLTRIM(mcliente)+CHR(13)+CHR(10)
        IF ! EMPTY(cons_cli[1,34])
                mcli := mcli + 'CPF: '+cons_cli[1,34]+CHR(13)+CHR(10)
        //ELSEIF  ! EMPTY(cons_cli[1,32])
        //        mcli := mcli + 'CNPJ: '+cons_cli[1,32]+CHR(13)+CHR(10)
        ENDIF
        setcor(3)
        DEVPOS(1,14);DEVOUT(STRZERO(mcod_cli,5)+" - ")
        DEVPOS(1,21);DEVOUT(mcliente)
        DEVPOS(2,14);DEVOUTPICT(mcpf,"@@R 999.999.999-99")
        DEVPOS(2,38);DEVOUTPICT(mcgc,"@@R 99.999.999/9999-99")
        //SUB_BANNER(5,26,TRANSFORM(mtot_nota,"999,999.99"))
        //SUB_BANNER(5,30,TRANSFORM(mtot_nota,"999,999.99"))
        setcor(1)
        mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
        WHILE .T.
                SUB_BANNER(5,26,TRANSFORM(mtot_nota,"999,999.99"),'*')
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
                botao(16,1,18,12)
                botao(16,13,18,22)
                botao(16,23,18,35)
                botao(16,36,18,52)
                botao(16,53,18,62)
                setcor(1)
                @ 17,2 PROMPT "1-Dinheiro"
                @ 17,14 PROMPT "2-Cheque"
                @ 17,24 PROMPT "3-Duplicata"
                @ 17,37 PROMPT "4-Financiamento"
                @ 17,54 PROMPT "5-Cartao"
                SET INTEN ON
                MENU TO mtipo_pg

                IF LASTKEY() = 27
                        RESTSCREEN(01,00,24,79,mbox)
                        EXIT
                ENDIF
                setcor(1)
                mbox_rece := SAVESCREEN(00,00,34,79)
                IF mtipo_pg = 1
                        botao(20,1,22,40)
                        DEVPOS(21,2);DEVOUT("Dinheiro............R$:")
                        @ 21,25 GET mdinheiro PICT "999,999,999.99"
                        READ
                        RESTSCREEN(00,00,34,79,mbox_rece)
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ELSEIF mtipo_pg = 2
                        IF EMPTY(mcod_cli)
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        botao(20,15,28,75)
                        setcor(1)
                        DEVPOS(21,16);DEVOUT("No.Banco...:")
                        DEVPOS(22,16);DEVOUT("Agencia....:")
                        DEVPOS(23,16);DEVOUT("C/C........:")
                        DEVPOS(24,16);DEVOUT("No.Cheque..:")
                        DEVPOS(25,16);DEVOUT("Vencimento.:")
                        DEVPOS(26,16);DEVOUT("Valor......:")
                        DEVPOS(27,16);DEVOUT("Correntista:")
                        @ 21,29 GET mn_banco PICT "9999" WHEN EMPTY(mdinheiro)
                        @ 22,29 GET magencia PICT "@!"
                        @ 23,29 GET mc_c PICT "@!" VALID qtd_chq(mcod_cli,mn_banco,magencia,mc_c)
                        @ 24,29 GET mn_cheque PICT "99999999" VALID IF(! EMPTY(mn_banco) .AND. EMPTY(mn_cheque),.F.,.T.) WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ 25,29 GET mvencimento WHEN ! EMPTY(mn_banco) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 26,29 GET mvalor PICT "9,999,999.99" WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ 27,29 GET mcorrente PICT "@!"
                        READ
                        RESTSCREEN(00,00,34,79,mbox_rece)
                        IF LASTKEY() = 27 .OR. EMPTY(mn_banco)
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
                        botao(20,27,25,56)
                        mn_dup := ALLTRIM(mdocumento)+SPACE(8-LEN(ALLTRIM(mdocumento)))
                        DEVPOS(21,28);DEVOUT("No.Duplicata.:")
                        DEVPOS(22,28);DEVOUT("Vencimento...:")
                        DEVPOS(23,28);DEVOUT("C>art. B>anco:")
                        DEVPOS(24,28);DEVOUT("Valor R$.....:")
                        @ 21,43 GET mn_dup PICT "@!"
                        @ 22,43 GET mvencimento WHEN ! EMPTY(mn_dup) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 23,43 GET mt_pag PICT "@!" VALID mt_pag $ "C,B" WHEN ! EMPTY(mn_dup)
                        @ 24,43 GET mvalor PICT "9,999,999.99" WHEN ! EMPTY(mn_dup)
                        READ
                        RESTSCREEN(00,00,34,79,mbox_rece)
                        IF LASTKEY() = 27 .OR. EMPTY(mn_dup)
                                LOOP
                        ENDIF
                        mtipo_comp = "AP"
                ELSEIF mtipo_pg = 4
                        IF EMPTY(mcod_cli)
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        botao(20,12,25,74)
                        DEVPOS(21,13);DEVOUT("Cod.Financeira...:")
                        DEVPOS(22,13);DEVOUT("No.Financiamento.:")
                        DEVPOS(23,13);DEVOUT("Vencimento.......:")
                        DEVPOS(24,13);DEVOUT("Valor R$.........:")
                        @ 21,32 GET mcod_cart PICT "999" VALID ver_finan(mcod_cart,21,36)
                        @ 22,32 GET mn_fin PICT "99999999" WHEN EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup)
                        @ 23,32 GET mvencimento  VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 24,32 GET mvalor PICT "9,999,999.99" WHEN ! EMPTY(mn_fin)
                        READ
                        RESTSCREEN(00,00,34,79,mbox_rece)
                        IF LASTKEY() = 27 .OR. EMPTY(mn_fin)
                                LOOP
                        ENDIF
                        mtipo_comp = "AP"
               ELSEIF mtipo_pg = 5
                        mvalor := mtot_nota - mtot_verif
                        mn_cupom := mdocumento
                        botao(20,40,25,79)
                        DEVPOS(21,41);DEVOUT("Cod.Cartao:")
                        DEVPOS(23,41);DEVOUT("No.Cupom..:")
                        DEVPOS(24,41);DEVOUT('Qtd. vezes:')
                        @ 21,53 GET mcod_cart PICT "999" VALID IF(EMPTY(mcod_cart),.F.,ver_cartao(mcod_cart,21,57))
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                RESTSCREEN(00,00,34,79,mbox_rece)
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(21,53);DEVOUT(STRZERO(mcod_cart,3))
                        setcor(1)
                        ver_cartao(mcod_cart,21,57)
                        mvencimento := mdata_sis + car->prazo
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                LOOP
                        ENDIF
                        NumeroCupom := IBR_NUM_CUPOM()                                     // Retorna ao numero do cupom ECF
                        mqtd_parc := 1
                        setcor(1)
                        @ 23,53 GET NumeroCupom
                        @ 24,53 GET mqtd_parc PICT '99' VALID IF(EMPTY(mqtd_parc) .OR. mqtd_parc > 15,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        IF op_simnao('S','Confirma Inclusao da FORMA DE PAGAMENTO:') = 'N'
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
                                        AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2),mvencimento,iat(mdiferenca/mqtd_parc,2),car->cod_forn,car->tipo_conta})
                                ELSE
                                        AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1),mvencimento,iat(mdiferenca/mqtd_parc,2),car->cod_forn,car->tipo_conta})
                                ENDIF
                        NEXT
                        IF mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc))
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
                        RESTSCREEN(00,00,24,79,mbox_rece)
                        mtipo_comp = "AP"
                ELSE
                        LOOP
                ENDIF
                RESTSCREEN(00,00,34,79,mbox_rece)
                IF EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup) .AND. EMPTY(mn_fin) .AND.;
                   EMPTY(mcod_cart) .AND. EMPTY(mn_trans) .AND. mvalor+mdinheiro > 0
                        LOOP
                ENDIF
                IF (! EMPTY(mn_banco) .OR. ! EMPTY(mn_dup) .OR. ! EMPTY(mn_fin) .OR. ! EMPTY(mcod_cart)) .AND. ! EMPTY(mn_trans) .AND. EMPTY(mcod_cli)
                        atencao("Este tipo de operacao exige cliente para que nao haja problemas futuros")
                       LOOP
                ENDIF
                IF m_flag_f = 'T'
                        mopcao := 'S'
                ELSE
                        mopcao := op_simnao("S","Confirma a Inclusao:")
                ENDIF               
                SUB_BANNER(5,26,TRANSFORM(mtot_nota,"999,999.99"))

                IF mopcao = "N"
                        LOOP
                ENDIF
                IF mopcao = "S"
                        mtot_rece = mtot_rece + mvalor + mdinheiro
                        IF ! (EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND.;
                             EMPTY(mn_dup) .AND. EMPTY(mcod_cart) .AND. EMPTY(mn_fin) .AND. EMPTY(mn_trans)) .OR. mdinheiro = mtot_nota
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
                                        ENDIF
                                ENDIF
                        ENDIF
                        mtot_verif := mtot_verif + mvalor       //+ mdinheiro
                        mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
                        setcor(3)
                        DEVPOS(14,25);DEVOUTPICT(mtot_verif,"9,999,999.99")
                        DEVPOS(14,54);DEVOUTPICT(mtot_nota - mtot_verif,"9,999,999.99")
                        limpa(17,1,lb-1,cb-1)
                        f := 1
                        i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                IF m_recebe[i,1] = "DN"
                                        DEVPOS(20+f,1);DEVOUT("DINHEIRO.....: ")
                                ELSEIF m_recebe[i,1] = "CH"
                                        DEVPOS(20+f,1);DEVOUT("CHEQUE.......: Bco.: "+m_recebe[i,3]+" No.: "+m_recebe[i,4]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "DU"
                                        DEVPOS(20+f,1);DEVOUT("DUPLICATA....: No.: "+m_recebe[i,5]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "CT"
                                        DEVPOS(20+f,1);DEVOUT("CARTAO.......: "+m_recebe[i,8]+"-"+LEFT(m_recebe[i,12],10)+" Cupom No.: "+m_recebe[i,9])
                                ELSEIF m_recebe[i,1] = "FI"
                                        DEVPOS(20+f,1);DEVOUT("FINANCIAMENTO: "+m_recebe[i,11]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "TR"
                                        DEVPOS(20+f,1);DEVOUT("TRANSFERENCIA: "+m_recebe[i,11]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ENDIF
                                DEVPOS(20+f,59);DEVOUT("Valor: "+TRANSFORM(m_recebe[i,10],"999,999.99"))
                                IF i > 4
                                        SCROLL(17,1,lb-1,cb-1,1)
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
                                        DEVPOS(14,25);DEVOUTPICT(mtot_verif,"9,999,999.99")
                                        DEVPOS(14,54);DEVOUTPICT(mtot_nota,"9,999,999.99")
                                        setcor(1)
                                        limpa(17,1,lb-1,cb-1)
                                        LOOP
                                ENDIF
                                IF mopcao = "S"
                                        IF mtroco > 0
	                                        SUB_BANNER(24,01,'Troco:'+TRANSFORM(mtroco,'999,999.99'))
        	                                atencao('T R O C O   D E   R$: '+TRANSFORM(mtroco,'999,999.99'))
                                        ENDIF
                                        EXIT
                                ENDIF
                        ENDIF
                ENDIF
        ENDDO
        IF LASTKEY() = 27;LOOP;ENDIF
                mensagem("Aguarde Finalizando o Cupom Fiscal...")
                mnome_arq := ' '
                mvalor_cart := 0
                mind_pg := '  '
                mtef := ' '
                i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF m_flag_f # 'T' .OR. car->tef <> 'S'
                                IBR_INI_FECHA(mdesconto)
                        ENDIF
                        IF m_recebe[i,1] = 'DN'
                                mind_cartao := forma_pag('DINHEIRO',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'CH'
                                mind_cartao := forma_pag('CHEQUE',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'DU'
                                mind_cartao := forma_pag('DUPLICATA',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'FI'
                                mind_cartao := forma_pag('FINANCIAMENTO',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'CT'
                                cons_forma := {}
                                sr_getconnection():exec("SELECT * FROM saccarta WHERE codigo = "+sr_cdbvalue(m_recebe[i,8]),,.t.,@cons_forma)
                                IF LEN(cons_forma) = 0
                                        LOOP
                                ENDIF
                                mvlr := i := 0
                                FOR i = 1 TO LEN(m_recebe)
                                        IF m_recebe[i,1] <> 'CT'
                                                LOOP
                                        ENDIF
                                        mvlr := mvlr + m_recebe[i,10]
                                NEXT
                                //mind_cartao := forma_pag(ALLTRIM(cons_forma[1,2]),m_recebe[i,10])
                                mind_cartao := forma_pag(ALLTRIM(cons_forma[1,2]),mvlr)
                        ENDIF
                NEXT
                IF mtef = '*'
                        LOOP
                ENDIF
                // Mensagem rodape do cumpom fiscal.  
                IF ver_serie() = '141302'
                        fim_fecha(REPLI("-",48)+"|Vend.:"+STRZERO(mcod_vend,3)+" - Cod.Oper.:"+cod_operado+"|"+ALLTRIM(m_set[1,25]+m_set[1,26]))
                ELSE
                        fim_fecha(REPLI("-",50)+CHR(13)+CHR(10)+mc"Vend.:"+STRZERO(mcod_vend,3)+" - Cod.Oper.:"+cod_operado+CHR(13)+CHR(10)+ALLTRIM(m_set[1,25]+m_set[1,26]))
                ENDIF
                /*
                IF ver_serie() = '141302'
                        fim_fecha(REPLI("-",48)+"|Vend.:"+STRZERO(mcod_vend,3)+" - Cod.Oper.:"+cod_operado+"|"+ALLTRIM(m_set[1,25]+m_set[1,26]))
                ELSE
                        fim_fecha(REPLI("-",50)+CHR(13)+CHR(10)+mc"Vend.:"+STRZERO(mcod_vend,3)+" - Cod.Oper.:"+cod_operado+CHR(13)+CHR(10)+ALLTRIM(m_set[1,25]+m_set[1,26]))
                ENDIF
                IF m_flag_f = 'T'
                        ActiveX:EasyTEF:imprimirCupomECF(ActiveX:EasyTEF:imagemCupomTEF, .t., .t.)
                ENDIF
                */
        IF mtroco > 0
                INKEY(3)
                RESTSCREEN(00,00,24,79,mbox_rece)
        ENDIF
        IF ! EMPTY(mdesconto)
                sr_getconnection():exec("UPDATE sacmovnt SET vl_fatura = vl_fatura - (vl_fatura * "+sr_cdbvalue(mdesc_u/100)+") WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
        ENDIF                

/*
        IF msld_aux = ' ' .AND. EMPTY(mpago)
                IF m_cfg[44] = "E";mtot_nota := 0;ENDIF
                i := 0
                mensagem('Atualizando o MOVIMENTO....')
                FOR i = 1 TO LEN(m_codigo)
                        IF EMPTY(m_codigo[i]);LOOP;ENDIF
                        aret:={}
                        cComm  := "UPDATE sacmerc SET dat_ult_s = ? WHERE sacmerc.cod_merc = ?"
                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                        cComm  := SR_SQLCodeGen(apCode,{mdata_sis,m_codigo[i]},sr_getconnection():nsystemid)
                        sr_getconnection():exec(ccomm,,.f.)
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
                                      +'cond_intev   ';//28     mov-> cond_intev  :=
                        aret:={}
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
                                STRZERO(mcod_cli,5)     ,;//18
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
                                //sr_getconnection():exec('COMMIT',,.f.)
                NEXT
                sr_getconnection():exec('COMMIT',,.f.)
        ENDIF
*/
        mabrir_cp := m_flag_f := " "
        ASIZE(m_codigo,0)
        ASIZE(m_merc,0)
        ASIZE(m_matriz,0)
        ASIZE(m_recebe,0)
        ASIZE(m_desc,0)
        m_flag :=0
        mdocumento := mnum_ecf:=SPACE(8)
        CLEAR GETS
        RELEASE mlin,mcartao,mprazo_cart,mdesc_cart,;
                m_desc:={},mdesconto,;
                mreceb,mcom_ven,mbanco,mcod_cli,mcliente,;
                mnome_vend,mperc,mcgc,mcpf,mcod_vend,;
                mnum_ped,minsc,mcond_vezes,;
                mcond_intev,mtp_vend,mtot_desc
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
