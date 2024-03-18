#ifdef __XHARBOUR__
   Static sSOCKET
#ENDIF
#include "sqlrdd.ch"
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"
#include "ecf.ch"
MEMVAR getlist,cod_operado,nivel_acess,mdata_sis
*******************
* SOLICITAR PEDIDO
*******************
FUNCTION sac23caixa(orc,venda,m_altpd)
************************************
LOCAL mp_venda,msele,morde,f,mvar,mtelap,mtot_ipi,telaobs,;
      mdocum,mchass:=SPACE(20),mdescri1:=SPACE(54),mreg,telapro,;
      mdescri2:=SPACE(54),mdescri3:=SPACE(54),mdescri4:=SPACE(54),mdescri5:=SPACE(54),;
      mquantd_aux:=0,v:=0,linhas,linha,lin,nPos,cComm,mitem:=0,mcampo_ped:=' ',c_ped:={},;
      mcod_tab,mcont,mpre:=' ',c_orcam,m_ped,m_pos,point:=0,cons_orcam := {},mdesc_prod:=0,;
      op_cartao := ' ',nalt

PRIVATE MPRG:='SAC23PCAIXA',;
        m_matriz:={},m_codigo:={},m_Cbarra:={},m_alt:={},i,opcao,;
        mcod_merc:=0,mquantd:=1,mdesconto,mvlr_fat,mtot_ped,mmerc,mpr_venda,;
        ci:=0,lb:=0,cb:=0,mnome_ven:=' ',lci:=14,lba:=49,cba:=120,tela,mautoriz,mlibera,;
        mcod_bc,mcont_item:=0,mvarejo:=1,f4,;
        mprz:=0,mnum_ped:=0,menvelope := SPACE(10),mcod_cli:=0,mnome_cli,mponto:=0,mflag:=1,ali,no,mcod_ven,;
        msubtotal,mtot_custo:=0,mcod_aux,mproducao,mcomissao:=0,mcust_real,mvendido:=0,;
        mobs_prod:=SPACE(40),mlib_spc:=' ',msit_tip:=' ',;
        mqtd_dias:=0,mqtd_prz:=0,mcond_veze:=SPACE(3),mpromocao,mperc:=0,mcom_oper:=0,;
        mtp_venda:='  ',m_dia[15],m_vlr[15],;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mmontador:=0,mmontador1:=0,mtel_carro,mcodemp,;
        mmasc_qtd:=SPACE(10),mnum_os:=0,mobs1,mobs2,mobs3,mobs4,;
        mplaca,mcarro,mmodelo,mkm,mpt_os:=0,mcomi_tab:=0,mcod_cond:=0,mpacote:=0,;
        mpecas:=0,mlimite:=0,mcompras:=0,malterou:=' ',cons_tabpg := {},mcons_tabpg:=' ',;
        mtot_desc:=0,mloop:=0,mcod_pres:=0,merroped:=0,mdesc_aux:=0,mcgc,mcpf,minsc,;
        mdata_pedido,m_produto:={},mnum_orc:=0,mconvidado:='',aret:={},mdesc_esp:=0,cons_cli:={}


SET KEY -9 TO
SET KEY -7 TO F8_PROD()
SET KEY 286 TO
SET KEY 294 TO
SET KEY -4 TO
set_key('cliente',,,'*')
SET KEY 303 TO alt_prod2()               // Alteracao de Produtos <ALT+V>
SET KEY 294 TO cons_luc()               // Consulta Lucro  <ALT+L)
SET KEY -4 TO f5_qtd()                  // Imforma a quantidade no AUTOCAIXA no PRG SACROT
*************************
CLEAR GETS

//mid := WVW__MakeDlgTemplate('teste','Codigo','Descricao' )
//WVW_CreateDialogModal('testa', NIL, NIL,1,)
/*
cam_dba:={}
mposicao:={}
sr_getconnection():exec("SELECT * FROM sacmerc",,.t.,@cam_dba)
aadd(mposicao,{0,0,3,4})
mid_cb := WVW_CBCreate( , 10, 10,60, cam_dba,{||fecha_pd('1')} ,,, 1,mposicao )
IF mid_cb # 0
        ATENCAO(STRZERO(mid_cb,5))
ENDIF
IF WVW_CBEnable( NIL, mid_cb, .T. )
        ATENCAO('OK')
ENDIF
*/

mcod_cli:=m_set[1,84]
mplaca:= SPACE(10)
mcarro:=mmodelo:=mkm := SPACE(15)
mobs1:=mobs2:=mobs3:=mobs4:=SPACE(39)
setcor(1)                    && cor para os SAY
op_tela(00,00,54,120,memp_resa+SPACE(50)+'EMISSAO DE PEDIDOS'+SPACE(40)+'Terminal: '+m_indiv[1,1]+SPACE(20)+'Data: '+DTOC(mdata_sis)+' - '+ver_dia(mdata_sis)+'         .: SISCOM '+mversao+' :.',,1)
//setcor(4)
limpa(00,00,50,120)
setcor(1)
//WVW_DrawImage( ,00,00,MAXROW(),MAXCOL(),ALLTRIM(m_indiv[1,3])+'htifundo.JPG',.F.,.F.)
ali := 'ped_s'
no  := 'noped'
orcamento = 1
IF ! ver_nivel(mprg,'EMISSAO DE PEDIDO VENDA','1245',nivel_acess,,'AMBIE')
        RELEASE ALL
        wvw_lclosewindow()
        RETURN NIL
ENDIF
// ABERTURA DA TELA DE PEDIDO
setcor(1)
mflag := 1
IF ! AbriArq('merc_det','deta');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sactabme','tabme');RETURN NIL;ENDIF
IF ! AbriArq('sacdolar','dolar');RETURN NIL;ENDIF
IF ! AbriArq('sacemp','emp');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
WHILE .T.
        exibi_prg(mprg)
        mtipo_preco := mproducao := ' '
        msubtotal := mtot_ipi  := 0
        mnome_ven := SPACE(30)
        SET KEY 287 TO
        mautoriz := SPACE(3)
        mtot_custo := 0
        mcod_ven := SPACE(3)
        mdata_pedido := mdata_sis
        mcond_veze := '00 '
        FOR i = 1 TO 15
                m_dia[i]:=m_vlr[i]:=0
        NEXT
        minsc := mcgc := SPACE(14)
        mcpf = SPACE(11)
        mperc := mcomi_tab := mcod_cond := mnum_ped := mtot_custo := 0
        m_matriz := {}
        m_codigo := {}
        m_Cbarra := {}
        m_alt    := {}
        mcod_cli := IF(EMPTY(m_set[1,84]),1,m_set[1,84])
        mnome_cli := SPACE(40)
        mcod_ven := cod_operado
        mflag := 1
        merroped := 0
        IF m_indiv[1,9] <> 'V' .AND. m_indiv[1,26] <> 'T'
                wvw_lclosewindow()
        ENDIF
        /*
        IF m_set[1,84] <> mcod_cli .AND. ! EMPTY(mcod_cli)
                mlimite := cons_cli[1,44]
                mcompras := ver_compras(mcod_cli)
        ENDIF
        */
        setcor(1)
        mensagem('Montando a tela de Pedidos...')
        WvW_PBSetFont( NIL, "Arial Black", 18, 10,)
        nBota := wvw_pbCreate(NIL,40,70,42,90,'[F10] Fechamento',NIL,{||sac30caixa('1')})
        nalt  := wvw_pbCreate(NIL,40,95,42,115,'Alterar Pedido',NIL,{||alt_prod2()})
        WVW_PBEnable( , nBota, .F. )
        WVW_PBEnable( , nalt, .F. )
        botao(44,70,52,115)
        DrawLabel(45,71,'Operador: '+mcod_ven,,, 'Arial',15,8)
        DrawLabel(47,71,'* Digite <X> mais a quatidade> ou <F5>Informa Quatidade',,, 'Arial',15,8)
        DrawLabel(48,71,'* Tecle <ESC> Sair/Cancelar',,, 'Arial',15,8)
        DrawLabel(49,71,'* Digite <PD>Recuperar Pedido',,, 'Arial',15,8)
        DrawLabel(51,71,'                       .: HTI Sistemas  - (81)'+mfone_HTI+' :.',,, 'Arial',15,8)

        //DrawLabel(47,100,'Digite <TAB>Cond.Pagamento',,, 'Arial',15,8)
        //DrawLabel(49,100,'Tecle <ESC>Sair/Cancelar',,, 'Arial',15,8)

        //botao(00,01,02,118,,'Operador')
        //DrawLabel(1,50,'Cliente: '+STR(cons_cli[1,2],5)+'-'+cons_cli[1,3],,, 'Arial Black',20,10)
        //DrawLabel(0,50,'Cliente: '+STR(cons_cli[1,2],5)+'-'+cons_cli[1,3],,, 'Arial Black',20,10)
        botao(11,50,13,68,,'Codigo',)
        /*
        botao(11,70,17,115,,'Quantidade')
        botao(21,70,27,115,,'Valor Unitario')
        botao(31,70,37,115,,'Valor Total')

        DrawLabel(12,80,ALLTRIM(TRANSFORM(0,'@E 999,999.999')),,,'arial black',65,30)
        DrawLabel(22,80,ALLTRIM(TRANSFORM(0,'@E '+m_set[1,98])),,, 'arial black',65,30)
        DrawLabel(32,80,ALLTRIM(TRANSFORM(0,'@E '+m_set[1,98])),,, 'arial black',65,30)

        */
        //DrawLabel(12,92,'Codigo',,,'Arial Black',25,10)
        //DrawLabel(21,92,'Quantidade',,,'Arial Black',25,10)
        //DrawLabel(30,92,'Valor Unitario',,,'Arial Black',25,10)
        //DrawLabel(39,92,'Valor Total',,,'Arial Black',25,10)
        //WVW_DrawBoxGet(,15,92,20)
        //WVW_DrawBoxGet(,24,92,20)
        //WVW_DrawBoxGet(,33,92,20)
        //WVW_DrawBoxGet(,41,92,20)

        botao(01,1,08,118) // DESCRICAO PRODUTO

        f:=0
        lci:=12
        botao(11,1,lba-5,48,,'No.Pedido: '+STRZERO(mnum_ped,6),1) // TELA DOS PRODUTO SOLICITADO
        //DrawLabel(11,05,'No.Pedido: '+STRZERO(mnum_ped,6),,, 'Arial Black',25,15)
        mqtd_lin := 0
        mitem := 1
        IF LEN(m_codigo) > 28
                mqtd_lin := LEN(m_codigo) - 28
        ENDIF
        //@ lci,01 SAY ''
        IF EMPTY(m_cfg[6])
                DrawLabel(lci+f,COL()+1,'Item  Cod.  Descricao           Quantd.   Vlr.Unit.   Vlr.Total',,,'lucida console',16,8)
        ELSE
                DrawLabel(lci+f,COL()+1,'Item  Cod.  Descricao           Quantd.   Vlr.Unit.   Vlr.Total ',,m_color[8],'lucida console',12,5)
        ENDIF
        f++
        f++
        @ lci+f,01 SAY REPLI(CHR(223),48)
        f++

        botao(47,01,52,48,,'TOTAL DA VENDA R$:','*')
        DrawLabel(48,10,TRANSFORM(0,ALLTRIM('@E '+m_set[1,98])),210,, 'arial black',55,25)


        botao(10,70,37,115)
        IF FILE(ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG')
                WVW_DrawImage( ,10,70,37,115,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
        ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'HTIFIRMA1.JPG')
                WVW_DrawImage( ,10,70,37,115,ALLTRIM(m_indiv[1,3])+'HTIFIRMA1.JPG',.T.,.F.)
        ENDIF
        WVW_DrawImage( ,35,50,50,68,ALLTRIM(m_indiv[1,3])+"logohti.JPG",.F.,.F.)
        setcor(1)
        IF ALLTRIM(m_indiv[1,44]) = '2'
                WVW_DrawLabel(,51,52,' '+mversao+' ',,,,, 'times',30,15,,,,,)
        ELSE
                WVW_DrawLabel(,51,52,' '+mversao+' ',,,RGB(25,25,112),RGB(255,250,250), 'times',30,15,,,,,)
        ENDIF

        mcod_cli := IF(EMPTY(m_set[1,84]),1,m_set[1,84])
        mnome_cli := SPACE(40)
        mcod_ven := cod_operado
        mflag := 1
        op_tela(00,01,3,80,' Informacoes para o PEDIDO ** 1 ** ',,1)
        DEVPOS(1,01);DEVOUT('Codigo do Cliente....:')
        DEVPOS(2,01);DEVOUT('Nome Fantasia........:')
        WHILE .T.
                SET KEY -8 TO sac130()           // inclusao de clientes
                IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
                @ 1,24 GET mcod_cli PICT '99999'
                @ 1,30 GET mnome_cli PICT '@!' WHEN EMPTY(mcod_cli)
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
                        sr_getconnection():exec("SELECT * FROM saccli WHERE razao LIKE "+sr_cdbvalue(RTRIM(mnome_cli)+'%'),,.t.,@cons_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_cli) = 0
                                atencao('Cliente nao cadastrado !!!')
                                LOOP
                        ELSE
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
                        DEVPOS(1,24);DEVOUT(STR(cons_cli[1,2],5))
                        DEVPOS(1,30);DEVOUT(cons_cli[1,3])
                        DEVPOS(2,24);DEVOUT(cons_cli[1,4])
                        setcor(1)
                        IF mnum_os = 0 .AND. ! spc(mcod_cli,0,'*')
                                UNLOCK
                                LOOP
                        ENDIF
                        IF mnum_os = 0
                                mlib_spc := '*'
                        ENDIF
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
                        IF mcod_cond = 0
                                mcod_cond := VAL(cons_cli[1,133])
                        ENDIF
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
                wvw_lclosewindow()
                EXIT
        ENDDO

        WHILE .T.
                IF LEN(m_codigo) = 0
                        WVW_PBEnable( NIL, nBota, .F. )
                        //limpa(01,02,10,119)
                        botao(01,1,08,118)
                        DrawLabel(3,05,'CAIXA LIVRE',,,'Arial Black',65,30)
                ELSE
                        WVW_PBEnable( , nBota, .T. )
                        WVW_PBEnable( , nalt, .T. )
                ENDIF
                setcor(1)
                IF mflag = 0
                        EXIT
                ENDIF
                // PEDIDO DO APP...
                mlibera := ' '
                i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := 0
                lci:=12
                botao(11,1,lba-5,48,,'No.Pedido: '+STRZERO(mnum_ped,6),1)
                //DrawLabel(11,05,'No.Pedido: '+STRZERO(mnum_ped,6),,, 'Arial Black',25,15)
                mqtd_lin := 0
                mitem := 1
                IF LEN(m_codigo) > 28
                        mqtd_lin := LEN(m_codigo) - 28
                ENDIF
                IF EMPTY(m_cfg[6])
                        DrawLabel(lci+f,COL()+1,'Item  Cod.  Descricao           Quantd.   Vlr.Unit.   Vlr.Total',,,'lucida console',16,8)
                ELSE
                        DrawLabel(lci+f,COL()+1,'Item  Cod.  Descricao           Quantd.   Vlr.Unit.   Vlr.Total ',,m_color[8],'lucida console',12,5)
                ENDIF
                f++
                f++
                @ lci+f,01 SAY REPLI(CHR(223),48)
                f++
                FOR i = 1 TO LEN(m_codigo)
                        IF m_matriz[i,1] = 0 .OR. EMPTY(m_codigo[i])
                                LOOP
                        ENDIF
                        mlibera := ' '
                        IF mqtd_lin < i
                                @ lci+f,01 SAY ''
                                IF EMPTY(m_cfg[6])
                                        DrawLabel(lci+f,COL(),'  '+ALLTRIM(STRZERO(i,3))+'  '+m_codigo[i]+' '+SUBSTR(m_matriz[i,5],1,18)+' '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,1] * m_matriz[i,2],ALLTRIM('@E '+m_set[1,98])),,, 'lucida console',14,8)
                                ELSE
                                        DrawLabel(lci+f,COL(),'  '+ALLTRIM(STRZERO(i,3))+'  '+m_codigo[i]+' '+SUBSTR(m_matriz[i,5],1,18)+' '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,1] * m_matriz[i,2],ALLTRIM('@E '+m_set[1,98])),,, 'lucida console',12,5)
                                ENDIF
                                f++
                        ENDIF
                        msubtotal := msubtotal + iat((m_matriz[i,1] * m_matriz[i,2]),m_set[1,103])
                NEXT
                tela_ := {}
                tela_ := WVW_SAVESCREEN(,lci,55,lba,cba-1)
                setcor(3)
                setcor(1)
                botao(47,01,52,48,,'TOTAL DA VENDA R$:','*')
                DrawLabel(48,10,TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98])),210,, 'arial black',55,25)
                malterou := ' '
                mmerc := SPACE(40)
                IF mpre = ' '
                        mcod_bc := SPACE(14)
                ENDIF
                mcod_merc := mdesconto := mvlr_fat := mpromocao := 0
                //IF(mquantd > 0.001,mquantd,mquantd:=1)
                IF(mquantd > 0,mquantd,mquantd:=1)
                //menvelope := SPACE(10)
                f4 := ' '
                setcor(1)
                // ATIVA O FECHAMENTO DO PEDIDO
                SET KEY -9 TO sac30caixa('1')       // neste mesmo PRG. <F10>Tecla
                //mensagem('<F10>Fechamento  - <X mais a qtd.>Informa Qtd. - <TAB>Cond.Pagamento - <PD>Recuperar Pedido - <ESC>Sair')
                SET KEY -7 TO F8_PROD()
                mloop := 0
                //botao(53,01,55,23)
                //DEVPOS(54,01);DEVOUT('Codigo:')
                @ 12,51 GET mcod_bc PICT '@!'
                READ
                IF SUBSTR(mcod_bc,1,1) = 'X' .AND. VAL(SUBSTR(STRTRAN(mcod_bc,',','.'),2)) > 0
                        mquantd := VAL(SUBSTR(STRTRAN(mcod_bc,',','.'),2))
                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDOADM',,,mcod_merc)
                                        mquantd := 0
                                        LOOP
                                ENDIF
                        ENDIF
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
                IF mcod_bc = 'ALT'
                        alt_prod2()
                        LOOP
                ENDIF
                IF LASTKEY() = 27
                        SET KEY -2 TO
                        SET KEY -7 TO
        		IF op_simnao('S','Deseja Sair o Pedido:') = 'S'
                                mflag := 0
                                EXIT
                        ENDIF
                ENDIF
                IF mflag = 0
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_bc)
                        IF ALLTRIM(mcod_bc) = 'PD'	//RESTAURAR O PEDIDO
        	       		mcod_bc := SPACE(14)
                                IF LEN(m_codigo) > 0
                                        atencao('Nao e possivel Incluir este orcamento neste pedido porque ja foi Incluso algum Produto...')
                                        LOOP
                                ENDIF
                                mnum_ped := mcod_oper := 0
                                op_tela(10,10,12,80,'Numero do Orcamento')
                                DEVPOS(00,01);DEVOUT('Digite o Codigo Operador.:')
                                DEVPOS(01,01);DEVOUT('Digite o Numero do Pedido:')
                                @ 00,28 GET mcod_oper PICT '999'
                                READ
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mcod_oper)
                                        c_orcam   := {}
                                        m_ped     := {}
                                        m_pos     := {}
                                        cons_cli := {}
                                        point := 0
                                        sr_getconnection():exec("SELECT pnum_ped,pcod_cli,sum(pquantd*pvlr_fat),pdat_ped FROM sacped_s WHERE sr_deleted = ' ' AND pcod_oper = "+sr_cdbvalue(STRZERO(mcod_oper,3))+" AND pfecha IS NULL AND pdatapag IS NULL GROUP BY pnum_ped,pnum_ped,pcod_cli,pcod_cli,pdat_ped,pdat_ped ORDER BY pnum_ped",,.t.,@c_orcam)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(c_orcam) = 0
                                                atencao('Nao foi possivel encontrar este nenhum PEDIDO...')
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        op_tela(10,10,31,92,memp_resa+SPACE(50)+'PEDIDOS EM ABERTO DO OPERADOR: '+STRZERO(mcod_oper,3))
                                        setcor(3)
                                        DEVPOS(00,00);DEVOUT('  Data     Numero       Valor  Cliente')
                                        @ 01,00 TO 01,100
                                        setcor(1)
                                        FOR i = 1 to LEN(c_orcam)
                                                cons_cli := {}
                                                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(c_orcam[i,2]),,.t.,@cons_cli)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                IF LEN(cons_cli) = 0
                                                        AADD(m_ped,DTOC(c_orcam[i,4])+'  '+c_orcam[i,1]+'  '+TRANSFORM(c_orcam[i,3],'999,999.99')+'  00000 - ')
                                                        AADD(m_pos,c_orcam[i,1])
                                                ELSE
                                                        AADD(m_ped,DTOC(c_orcam[i,4])+'  '+c_orcam[i,1]+'  '+TRANSFORM(c_orcam[i,3],'999,999.99')+'  '+STR(cons_cli[1,2],5)+' - '+cons_cli[1,3])
                                                        AADD(m_pos,c_orcam[i,1])
                                                ENDIF
                                        NEXT
                                        //ASORT(m_ped,,,{|x,y| x[1] < y[1]})
                                        setcor(10);point := ACHOICE(2,1,28,80,m_ped,,,point);setcor(1)
                                        wvw_lclosewindow()
                                        DO CASE
                                                CASE LASTKEY()=27 .OR. LASTKEY() = 4 .OR. LASTKEY() = 19
                                                        wvw_lclosewindow()
                                                        LOOP
                                                CASE LASTKEY() = 13
                                                        mnum_ped := VAL(m_pos[point])
                                        ENDCASE
                                ELSE
                                        @ 01,28 GET mnum_ped PICT '999999'
                                        READ
                                        IF LASTKEY() = 27
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                ENDIF
                                c_orcam := {}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_orcam)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(c_orcam) = 0
                                        atencao('Nao foi possivel encontrar este PEDIDO...')
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma o PEDIDO de No. '+STRZERO(mnum_ped,6)+':')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                //mnum_ped := mnum_orc
                                wvw_lclosewindow()
                                mtp_venda := c_orcam[1,45]
                                mcond_veze := c_orcam[1,43]
                                mcod_cli := c_orcam[1,23]
                                cons_cli := {}
                                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(c_orcam[1,23]),,.t.,@cons_cli)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_cli) > 0
	                               mcod_aux  := cons_cli[1,106]
        	                       mcod_ven := cons_cli[1,106]
                	               mcod_cond := VAL(cons_cli[1,133])
                                        IF cons_cli[1,45] = 'A'
                                                mvarejo := 2
                                        ELSE
                        	        	mvarejo := 1
                                        ENDIF
                                        IF m_set[1,10] <> 'S'
                                                mcod_aux  := cons_cli[1,106]
                                                mcod_ven := cod_operado
                                        ENDIF
                                        mcgc := cons_cli[1,32]
                                        minsc:= cons_cli[1,33]
                                        mcpf := cons_cli[1,34]
                                ENDIF
                                IF ! EMPTY(VAL(c_orcam[1,42]))
                                        mcons_tabpg:=' '
                                        cons_tabpg := {}
                                        sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(c_orcam[1,42]),,.t.,@cons_tabpg)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_tabpg) = 0
                                                atencao('Nao foi encontrado esta tabela de preco: '+c_orcam[1,42])
                                        ELSE
                                                mcod_cond   := VAL(c_orcam[1,42])
                                                mcons_tabpg := cons_tabpg[1,6]
                                                mtipo_preco := cons_tabpg[1,24]
                                                mcomi_tab := cons_tabpg[1,22]
                                                mperc := cons_tabpg[1,5]
                                        ENDIF
                                ENDIF
                                i:=0
                                FOR i = 1 TO LEN(c_orcam)
                                        aret:={}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_orcam[i,6]),,.t.,@aret)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(aret) = 0
                                                LOOP
                                        ENDIF
                                        AADD(m_codigo,c_orcam[i,6])
                                        AADD(m_Cbarra,aret[1,2])
                                        IF c_orcam[i,18] = 0
                                        *                              1            2        3           4         5            6          7         8           9         10        11          12        13         14           15          16          17        18       19   20        21         22         23        24          25        26        27       28      29      30       31       32       33         34         35        36        37        38          39
                                        *                          40      41    42      43     44
                                                AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],        0,aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],       0,         0,aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],c_orcam[i,53],aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],c_orcam[i,10],TIME(),aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
                                                               aret[1,47],'  ',c_orcam[i,15],c_orcam[i,16],'00000'})
                                        ELSE
                                                AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],c_orcam[i,39],aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],c_orcam[i,20],aret[1,45],aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,TIME(),aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
                                                               aret[1,47],'  ',c_orcam[i,15],c_orcam[i,16],'00000'})
                                        ENDIF
                                        IF aret[1,14] = 'EV'
                                                AADD(m_alt,c_orcam[i,6]+' '+LEFT(aret[1,9],27)+' '+c_orcam[i,10]+' '+TRANSFORM(c_orcam[i,14],'99999.99')+' '+TRANSFORM(c_orcam[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(c_orcam[i,18] * c_orcam[i,14],ALLTRIM('@E '+m_set[1,98])))
                                        ELSE
                                                AADD(m_alt,c_orcam[i,6]+' '+LEFT(aret[1,9],38)+' '+TRANSFORM(c_orcam[i,14],'99999.99')+' '+TRANSFORM(c_orcam[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(c_orcam[i,18] * c_orcam[i,14],ALLTRIM('@E '+m_set[1,98])))
                                        ENDIF
                                NEXT
                                mobs1 := c_orcam[1,86]
                                mobs2 := c_orcam[1,87]
                                mobs3 := c_orcam[1,88]
                                mobs4 := c_orcam[1,89]
                                LOOP
                        ENDIF

                        IF SUBSTR(mcod_bc,1,1) = '2' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0) .AND. m_set[1,159] <> 'N'
                                mcod_merc := VAL(SUBSTR(mcod_bc,2,m_set[1,181]))
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mped_merc) = 0
                                        atencao('Codigo Barra nao cadastrado')
                                        LOOP
                                ENDIF
                                mmerc := mped_merc[1,9]
                        ELSEIF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                //IF LEN(RTRIM(mcod_bc)) = 12
                                //        mcod_bc := '0'+mcod_bc
                                //ENDIF
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_bc),,.t.,@mped_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mped_merc) > 0
                                        m_produto := {}
                                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(mped_merc[1,8]),,.t.,@m_produto)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(m_produto) > 0 .AND. RTRIM(mped_merc[1,9]) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                                alt_prod2(mped_merc[1,8])
                                                LOOP
                                        ENDIF
                                ELSE
                                        mped_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE ref = "+sr_cdbvalue(SUBSTR(mcod_bc,1,10)),,.t.,@mped_merc)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(mped_merc) = 0
                                                atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                                LOOP
                                        ENDIF
                                ENDIF
                                mcod_merc := VAL(mcod_bc)
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                /*
                                m_produto := {}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@m_produto)
                                IF LEN(m_produto) > 0 .AND. RTRIM(m_produto[1,9]) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                        alt_prod2(mcod_merc)
                                        LOOP
                                ENDIF
                                */
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mped_merc) = 0
                                        atencao('Codigo da mercadoria nao cadastrado')
                                        LOOP
                                ENDIF
                        ENDIF
                ELSEIF EMPTY(mmerc)
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
                mpre := ' '
                /*
                botao(15,50,30,80)
                IF FILE(ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.jpg')
                        WVW_DrawImage( ,15,50,30,80,ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.bmp')
                        WVW_DrawImage( ,15,50,30,80,ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.jpg')
                        WVW_DrawImage( ,15,50,30,80,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.bmp')
                        WVW_DrawImage( ,15,50,30,80,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                	WVW_DrawImage( ,15,50,30,80,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF
                */
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
                /*
                IF ver_serie() = '141410' .AND. EMPTY(mped_merc[1,30])
                        atencao('Este PRODUTO NAO estar com o codigo do FORNECEDOR ou codigo de MENSAGEM')
                        LOOP
                ENDIF
                */
                mcod_merc := VAL(mped_merc[1,8])
                botao(01,1,08,118)
                limpa(03,1,08,118)
                DrawLabel(2,2,'Descricao do Produto',,, 'Arial',20,8)
                DrawLabel(4,3,mped_merc[1,9],,,'Arial Black',50,20)
                setcor(1)
                IF mped_merc[1,23] > 0
                        mvlr_fat := iat(mped_merc[1,46] - (mped_merc[1,46] * (mped_merc[1,23] / 100)),2)
                        mp_venda := mvlr_fat
                ELSE
                        mvlr_fat := mped_merc[1,46]
                        mp_venda := mvlr_fat
                ENDIF
                IF ! EMPTY(mped_merc[1,65])
                        mp_venda := mvlr_fat := (mvlr_fat * ((mped_merc[1,65]/100)+1))
                ENDIF
                IF m_set[1,125] = 'S' .AND. mped_merc[1,23] = 0
                        op_tela(10,10,12,51,' DESCONTO')
                        mdesc_prod := 0
                        DEVPOS(1,1);DEVOUT('Desconto %:')
                        @ 1,13 GET mdesc_prod PICT '999.99'
                        READ
                        IF ! EMPTY(mdesc_prod)
                                mp_venda = mvlr_fat
                                IF (mvlr_fat*(mdesc_prod/100)) > 0.01
                                        mdesc_prod:= mdesc_prod * -1
                                        mvlr_fat := mvlr_fat*((mdesc_prod/100)+1)
                                ENDIF
                        ENDIF
                        fecha_tela()
                ENDIF
                mvlr_fat := IAT(mvlr_fat,2)
                IF mped_merc[1,24] = 'N'
                        atencao('MERCADORIA NAO DISPONIVEL PARA VENDA',3)
                        LOOP
                ENDIF
                /*
                IF mped_merc[1,104] = 'S'
	                atencao('PRODUTO: '+mped_merc[1,8]+' - '+mped_merc[1,9]+' *** D E S C O N T I N U A D O *** ....',3)
                        LOOP
                ENDIF
                */
                setcor(1)
                mmerc := mped_merc[1,9]
                IF mped_merc[1,25] = 'S'
                        setcor(1)
                        @ 29,64 GET mmerc PICT '@!'
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                menvelope := SPACE(10)
                mobs_prod := SPACE(40)
                IF EMPTY(mcod_merc)
                        LOOP
                ENDIF
                mcust_real := mped_merc[1,45]
                //setcor(3)
                mvlr_fat := IAT(mvlr_fat,2)
                mp_venda := iat(mp_venda,2)
                //DEVPOS(31,64);DEVOUTPICT(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))
		//DEVPOS(31,77);DEVOUT('                      ')
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
                        mcomissao := mped_merc[1,26]
                        setcor(1)
                ELSEIF (mped_merc[1,25] = 'S' .OR. mvlr_fat = 0)
                        setcor(1)
                        op_tela(10,10,14,51,' PRODUTO SEM PRECO DE TABELA')
                        DEVPOS(01,01);devout('Cod.Prod...: '+STRZERO(mcod_merc,5))
                        DEVPOS(02,01);devout('Quantidade.: ')
                        DEVPOS(03,01);devout('Valor......: ')
                        mmasc_qtd := unidade(mped_merc[1,14])
                        //@ lba-6,46 GET mquantd PICT ALLTRIM(mmasc_qtd) WHEN m_indiv[1,26] <> 'T' VALID IF(EMPTY(mquantd) .OR. (! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]),.F.,.T.)
                        @ 2,13 GET mquantd PICT ALLTRIM(mmasc_qtd) VALID IF(EMPTY(mquantd) .OR. mquantd < 0 .OR. (! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        IF mped_merc[1,103] = 'S' .AND. mquantd > mped_merc[1,56]
                                IF ! aut_sen('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR','LIB_SALDO',,,mcod_merc)
                                        fecha_tela()
                                        LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mped_merc[1,28]) .AND. mped_merc[1,28] >= (mped_merc[1,56] - mquantd) .AND. mped_merc[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. m_indiv[1,26] <> 'T'
                                atencao('SALDO esta menor que o ESTOQUE MINIMO: '+TRANSFORM(mped_merc[1,28],'9,999,999.99')+' estipulado !!!')
                        ENDIF
                        IF mquantd > mped_merc[1,56] .AND. mped_merc[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. SUBSTR(mped_merc[1,9],1,1) <> '@'
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+m_qp+;
                                             'Maior que saldo......: '+ALLTRIM(TRANSFORM(mped_merc[1,56],'999,999.99')),'LIB_SALDO',,,mcod_merc)
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                mlibera := 'S'
                        ENDIF
                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDOADM',,,mcod_merc)
                                        fecha_tela()
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mped_merc[1,23] > 0
                                setcor(6)
                                DEVPOS(lba-5,07);DEVOUT('Preco de Tabela R$: '+TRANSFORM(mped_merc[1,46],'999,999.99'))
                                setcor(1)
                        ENDIF
                        mpacote := mpecas := 0
                        IF ! EMPTY(mped_merc[1,19])     //.AND. ! EMPTY(mped_merc[1,20])
                                IF VAL(SUBSTR(TRANSFORM(mquantd/mped_merc[1,19],'999,999.99'),9)) > 0
                                        mquantd_aux := VAL(SUBSTR(TRANSFORM(mquantd/mped_merc[1,19],'999,999.99'),1,7)) +1
                                        mquantd := mquantd_aux * mped_merc[1,19]
                                ENDIF
                                mpacote := VAL(SUBSTR(TRANSFORM((mquantd/mped_merc[1,19])/mped_merc[1,20],'999,999.99'),1,7))
                                mpecas  := (VAL(SUBSTR(TRANSFORM((mquantd/mped_merc[1,19])/mped_merc[1,20],'999,999.99'),9))*mped_merc[1,20])/100
                                setcor(3)
                                DEVPOS(21,87);DEVOUTPICT(mquantd,ALLTRIM(mmasc_qtd))
                                setcor(1)
                                //mpecas  := iat((VAL(SUBSTR(TRANSFORM((mquantd/mped_merc[1,19])/mped_merc[1,20],'999999.99'),8))),1)      //*mped_merc[1,20])/100
                                //mpecas  := VAL(SUBSTR(STRZERO((mquantd/mped_merc[1,19])/mped_merc[1,20],14,2),13)),2
                                //DEVPOS(PROW(),56);DEVOUT(SUBSTR(STRZERO(mvl_nota,14,2),1,11)+SUBSTR(STRZERO(mvl_nota,14,2),13))
                        ENDIF
                        /*
                        cons_formula :={}
                        sr_getconnection():exec("SELECT * FROM formula WHERE cod_merc = "+sr_cdbvalue(mped_merc[1,8]),,.t.,@cons_formula)
                        IF LEN(cons_formula) > 0
                                mvlr_fat := tab_formula(mped_merc[1,8])
                        ENDIF
                        */
                        mensagem('Digite o valor do produto - <ESC>Sair')
                        @ 3,13 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF(mped_merc[1,23]>0 .AND. mvlr_fat < mp_venda,.F.,.T.) WHEN (m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T') .OR. mped_merc[1,25] = 'S' .OR. mvlr_fat = 0
                        READ
                        IF LASTKEY() = 27
                                UNLOCK
                                mquantd := 1
                                fecha_tela()
                                LOOP
                        ENDIF
                        mcomissao := mped_merc[1,26]
                        IF mp_venda > mvlr_fat
                                mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                IF ! EMPTY(m_set[1,113]) .AND. mdesconto >= m_set[1,114]
                                        IF m_set[1,113] > 1
                                                mcomissao := mcomissao * (m_set[1,113]/100)
                                        ELSE
                                                mcomissao := mcomissao - (iat(mdesconto,2) * m_set[1,113])
                                                IF mcomissao < 0
                                                        mcomissao := 0
                                                ENDIF
                                        ENDIF
                                ENDIF
                        ENDIF
                        fecha_tela()
                ELSE
                        mmasc_qtd := unidade(mped_merc[1,14])
                        mquantd := VAL(TRANSFORM(mquantd,ALLTRIM(mmasc_qtd)))
                        IF AT('.',mmasc_qtd) = 0
                                mquantd := ROUND(mquantd,0)
                        ELSE
                                mquantd := ROUND(mquantd,LEN(SUBSTR(mmasc_qtd,AT('.',mmasc_qtd)+1)))
                        ENDIF
                ENDIF
                IF ! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]
                        atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                        LOOP
                ENDIF
                mtot_ped = 0
                mtot_ped = mvlr_fat * mquantd
                //setcor(3)
/*
                botao(11,70,17,115,,'Quantidade')
                botao(21,70,27,115,,'Valor Unitario')
                botao(31,70,37,115,,'Valor Total')
                DrawLabel(12,80,TRANSFORM(mquantd,'@E '+mmasc_qtd),,,'arial black',60,30)
                DrawLabel(22,80,TRANSFORM(mvlr_fat,'@E '+m_set[1,98]),,, 'arial black',60,30)
                DrawLabel(32,80,TRANSFORM(mtot_ped,'@E '+m_set[1,98]),,, 'arial black',60,30)
*/
                /*
                DrawLabel(12,85,ALLTRIM(TRANSFORM(mquantd,'@E '+mmasc_qtd)),,,'arial black',60,30)
                DrawLabel(22,85,ALLTRIM(TRANSFORM(mvlr_fat,'@E '+m_set[1,98])),,, 'arial black',60,30)
                DrawLabel(32,85,ALLTRIM(TRANSFORM(mtot_ped,'@E '+m_set[1,98])),,, 'arial black',60,30)
                */
                //DrawLabel(40,52,ALLTRIM(TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98]))),210,, 'arial black',45,15)
                //@ 32,64 SAY mtot_ped PICT ALLTRIM(m_set[1,98])
                setcor(1)
                //ATENCAO(TRANSFORM(mtot_ped,ALLTRIM('@E '+m_set[1,98])))
                opcao := 'S'
                        IF LEN(m_codigo) = 0 .AND. mnum_ped = 0
                                mensagem('Aguarde um momento Gerando NUMERO para o PEDIDO....')

                                gerar_no_ped()

                                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO PEDIDOS No.:'+STRZERO(mnum_ped,6)+SPACE(30)+'Terminal: '+m_indiv[1,1])
                        ENDIF

                        aret:={}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF ! (aret[1,11] = 'S' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0))
                                IF aret[1,103] = 'S' .AND.mquantd > aret[1,56] .AND. aret[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. mlibera = ' ' .AND. SUBSTR(aret[1,9],1,1) <> '@'
                                        IF ! aut_sen('Produto:'+aret[1,8]+' - '+aret[1,9]+m_qp+' Saldo:'+TRANSFORM(aret[1,59],ALLTRIM('@E '+m_set[1,98]))+' - Solicitado no Pedido:'+TRANSFORM(mquantd,'99999.99')+'-Aut.:','LIB_SALDO',,,mcod_merc)
                                                DBUNLOCKALL();LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                        */
                        sr_begintransaction()
                                //try
                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] - mquantd)+",data_atu = "+sr_cdbvalue(mdata_sis)+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.f.)
                                //catch e
                                //        tracelog(valtoprg())
                                //        sr_COMMITtransaction()
                                //END
                                //try

                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(DATE())+','+; //1
                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                sr_cdbvalue(TIME())+','+; //3
                                                                sr_cdbvalue(STRZERO(mcod_merc,5))+','+; //4
                                                                sr_cdbvalue(mquantd)+','+; //5
                                                                sr_cdbvalue(aret[1,56])+','+; //6
                                                                sr_cdbvalue(aret[1,56] - mquantd)+','+; //7
                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                sr_cdbvalue('SAC23PD1')+','+; //9
                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                sr_cdbvalue('INCLUSAO PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                sr_cdbvalue('S')+','+; //11
                                                                sr_cdbvalue(' ')+')',,.f.)

                                //catch e
                                //        tracelog(valtoprg())
                                //        sr_COMMITtransaction()
                                //END

                                //try
                                        mcampo_ped := 'pempresa,'   ;//1
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
                                              +'data_so,'   ;//73
                                              +'convidado,' ;//74
                                              +'cod_pres,'  ;//75
                                              +'tipo_ped'    //76
                                        cComm  := 'INSERT INTO sacped_s ('+mcampo_ped+',sr_deleted) VALUES ('
                                        cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                                        sr_cdbvalue(STRZERO(mnum_ped,6)     )+','+;//2
                                        sr_cdbvalue(SUBSTR(NETNAME(),1,10)      )+','+;//3
                                        sr_cdbvalue(mdata_pedido            )+','+;//4
                                        sr_cdbvalue(aret[1,7]               )+','+;//5
                                        sr_cdbvalue(STRZERO(mcod_merc,5)    )+','+;//6
                                        sr_cdbvalue(mmerc                   )+','+;//7
                                        sr_cdbvalue(aret[1,14]              )+','+;//8
                                        sr_cdbvalue(aret[1,15]              )+','+;//9
                                        sr_cdbvalue(IF(! EMPTY(mplaca),mplaca,menvelope))+','+;//10
                                        sr_cdbvalue(aret[1,17]              )+','+;//11
                                        sr_cdbvalue(aret[1,16]              )+','+;//12
                                        sr_cdbvalue(aret[1,74]              )+','+;//13
                                        sr_cdbvalue(mquantd                 )+','+;//14
                                        sr_cdbvalue(mpacote                 )+','+;//15
                                        sr_cdbvalue(mpecas                  )+','+;//16
                                        sr_cdbvalue(mvlr_fat                )+','+;//17
                                        sr_cdbvalue(mdesconto               )+','+;//18
                                        sr_cdbvalue(mvlr_fat * 1            )+','+;//19
                                        sr_cdbvalue(IF(aret[1,23] > 0,mvlr_fat,mp_venda))+','+;//20
                                        sr_cdbvalue(aret[1,47]              )+','+;//21
                                        sr_cdbvalue(aret[1,45]              )+','+;//22
                                        sr_cdbvalue(aret[1,44]              )+','+;//23
                                        sr_cdbvalue(mcod_cli     )+','+;//24
                                        sr_cdbvalue(mcgc                    )+','+;//25
                                        sr_cdbvalue(mcpf                    )+','+;//26
                                        sr_cdbvalue(mplaca                  )+','+;//27
                                        sr_cdbvalue(mcarro                  )+','+;//28
                                        sr_cdbvalue(mmodelo		    )+','+;//29
                                        sr_cdbvalue(mkm			    )+','+;//30
                                        sr_cdbvalue(aret[1,30]		    )+','+;//31
                                        sr_cdbvalue(LEFT(aret[1,31],30)	    )+','+;//32
                                        sr_cdbvalue(cod_operado		    )+','+;//33
                                        sr_cdbvalue(mcom_oper)+','+;//34
                                        sr_cdbvalue(mcod_ven)+','+;//35
                                        sr_cdbvalue(mnome_ven)+','+;//36
                                        sr_cdbvalue(aret[1,21])+','+;//37
                                        sr_cdbvalue(STRZERO(0,3))+','+;//38
                                        sr_cdbvalue(STRZERO(mcod_cond,3))+','+;//39
                                        sr_cdbvalue(0)+','+;//40
                                        sr_cdbvalue(0)+','+;//41
                                        sr_cdbvalue(' ')+','+;//42
                                        sr_cdbvalue(TIME())+','+;//43
                                        sr_cdbvalue(mtp_venda)+','+;//44
                                        sr_cdbvalue(0)+','+;//45
                                        sr_cdbvalue(aret[1,61])+','+;//46
                                        sr_cdbvalue(aret[1,23])+','+;//47
                                        sr_cdbvalue(STRZERO(mmontador,3))+','+;//48
                                        sr_cdbvalue(STRZERO(mmontador1,3))+','+;//49
                                        sr_cdbvalue(mcomissao+mcomi_tab)+','+;//50
                                        sr_cdbvalue(aret[1,27])+','+;             //51
                                        sr_cdbvalue(aret[1,75])+','+;             //52
                                        sr_cdbvalue(aret[1,62])+','+;             //53
                                        sr_cdbvalue(aret[1,65])+','+;             //54
                                        sr_cdbvalue(mobs_prod)+','+;             //55
                                        sr_cdbvalue(aret[1,82])+','+;           //56
                                        sr_cdbvalue(' ')+','+;            //57
                                        sr_cdbvalue(aret[1,83])+','+;             //58
                                        sr_cdbvalue(mobs1)+','+;                      //59
                                        sr_cdbvalue(mobs2)+','+;                      //60
                                        sr_cdbvalue(mobs3)+','+;                      //61
                                        sr_cdbvalue(mobs4)+','+;                      //62
                                        sr_cdbvalue(SUBSTR(aret[1,73],1,2))+','+; //63
                                        sr_cdbvalue(mchass)+','+;             //64
                                        sr_cdbvalue(mdescri1)+','+;             //65
                                        sr_cdbvalue(mdescri2)+','+;             //66
                                        sr_cdbvalue(mdescri3)+','+;             //67
                                        sr_cdbvalue(mdescri4)+','+;             //68
                                        sr_cdbvalue(mdescri5)+','+;             //69
                                        sr_cdbvalue(mproducao)+','+;            //70
                                        sr_cdbvalue(' ')+','+;                  //71
                                        sr_cdbvalue(STRZERO(mnum_os,6))+','+;   //72
                                        sr_cdbvalue(DATE())+','+;               //73
                                        sr_cdbvalue(mconvidado          )+','+; //74
                                        sr_cdbvalue(STRZERO(mcod_pres,5))+','+; //75
                                        sr_cdbvalue(1                  )+','+; //76
                                        sr_cdbvalue(' ')+')'
                                        sr_getconnection():exec(ccomm,,.f.)
                                //catch e
                                //        tracelog(valtoprg())
                                //        sr_COMMITtransaction()
                                //END
                                mconvidado := SPACE(30)
                                sr_committransaction()
                        sr_endtransaction()
                        AADD(m_codigo,STRZERO(mcod_merc,5))
                        AADD(m_Cbarra,aret[1,2])
                        IF mvlr_fat = 0
                        DrawLabel(lci+f,COL(),' '+ALLTRIM(STR(i,3))+'  '+m_codigo[i]+' '+SUBSTR(m_matriz[i,5],1,18)+' '+TRANSFORM(m_matriz[i,1],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_matriz[i,2],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_matriz[i,1] * m_matriz[i,2],ALLTRIM('@E '+m_set[1,98])),,, 'lucida console',14,7)

                        *                         1       2        3           4     5       6          7         8           9         10        11          12        13         14              15             16          17        18       19   20        21         22         23        24       25        26        27       28      29      30       31       32       33         34         35        36        37        38          39
                        *                          40      41    42      43     44
                                AADD(m_matriz,{mquantd,mvlr_fat,        0,aret[1,7],mmerc,aret[1,14],aret[1,17],       0,         0,aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,TIME(),aret[1,82],aret[1,83],mchass,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,aret[1,75],aret[1,74],mobs_prod,mmontador,mmontador1,aret[1,27],;
                                               aret[1,47],'  ',mpacote,mpecas,mcod_pres})
                        ELSE
                                  AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,aret[1,7],mmerc,aret[1,14],aret[1,17],mp_venda,aret[1,45],aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,TIME(),aret[1,82],aret[1,83],mchass,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,aret[1,75],aret[1,74],mobs_prod,mmontador,mmontador1,aret[1,27],;
                                               aret[1,47],'  ',mpacote,mpecas,mcod_pres})
                        ENDIF
                        IF aret[1,14] = 'EV'
                                AADD(m_alt,STRZERO(mcod_merc,5)+' '+LEFT(aret[1,9],27)+' '+menvelope+' '+TRANSFORM(mquantd,'99999.99')+' '+TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(mvlr_fat * mquantd,ALLTRIM('@E '+m_set[1,98])))
                        ELSE
                                AADD(m_alt,STRZERO(mcod_merc,5)+' '+LEFT(aret[1,9],38)+' '+TRANSFORM(mquantd,'99999.99')+' '+TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(mvlr_fat * mquantd,ALLTRIM('@E '+m_set[1,98])))
                        ENDIF

                        //menvelope := SPACE(10)
                        mcod_pres := 0
                        //mobs_prod:=SPACE(40)
                        mcont_item ++
                        mquantd := 1
        ENDDO
ENDDO
RELEASE ALL
wvw_lclosewindow()
RETURN NIL
***********************************************************************************************
#include "wvwtools.ch"
#include "inkey.ch"              // constantes de codigos das teclas
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"
#INCLUDE "COMMCTRL.CH"
MEMVAR getlist
*******************************
* RECEBIMENTO DE TP's
*******************************
FUNCTION sac30caixa(mnum)
********************
LOCAL MPRG:='SAC30',mmodulo:='RECEBIMENTOS DO CAIXA',;
      opcao,lci:=0,lba,cba,i,msele,morde,;
      mopcao,mtela,f,mtipo_comp,mtipo_pag,;
      mtot_icmf,msaldo_atu,mtot_comissao,mperc_comissao,mvlr_tab,;
      lb,cb,menvelope,mproducao,mprz_med:=0,mdia_med:=0,;
      mn_dup,mn_trans,mvencimento,mt_pag,;
      mn_cupom,mvalor,mn_fin,mtot_ipi,mbox_rece,mcorrente,mcpfcnpj,;
      m_parcela:={},mqtd_parc:=0,m_intevalo:={},mtraco := REPLI('=',60),mtela_aut,;
      mvl_vend,mtot_icm,mtipo_pg,mnome,mextenso,mlinha,lin,mop_ipi:=' ',mop_desc:=' ',;
      mdata_30:=CTOD('  /  /  '),mintevalo:=0,mliv_por:='   ',mvlr_cred:=0,mtelemark:=' ',;
      mcom_sem:=' ',mtipo,mnumero_doc:= ' ',mnum_dup:=' ',mdup_num:=' ',mmont:=' ',mmont1:=' ',;
      mc_mont:=0,mc_mont1:=0,mcomis:=0,mvlr_credcheq:=0,mcred_cheq:=' ',m_credito:={},;
      mcredito_aux:=0,achou:=0,y:=0,cons_tab:={},mbaixar:='N',cons_cli:={},;
      nerr,npos,oSql,cComm, apCode,m_param:={},nBotao

MEMVAR nivel_acess,mdata_sis,cod_operado,mcgc_firm,memp_resa,mend_firm,mfone_firm,;
       mcid_firm,minsc_firm,mnum_ped

PRIVATE mlin,mcartao,mprazo_cart,mdesc_cart,mcobra_fin,mtaxa_fin,m_recebe:={},;
        m_codigo:={},m_desc:={},mdesconto,tela,mreceb,mcom_ven,mcom_ap,;
        mcliente,mnome_vend,mperc,mcgc,mcpf,mcod_vend,mdocumento,;
        minsc,mcond_vezes,mcond_intev,mtp_vend,mtot_desc,mcod_oper,mlib:=' ',;
        mtot_verif:= 0,m_alt:={},mdiferenca,mtot_nota,mqtd_doc:=0,mqtd_dias:=0,;
        mdesc_cx:=0,mdesc_perc:=0,mcom_oper,mfornece:='',;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_emp:='   ',mcredito,mn_cred:=SPACE(8),mn_pix:=SPACE(8),;
        ali:='ped_s',mperc_com1,;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mdata_ped,mresta,mvlr_pg,mduplicata,;
        mvalor_dup,mtip_cli,mobs,mdia_venc:=0,mdata_v,mcod_cart,cons_ped:={},aret:={},mtipo_imp,mporta_imp,mquantd,;
        magencia,mc_c,mn_banco,mn_cheque,mquantd:=1,mvia := '1a.via',mdup:='',mtroco:=0,nBota,mnovo_ped:={},email_cli:='',;
        m_dia[15],m_vlr[15],mcheque:=' ',mfin:= ' ',mdup := ' ',mcartao := ' ',mdinheiro,li:=0,ci:=0

IF ! ver_nivel(mprg,mmodulo,'13456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
SET KEY -9 TO
CLEAR GETS
mreceb := 'R'
lba := 29
cba := 75
lb := 31
cb := 72
setcor(1)
IF m_set[1,61] = 'S'
        IF ! cx_fechado()
                RETURN NIL
        ENDIF
ENDIF
SET KEY -2 TO desconto_pdv()         //F3

op_tela(00,00,47,120,memp_resa+SPACE(50)+'RECEBIMENTO DO CAIXA',,1)
WVW_TBCreate( , .T.,TBSTYLE_LIST            , 0,3,3)
WVW_TBAddButton( ,2900,' ','BAIXA DOCUMENTO',1)
//WVW_TBAddButton( ,1901,' ','Resumo Produto',1)
MenuId:=WVW_GETLASTMENUEVENT()

WvW_PBSetFont( NIL, "lucida console", 12, 0,)
nBotao := wvw_pbCreate(NIL,13,50,14,70,'DESCONTO',NIL,{||desconto_pdv()})
WVW_PBEnable( NIL, nBotao, .T. )

ver_ven(cod_operado)
mnome_vend := sen->snome
mlib := ' '
SET KEY 281 TO alt_caixa()
mdeb_cred := ' '
WHILE .T.
        limpa(00,00,50,120)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        /*
        IF mnum <> NIL
                mnum_ped := mnum
        ELSE
                mnum_ped := 0
        ENDIF
        */
        m_codigo :={}
        m_desc   :={}
        SET INTEN ON
        mcom_ven := mcom_ap := mtot_nota := mdesconto := mperc :=;
        mvl_vend := mcod_vend := mcod_oper := mperc_comissao := mtot_comissao := ;
        mprazo_cart := mdesc_cart := mtot_icm := mdinheiro := mcod_cart := ;
        mvalor := mtot_desc := mtot_verif := mtot_ipi := mdiferenca := ;
        f := mqtd_doc := mqtd_dias := mperc_com1 := mvlr_tab := mvlr_credcheq := 0
        mlib := mtipo_pag := mt_pag := mtelemark := mcom_sem := mcred_cheq:= SPACE(1)
        mtp_vend := mcond_vezes := mcond_intev := SPACE(2)
        mn_dup := mn_trans := mn_cupom := mn_cred  := mn_pix := SPACE(8)
        menvelope := SPACE(10)
        mcpf := SPACE(11)
        mcgc := minsc := SPACE(14)
        mnome_vend := SPACE(30)
        mcliente = SPACE(40)
        opcao = 'S'
        mtipo_comp := 'AV'
        mvencimento := CTOD(' /  /  ')
        i = 1
	m_credito :={}
        m_recebe  :={}
        m_parcela :={}
        m_intevalo:={}
        mnovo_ped :={}
        mensagem('Preencha os Campos - <F1> Ajuda - <ESC> p/Retornar - <-1> Baixar Individual Documento')
        DEVPOS(li,ci+1);DEVOUT('No.Pedido: ')
        DEVPOS(li,ci+21);DEVOUT('Data:')
        DEVPOS(li,ci+39);DEVOUT('Emissao:')
        DEVPOS(li,ci+59);DEVOUT('Vendedor.:')
        DEVPOS(li+1,ci+1);DEVOUT('Cliente:')
        DEVPOS(li+1,ci+55);DEVOUT('CPF:')
        DEVPOS(li+2,ci+1);DEVOUT('CNPJ:')
        DEVPOS(li+2,ci+25);DEVOUT('Cond.Pag.:')
        DEVPOS(li+3,ci+1);DEVOUT('Observacao:')
        @ li+5,ci TO li+5,cb
        //DEVPOS(li+11,ci+1);DEVOUT('Total da COMPRA R$:')
        DEVPOS(li+11,ci+1);DEVOUT('TOTAL R$:')
        @ li+12,ci TO li+12,cb
        @ li+15,ci TO li+15,cb
        DEVPOS(li+16,ci+1);DEVOUT('Total RECEBIDO......R$:')
        DEVPOS(li+16,ci+40);DEVOUT('a RECEBER R$:')
        @ li+17,ci TO li+17,cb

        botao(li+1,ci+74,li+46,ci+120,,' P R O D U T O S   D O   P E D I D O')
        @ li+44,ci+74 to li+44,ci+120
        botao(42,01,46,72,,,'*')

        //WvW_PBSetFont( NIL, "lucida console", 12, 0,)
        //nBota := wvw_pbCreate(NIL,38,01,39,20,'[F7] Alterar Pedido',NIL,{||fecha_pd('1')})
        //WVW_PBEnable( NIL, nBota, .F. )
        setcor(1)
        //@ li,ci+12 GET mnum_ped PICT '999999' WHEN mnum_ped = 0          // VALID lim_get()        //.AND. men_get(li+2,ci+12,'Informe o No.do PEDIDO que deseja fazer o recebimento ou <ENTER> p/No.ENVELOPE - <F1> Consulta pedidos PENDENTES - <ESC>p/Sair')
        //READ
        IF MenuId=2900
        	con251('*')
                CLEAR GETS
		Menuid := 0
                LOOP
        ENDIF
        IF mnum_ped = -1
        	con251('*')
		LOOP
	ENDIF
	IF LASTKEY() = 27
                /*
                IF mnum <> NIL
                        mopcao := op_simnao('S','Deseja Sair o RECEBIMENTO:')
                        IF mopcao = 'N'
                                LOOP
                        ENDIF
                ENDIF
                */
                SET KEY 281 TO
                RELEASE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_ped:={}
        sr_getconnection():exec("SELECT SUM(pquantd*ppre_venda - pquantd*pvlr_fat),SUM(pquantd*ppre_venda),SUM(pquantd*pvlr_fat) FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('Pedido nao ENCONTRADO !!!')
                LOOP
        ENDIF
        mtot_nota := cons_ped[1,3]
        setcor(1)
        SUB_BANNER(li+5,ci+15,TRANSFORM(mtot_nota,'@E 999,999.99'),1)
        cons_ped:={}
        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+ " ORDER BY pnum_ped,pcod_merc",,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('Pedido nao ENCONTRADO !!!')
                LOOP
        ENDIF
        /*
        IF EMPTY(cons_ped[1,100])
                atencao('Este pedido nao foi FECHADO corretamente por isso nao pode ser Recebido, Favor entrar na alteracao de pedido para fechar corretamente...'+m_qp+'Operador: '+cons_ped[1,34]+m_qp+'Vendedor :'+cons_ped[1,32]+m_qp+'Data :'+DTOC(cons_ped[1,4]))
                LOOP
        ENDIF
        */
        IF cons_ped[1,49] = 'C'
                atencao('Este pedido foi CANCELADO do dia: '+DTOC(cons_ped[1,50])+' Hrs.: '+cons_ped[1,59]+' Por: '+cons_ped[1,60]+' Motivo:'+cons_ped[1,91])
                LOOP
        ELSEIF cons_ped[1,49] = '*'
                atencao('Este pedido ja foi PAGO no dia '+DTOC(cons_ped[1,50]))
                IF m_set[1,87] = 'S' .AND. m_set[1,88] = 'C'
                        IF op_simnao('S','Deseja imprimir o Ticket p/Expedicao:') = 'S'
                                imp_emba(mnum_ped,'*')
                        ENDIF
                ENDIF
                SET KEY 281 TO
                RELEASE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF m_set[1,150] = 'S' .AND. EMPTY(cons_ped[1,65])
                atencao('Este PEDIDO nao foi LIBERADO')
                LOOP
        ENDIF
        IF cons_ped[1,4] > mdata_sis
                atencao('Este pedido nao pode ser Recebido com esta DATA !!!')
                LOOP
        ENDIF
        aret:={}
        sr_getconnection():exec("SELECT sr_recno,fornec,cliente FROM sacdupr WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) > 0
                atencao('Ja existe Documentos com No.deste Pedido na conta do cliente:'+aret[1,2]+'-'+aret[1,3])
        ENDIF
/*
        IF verdupped(STRZERO(mnum_ped))
                atencao('Ja existe Documentos com No.deste Pedido na conta do cliente:'+dupr->fornec+'-'+dupr->cliente)
        ENDIF
        IF m_set[1,78] = 'S'
                IF op_simnao('N','Recebimento Parcial:') = 'S'
                        altped_rec()
                ENDIF
        ENDIF
*/
	mcom_sem := 'D'
        point := RECNO()
        //limpa(15,02,20,78)
        mlib_por := cons_ped[1,65]
        mcod_emp := cons_ped[1,1]
        mdata_ped := cons_ped[1,4]
        mcgc := cons_ped[1,24]
        mcpf := cons_ped[1,25]
        mcod_vend := VAL(cons_ped[1,32])
        mcod_oper := VAL(cons_ped[1,34])
        mcom_oper := cons_ped[1,35]
        mnome_vend := cons_ped[1,33]
        mcond_vezes := cons_ped[1,43]
        mcond_intev := cons_ped[1,44]
        mtp_vend := cons_ped[1,45]
        //mcod_cli := VAL(cons_ped[1,23])
        mproducao := cons_ped[1,93]
        mtelemark := cons_ped[1,77]
        setcor(3)
        DEVPOS(li,ci+27);DEVOUT(mdata_sis)
        DEVPOS(li,ci+48);DEVOUT(cons_ped[1,4])
        DEVPOS(li,ci+69);DEVOUT(STRZERO(mcod_vend,3))
        DEVPOS(li+2,ci+35);DEVOUT(SUBSTR(mcond_intev,1,2))
        setcor(1)
        ven(@mcod_vend)
        WHILE .T.
                IF mdesc_cx > 0
                        SET KEY -2 TO           //F3 .F.
                        WVW_PBEnable( NIL, nBotao, .F. )
                ENDIF
                setcor(1)
                SUB_BANNER(li+5,ci+15,TRANSFORM(mtot_nota,'@E 999,999.99'),1)
                @ li+1,ci+09 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,li+1,ci+15) WHEN m_indiv[1,26] <> 'T' .OR. m_set[1,17] = 'S'
                @ li+1,ci+59 GET mcpf PICT '@@R 999.999.999-99' VALID IF(mcpf = SPACE(11),.T.,ver_cpf(mcpf)) WHEN mcod_cli = 0 .AND. (m_indiv[1,26] <> 'T' .OR. m_set[1,17] = 'S')         //.AND. mnum = NIL
                @ li+2,ci+06 GET mcgc PICT '@@R 99.999.999/9999-99' VALID IF(mcgc = SPACE(14),.T.,ver_cgc(mcgc)) WHEN mcod_cli = 0 .AND. mcpf = SPACE(11) .AND. (m_indiv[1,26] <> 'T' .OR. m_set[1,17] = 'S')       //.AND. mnum = NIL
                READ
        	IF LASTKEY() = 27
                        /*
                        IF mnum <> NIL
                                mopcao := op_simnao('S','Deseja Sair o RECEBIMENTO:')
                                IF mopcao = 'N'
                                        LOOP
                                ENDIF
                        ENDIF
                        */
                        SET KEY 281 TO
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                cons_cli:={}
                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_cli) = 0
                        //atencao('Nao foi possivel encontrar este cliente...')
                        LOOP
                ENDIF
                EXIT
        ENDDO
	mcliente := cons_cli[1,3]
        setcor(3)
        DEVPOS(li+1,ci+09);DEVOUT(STR(mcod_cli,5))
        DEVPOS(li+1,ci+15);DEVOUT(mcliente)
        DEVPOS(li+1,ci+59);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(li+2,ci+06);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(li+3,ci+13);DEVOUT(cons_ped[1,86])
        setcor(1)
        IF cons_cli[1,41] = 'S'
                atencao('Este CLIENTE ESTA COM CREDITO BLOQUEADO PELO SISTEMA EM '+DTOC(cons_cli[1,138]))
                LOOP
        ENDIF
        email_cli := cons_cli[1,27]
        F:= i:=0
        FOR i = 1 TO LEN(cons_ped)
                IF cons_ped[i,18] > cons_ped[i,20]
                        mdesconto := 0
                ELSE
                        mdesconto := (cons_ped[i,20] - cons_ped[i,18]) * cons_ped[i,14]
                ENDIF
                AADD(m_codigo,cons_ped[i,6])
*                                   1              2             3              4               5            6            7               8              9           10             11          12      13       14             15               16            17             18             19             20            21             22             23             24              25
                AADD(m_desc,{cons_ped[i,5],cons_ped[i,7],cons_ped[i,30],cons_ped[i,31],cons_ped[i,14],cons_ped[i,20],cons_ped[i,18],cons_ped[i,8],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],0,cons_ped[i,51],cons_ped[i,52],cons_ped[i,53],cons_ped[i,22],cons_ped[i,57],cons_ped[i,9],cons_ped[i,36],cons_ped[i,38],cons_ped[i,37],cons_ped[i,19],cons_ped[i,99],cons_ped[i,105]})
                //mtot_nota := mtot_nota + (cons_ped[i,18] * cons_ped[i,14])
                IF ver_serie() = '141235' .OR. ver_serie() = '141449' .OR. ver_serie() = '141265'
                        mtot_ipi := mtot_ipi + ((cons_ped[i,18] * cons_ped[i,14]) * (cons_ped[i,57]/100))
                ENDIF
                mtot_comissao := mtot_comissao + (cons_ped[i,18]*cons_ped[i,14])*((cons_ped[i,53] + mcom_ven)/100)
                mperc_com1 := mperc_com1 + ;
                (((cons_ped[i,18]*cons_ped[i,14]) * ((cons_ped[i,53] + mcom_ven)/100) - (cons_ped[i,20]*cons_ped[i,14])*((cons_ped[i,53] + mcom_ven)/100));
                + ((cons_ped[i,18]*cons_ped[i,14]) - (cons_ped[i,20]*cons_ped[i,14])));
                 / (cons_ped[i,18]*cons_ped[i,14])
                mvlr_tab := mvlr_tab + (cons_ped[i,20]*cons_ped[i,14])
                mtot_desc := mtot_desc + (cons_ped[i,18] * cons_ped[i,14])*(mdesconto/100)
                setcor(3)
                @ li+2+f,ci+75 SAY cons_ped[i,6]
                @ li+2+f,ci+COL()+1 SAY cons_ped[i,7]
                f++
                IF cons_ped[i,14] = 0
                        setcor(5)
                ELSE
                        setcor(1)
                ENDIF
                @ li+2+f,ci+75 SAY cons_ped[i,14] PICT '@E 9,999.99'
                @ li+2+f,COL()+2 SAY 'X'
                @ li+2+f,COL()+2 SAY cons_ped[i,18] PICT '@E 999,999.99'
                @ li+2+f,COL()+2 SAY '='
                @ li+2+f,COL()+2 SAY cons_ped[i,18]*cons_ped[i,14] PICT '@E 999,999.99'
                setcor(1)
                IF f > 40
                        SCROLL(li+2,ci+75,li+46,ci+120,1)
                        setcor(1)
                ELSE
                        f++
                ENDIF

        NEXT
        setcor(3)
        @ li+44,ci+76 to li+44,ci+118
        DEVPOS(li+45,ci+76);DEVOUT('Quantidade de Itens: '+TRANSFORM(LEN(cons_ped),'9999'))
        setcor(1)
        SUB_BANNER(li+5,ci+15,TRANSFORM(mtot_nota,'@E 999,999.99'),1)
        @ li+5,ci TO li+5,cb
        @ li+12,ci TO li+12,cb
        IF mdesconto > 0
                botao(42,01,46,72,,,'*')
                WVW_DrawLabel(,43,02,'ECONOMIA R$:'+ALLTRIM(TRANSFORM(mdesconto,'@E 99,999.99'))+' - '+ALLTRIM(TRANSFORM((mdesconto / mtot_nota) * 100,'@E 9999.99')+' %'),,,210,, 'arial black',35,15,,,,,)
        ENDIF
        @ li+5,ci TO li+5,cb
        @ li+12,ci TO li+12,cb
        mperc_comissao := mtot_comissao / mtot_nota
        IF mtelemark = 'T' .AND. mperc_comissao < m_set[1,116]/100
                mperc_comissao := 0
        ELSE
                mperc_comissao := mperc_comissao - IF(! EMPTY(m_set[1,116]) .AND. STRZERO(mcod_oper,3) <> STRZERO(mcod_vend,3) .AND. mperc_comissao > 0,(m_set[1,116]/100),0)
        ENDIF
        IF mcod_cli <> 0
                mcpf := cons_cli[1,34]
                mcgc := cons_cli[1,32]
                minsc := cons_cli[1,33]
        ENDIF
        mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
        m_alt :={}
        mn_banco := SPACE(3)
        magencia := SPACE(8)
        mc_c := SPACE(13)
        mcorrente := SPACE(35)
        mcpfcnpj := SPACE(14)
        mtipo_pg := mcredito := mvlr_cred := 0
        mcredito := cli_dup(mcod_cli,'*')
        IF mcredito > 0
                setcor(3)
                DEVPOS(li+4,ci+1);DEVOUT('CREDITO DO CLIENTE R$:'+TRANSFORM(mcredito,'999,999.99')+' ')
                setcor(1)
                mtipo_pg := 7
        ENDIF
        WHILE .T.
                //setcor(3)
                SUB_BANNER(li+5,ci+15,TRANSFORM(mtot_nota,'@E 999,999.99'),1)
                @ li+5,ci TO li+5,cb
                @ li+12,ci TO li+12,cb
                mensagem("Escolha a opcao que deseja fazer o Recebimento  -  <ESC> Retorna" )
                mn_cheque := SPACE(6)
                mvencimento := CTOD('  /  /  ')
                mn_dup := mn_trans := mn_fin := mn_cred := mn_pix := SPACE(8)
                mt_pag   := 'C'
                mdinheiro := mcod_cart := mvalor := 0
                mn_cupom := SPACE(7)
                mopcao := SPACE(1)
                IF VAL(mcond_vezes) > 0 .AND. mcredito = 0
                        IF SUBSTR(mcond_intev,1,2) = 'DU'
                                mtipo_pg := 3
                        ELSEIF SUBSTR(mcond_intev,1,2) = 'CH'
                                mtipo_pg := 2
                        ELSEIF SUBSTR(mcond_intev,1,2) = 'FI'
                                mtipo_pg := 4
                        ELSEIF SUBSTR(mcond_intev,1,2) = 'CT'
                                mtipo_pg := 5
                        ENDIF
                ENDIF
                botao1(li+18,ci+1,li+28,ci+14)
                setcor(10)
                @ li+19,ci+2 PROMPT '1-Dinheiro  '
                @ li+20,ci+2 PROMPT '2-Cheque    '
                @ li+21,ci+2 PROMPT '3-Duplicata '
                @ li+22,ci+2 PROMPT '4-Financeira'
                @ li+23,ci+2 PROMPT '5-Cartao    '
                @ li+24,ci+2 PROMPT '6-Transf    '
                @ li+25,ci+2 PROMPT '7-Cred.     '
                @ li+26,ci+2 PROMPT '8-Dup.+15   '
                @ li+27,ci+2 PROMPT '9-PIX       '
                /*
                botao1(li+18,ci+1,li+20,ci+12)
                botao1(li+18,ci+13,li+20,ci+22)
                botao1(li+18,ci+23,li+20,ci+35)
                botao1(li+18,ci+36,li+20,ci+49)
                botao1(li+18,ci+50,li+20,ci+59)
                botao1(li+18,ci+60,li+20,ci+69)
                botao1(li+18,ci+70,li+20,ci+78)
                botao1(li+18,ci+79,li+20,ci+88)
                //botao1(li+18,ci+89,li+20,ci+98)
                setcor(1)
                @ li+19,ci+2 PROMPT '1-Dinheiro'
                @ li+19,ci+14 PROMPT '2-Cheque'
                @ li+19,ci+24 PROMPT '3-Duplicata'
                @ li+19,ci+37 PROMPT '4-Financeira'
                @ li+19,ci+51 PROMPT '5-Cartao'
                @ li+19,ci+61 PROMPT '6-Transf'
                @ li+19,ci+71 PROMPT '7-Cred.'
                //@ li+19,ci+80 PROMPT '8-Pedido'
                @ li+19,ci+80 PROMPT '9-Dup.+15'
                */
                SET INTEN ON
                MENU TO mtipo_pg
                setcor(1)
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                mbox_rece := SAVESCREEN(00,00,34,73)
                //DINHEIRO
                IF mtipo_pg = 8
                        //MYRUN('PDV.BAT')
                        op_tela(li+18,ci+28,li+35,ci+105,' DUPLICATAS ')
                        IF (mtp_vend = 'AV' .AND. ! aut_sen('Senha p/liberar VENDA AVISTA p/ APRAZO','LIB_FORMA_PG',,0));
                           .OR. (EMPTY(mlib_por) .AND. (ver_serie() <> '141287' .AND. ! spc(mcod_cli,mtot_nota+mtot_ipi,,'*',mlib)))
                                fecha_tela()
                                LOOP

                        ENDIF
                        cons_tab:={}
                        cComm  := "SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(cons_ped[1,42])
                        sr_getconnection():exec(ccomm,,.t.,@cons_tab)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_tab) = 0
                                atencao('Tabela  nao ENCONTRADA !!!')
                                fecha_tela()
                                LOOP
                        ENDIF

                        IF ver_serie() = '141302'
                                mvencimento := mdata_ped + VAL(SUBSTR(cons_tab[1,6],2))
                                mdata_30 := mdata_ped
                        ELSE
                                mvencimento := mdata_sis + VAL(SUBSTR(cons_tab[1,6],2))
                                mdata_30 := mdata_sis
                        ENDIF
                        m_intevalo :={}
                        i := mdia_venc := 0
                        FOR i = 1 TO VAL(SUBSTR(cons_tab[1,6],2))
                                AADD(m_intevalo,30*i)
                        NEXT
                        mqtd_parc := VAL(SUBSTR(cons_tab[1,6],2))
                        mn_dup := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        mn_banco := '   '
                        DEVPOS(0,1);DEVOUT('No.Duplicata.:')
                        DEVPOS(1,1);DEVOUT('Vencimento...:')
                        DEVPOS(2,1);DEVOUT('C>art. B>anco:   No.:')
                        DEVPOS(3,1);DEVOUT('Quant. Parcelas..:')
                        DEVPOS(4,1);DEVOUT('Dia do Vencimento:')
                        @ 5,0 TO 5,100
                        //botao(li+13,ci+1,li+22,ci+78,,' Documento  Vencimento       Valor      Documento  Vencimento       Valor','*')
                        DEVPOS(6,0);DEVOUT(' Documento  Vencimento       Valor      Documento  Vencimento       Valor')
                        @ 7,0 TO 7,100
                        /*
                        IF ver_serie() = '141235' .OR. ver_serie() = '141265' .OR. ver_serie() = '141449' .OR. ver_serie() = '141450' .OR. ver_serie() = '141451'
                                mnumero_doc := v_ped_nt(mnum_ped,'*','*')
                                IF ! EMPTY(mnumero_doc)
                                        mnumero_doc := SUBSTR(mnumero_doc,3)
                                        mn_dup:=mnumero_doc
                                ENDIF
                        ENDIF
                        */
                        @ 0,16 GET mn_dup PICT '@!' VALID IF(EMPTY(mn_dup),.F.,.T.)
                        @ 1,16 GET mvencimento VALID vencim(mvencimento,,,mdata_30,mintevalo)      //IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        @ 2,16 GET mt_pag PICT '@!' VALID mt_pag $ 'C,B'
                        @ 2,23 GET mn_banco PICT '999' WHEN mt_pag = 'B'
                        @ 3,16 GET mqtd_parc PICT '99'
                        @ 4,16 GET mdia_venc PICT '99'
                        READ
                        i := 0
                        m_parcela :={}
                        mnumero_doc := mn_dup
                        IF mdia_venc > 0
                                mdata_30 := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30),4,2)+'/'+SUBSTR(DTOC(mdata_30),7))
                        ENDIF
                        FOR i = 1 TO VAL(SUBSTR(cons_tab[1,6],2))
                                IF i <= mqtd_parc
                                        IF mdia_venc > 0
                                                mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),4,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),7))
                                        ELSE
                                                mdata_v := mdata_30 + m_intevalo[i]
                                        ENDIF
                                        IF mqtd_parc > 9
                                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,mdiferenca/mqtd_parc})
                                        ELSE
                                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,mdiferenca/mqtd_parc})
                                        ENDIF
                                ELSE
                                        AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                                ENDIF
                        NEXT
                        mcond_intev := 'DU000000000000000'
                        mcons_vezes := '000'
                        mtipo_comp = 'AP'
                //ELSEIF mtipo_pg = 8
                //        sac5ped1(STRZERO(mnum_ped,6))
                //        LOOP
                ELSEIF mtipo_pg = 1 .OR. SUBSTR(cons_cli[1,40],1,2) = '00'
                        op_tela(li+18,ci+28,li+20,ci+68,' DINHEIRO ')
                        DEVPOS(1,1);DEVOUT('Dinheiro............R$:')
                        @ 1,24 GET mdinheiro PICT '999,999,999.99' VALID IF(mdinheiro<0,.F.,.T.)
                        READ
                        mcond_intev := 'DN000000000000000'
                        mcons_vezes := '000'
                        fecha_tela()
                        IF LASTKEY() = 27
                               LOOP
                        ENDIF
                ELSEIF mtipo_pg = 2             // CHEQUES
                        IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
                        IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
                        *---------------------------------------------
                        IF EMPTY(mlib_por) .AND. ver_serie() <> '141287' .AND. ! spc(mcod_cli,mtot_nota+mtot_ipi,,'*',mlib)
                                LOOP
                        ENDIF
                        mt_pag := 'B'
                        op_tela(li+18,ci+28,li+26,ci+103,' CHEQUES ')
                        setcor(1)
                        DEVPOS(1,1);DEVOUT('No.Banco...:')
                        DEVPOS(2,1);DEVOUT('Agencia....:')
                        DEVPOS(3,1);DEVOUT('C/C........:')
                        DEVPOS(4,1);DEVOUT('No.Cheque..:')
                        DEVPOS(5,1);DEVOUT('Vencimento.:')
                        DEVPOS(6,1);DEVOUT('Valor......:')
                        DEVPOS(7,1);DEVOUT('Correntista:')
                        DEVPOS(8,1);DEVOUT('CPF/CNPJ:')
                        mvencimento := mdata_sis + VAL(SUBSTR(mcond_intev,3,3))
                        mdata_30 := mdata_sis
                        @ 1,14 GET mn_banco PICT '999'
                        READ
                        IF mn_banco = '9'
                                CLEAR GETS
                                mn_banco := ler_cheque()
                        ENDIF
                        @ 1,14 GET mn_banco PICT '999'
                        @ 2,14 GET magencia PICT '@!'
                        @ 3,14 GET mc_c PICT '@!' VALID qtd_chq(mcod_cli,mn_banco,magencia,mc_c)
                        @ 4,14 GET mn_cheque PICT '99999999' VALID IF(! EMPTY(mn_banco) .AND. EMPTY(mn_cheque),.F.,.T.)
                        @ 5,14 GET mvencimento WHEN ! EMPTY(mn_banco) VALID vencim(mvencimento,,,mdata_30,mintevalo) .AND. IF(mvencimento<mdata_sis,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        IF mvencimento > mdata_sis .AND. mtp_vend = 'AV' .AND. ;
                           ! aut_sen('Senha p/liberar VENDA AVISTA p/ APRAZO','LIB_FORMA_PG',,0)
                                fecha_tela()
                                LOOP
                        ENDIF
                        @ 6,14 GET mvalor PICT '9,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.) WHEN ! EMPTY(mn_banco)
                        @ 7,14 GET mcorrente PICT '@!'
                        @ 8,14 GET mcpfcnpj PICT '@!' VALID chq_corre(mcpfcnpj)
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27 .OR. EMPTY(mn_banco)
                               LOOP
                        ENDIF
                        mcond_intev := 'CH000000000000000'
                        mcons_vezes := '000'
                        IF mvencimento > mdata_sis
                                mtipo_comp = 'AP'
                        ENDIF
               ELSEIF mtipo_pg = 3              // DUPLICATA
                        //IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
                        IF m_indiv[1,26] <> 'P'
                                IF (mtp_vend = 'AV' .AND. ! aut_sen('Senha p/liberar VENDA AVISTA p/ APRAZO','LIB_FORMA_PG',,0));
                                   .OR. (EMPTY(mlib_por) .AND. (ver_serie() <> '141287' .AND. ! spc(mcod_cli,mtot_nota+mtot_ipi,,'*',mlib)))
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mtp_vend = 'AV' .AND. ver_serie() <> '141287'
                                mcond_intev := 'DU001000000'
                                mcons_vezes := '001'
                        ENDIF
                        mvencimento := mdata_sis + VAL(SUBSTR(mcond_intev,3,3))
                        mdata_30 := mdata_sis
                        m_intevalo :={}
                        i := mdia_venc := 0
                        FOR i = 1 TO 15
                                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,i*3,3)))
                        NEXT
                        op_tela(li+18,ci+28,li+35,ci+105,' DUPLICATAS ')
                        DEVPOS(0,1);DEVOUT('No.Duplicata.....:')
                        DEVPOS(1,1);DEVOUT('Vencimento.......:')
                        DEVPOS(2,1);DEVOUT('C>art. B>anco....:   No.:')
                        DEVPOS(3,1);DEVOUT('Quant. Parcelas..:')
                        DEVPOS(4,1);DEVOUT('Dia do Vencimento:')
                        @ 5,0 TO 5,100
                        //botao(li+13,ci+1,li+22,ci+78,,' Documento  Vencimento       Valor      Documento  Vencimento       Valor','*')
                        DEVPOS(6,0);DEVOUT(' Documento  Vencimento       Valor      Documento  Vencimento       Valor')
                        @ 7,0 TO 7,100
                        //mqtd_parc := VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2))
                        mqtd_parc := VAL(SUBSTR(mcond_vezes,2))
                        mn_dup := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        mn_banco := '   '
                        IF ver_serie() = '141235' .OR. ver_serie() = '141265' .OR. ver_serie() = '141449' .OR. ver_serie() = '141450' .OR. ver_serie() = '141451'
                                mnumero_doc := v_ped_nt(mnum_ped,'*','*')
                                IF ! EMPTY(mnumero_doc)
                                        mnumero_doc := SUBSTR(mnumero_doc,3)
                                        mn_dup:=mnumero_doc
                                ENDIF
                        ENDIF

                        @ 0,20 GET mn_dup PICT '@!' VALID IF(EMPTY(mn_dup),.F.,.T.)
                        @ 1,20 GET mvencimento VALID vencim(mvencimento,,,mdata_30,mintevalo)      //IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        @ 2,20 GET mt_pag PICT '@!' VALID mt_pag $ 'C,B'
                        @ 2,27 GET mn_banco PICT '999' WHEN mt_pag = 'B'
                        @ 3,20 GET mqtd_parc PICT '99'
                        @ 4,20 GET mdia_venc PICT '99'
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        i := 0
                        m_parcela :={}
                        mnumero_doc := mn_dup
                        IF mdia_venc > 0
                                //mdata_30 := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30),4,2)+'/'+SUBSTR(DTOC(mdata_30),7))
				mmes_fx := VAL(SUBSTR(DTOC(mdata_30 + 30),4,2))
                                mano_fx := VAL(SUBSTR(DTOC(mdata_30 + 30),7,2))
                                FOR i = 1 TO 15
        	                        IF i <= mqtd_parc
                        	               	//mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+STRZERO(mmes_fx,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),7))
                                                IF mmes_fx= 2 .AND. mdia_venc > 28
                                                        mdata_v := CTOD(STRZERO(28,2)+'/'+STRZERO(mmes_fx,2)+'/'+STRZERO(mano_fx,2))
                                                ELSE
                                                        mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+STRZERO(mmes_fx,2)+'/'+STRZERO(mano_fx,2))
                                                ENDIF
        	                                IF mqtd_parc > 9
                	                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                        	                ELSE
                                	                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                                        	ENDIF
	                                ELSE
        	                                AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                	                ENDIF
                	                mmes_fx ++
                	                IF mmes_fx > 12
                                                mano_fx ++
                	                	mmes_fx := 1
                	               	ENDIF
                        	NEXT
                                IF mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                        m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc))
                                ENDIF
			ELSE
	                        FOR i = 1 TO 15
        	                        IF i <= mqtd_parc
                	                        IF mdia_venc > 0
                        	                        mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),4,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),7))
                                	        ELSE
                                        	        mdata_v := mdata_30 + m_intevalo[i]
	                                        ENDIF
                                                IF SUBSTR(DTOC(mdata_v),4,2) = '02'
                                                        mdata_v := CTOD(SUBSTR(DTOC(mdata_v),1,2)+'/'+SUBSTR(DTOC(mdata_v),4,2)+'/'+SUBSTR(DTOC(mdata_v),7))
                                                ENDIF
        	                                IF mqtd_parc > 9
                	                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                        	                ELSE
                                	                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                                        	ENDIF
	                                ELSE
        	                                AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                	                ENDIF
                        	NEXT
                                IF mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                        m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc))
                                ENDIF
                        ENDIF
                        mtipo_comp = 'AP'
                ELSEIF mtipo_pg = 4             //FINANCIAMENTO
                        IF mtp_vend = 'AV' .AND. ! aut_sen('Senha p/liberar VENDA AVISTA p/ APRAZO','LIB_FORMA_PG',,0)
                                LOOP
                        ENDIF
                        IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
                        IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
                        *---------------------------------------------
                        mvencimento := mdata_ped + VAL(SUBSTR(mcond_intev,3,3))
                        mdata_30 := mdata_ped
                        m_intevalo :={}
                        i:=mdia_venc:=0
                        FOR i = 1 TO 15
                                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,i*3,3)))
                        NEXT
                        m_parcela :={}
                        //mqtd_parc := VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2))
                        mqtd_parc := VAL(SUBSTR(mcond_vezes,2))
                        mn_fin := STRZERO(mnum_ped,6)

                        op_tela(li+18,ci+28,li+35,ci+105,' FINANCIAMENTO ')
                        DEVPOS(1,1);DEVOUT('Cod.Financeira...:')
                        DEVPOS(2,1);DEVOUT('No.Financiamento.:')
                        DEVPOS(3,1);DEVOUT('Quant. Parcelas..:')
                        DEVPOS(4,1);DEVOUT('Dia do Vencimento:')

                        @ 1,20 GET mcod_cart PICT '999' VALID ver_finan(mcod_cart,1,24)
                        @ 2,20 GET mn_fin PICT '@!'
                        @ 3,20 GET mqtd_parc PICT '99'
                        @ 4,20 GET mdia_venc PICT '99'
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        @ 5,0 TO 5,100
                        DEVPOS(6,0);DEVOUT(' Documento  Vencimento       Valor      Documento  Vencimento       Valor')
                        @ 7,0 TO 7,100
                        mnumero_doc := mn_fin
                        IF ver_serie() = '141235'
                                mnumero_doc := SUBSTR(v_ped_nt(mnum_ped,'*','*'),3)
                                IF EMPTY(mnumero_doc);mnumero_doc:=mn_fin;ENDIF
                        ENDIF
                        i := 0
                        IF mdia_venc > 0
                                mdata_30 := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30),4,2)+'/'+SUBSTR(DTOC(mdata_30),7))
                        ENDIF
                        FOR i = 1 TO 15
                                IF mdia_venc > 0
                                        //mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),4,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),7))
                                        mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30 + (i*30)),4,2)+'/'+SUBSTR(DTOC(mdata_30 + (i*30)),7))
                                ELSE
                                        //mdata_v := mdata_30 + m_intevalo[i]
                                        mdata_v := mdata_30 + (30*i)
                                ENDIF
                                IF i <= mqtd_parc
                                        IF mqtd_parc > 9
                                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                                        ELSE
                                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                                        ENDIF
                                ELSE
                                        AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                                ENDIF
                        NEXT
                        IF mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc))
                        ENDIF
                        mcond_intev := 'FI000000000000000'
                        mcons_vezes := '000'
                        mtipo_comp = 'AP'
               ELSEIF mtipo_pg = 5      //CARTAO
                        mt_pag := 'B'
                        m_parcela :={}
                        mqtd_parc := VAL(SUBSTR(mcond_vezes,2))
                        op_tela(li+18,ci+28,li+35,ci+105,' CARTAO ')
                        DEVPOS(1,1);DEVOUT('Cod.Cartao.:')
                        DEVPOS(2,1);DEVOUT('No.Cupom...:')
                        DEVPOS(2,22);DEVOUT('/99')
                        DEVPOS(3,1);DEVOUT('No.Parcelas:')
                        @ 5,0 TO 5,100
                        DEVPOS(6,0);DEVOUT(' Documento  Vencimento       Valor      Documento  Vencimento       Valor')
                        @ 7,0 TO 7,100
                        @ 1,14 GET mcod_cart PICT '999' VALID IF(EMPTY(mcod_cart),.F.,ver_cartao(mcod_cart,1,18))
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        ver_cartao(mcod_cart,1,18)
                        mvencimento := mdata_sis
                        IF mtp_vend = 'AV' .AND. car->tipo_venda <> 'A' .AND. ;
                           ! aut_sen('Senha p/liberar VENDA AVISTA p/ APRAZO','LIB_FORMA_PG',,0)
                                LOOP
                        ENDIF
                        /*
                        IF car->tef = 'S'
                                @ 5,13 GET mvalor PICT "999,999.99" VALID IF(mvalor > mdiferenca,.F.,.T.) WHEN car->tef # 'S'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                mqtd_parc := 1
                                mgerenciador := ALLTRIM(car->cartao)
                                nTotalAPagar := mvalor
                                NumeroCupom := STRZERO(mnum_ped,6)
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
                                        atencao("Transacao nao foi aprovada !")
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
                                NumeroCupom := STRZERO(mnum_ped,6)
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
                                                AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2),mvencimento,iat(mvalor/mqtd_parc,'T',2),car->cod_forn,car->tipo_conta})
                                        ELSE
                                                AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1),mvencimento,iat(mvalor/mqtd_parc,'T',2),car->cod_forn,car->tipo_conta})
                                        ENDIF
                                NEXT
                                IF mvalor - (iat((mvalor/mqtd_parc),'T',2) * mqtd_parc) > 0
                                        m_parcela[1,3] := m_parcela[1,3] + (mvalor - (iat((mvalor/mqtd_parc),'T',2) * mqtd_parc))
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
                        */

                        @ 2,14 GET mn_cupom PICT '@!' VALID IF(EMPTY(mn_cupom),.F.,.T.)
                        @ 3,14 GET mqtd_parc PICT '99'
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        m_intevalo :={}
                        i := mdia_venc := 0
                        FOR i = 1 TO 15
                                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,i*3,3)))
                        NEXT
                        i := 0
                        FOR i = 1 TO 15
                                IF i <= mqtd_parc
                                        //mvencimento := mvencimento + car->prazo
                                        mvencimento := mdata_sis + m_intevalo[i]
                                        //                                        1                                              2                 3                      4            5
                                        IF mqtd_parc > 9
                                                AADD(m_parcela,{ALLTRIM(mn_cupom)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2),mvencimento,iat(mdiferenca/mqtd_parc,2),car->cod_forn,car->tipo_conta})
                                        ELSE
                                                AADD(m_parcela,{ALLTRIM(mn_cupom)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1),mvencimento,iat(mdiferenca/mqtd_parc,2),car->cod_forn,car->tipo_conta})
                                        ENDIF
                                ELSE
                                        AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                                ENDIF
                                AADD(m_intevalo,0)
                        NEXT
                        IF mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc))
                        ENDIF
                        IF car->tipo_venda = 'A' .OR. car->prazo = 0
                                mtipo_comp = 'AV'
                        ELSE
                                mtipo_comp = 'AP'
                        ENDIF
                        mcond_intev := 'CT000000000000000'
                        mcons_vezes := '000'
               ELSEIF mtipo_pg = 6
                        op_tela(li+18,ci+28,li+22,ci+57,' TRANSFERENCIA ')
                        mn_trans := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        mvencimento := mdata_sis
                        DEVPOS(1,1);DEVOUT('No.Transferenca:')
                        DEVPOS(2,1);DEVOUT('Vencimento.....:')
                        DEVPOS(3,1);DEVOUT('Valor R$.......:')

                        @ 1,18 GET mn_trans PICT '@!'    // VALID IF(EMPTY(mn_trans),.F.,.T.)
                        @ 2,18 GET mvencimento VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 3,18 GET mvalor PICT '9,999,999.99'
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27 .OR. EMPTY(mn_trans)
                                LOOP
                        ENDIF
                        mtipo_comp = 'AV'
                        mcond_intev := 'TR000000000000000'
                        mcons_vezes := '000'
               ELSEIF mtipo_pg = 7
                        IF mcredito = 0
                                atencao('Esta opcao nao pode ser usada pois o Cliente nao tem CREDITO')
                                LOOP
                        ENDIF
                        c_credito()
                        op_tela(li+18,ci+28,li+22,ci+57,' CREDITO CLIENTE ')
                        //mn_cred := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        mvencimento := mdata_sis
                        mcredito_aux := 0
                        DEVPOS(1,1);DEVOUT('No.CREDITO...:')
                        DEVPOS(2,1);DEVOUT('Data.........:')
                        DEVPOS(3,1);DEVOUT('Valor R$.....:')
                        setcor(1)
                        @ 1,16 GET mn_cred
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
                        setcor(3)
                        @ 2,16 SAY mvencimento
                        setcor(1)
                        @ 3,16 GET mvalor PICT '9,999,999.99' VALID IF(mvalor > mcredito_aux .OR. mvalor > mcredito,.F.,.T.)
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        mcond_intev := 'CR000000000000000'
                        mcons_vezes := '000'
                        mtipo_comp = 'AV'
               ELSEIF mtipo_pg = 9
                        op_tela(li+18,ci+28,li+22,ci+57,' PAGAMENTO COM PIX ')
                        mvencimento := mdata_sis
                        DEVPOS(1,1);DEVOUT('No. do PIX...:')
                        DEVPOS(2,1);DEVOUT('Data.........:')
                        DEVPOS(3,1);DEVOUT('Valor R$.....:')
                        setcor(1)
                        @ 1,16 GET mn_pix
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        setcor(3)
                        @ 2,16 SAY mvencimento
                        setcor(1)
                        @ 3,16 GET mvalor PICT '9,999,999.99'
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        mcond_intev := 'PX000000000000000'
                        mcons_vezes := '000'
                        mtipo_comp = 'AV'
                ELSE
                        LOOP
                ENDIF
                IF mtipo_pg = 3 .OR. mtipo_pg = 4 .OR. mtipo_pg = 5
                        @ 8,4 GET m_parcela[1,1] PICT '@!'
                        @ 8,COL()+2 GET m_parcela[1,2] VALID vencim(m_parcela[1,2],,,mdata_30,m_intevalo[1],m_parcela[1,1])
                        @ 8,COL()+2 GET m_parcela[1,3] PICT '999,999.99'
                        @ 9,4 GET m_parcela[2,1] PICT '@!'
                        @ 9,COL()+2 GET m_parcela[2,2] VALID vencim(m_parcela[2,2],,,mdata_30,m_intevalo[2],m_parcela[2,1])
                        @ 9,COL()+2 GET m_parcela[2,3] PICT '999,999.99'
                        @ 10,4 GET m_parcela[3,1] PICT '@!'
                        @ 10,COL()+2 GET m_parcela[3,2] VALID vencim(m_parcela[3,2],,,mdata_30,m_intevalo[3],m_parcela[3,1])
                        @ 10,COL()+2 GET m_parcela[3,3] PICT '999,999.99'
                        @ 11,4 GET m_parcela[4,1] PICT '@!'
                        @ 11,COL()+2 GET m_parcela[4,2] VALID vencim(m_parcela[4,2],,,mdata_30,m_intevalo[4],m_parcela[4,1])
                        @ 11,COL()+2 GET m_parcela[4,3] PICT '999,999.99'
                        @ 12,4 GET m_parcela[5,1] PICT '@!'
                        @ 12,COL()+2 GET m_parcela[5,2] VALID vencim(m_parcela[5,2],,,mdata_30,m_intevalo[5],m_parcela[5,1])
                        @ 12,COL()+2 GET m_parcela[5,3] PICT '999,999.99'
                        @ 13,4 GET m_parcela[6,1] PICT '@!'
                        @ 13,COL()+2 GET m_parcela[6,2] VALID vencim(m_parcela[6,2],,,mdata_30,m_intevalo[6],m_parcela[6,1])
                        @ 13,COL()+2 GET m_parcela[6,3] PICT '999,999.99'
                        @ 14,4 GET m_parcela[7,1] PICT '@!'
                        @ 14,COL()+2 GET m_parcela[7,2] VALID vencim(m_parcela[7,2],,,mdata_30,m_intevalo[7],m_parcela[7,1])
                        @ 14,COL()+2 GET m_parcela[7,3] PICT '999,999.99'
                        @ 15,4 GET m_parcela[8,1] PICT '@!'
                        @ 15,COL()+2 GET m_parcela[8,2] VALID vencim(m_parcela[8,2],,,mdata_30,m_intevalo[8],m_parcela[8,1])
                        @ 15,COL()+2 GET m_parcela[8,3] PICT '999,999.99'

                        @ 8,43 GET m_parcela[9,1] PICT '@!'
                        @ 8,COL()+2 GET m_parcela[9,2] VALID vencim(m_parcela[9,2],,,mdata_30,m_intevalo[9],m_parcela[9,1])
                        @ 8,COL()+2 GET m_parcela[9,3] PICT '999,999.99'
                        @ 9,43 GET m_parcela[10,1] PICT '@!'
                        @ 9,COL()+2 GET m_parcela[10,2] VALID vencim(m_parcela[10,2],,,mdata_30,m_intevalo[10],m_parcela[10,1])
                        @ 9,COL()+2 GET m_parcela[10,3] PICT '999,999.99'
                        @ 10,43 GET m_parcela[11,1] PICT '@!'
                        @ 10,COL()+2 GET m_parcela[11,2] VALID vencim(m_parcela[11,2],,,mdata_30,m_intevalo[11],m_parcela[11,1])
                        @ 10,COL()+2 GET m_parcela[11,3] PICT '999,999.99'
                        @ 11,43 GET m_parcela[12,1] PICT '@!'
                        @ 11,COL()+2 GET m_parcela[12,2] VALID vencim(m_parcela[12,2],,,mdata_30,m_intevalo[12],m_parcela[12,1])
                        @ 11,COL()+2 GET m_parcela[12,3] PICT '999,999.99'
                        @ 12,43 GET m_parcela[13,1] PICT '@!'
                        @ 12,COL()+2 GET m_parcela[13,2] VALID vencim(m_parcela[13,2],,,mdata_30,m_intevalo[13],m_parcela[13,1])
                        @ 12,COL()+2 GET m_parcela[13,3] PICT '999,999.99'
                        @ 13,43 GET m_parcela[14,1] PICT '@!'
                        @ 13,COL()+2 GET m_parcela[14,2] VALID vencim(m_parcela[14,2],,,mdata_30,m_intevalo[14],m_parcela[14,1])
                        @ 13,COL()+2 GET m_parcela[14,3] PICT '999,999.99'
                        @ 14,43 GET m_parcela[15,1] PICT '@!'
                        @ 14,COL()+2 GET m_parcela[15,2] VALID vencim(m_parcela[15,2],,,mdata_30,m_intevalo[15],m_parcela[15,1])
                        @ 14,COL()+2 GET m_parcela[15,3] PICT '999,999.99'
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        i := 0
                        FOR i = 1 TO 15
                                mvalor := mvalor + m_parcela[i,3]
                        NEXT
                ELSEIF mtipo_pg = 10
                        i := 0
                        FOR i = 1 TO VAL(SUBSTR(cons_tab[1,6],2))
                                mvalor := mvalor + m_parcela[i,3]
                        NEXT
                ENDIF
                IF EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup) .AND. EMPTY(mn_fin) .AND.;
                   EMPTY(mcod_cart) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred) .AND. EMPTY(mn_pix) .AND. mvalor+mdinheiro > 0 .AND. LEN(m_parcela) = 0
                        LOOP
                ENDIF
                mopcao := 'S'
                IF m_indiv[1,26] <> 'T'
                        mopcao := op_simnao('S','Confirma a Inclusao:')
                ENDIF
                mcredito := cli_dup(mcod_cli,'*')
                setcor(1)
                SUB_BANNER(li+5,ci+15,TRANSFORM(mtot_nota,'999,999.99'),1)
                @ li+5,ci TO li+5,cb
                @ li+12,ci TO li+12,cb
                IF mopcao = 'N';LOOP;ENDIF
                IF mdinheiro = mtot_nota
                        mvalor := mdinheiro
                        AADD(m_alt,'DINHEIRO...: Valor: '+TRANSFORM(mdinheiro,'999,999.99'))
                        AADD(m_recebe,{'DN','AV',SPACE(3),SPACE(6),'99999999',mdata_sis,'C',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                ELSEIF ! (EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_cred) .AND. ;
                     EMPTY(mn_dup) .AND. EMPTY(mcod_cart) .AND. EMPTY(mn_fin) .AND. EMPTY(mn_pix) .AND. EMPTY(mn_trans) .AND. LEN(m_parcela) = 0);
                      .OR. mdinheiro = mtot_nota

                        IF ! EMPTY(mdinheiro)   //.OR. mdinheiro = mtot_nota
                                IF mdinheiro + mtot_verif > mtot_nota
                                        mvalor := mtot_nota - mtot_verif
                                        mtroco := mdinheiro+mtot_verif - mtot_nota
                                        SUB_BANNER(34,01,'Troco:'+TRANSFORM(mtroco,'999,999.99'))
                                        //INKEY(,10)
                                        //INKEY(30)
                                        //atencao('T R O C O   D E   R$: '+TRANSFORM(mdinheiro+mtot_verif - mtot_nota,'999,999.99'))
                                ELSE
                                        mvalor := mdinheiro
                                ENDIF
                                AADD(m_alt,'DINHEIRO...: Valor: '+TRANSFORM(mdinheiro,'999,999.99'))
                                AADD(m_recebe,{'DN','AV',SPACE(3),SPACE(6),'99999999',mdata_sis,'C',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                        ELSE
                                IF ! EMPTY(mn_cheque)
	                                //IF (mvalor + mtot_verif) > mtot_nota
	                                IF (mvalor + mtot_verif) - mtot_nota > .01
                				mcred_cheq := op_simnao('S','O Valor de R$:'+TRANSFORM(mvalor+mtot_verif - mtot_nota,'999,999.99')+'  vai ser gerado um CREDITO para o cliente:')
						IF  mcred_cheq = 'N'
		                                	LOOP
		                                ENDIF
						mvlr_credcheq := mvalor+mtot_verif - mtot_nota
	                                        IF mvencimento > mdata_sis
*       	                                                         1    2      3         4       5        6       7         8                 9      10     11     12       13     14      15        16   17  18       19
                	                                AADD(m_recebe,{'CH','AP',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ','CREDITO P/ CLIENTE DE R$:'+TRANSFORM(mvalor+mtot_verif - mtot_nota,'999,999.99')+IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                        	                        mqtd_doc ++
                                	                mqtd_dias := mqtd_dias + (mvencimento - mdata_sis)
                                        	ELSE
	                                                AADD(m_recebe,{'CH','AV',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ','CREDITO P/ CLIENTE DE R$:'+TRANSFORM(mvalor+mtot_verif - mtot_nota,'999,999.99')+IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
        	                                ENDIF
        	                        ELSE
	                                        IF mvencimento > mdata_sis
*       	                                                         1    2      3         4       5        6       7         8                 9      10     11     12       13     14      15        16   17  18   19
                	                                AADD(m_recebe,{'CH','AP',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                        	                        mqtd_doc ++
                                	                mqtd_dias := mqtd_dias + (mvencimento - mdata_sis)
                                        	ELSE
                                        		AADD(m_recebe,{'CH','AV',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                        	ENDIF
                                        ENDIF
                                        AADD(m_alt,'CHEQUE.....: Bco.: '+mn_banco+' No: '+mn_cheque+' Venc: '+DTOC(mvencimento)+' Vlr:'+TRANSFORM(mvalor,'999,999.99'))
                                ELSEIF ! EMPTY(mn_dup)
                                        i := 0
                                        FOR i = 1 TO LEN(m_parcela)
                                                IF EMPTY(m_parcela[i,1])
                                                        LOOP
                                                ENDIF
                                                AADD(m_alt,'DUPLICATA..: No.:'+m_parcela[i,1]+' Venc:'+DTOC(m_parcela[i,2])+' Vlr:'+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                IF m_parcela[i,2] > mdata_sis
                                                        AADD(m_recebe,{'DU','AP',mn_banco,SPACE(6),m_parcela[i,1],m_parcela[i,2],mt_pag,STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                        mqtd_doc ++
                                                        mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                ELSE
                                                        AADD(m_recebe,{'DU','AV',mn_banco,SPACE(6),m_parcela[i,1],m_parcela[i,2],mt_pag,STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                ENDIF
                                        NEXT
                                ELSEIF ! EMPTY(mn_cupom)
                                        i := 0
                                        FOR i = 1 TO LEN(m_parcela)
                                                IF EMPTY(m_parcela[i,1])
                                                        LOOP
                                                ENDIF
                                                AADD(m_alt,'CARTAO.....: '+STRZERO(mcod_cart,3)+' Cupom No.: '+m_parcela[i,1]+' Valor: '+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                IF m_parcela[i,2] > mdata_sis
                                                        //               1    2       3      4         5       6          7           8                 9            10          11      12       13       14        15         16            17            18
                                                        AADD(m_recebe,{'CT','AP',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                        mqtd_doc ++
                                                        mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                ELSE

                                                        AADD(m_recebe,{'CT','AV',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                ENDIF
                                        NEXT
                                ELSEIF ! EMPTY(mn_fin)  // .OR. LEN(m_parcela) > 0
                                        i := 0
                                        FOR i = 1 TO LEN(m_parcela)
                                                IF EMPTY(m_parcela[i,1])
                                                        LOOP
                                                ENDIF
                                                AADD(m_alt,'FINANCIAMEN: '+m_parcela[i,1]+' Venc.: '+DTOC(m_parcela[i,2])+' Vlr: '+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                IF m_parcela[i,2] > mdata_sis
                                                        AADD(m_recebe,{'FI','AP',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),mn_cupom,m_parcela[i,3],m_parcela[i,1],mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                        mqtd_doc ++
                                                        mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                ELSE
                                                        AADD(m_recebe,{'FI','AV',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),mn_cupom,m_parcela[i,3],m_parcela[i,1],mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                ENDIF
                                        NEXT
                                ELSEIF ! EMPTY(mn_trans)
                                        AADD(m_alt,'TRANSFERENC: '+mn_trans+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                        AADD(m_recebe,{'TR','AP',SPACE(3),SPACE(6),mn_trans,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                ELSEIF ! EMPTY(mn_cred)
                                        mtipo_pg := 1
                                        mcredito := mcredito - mvalor
                                        AADD(m_alt,'CREDITO....: '+mn_cred+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                        AADD(m_recebe,{'CR','AV',SPACE(3),SPACE(6),mn_cred,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                ELSEIF ! EMPTY(mn_pix)
                                        AADD(m_alt,'PIX........: '+mn_pix+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                        AADD(m_recebe,{'PX','AV',SPACE(3),SPACE(6),mn_pix,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                ENDIF
                        ENDIF
                ENDIF
                setcor(3)
                DEVPOS(lci+13,37);DEVOUT(TRANSFORM(mqtd_dias/mqtd_doc,'9999')+' ')
                setcor(1)
                mtot_verif = mtot_verif + mvalor
		IF mcred_cheq = 'S'
			mdiferenca := 0
                ELSE
			mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
		ENDIF
                setcor(3)
                DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.999')
                limpa(li+18,ci+17,lb-1,cb-1)
                f := 1
                i := 0
                FOR i = 1 TO LEN(m_alt)
                        DEVPOS(li+18+f,ci+17);DEVOUT(m_alt[i])
                        IF i > 4
                                SCROLL(li+19,ci+17,lb-1,cb-1,1)
                        ELSE
                                f++
                        ENDIF
                NEXT
                setcor(1)
                //IF mdiferenca <= 0 .OR. mdiferenca <= 0.05      //.OR. mdiferenca <= mtot_ipi
                IF mdiferenca <= 0.05 .AND. mdiferenca >= -0.0001      //.OR. mdiferenca <= mtot_ipi
                        WHILE mtot_verif <> iat(mtot_nota,2) .AND. ! EMPTY(mdiferenca)
                                //atencao(TRANSFORM(mdiferenca,'9,999,999.999999'))
                                mopcao := mensagem1('Total RECEBIDO: '+TRANSFORM(mtot_verif,'9,999,999.999999')+' e maior que A RECEBER: '+TRANSFORM(mtot_nota-mtot_ipi,'9,999,999.99999')+', Deseja tentar Alterar os Recebimentos: ','S','S,N')
                                IF mopcao = 'S'
                                        alt_caixa()     // prgs SACROT1.PRG
                                        setcor(3)
                                        DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                        DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.999')
                                        limpa(li+22,ci+1,lb-1,cb-1)
                                        f := 1
                                        i := 0
                                        FOR i = 1 TO LEN(m_recebe)
                                                DEVPOS(li+18+f,ci+17);DEVOUT(m_alt[i])
                                                IF i > 4
                                                        SCROLL(li+19,ci+17,lb-1,cb-1,1)
                                                ELSE
                                                        f++
                                                ENDIF
                                        NEXT
                                        setcor(1)
                                        LOOP
                                ELSE
                                        EXIT
                                ENDIF
                        ENDDO
                        IF mtot_verif <> iat(mtot_nota,2) .AND. ! EMPTY(mdiferenca)
                                m_alt :={}
                                m_recebe :={}
                                mtot_verif := 0
                                mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
                                setcor(3)
                                DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.999')
                                setcor(1)
                                limpa(li+22,ci+1,lb-1,cb-1)
                                LOOP
                        ENDIF
                        mopcao := 'S'
                        /*
                        mopcao := op_simnao('S','Todas informacoes "OK", Confirma Dados Preenchido:')
                        IF mopcao = 'N'
                                m_alt   :={}
                                m_recebe:={}
                                mtot_verif := 0
                                mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
                                setcor(3)
                                DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota,'9,999,999.99')
                                setcor(1)
                                limpa(li+22,ci+1,lb-1,cb-1)
                                LOOP
                        ENDIF
                        */
                        IF mopcao = 'S'
                                EXIT
                        ENDIF
                ENDIF
        ENDDO
        IF LASTKEY() = 27;LOOP;ENDIF
        //IF mcod_cli <> VAL(m_set[1,84])

        m_param:={}
        sr_getconnection():exec("SELECT tot_comp,vlr_comp,num_ped,ult_comp FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@m_param)
        sr_getconnection():exec('COMMIT',,.f.)
        aret:={}
        sr_begintransaction()
                        mensagem('Atualizando o CLIENTE....')
                        cComm  := "UPDATE saccli SET "
                        ccomm := ccomm +"num_ped  = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                        ccomm := ccomm +",ult_comp = "+sr_cdbvalue(mdata_sis)
                        ccomm := ccomm +",vlr_comp = "+sr_cdbvalue(iat(mtot_nota,2))
                        ccomm := ccomm +",tot_comp = "+sr_cdbvalue(iat(m_param[1,1] + mtot_nota,2))
                        IF ! EMPTY(m_param[1,4])
                                ccomm := ccomm +",ant_ped  = "+sr_cdbvalue(m_param[1,3])
                                ccomm := ccomm +",dat_ant  = "+sr_cdbvalue(m_param[1,4])
                        ENDIF
                        IF mtot_nota > cons_cli[1,18]
                                ccomm := ccomm +",numped_m  = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                                ccomm := ccomm +",ultcomp_m = "+sr_cdbvalue(mdata_sis)
                                ccomm := ccomm +",vlrcomp_m = "+sr_cdbvalue(iat(mtot_nota,2))
                        ENDIF
                        ccomm := ccomm +",vlr_ant  = "+sr_cdbvalue(iat(m_param[1,2],2))+" WHERE cod_cli = "+sr_cdbvalue(mcod_cli)
                        sr_getconnection():exec(ccomm,,.f.)

                        mensagem('Atualizando o CONTAS A RECEBER....')
                        c := i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                IF EMPTY(m_recebe[i,1]);LOOP;ENDIF
                                IF m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis
                                        mbaixar := op_simnao('N','Deseja Baixar este Cheque de No.:'+m_recebe[i,4]+'Valor: '+RTRIM(TRANSFORM(m_recebe[i,10],'999,999.99'))+' - Data Vecimento: '+DTOC(m_recebe[i,6]))
                                ENDIF
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
                                              +'vlr_tab         ,';//11
                                              +'operador        ,';//12
                                              +'vendedor        ,';//13
                                              +'num_ped         ,';//14
                                              +'banco           ,';//15
                                              +'ope_venda       ,';//16
                                              +'ope_comi        ,';//17
                                              +'mov_cx          ,';//18
                                              +'c_cpfcnpj       ,';//19
                                              +'numero          ,';//20
                                              +'duplicata       ,';//21
                                              +'valor_dup       ,';//22
                                              +'valor           ,';//23
                                              +'agencia         ,';//24
                                              +'c_c             ,';//25
                                              +'datpag          ,';//26
                                              +'vlpago          ,';//27
                                              +'pago            ,';//28
                                              +'corrente        ,';//29
                                              +'cpfcnpj         ,';//30
                                              +'vl_ipi          ,';//31
                                              +'com_sem         ,';//32
                                              +'obs           '//33
                                        IF m_recebe[i,1] = 'DN'
                                                mnum_dup := STRZERO(mnum_ped,6)
                                        ELSEIF m_recebe[i,1] = 'CH'
                                                mnum_dup := m_recebe[i,4]
                                        ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR' .OR. m_recebe[i,1] = 'PX'
                                                mnum_dup := m_recebe[i,5]
                                        ELSEIF m_recebe[i,1] = 'FI'
                                                mnum_dup := m_recebe[i,11]
                                        ELSEIF m_recebe[i,1] = 'CT'
                                                mnum_dup := m_recebe[i,9]
                                        ENDIF
                                        cComm  := "INSERT INTO sacdupr ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,' ')"
                                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                                        cComm  := SR_SQLCodeGen(apCode,;
                                       {mcod_emp                               ,;//1
                                        mdata_sis                              ,;//2
                                        m_recebe[i,1]                          ,;//3
                                        cons_cli[1,8]                              ,;//4
                                        mcod_cli                    ,;//5
                                        mcliente                               ,;//6
                                        m_recebe[i,6]                          ,;//7
                                        m_recebe[i,6]                          ,;//8
                                        mperc_comissao                         ,;//9
                                        mperc_com1                             ,;//10
                                        mvlr_tab                               ,;//11
                                        cod_operado                            ,;//12
                                        STRZERO(mcod_vend,3)                   ,;//13
                                        STRZERO(mnum_ped,6)                    ,;//14
                                        m_recebe[i,7]                          ,;//15
                                        STRZERO(mcod_oper,3)                   ,;//16
                                        IF(mtelemark = 'T',(mcom_oper/100),0)  ,;//17
                                        'C'                                    ,;//18
                                        IF(! EMPTY(cons_cli[1,32]),cons_cli[1,32],cons_cli[1,34]) ,;//19
                                        IF(m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT',m_recebe[i,8],m_recebe[i,3]),;//20
                                        mnum_dup                                ,;//21
                                        m_recebe[i,10]                          ,;//22
                                        IF(m_recebe[i,1] = 'CT',m_recebe[i,10] - (m_recebe[i,10] * (m_recebe[i,16] / 100)),m_recebe[i,10]),;//23
                                        m_recebe[i,13]                          ,;//24
                                        m_recebe[i,14]                          ,;//25
                                        IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. m_recebe[i,1]='CT' .OR. m_recebe[i,1]='PX' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis .AND. mbaixar = 'S'),m_recebe[i,6],CTOD('  /  /  ')),;//26
                                        IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. m_recebe[i,1]='CT' .OR. m_recebe[i,1]='PX' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis .AND. mbaixar = 'S'),m_recebe[i,10],0),;//27
                                        IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. m_recebe[i,1]='CT' .OR. m_recebe[i,1]='PX' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis .AND. mbaixar = 'S'),'B',' '),;//28
                                        m_recebe[i,15]                          ,;//29
                                        IF(m_recebe[i,1]='CH',m_recebe[i,16],' '),;//30
                                        mtot_ipi                                ,;//31
                                        mcom_sem                                ,;//32
                                        m_recebe[i,19]                           ;//33
                                        },sr_getconnection():nsystemid)
                                        sr_getconnection():exec(ccomm,,.f.)
                                        IF m_recebe[i,1] = 'CH' .OR. m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT'
                                                mtot_ipi := 0
                                        ENDIF
                        NEXT
                        mensagem('Atualizando o PEDIDO....')
                        cComm  := "UPDATE sacped_s SET ppag = '*'"
                        ccomm := ccomm +",pcod_cli  = "+sr_cdbvalue(mcod_cli)
                        ccomm := ccomm +",pcgc = "+sr_cdbvalue(mcgc)
                        ccomm := ccomm +",pcpf = "+sr_cdbvalue(mcpf)
                        ccomm := ccomm +",pdatapag = "+sr_cdbvalue(mdata_sis)
                        ccomm := ccomm + ",phora_pg = "+sr_cdbvalue(TIME())
                        ccomm := ccomm + ",pfecha = 'F'"
                        ccomm := ccomm + ",pcond_inte = "+sr_cdbvalue(mcond_intev)
                        ccomm := ccomm + ",ptp_vend = "+sr_cdbvalue(mtipo_comp)
                        ccomm := ccomm + " WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                        sr_getconnection():exec(ccomm,,.f.)
                        //sr_getconnection():exec("UPDATE sacped_s SET ppag = '*',pfecha='F'  WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                        mdocumento = 'PD'+STRZERO(mnum_ped,6)
                        mensagem('Atualizando o CAIXA....')
                        i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                IF EMPTY(m_recebe[i,1])
                                        LOOP
                                ENDIF
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
                                              +'obs       '  //20
                                        IF m_recebe[i,1] = 'DN'
                                                mnum_dup := STRZERO(mnum_ped,6)
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
                                        ELSEIF m_recebe[i,1] = 'PX'
                                                mnum_dup := m_recebe[i,5]
                                                mdup_num := m_recebe[i,5]
                                        ENDIF
                                        aret:={}
                                        cComm  := "INSERT INTO saccaixa ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,' ')"
                                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                                        cComm  := SR_SQLCodeGen(apCode,;
                                       {mcod_emp                               ,;//1
                                        mdata_sis                              ,;//2
                                        m_recebe[i,1]                          ,;//3
                                        m_recebe[i,2]                          ,;//4
                                        'PD'+STRZERO(mnum_ped,6)               ,;//5
                                        mcod_cli                    ,;//6
                                        STRZERO(mcod_vend,3)                   ,;//7
                                        cod_operado                            ,;//8
                                        TIME()                                 ,;//9
                                        m_recebe[i,10]                         ,;//10
                                        mperc_comissao                         ,;//11
                                        m_recebe[i,6]                          ,;//12
                                        m_recebe[i,10]                         ,;//13
                                        m_recebe[i,3]                          ,;//14
                                        m_recebe[i,8]                          ,;//15
                                        mcom_sem                               ,;//16
                                        mnum_dup                               ,;//17
                                        mdup_num                               ,;//18
                                        IF(m_recebe[i,1] = 'CT',m_recebe[i,12],' '),;//19
                                        m_recebe[i,19]                          ;//20
                                        },sr_getconnection():nsystemid)
                                        sr_getconnection():exec(ccomm,,.f.)
                        NEXT
                        IF mvlr_credcheq > 0.50
                                mobs := 'CREDITO DO PEDIDO DE NUMERO:'+STRZERO(mnum_ped,6)
                                        cComm  := "INSERT INTO saccred (empresa,tipo,duplicata,valor_dup,"
                                        ccomm  := ccomm + "fornec,cliente,emissao,venc1,venc,valor,vendedor,"
                                        ccomm  := ccomm + "num_ped,operador,obs,sr_deleted)"
                                        ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mcodempresa)+",'CR',"+sr_cdbvalue('PD'+STRZERO(mnum_ped,6))
                                        ccomm  := ccomm + ","+sr_cdbvalue(iat(mvlr_credcheq,2))+","+sr_cdbvalue(mcod_cli)+","+sr_cdbvalue(mcliente)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)
                                        ccomm  := ccomm + ","+sr_cdbvalue(iat(mvlr_credcheq,2))+","+sr_cdbvalue(mcod_vend)+","+sr_cdbvalue(STRZERO(mnum_ped,6))+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(mobs)+",' ')"
                                        sr_getconnection():exec(ccomm,,.f.)
                        ENDIF
                        mensagem('Atualizando o MOVIMENTO....')
                        i := 0
                        FOR i = 1 TO LEN(m_codigo)
                                IF EMPTY(m_codigo[i]);LOOP;ENDIF
                                aret:={}
                                sr_getconnection():exec("UPDATE sacmerc SET dat_ult_s = "+sr_cdbvalue(mdata_sis)+" WHERE sacmerc.cod_merc = "+sr_cdbvalue(m_codigo[i]),,.f.)
                                mmont := mmont1 := ' '
                                mc_mont:=mc_mont1:=mcomis:=0
                                aret:={}
                                sr_getconnection():exec('INSERT INTO sacmov (empresa ,';//1
                                                +'num_ped           ,';//2
                                                +'data_ped          ,';//3
                                                +'documento         ,';//4
                                                +'codigo            ,';//5
                                                +'gru_sub           ,';//6
                                                +'produto           ,';//7
                                                +'especie           ,';//8
                                                +'cod_fab           ,';//9
                                                +'fabrica           ,';//10
                                                +'data_s_e          ,';//11
                                                +'ent_sai           ,';//12
                                                +'quantd            ,';//13
                                                +'pr_venda1         ,';//14
                                                +'pr_venda          ,';//15
                                                +'vl_vend           ,';//16
                                                +'vl_fatura         ,';//17
                                                +'peso              ,';//18
                                                +'cod_vend          ,';//19
                                                +'cod_oper          ,';//20
                                                +'cod_cli           ,';//21
                                                +'cliente           ,';//22
                                                +'tipo              ,';//23
                                                +'pr_unit           ,';//24
                                                +'cust_mer          ,';//25
                                                +'isento            ,';//26
                                                +'com_oper          ,';//27
                                                +'tp_venda          ,';//28
                                                +'cond_vezes        ,';//29
                                                +'cond_intev        ,';//30
                                                +'producao          ,';//31
                                                +'comissao          ,';//32
                                                +'montador          ,';//33
                                                +'montador1         ,';//34
                                                +'com_monta         ,';//35
                                                +'com_monta1        ,';//36
                                                +'convidado         ,';//37
                                                +'cod_presente       '; //38
                                                +',sr_deleted)       '+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(mcod_emp )             +','+; //1
                                                sr_cdbvalue(STRZERO(mnum_ped,6))    +','+; //2
                                                sr_cdbvalue(mdata_ped          )    +','+; //3
                                                sr_cdbvalue(mdocumento         )    +','+; //4
                                                sr_cdbvalue(m_codigo[i]        ) +','+; //5
                                                sr_cdbvalue(m_desc[i,1]           ) +','+; //6
                                                sr_cdbvalue(m_desc[i,2]           ) +','+; //7
                                                sr_cdbvalue(m_desc[i,19]          ) +','+; //8
                                                sr_cdbvalue(m_desc[i,3]           ) +','+; //9
                                                sr_cdbvalue(SUBSTR(m_desc[i,4],1,30))+','+; //10
                                                sr_cdbvalue(mdata_sis               )+','+; //11
                                                sr_cdbvalue('S'                     )+','+; //12
                                                sr_cdbvalue(m_desc[i,5]             )+','+; //13
                                                sr_cdbvalue(m_desc[i,23]            )+','+; //14
                                                sr_cdbvalue(m_desc[i,6]             )+','+; //15
                                                sr_cdbvalue(m_desc[i,7] - IF(! EMPTY(mdesc_cx),m_desc[i,7]*mdesc_perc,0))+','+; //16
                                                sr_cdbvalue(m_desc[i,7] - IF(! EMPTY(mdesc_cx),m_desc[i,7]*mdesc_perc,0))+','+; //17
                                                sr_cdbvalue(m_desc[i,9]                                                 )+','+; //18
                                                sr_cdbvalue(STRZERO(mcod_vend,3)                                        )+','+; //19
                                                sr_cdbvalue(STRZERO(mcod_oper,3)                                        )+','+; //20
                                                sr_cdbvalue(mcod_cli                                         )+','+; //21
                                                sr_cdbvalue(SUBSTR(mcliente,1,30)                                       )+','+; //22
                                                sr_cdbvalue('02'                                                        )+','+; //23
                                                sr_cdbvalue(m_desc[i,12]                                                )+','+; //24
                                                sr_cdbvalue(m_desc[i,17]                                                )+','+; //25
                                                sr_cdbvalue(m_desc[i,14]                                                )+','+; //26
                                                sr_cdbvalue(IF(mtelemark = 'T',mcom_oper,0)                             )+','+; //27
                                                sr_cdbvalue(mtipo_comp                                                  )+','+; //28
                                                sr_cdbvalue(mcond_vezes                                                 )+','+; //29
                                                sr_cdbvalue(SUBSTR(mcond_intev,1,2)                                     )+','+; //30
                                                sr_cdbvalue(mproducao                                                   )+','+; //31
                                                sr_cdbvalue(mcomis                                                      )+','+; //32
                                                sr_cdbvalue(mmont                                                       )+','+; //33
                                                sr_cdbvalue(mmont1                                                      )+','+; //34
                                                sr_cdbvalue(mc_mont                                                     )+','+; //35
                                                sr_cdbvalue(mc_mont1                                                    )+','+; //36
                                                sr_cdbvalue(m_desc[i,25]                                                )+','+; //37
                                                sr_cdbvalue(m_desc[i,24]                                                )+','+; //38
                                                sr_cdbvalue(' ')+')',,.f.)
                        NEXT
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
                                                +'venc      ,';//10 +'datpag    ,';//11
                                                +'valor     ,';//12 +'vlpago    ,';//13
                                                +'banco     ,';//14 +'pago      ,';//15
                                                +'operador  ,';//16
                                                +'num_ped   ,';//17
                                                +'obs       ,';//18
                                                +'sr_deleted)       '+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(mcod_emp                                          )+','+; //1
                                                sr_cdbvalue('PA'                                              )+','+; //2
                                                sr_cdbvalue(m_recebe[i,8]                                     )+','+; //3
                                                sr_cdbvalue(m_recebe[i,9]                                     )+','+; //4
                                                sr_cdbvalue(iat((m_recebe[i,10] * (m_recebe[i,16] / 100)),2))+','+; //5
                                                sr_cdbvalue(m_recebe[i,18]                                    )+','+; //6
                                                sr_cdbvalue(m_recebe[i,17]                                    )+','+; //7
                                                sr_cdbvalue(IF(v_fornece(VAL(m_recebe[i,17])),forn->razao,'DESCONTO DO CARTAO DE CREDITO'))    +','+; //8
                                                sr_cdbvalue(mdata_sis                                         )+','+; //9
                                                sr_cdbvalue(m_recebe[i,6]                                     )+','+; //10 sr_cdbvalue(mdata_sis                                         )+','+; //11
                                                sr_cdbvalue(iat((m_recebe[i,10] * (m_recebe[i,16] / 100)),2))+','+; //12   sr_cdbvalue(ROUN((m_recebe[i,10] * (m_recebe[i,16] / 100)),2) )+','+; //13
                                                sr_cdbvalue('C'                                               )+','+; //14 sr_cdbvalue('B'                                               )+','+; //15
                                                sr_cdbvalue(cod_operado                                       )+','+; //16
                                                sr_cdbvalue(STRZERO(mnum_ped,6)                               )+','+; //17
                                                sr_cdbvalue('Pedido:'+STRZERO(mnum_ped,6)+' DESCONTO DE CARTAO')+','+; //18
                                                sr_cdbvalue(' ')+')',,.f.)
                        NEXT
                        i := mnum_novo := 0
                        FOR i = 1 TO LEN(mnovo_ped)
                                IF mnovo_ped[i,2] = 0
                                        c_pedi := {}
                                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND sr_recno = "+sr_cdbvalue(mnovo_ped[i,3]),,.t.,@c_pedi)
                                        aret:={}
                                        mensagem('Atualizando o Produto...')
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mnovo_ped[i,1]),,.t.,@aret)
                                        //mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] + c_pedi[mponto,14])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                                        mlinha := ' '
                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] + c_pedi[mponto,14])+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.f.)
                                        mensagem('Atualizando o Arquivo de LOG...')
                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(m_codigo[mponto])+','+; //4
                                                                                sr_cdbvalue(c_pedi[mponto,14])+','+; //5
                                                                                sr_cdbvalue(aret[1,56])+','+; //6
                                                                                sr_cdbvalue(aret[1,56] + c_pedi[mponto,14] )+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC23PD1')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue('EXCLUSAO PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                                sr_cdbvalue('E')+','+; //11
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                        mensagem('Atualizando o Arquivo de PEDIDO...')
                                        //sr_getconnection():exec("DELETE FROM sacped_s WHERE sr_deleted = ' ' AND SR_RECNO = "+sr_cdbvalue(mnovo_ped[i,3]),,.f.)
                                        sr_getconnection():exec("UPDATE sacped_s SET sr_deleted = 'S' WHERE SR_RECNO = "+sr_cdbvalue(mnovo_ped[i,3]),,.f.)
                                ELSE
                                        IF mnum_novo = 0
                                                lExit := .T.
                                                WHILE lExit
                                                        sr_begintransaction()
                                                        try
                                                                aret:={}
                                                                sr_getconnection():exec( "select MAX(numero) from sacnoped",,.t.,@aret)
                                                        	mnum_novo = VAL(aret[1,1])+1
                                                                sr_getconnection():exec("update sacnoped set numero = " + sr_cdbvalue(STRZERO(mnum_novo,6)) + ", data_ped = " + sr_cdbvalue( mdata_sis),,.f.)
                                                                sr_committransaction()
                                                                lExit:=.T.
                                                        catch e
                                                                tracelog(valtoprg())
                                                                sr_COMMITtransaction()
                                                                lExit:=.F.
                                                                /*
                                                                aret:={}
                                                                sr_getconnection():exec("SELECT count(*) FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_novo,6)),,.t.,@aret)
                                                                IF aret[1,1] > 0
                                                                        lexit := .T.
                                                                ENDIF
                                                                */
                                                        END
                                                        sr_endtransaction()
                                                ENDDO
                                                atencao('Foi Gerado o Pedido de Numero: '+STRZERO(mnum_novo,6))
                                        ENDIF
                                        mensagem('Foi Gerado o Pedido de Numero: '+STRZERO(mnum_novo,6))

                                        c_pedi := {}
                                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND sr_recno = "+sr_cdbvalue(mnovo_ped[i,3]),,.t.,@c_pedi)

                                        mped_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mnovo_ped[i,1]),,.t.,@mped_merc)
                                        IF LEN(mped_merc) = 0
                                                atencao('Codigo da mercadoria nao cadastrado')
                                                LOOP
                                        ENDIF
                                                mcampo_ped := 'pempresa,'   ;//1
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
                                                        +'data_so,'   ;//73
                                                        +'cod_pres,'  ;//74
                                                        +'qtd_orig,'  ;//75
                                                        +'numped_orig,';//76
                                                        +'pfecha'      //77
                                                        cComm  := 'INSERT INTO sacped_s ('+mcampo_ped+',sr_deleted) VALUES ('
                                                        cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                                                        sr_cdbvalue(STRZERO(mnum_novo,6)      )+','+;//2
                                                        sr_cdbvalue(SUBSTR(NETNAME(),1,10)       )+','+;//3
             			                        sr_cdbvalue(mdata_sis                )+','+;//4
                                                        sr_cdbvalue(c_pedi[1,5]              )+','+;//5
                             			        sr_cdbvalue(c_pedi[1,6]              )+','+;//6
                                                        sr_cdbvalue(c_pedi[1,7]              )+','+;//7
                     		         	        sr_cdbvalue(c_pedi[1,8]              )+','+;//8
                                                        sr_cdbvalue(c_pedi[1,9]              )+','+;//9
                     			                sr_cdbvalue(c_pedi[1,10]             )+','+;//10
                                                        sr_cdbvalue(c_pedi[1,11]             )+','+;//11
                             			        sr_cdbvalue(c_pedi[1,12]             )+','+;//12
                                                        sr_cdbvalue(c_pedi[1,13]             )+','+;//13
                                                        sr_cdbvalue(c_pedi[1,14] - mnovo_ped[i,2] )+','+;//14
                                                        sr_cdbvalue(c_pedi[1,15]             )+','+;//15
             			                        sr_cdbvalue(c_pedi[1,16]             )+','+;//16
                                                        sr_cdbvalue(c_pedi[1,17]             )+','+;//17
                                                        sr_cdbvalue(c_pedi[1,39]             )+','+;//18
                                                        sr_cdbvalue(c_pedi[1,18]             )+','+;//19
             			                        sr_cdbvalue(c_pedi[1,20]             )+','+;//20
                                                        sr_cdbvalue(c_pedi[1,21]             )+','+;//21
                                                        sr_cdbvalue(c_pedi[1,21]             )+','+;//22
                                                        sr_cdbvalue(c_pedi[1,22]             )+','+;//23
             			                        sr_cdbvalue(c_pedi[1,23]             )+','+;//24
                                                        sr_cdbvalue(c_pedi[1,24]             )+','+;//25
                                                        sr_cdbvalue(c_pedi[1,25]             )+','+;//26
                                                        sr_cdbvalue(c_pedi[1,26]             )+','+;//27
             			                        sr_cdbvalue(c_pedi[1,26]             )+','+;//28
                                                        sr_cdbvalue(c_pedi[1,28]             )+','+;//29
                                                        sr_cdbvalue(c_pedi[1,29]             )+','+;//30
                                                        sr_cdbvalue(c_pedi[1,30]             )+','+;//31
              		                                sr_cdbvalue(c_pedi[1,31]             )+','+;//32
                                                        sr_cdbvalue(c_pedi[1,34]             )+','+;//33
                                                        sr_cdbvalue(c_pedi[1,35]             )+','+;//34
                                                        sr_cdbvalue(c_pedi[1,32]             )+','+;//35
             			                        sr_cdbvalue(c_pedi[1,33]             )+','+;//36
                                                        sr_cdbvalue(c_pedi[1,48]             )+','+;//37
                                                        sr_cdbvalue(c_pedi[1,41]             )+','+;//38
                                                        sr_cdbvalue(c_pedi[1,42]             )+','+;//39
     			                                sr_cdbvalue(c_pedi[1,40]             )+','+;//40
                                                        sr_cdbvalue(c_pedi[1,43]             )+','+;//41
                                                        sr_cdbvalue(c_pedi[1,44]             )+','+;//42
                                                        sr_cdbvalue(TIME()                   )+','+;//43
             			                        sr_cdbvalue(c_pedi[1,45]             )+','+;//44
                                                        sr_cdbvalue(c_pedi[1,46]             )+','+;//45
                                                        sr_cdbvalue(c_pedi[1,51]             )+','+;//46
                                                        sr_cdbvalue(c_pedi[1,52]             )+','+;//47
             			                        sr_cdbvalue(c_pedi[1,36]             )+','+;//48
                                                        sr_cdbvalue(c_pedi[1,38]             )+','+;//49
       	                                                sr_cdbvalue(c_pedi[1,53]             )+','+;//50
                                                        sr_cdbvalue(c_pedi[1,54]             )+','+;//51
     			                                sr_cdbvalue(c_pedi[1,55]             )+','+;//52
                                                        sr_cdbvalue(c_pedi[1,56]             )+','+;//53
             			                        sr_cdbvalue(c_pedi[1,57]             )+','+;//54
                                                        sr_cdbvalue(c_pedi[1,58]             )+','+;//55
                                                        sr_cdbvalue(c_pedi[1,78]             )+','+;//56
                                                        sr_cdbvalue(c_pedi[1,77]             )+','+;//57
             			                        sr_cdbvalue(c_pedi[1,79]             )+','+;//58
                                                        sr_cdbvalue(c_pedi[1,86]             )+','+;//59
                                                        sr_cdbvalue(c_pedi[1,87]             )+','+;//60
                                                        sr_cdbvalue(c_pedi[1,88]             )+','+;//61
             			                        sr_cdbvalue(c_pedi[1,89]             )+','+;//62
                                                        sr_cdbvalue(c_pedi[1,92]             )+','+;//63
                                                        sr_cdbvalue(c_pedi[1,80]             )+','+;//64
                                                        sr_cdbvalue(c_pedi[1,81]             )+','+;//65
       	                                                sr_cdbvalue(c_pedi[1,82]             )+','+;//66
                                                        sr_cdbvalue(c_pedi[1,83]             )+','+;//67
     			                                sr_cdbvalue(c_pedi[1,84]             )+','+;//68
                                                        sr_cdbvalue(c_pedi[1,85]             )+','+;//69
                                                        sr_cdbvalue(c_pedi[1,93]             )+','+;//70
                      		                        sr_cdbvalue(c_pedi[1,90]             )+','+;//71
                                                        sr_cdbvalue(c_pedi[1,94]             )+','+;//72
     			                                sr_cdbvalue(DATE()                   )+','+;//73
                                                        sr_cdbvalue(c_pedi[1,99]             )+','+;//74
     			                                sr_cdbvalue(c_pedi[1,14]             )+','+;//75
     			                                sr_cdbvalue(IF(EMPTY(c_pedi[1,108]),STRZERO(mnum_ped,6),c_pedi[1,108]))+','+;//76
                                                        sr_cdbvalue('F'                      )+','+;//77
                                                        sr_cdbvalue(' ')+')'
                                                        sr_getconnection():exec(ccomm,,.f.)
                                        sr_getconnection():exec("UPDATE sacped_s SET pquantd = "+sr_cdbvalue(mnovo_ped[i,2])+" WHERE sr_recno = "+sr_cdbvalue(mnovo_ped[i,3]),,.f.)
                                ENDIF
                        NEXT
                sr_committransaction()
        sr_endtransaction()
        // IMPRESSAO DO PEDIDO

        boleto_pdv(,,,mtroco)

        cons_tela:={}
        mensagem('Atualizando o CREDITO....')
        i := 0
        FOR i = 1 TO LEN(m_recebe)
                IF m_recebe[i,1] = 'CR'
                        cons_cred := {}
                        mcomando := "SELECT * FROM saccred WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                        sr_getconnection():exec(mcomando,,.t.,@cons_cred)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF m_recebe[i,10] = cons_cred[1,19]
                                mcomando := "UPDATE saccred "
                                mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                mcomando := mcomando + ",pago = 'B'"
                                mcomando := mcomando + ",conta = '*'"
                                mcomando := mcomando + ",mov_cx = 'C'"
                                mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                sr_getconnection():exec(mcomando,,.f.)
                        ELSE
                                mcomando := "UPDATE saccred "
                                mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                mcomando := mcomando + ",pago = 'B'"
                                mcomando := mcomando + ",conta = '*'"
                                mcomando := mcomando + ",mov_cx = 'C'"
                                mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                sr_getconnection():exec(mcomando,,.f.)

                                cComm  := "INSERT INTO saccred (empresa,tipo,duplicata,valor_dup,"
                                ccomm  := ccomm + "fornec,cliente,emissao,venc1,venc,valor,vendedor,"
                                ccomm  := ccomm + "num_ped,operador,obs,conta,sr_deleted)"
                                ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mcodempresa)+",'CR',"+sr_cdbvalue(m_recebe[i,5])
                                ccomm  := ccomm + ","+sr_cdbvalue(iat(m_recebe[i,10],2))+","+sr_cdbvalue(mcod_cli)+","+sr_cdbvalue(mcliente)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)
                                ccomm  := ccomm + ","+sr_cdbvalue(iat(cons_cred[1,19]-m_recebe[i,10],2))+","+sr_cdbvalue(cons_cred[1,30])+","+sr_cdbvalue(STRZERO(mnum_ped,6))+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(cons_cred[1,46])+",'*',' ')"
                                sr_getconnection():exec(ccomm,,.f.)
                        ENDIF
                        sr_getconnection():exec("COMMIT",,.f.)
                        opcao := op_simnao('S','Deseja Imprimir o Comprovante de Credito:')
                        IF opcao = 'S'
                                IF ! imp_arq('CREDITO.REL','D','N')
                                        LOOP
                                ENDIF
                                        mtraco := REPLI('=',60)
                                        y:=0
                                        FOR y = 1 TO m_set[1,66]
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+m_recebe[y,5]+'   ( P A G O )',35))

                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mdata_sis)
                                                DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(m_recebe[y,10],'99,999,999.99')))
                                                DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STR(mcod_cli,5)+'-'+mcliente)
                                                DEVPOS(PROW()+1,16);DEVOUT(cons_cred[1,46])

                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('           C A I X A           ',60))
                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('          Solicitante          ',60))

                                                DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',60))
                                                IF m_set[1,66] > 1 .AND. y < m_set[1,66]
                                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                                ENDIF
                                        NEXT
                                        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(' ')
                                SETPRC(00,00)
                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                conf_impressao('CREDITO.REL')
                        ENDIF
                ENDIF
        NEXT
        IF m_set[1,111] = 'S'
                WHILE LASTKEY() <> 27
                        IF op_simnao('S','Insira o Documento na impressora p/autenticar',' AUTENTICACAO DE DOCUMENTO ') = 'S'
                                SET DEVICE TO PRINT
                                SET PRINT ON
                                SET PRINT TO (m_indiv[1,20])
                                imprt(m_indiv[1,21],'C')
                                DEVPOS(00,00);DEVOUT(ALLTRIM(SUBSTR(memp_resa,1,4))+ALLTRIM(mdocumento)+cod_operado+DTOC(mdata_sis)+ALLTRIM(TRANSFORM(mtot_nota,'999999.99')))
                                IF m_indiv[1,9] = 'P';DEVPOS(01,00);DEVOUT(' ');ENDIF
                                imprt(m_indiv[1,21],'N')
                                SETPRC(00,00)
                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        ELSE
                                EXIT
                        ENDIF
                ENDDO
        ENDIF
	IF mvlr_credcheq > 0
                opcao := op_simnao('S','Deseja Imprimir o Comprovante de Credito:')
                IF opcao = 'S'
                        IF ! imp_arq('CREDITO.REL','D','N')
                                LOOP
                        ENDIF
                                mtraco := REPLI('=',60)
                                FOR i = 1 TO m_set[1,66]
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+'PD'+STRZERO(mnum_ped,6)+'   ( P A G O )',35))

                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mdata_sis)
                                        DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mvlr_credcheq,'99,999,999.99')))
                                        DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STR(mcod_cli,5)+'-'+mcliente)
                                        DEVPOS(PROW()+1,16);DEVOUT('CREDITO DO PEDIDO DE NUMERO:'+STRZERO(mnum_ped,6))

                                        DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC('           C A I X A           ',60))
                                        DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC('          Solicitante          ',60))

                                        DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',60))
                                        IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                                DEVPOS(PROW()+3,00);DEVOUT(' ')
                                        ENDIF
                                NEXT
                                DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(' ')
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        conf_impressao('CREDITO.REL')
                ENDIF

        ENDIF
        IF m_set[1,47] = 'C'
                opcao := 'N'
                i:=0
                FOR i = 1 TO LEN(m_recebe)
                        IF m_recebe[i,1] = 'DU'
                                opcao := op_simnao('S','Deseja imprimir a DUPLICATA No.:')
                                IF opcao = 'N'
                                        EXIT
                                ENDIF
                                IF ! imp_arq('DUPLICATA.REL','D','N')
                                        opcao := 'N'
                                        EXIT
                                ELSE
                                        EXIT
                                ENDIF
                        ENDIF
                NEXT
                IF opcao = 'S'
                        i:=0
                        FOR i = 1 TO LEN(m_recebe)
                                IF EMPTY(m_recebe[i,1]);LOOP;ENDIF
                                IF m_recebe[i,1] = 'DU'
                                        dup_sis(STR(mcod_cli,5),mcliente,ALLTRIM(cons_cli[1,21])+', '+cons_cli[1,136]+'  '+ALLTRIM(cons_cli[1,137]),cons_cli[1,22],cons_cli[1,24],cons_cli[1,25],cons_cli[1,26],cons_cli[1,29],;
                                                cons_cli[1,32],cons_cli[1,33],cons_cli[1,34],cons_cli[1,100],cons_cli[1,101],cons_cli[1,102],cons_cli[1,103],cons_cli[1,104],cons_cli[1,105],;
                                                'DU',m_recebe[i,5],mdata_sis,m_recebe[i,6],mcod_vend,m_recebe[i,10],cons_cli[1,4])

                                ENDIF
                        NEXT
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        conf_impressao('DUPLICATA.REL')
                ENDIF

        ENDIF
        IF m_set[1,62] = 'S' .AND. cons_ped[1,45] = 'AP'
                opcao:= op_simnao('S','Deseja emitir CARNES DE PAGAMENTOS:')
                IF opcao = 'S'
                        emi_carne(mnum_ped)     // prg SACROT
                ENDIF
        ENDIF
        IF m_set[1,87] = 'S' .AND. m_set[1,88] = 'C'
                imp_emba(mnum_ped,'*')
        ENDIF
        IF ! EMPTY(email_cli) .AND. m_set[1,77] = 'S'
                c_pedi := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_pedi)
                sr_getconnection():exec('COMMIT',,.f.)

                IF SUBSTR(c_pedi[1,44],1,2) = 'DN'
                        mdinheiro := '*'
                ELSEIF SUBSTR(c_pedi[1,44],1,2) = 'CH'
                        mcheque := '*'
                ELSEIF SUBSTR(c_pedi[1,44],1,2) = 'FI'
                        mfin := '*'
                        mcod_fin := VAL(c_pedi[1,41])
                        ver_finan(mcod_fin)
                        mtipo_fin := c_pedi[1,43]
                        mvalor_pres := c_pedi[1,40]
                ELSEIF SUBSTR(c_pedi[1,44],1,2) = 'DU'
                        mdup := '*'
                ELSEIF SUBSTR(c_pedi[1,44],1,2) = 'CT'
                        mcartao := '*'
                ENDIF
                mcond_veze := c_pedi[1,43]
                mcondicao := c_pedi[1,43]
                mprazo := SUBSTR(c_pedi[1,44],3,3)
                m_dia[1] := VAL(SUBSTR(c_pedi[1,44],3,3))
                m_dia[2] := VAL(SUBSTR(c_pedi[1,44],6,3))
                m_dia[3] := VAL(SUBSTR(c_pedi[1,44],9,3))
                m_dia[4] := VAL(SUBSTR(c_pedi[1,44],12,3))
                m_dia[5] := VAL(SUBSTR(c_pedi[1,44],15,3))
                m_dia[6] := VAL(SUBSTR(c_pedi[1,44],18,3))
                m_dia[7] := VAL(SUBSTR(c_pedi[1,44],21,3))
                m_dia[8] := VAL(SUBSTR(c_pedi[1,44],24,3))
                m_dia[9] := VAL(SUBSTR(c_pedi[1,44],27,3))
                m_dia[10] := VAL(SUBSTR(c_pedi[1,44],30,3))
                m_dia[11] := VAL(SUBSTR(c_pedi[1,44],33,3))
                m_dia[12] := VAL(SUBSTR(c_pedi[1,44],36,3))
                m_dia[13] := VAL(SUBSTR(c_pedi[1,44],39,3))
                m_dia[14] := VAL(SUBSTR(c_pedi[1,44],42,3))
                m_dia[15] := VAL(SUBSTR(c_pedi[1,44],45,3))
                email_ped(mnum_ped,email_cli)
        ENDIF
/*
        IF ver_serie() = '141235'
                opcao:= op_simnao('N','Deseja emitir Nota Fiscal:')
                IF opcao = 'S'
                        sac211(,,mnum_ped)
                ENDIF
        ENDIF
*/
        mflag := 0
        m_recebe :={}
        m_desc   :={}
        CLEAR GETS
        RELEASE mlin,mcartao,mprazo_cart,mdesc_cart
        IF mnum <> NIL
                RELEASE ALL
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        limpa(19,20,22,46)
ENDDO
wvw_lclosewindow()
RETURN NIL
************************************* F I M ***************************************
FUNCTION desconto_pdv()
***********************
CLEAR GETS
op_tela(10,10,13,40,'DESCONTO em R$ ou %')
mdesc_cx := mdesc_perc := 0
DEVPOS(1,1);DEVOUT('Desconto R$.: ')
DEVPOS(2,1);DEVOUT('Desconto (%): ')
@ 1,15 GET mdesc_cx PICT '999,999.99'
@ 2,15 GET mdesc_perc PICT '9999.99' WHEN EMPTY(mdesc_cx)
READ
IF ! EMPTY(mdesc_perc)
        mdesc_cx := mtot_nota * (mdesc_perc / 100)
ELSE
        mdesc_perc := (mdesc_cx / mtot_nota) * 100
ENDIF
IF ! aut_sen('Senha p/liberacao de DESCONTO NO RECEBIMENTO de R$: '+TRANSFORM(mdesc_cx,'999,999.99')+' em Percentual: '+TRANSFORM(mdesc_perc,'9999.99')+'%','DESC_CX',,0) .OR. LASTKEY() = 27
        mdesc_perc := mdesc_cx := 0
ELSEIF LASTKEY() = 27
        mdesc_perc := mdesc_cx := 0
ELSE
        sr_getconnection():exec("UPDATE sacped_s SET pvlr_fat = pvlr_fat - pvlr_fat * "+sr_cdbvalue(mdesc_perc/100)+" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        cons_ped:={}
        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+ " ORDER BY pnum_ped,pcod_merc",,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
ENDIF
mtot_nota := iat(mtot_nota-mdesc_cx)
wvw_lclosewindow()
setcor(1)
SUB_BANNER(li+5,ci+15,TRANSFORM(mtot_nota,'@E 999,999.99'),1)
IF LASTKEY() = 27
        mdesc_perc := mdesc_cx := 0
        RETURN .F.
ELSE
        RETURN NIL
ENDIF

***************************  F I M  **********************************
