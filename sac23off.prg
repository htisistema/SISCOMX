#include "sqlrdd.ch"
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"
********************************
* SOLICITAR PEDIDO ECF
*******************************
MEMVAR mtip_term,nivel_acess,cod_operado,getlist,inicio_protocolo,fim_protocolo_driver,;
       prepara_string,tamanho_de_retorno,mdata_sis,string_devolvida

FUNCTION sac23off(msld)        // CODIGO DE BARRA
***************
#include "ecf.ch"
//#include "\clipper5\inkey.ch"
LOCAL MPRG:="SAC23OFF",;
      mp_venda,msele,morde,mcont,f,mvar,mtelap,mtot_ipi,mperc:=0,mtelaobs,;
      mdocum,mcomissao := 0,mqtd,mpreco:=0,mvlr_aliq:='  ',mtot_

PRIVATE cComm,m_param:={},aret:={},mcons_ped := {},cons_merc:={},;
        m_matriz:={},m_codigo:={},m_merc:={},m_Cbarra:={},i,opcao,;
        mcod_merc,mquantd:=1,mdesconto:=0,mvlr_fat,mtot_ped,mmerc,mpr_venda,;
        li,ci,lb,cb,mnome_ven,lci,lba,cba,tela,mautoriz,mlibera,;
        mcod_bc,mcont_item,mobs1,mobs2,mobs3,orcamento,sovenda,mvarejo:=1,tela_ant,f4,;
        mprz,mnum_ped:=0,menvelope,mcod_cli:=0,mnome_cli,mponto,mflag,ali,no,mcod_vend,;
        msubtotal,mtot_custo:=0,mcod_aux,mproducao,mdocumento:=SPACE(8),mnum_ecf:=SPACE(8),mtot_nota:=0,;
        mhoras:=SPACE(5),mabrir_cp:="",mretorno:=" ",mnum_aux:="",cnumpdv:=" ",cnumcupom:=" ",;
        cont_itens:=0,mcod_fab,mfabrica,mdesc_cart,mobs_prod:=SPACE(40),mcod_cond:=0,;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mcond_veze:=SPACE(3),mprz,m_dia[15],m_vlr[15],;
        mcons_tabpg,mtipo_preco,mcomi_tab,cons_cli:={},mnum_ccf:=''

SET KEY -4 TO f5_qtd()                    // INFORMA QUANTIDADE PRODUTO NO PRG SACROT
SET KEY -2 TO C_PROD()                    // CONSULTAR PRODUTO F3
SET KEY -1 TO abrir_gaveta()
*SET KEY -6 TO canultitem()                 // CANCELA ULTIMO ITEM VENDIDO F7
SET KEY -7 TO can_item()                 // CANCELA ITEM VENDIDO GENERICO F8
*SET KEY -8 TO sac11()                    // CADASTRO DE PRODUTO F9
SET KEY -9 TO fecha_off("1")             // neste mesmo PRG. <F10>Tecla
SET KEY -40 TO f7_cli("*")             // CADASTRO DE CLIENTES <F11>tecla
*---------------------------------------------
mtip_term := m_cfg[2]
IF ! AbriArq("insopera","sen");RETURN NIL;ENDIF
IF ! AbriArq("sacmerc","merc");RETURN NIL;ENDIF
IF ! AbriArq("sacmovnt","movnt");RETURN NIL;ENDIF
IF ! AbriArq("r5","ir5");RETURN NIL;ENDIF
IF ! AbriArq("r4","ir4");RETURN NIL;ENDIF
IF ! AbriArq("r7","ir7");RETURN NIL;ENDIF
//IF ! AbriArq("saccli","cli");RETURN NIL;ENDIF
*---------------------------------------------
setcor(1)
lci:=15
cba:=120
lba:=49
mflag := 0
op_tela(00,00,50,120,memp_resa+SPACE(30)+mversao+'  -  V E N D A S  ** OFF LINE **'+SPACE(30)+'Terminal: '+m_indiv[1,1],,1)
WHILE .T.
        exibi_prg(mprg)
        IF mflag = 0
                IF m_line = 'OFF'
                        nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(m_cfg[4])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
                        IF nCnn < 0
                                m_line := 'OFF'
                        ELSE
                                m_line := 'ON'
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                ENDIF

                mproducao := mabrir_cp := " "
                mcod_vend := cod_operado
                mtot_custo := mflag := msubtotal := mtot_ipi  := mcod_cli := mnum_ped := 0
                mnome_ven := SPACE(30)
                mvarejo := 1
                mautoriz := SPACE(3)
                ASIZE(m_merc,0)
                ASIZE(m_matriz,0)
                ASIZE(m_codigo,0)
                ASIZE(m_Cbarra,0)
                mcod_cli := IF(EMPTY(m_set[1,84]),1,VAL(m_set[1,84]))
                mnome_cli := SPACE(40)
                mcod_vend := cod_operado
                mflag := 1
                mquantd=1
                mcont_item := cont_itens := 0
                mflag := 1
        ENDIF
        WHILE .T.
                botao(00,01,10,119)
                limpa(01,02,09,119)
                setcor(1)
                SUB_BANNER(01,10,'P R O D U T O')
                IF LEN(m_codigo) = 0
                        limpa(01,02,09,119)
                        setcor(1)
                        IF m_indiv[1,26] = 'T'
                                SUB_BANNER(01,05,'CAIXA LIVRE')
                        ELSE
                                SUB_BANNER(01,05,'TERMINAL LIVRE')
                        ENDIF
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
                DEVPOS(36,02);DEVOUT('Desc.(%)...:       - R$: ')
                IF mflag = 0
                        SET KEY -9 TO
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mlibera := ' '
                i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := 0
                SETCOLOR('n/w,n/w')
                botao(lci-3,55,lba,cba-1)
                mqtd_lin := 0
                mitem := 1
                IF LEN(m_codigo) > 20
                        mqtd_lin := LEN(m_codigo) - 20
                ENDIF
                WVW_DrawLabel(,lci-3,58,'No.Cupom::'+mdocumento+' - Caixa: '+mnum_ecf,,,,, 'terminal',13,4,,,,,)
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),100),,,,, 'terminal',13,4,,,,,)
                f++
                @ lci+f,55 SAY ''
                WVW_DrawLabel(,lci+f,COL(),'Item  Cod.  Descricao                                      Quantd.   Vlr.Unit.   Vlr.Total',,,,, 'terminal',13,4,,,,,)
                f++
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),100),,,,, 'terminal',13,4,,,,,)
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

                SET KEY -9 TO fecha_off("1")       // neste mesmo PRG. <F10>Tecla

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
                        SR_EndConnection(mconexao)
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
                        mcod_merc := f4_merc1()
                        SELE('merc');ORDSETFOCUS(1)
                        IF ! merc->(DBSEEK(mcod_merc))
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mmerc := merc->merc
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
                                        IF ! CANCELAR_CUPOM(,1)
                                                LOOP
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
                IF mflag = 0
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_bc)
                        IF SUBSTR(mcod_bc,1,1) = "2" .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                                IF m_set[1,159] = 'T'
                                        mcod_merc := VAL(SUBSTR(mcod_bc,2,6))
                                ELSE
                                        mcod_merc := VAL(SUBSTR(mcod_bc,2,5))
                                ENDIF
                                SELE('merc');ORDSETFOCUS(1)
                                IF ! merc->(DBSEEK(mcod_merc))
                                        atencao('Codigo da mercadoria nao cadastrado')
                                        LOOP
                                ENDIF
                        ELSEIF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                IF LEN(RTRIM(mcod_bc)) = 12
                                        mcod_bc := '0'+mcod_bc
                                ENDIF
                                SELE('merc');ORDSETFOCUS(6)
                                IF ! merc->(DBSEEK(mcod_bc))
                                        atencao('Codigo de Barra nao cadastrado')
                                        LOOP
                                ENDIF
                                mcod_merc := VAL(mcod_bc)
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                cons_merc := {}
                                SELE('merc');ORDSETFOCUS(1)
                                IF ! merc->(DBSEEK(mcod_merc))
                                        atencao('Codigo da mercadoria nao cadastrado')
                                        LOOP
                                ENDIF
                        ENDIF
                ELSEIF EMPTY(mmerc)
                        mcod_merc := f4_merc1()
                        SELE('merc');ORDSETFOCUS(1)
                        IF ! merc->(DBSEEK(mcod_merc))
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mmerc := merc->merc
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF

                ENDIF
                IF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
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
                mcod_merc := VAL(merc->cod_merc)
                setcor(3)
                @ 28,14 SAY mcod_merc
                @ 29,14 SAY merc->merc
                @ 33,14 SAY merc->saldo_mer PICT '9,999,999.99'
                @ 34,14 SAY merc->saldo_fis PICT '9,999,999.99'
                setcor(1)
                
                IF merc->promocao > 0
                        mvlr_fat = iat(merc->pr_venda,m_set[1,103]) - iat((merc->pr_venda * (merc->promocao / 100)),m_set[1,103])
                        mp_venda = mvlr_fat
                ELSE
                        IF mvarejo = 2
                                mvlr_fat = iat(merc->pr_venda*((merc->varejo/100)+1),m_set[1,103])
                                mp_venda = iat(merc->pr_venda*((merc->varejo/100)+1),m_set[1,103])
                        ELSE
                                mvlr_fat = iat(merc->pr_venda,m_set[1,103])
                                mp_venda = iat(merc->pr_venda,m_set[1,103])
                        ENDIF
                ENDIF
                WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                botao(00,01,10,119)
                IF merc->promocao > 0
                        setcor(6)
                        DEVPOS(00,20);DEVOUT('(Promocao)')
                ENDIF
                DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                WVW_DrawLabel(,01,02,merc->cod_merc+' - '+SUBSTR(merc->merc,1,30),,,,, 'arial black',60,20,,,,,)
                WVW_DrawLabel(,06,02,'             '+SUBSTR(merc->merc,31),,,,, 'arial black',60,20,,,,,)
                WVW_DrawLabel(,06,02,IF(! EMPTY(merc->promocao),'P:'+TRANSFORM(merc->promocao,'99')+' %',''),,,245,, 'arial black',60,20,,,,,)
                IF m_set[1,125] = 'S' .AND. cons_merc[1,23] = 0
                        mperc := 0
                        @ 36,46 GET mperc PICT '999.99'
                        READ
                        limpa(32,46,32,52)
                        IF (mperc > merc->desc_merc .AND. ! EMPTY(merc->desc_merc));
                           .OR. (mperc > m_set[1,33] .AND. EMPTY(merc->desc_merc))
                                atencao(TRANSFORM(mperc,"999.99")+"% Desconto nao e permitido")
                                setcor(1)
                                mquantd := 1
                                LOOP
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
                IF merc->disp = 'N'
                        atencao('MERCADORIA NAO DISPONIVEL PARA VENDA',3)
                        LOOP
                ENDIF
                mmerc := merc->merc
                IF merc->livre_desc = "S"
                        @ 21,14 GET mmerc PICT '@!'
                        READ
                ENDIF
                IF LASTKEY() = 27;LOOP;ENDIF
                IF SUBSTR(m_set[1,9],1,1) = 'P' .AND. merc->unidade <> 'PL' .OR. merc->local = 'SERI'
                        mobs_prod := SPACE(40)
                        op_tela(22,10,24,51,' O B E R V A C A O   D O   P R O D U T O')
                        WVW_DrawBoxGet(,01,01,LEN(mobs_prod))
                        @ 01,01 GET mobs_prod VALID IF(EMPTY(mobs_prod) .AND. merc->unidade='PL',.F.,.T.)
                        READ
                        wvw_lclosewindow()
                ENDIF
                mensagem("<F8> para consultar aplicacao do produto")
                IF SUBSTR(mcod_bc,1,1) = '2' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                        IF m_set[1,159] = 'T'
                                mquantd := (VAL(SUBSTR(mcod_bc,8,5))/1000)
                        ELSE
                                mquantd := (VAL(SUBSTR(mcod_bc,8,5))/100) / mvlr_fat
                        ENDIF
                        DEVPOS(lba-3,53);DEVOUTPICT(mquantd,ALLTRIM(m_set[1,99]))
                        DEVPOS(lba-3,65);DEVOUTPICT(mvlr_fat,ALLTRIM(m_set[1,98]))
                        mcomissao := merc->comissao
                        setcor(1)
                ELSE
                        setcor(1)
                        mensagem("<F8> para consultar aplicacao do produto")
                        @ 30,14 GET mquantd PICT ALLTRIM(m_set[1,99]) WHEN m_indiv[1,26] <> "T" VALID IF(EMPTY(mquantd),.F.,.T.)
                        READ
                        IF LASTKEY() = 27;LOOP;ENDIF

                        IF merc->sld_neg = 'S' .AND. mquantd > merc->saldo_mer
                                atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                                LOOP
                        ENDIF
                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                                atencao('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99')))
                                LOOP
                        ENDIF

                        mensagem("Digite o valor do produto - <ESC>Sair")
                        @ 31,14 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF((merc->saldo_fis>0 .AND. mvlr_fat < mp_venda) .OR. mvlr_fat = 0,.F.,.T.) WHEN m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T' .OR. mvlr_fat = 0
                        //@ lba-3,65 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF((merc->saldo_fis>0 .AND. mvlr_fat < mp_venda) .OR. mvlr_fat = 0,.F.,.T.) WHEN m_set[1,38] <> "P" .AND. m_indiv[1,26] <> "S" .AND. m_indiv[1,26] <> "T"
                        READ
                        IF LASTKEY() = 27
                                UNLOCK
                                LOOP
                        ENDIF
                        IF ! EMPTY(m_set[1,154]) .AND. mvlr_fat > m_set[1,154]
                                atencao('Valor do Produto Solicitada: '+ALLTRIM(TRANSFORM(mvlr_fat,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,154],'999,999.99')))
                                LOOP
                        ENDIF
                        IF mvlr_fat > 0
                        ENDIF
                        mcomissao := merc->comissao
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
                                IF ((mp_venda - mvlr_fat)/mp_venda)*100 > m_set[1,33] .AND. EMPTY(merc->desc_merc) .AND. EMPTY(mperc)
                                        atencao(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido.. senha autorizacao:")
                                        LOOP
                                ELSEIF ((mp_venda - mvlr_fat)/mp_venda)*100 > merc->desc_merc .AND. ! EMPTY(merc->desc_merc) .AND. EMPTY(mperc)
                                        atencao(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido..")
                                        mquantd := 1
                                        LOOP
                                ELSEIF m_set[1,38] = "C" .AND. mvlr_fat < merc->cust_real
                                        atencao("Desconto nao permitido")
                                        LOOP
                                ELSEIF m_set[1,38] = "V" .AND. mvlr_fat < mp_venda
                                        atencao("Desconto nao permitido")
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
                IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                        atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                        LOOP
                ENDIF
                setcor(1)
                mcod_fab := merc->cod_fab
                mfabrica := merc->fabrica
                mtot_ped = 0
                mtot_ped = mvlr_fat * mquantd
                setcor(3)
                @ 32,14 SAY mtot_ped PICT ALLTRIM(m_set[1,98])
                setcor(1)
                //mcomissao := merc->comissao
                opcao := 'S'
                IF m_indiv[1,26] <> 'T'
                        opcao := op_simnao('S','Confirma Inclusao da Mercadoria:')
                ELSE
                        opcao := 'S'
                ENDIF
                IF opcao = "S"
		        IF LEN(m_merc) = 0
                                abrir_cupom()                                                                                                                                                                                                                                                                                                                                                
                                mdocumento := NUM_CUPOM()
                                mnum_ecf   := NUM_CAIXA()
                                mnum_ccf   := NUM_CCF()
                                mnum_item  := 0
                                maliq_prod := ''
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
                                //IF m_cfg[89] = '%'
                                //        mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                //ELSE
                                        mdesconto := mquantd*mp_venda - mquantd*mvlr_fat
                                //ENDIF
                        ENDIF
                                mver_isento := vercst(merc->sittrib)
                                IF mver_isento = 'I'
                                        mvlr_aliq := 'II'
                                ELSEIF mver_isento = 'N'
                                        mvlr_aliq := 'NN'
                                ELSEIF mver_isento = 'F'
                                        mvlr_aliq := 'FF'
                                ELSEIF mver_bebida > 0
                                        mvlr_aliq := 'T'+SUBSTR(IBR_ACHA_ALIQ(merc->bebida),2,1)
                                ELSE
                                        mvlr_aliq := 'T'+SUBSTR(IBR_ACHA_ALIQ(17),2,1)
                                ENDIF
                                IF ! vende_prod(STRZERO(VAL(merc->cod_merc),13),merc->merc+'  '+ALLTRIM(mobs_prod),mvlr_aliq,'F',mquantd,3,mpreco,'$',mdesconto,merc->unidade)
                                        LOOP
                                ENDIF

                                //IBR_ITEM(STRZERO(VAL(merc->cod_merc),13),merc->merc+'  '+ALLTRIM(mobs_prod),mvlr_aliq,TRANSFORM(mquantd,"999999.99"),TRANSFORM(mpreco,"9999999.999"),TRANSFORM(mdesconto,"999.99"),merc->unidade)
                        AADD(m_merc,merc->merc)
                        AADD(m_codigo,mcod_merc)
                        AADD(m_Cbarra,merc->cod_barr)
                        cont_itens ++
                        IF mvlr_fat = 0
                        *                         1       2        3           4          5        6            7         8           9            10             11              12            13           14           15          16          17              18           19   20        21         22         23           24      25        26             27           28        29        30        31       32       33         34            35           36         37       38          39
                        *                             40        41 42 43    44
                                AADD(m_matriz,{mquantd,mvlr_fat,        0,merc->gru_sub,mmerc,merc->unidade,merc->peso,       0,              0,merc->cod_fab,merc->fabrica,merc->alimento,merc->isento,merc->saldo_fis,mcomissao,merc->bebida,merc->peso_liq,merc->cust_merc,mobs1,mobs2,merc->local,merc->ipi,merc->especie,menvelope,mhoras,merc->ind_icms,merc->sit_trib,SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),merc->prazo,merc->gramatura,mobs_prod,SPACE(3),SPACE(3),merc->com_mont,;
                                               merc->pr_venda1,'  ',0,0,cont_itens})
                        ELSE
                                AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,merc->gru_sub,mmerc,merc->unidade,merc->peso,mp_venda,merc->cust_real,merc->cod_fab,merc->fabrica,merc->alimento,merc->isento,merc->saldo_fis,mcomissao,merc->bebida,merc->peso_liq,merc->cust_merc,mobs1,mobs2,merc->local,merc->ipi,merc->especie,menvelope,mhoras,merc->ind_icms,merc->sit_trib,SPACE(20),SPACE(54),SPACE(54),SPACE(54),SPACE(54),SPACE(54),merc->prazo,merc->gramatura,mobs_prod,SPACE(3),SPACE(3),merc->com_mont,;
                                               merc->pr_venda1,'  ',0,0,cont_itens})
                        ENDIF
                        mdesconto := 0
                        mcont_item ++

                        mensagem('ATUALIZANDO ARQUIVO DE SACMOVNT')
                        SELE('movnt')
                        ADIREG()
                        movnt->empresa         := mcodempresa
                        movnt->documento       := 'CP'+mdocumento
                        movnt->num_ecf         := mnum_ecf
                        movnt->gru_sub         := merc->gru_sub
                        movnt->codigo          := mcod_merc
                        movnt->produto         := mmerc
                        movnt->cod_fab         := merc->cod_fab
                        movnt->fabrica         := SUBSTR(merc->fabrica,1,30)
                        movnt->unidade         := merc->unidade
                        movnt->data_s_e        := mdata_sis    
                        movnt->ent_sai         := "S"          
                        movnt->quantd          := mquantd      
                        movnt->pr_venda        := mvlr_fat     
                        movnt->vl_vend         := mvlr_fat     
                        movnt->cod_vend        := cod_operado  
                        movnt->vl_fatura       := mvlr_fat     
                        movnt->pr_unit         := merc->pr_unit
                        movnt->cod_nota        := "B"          
                        movnt->isento          := merc->isento 
                        movnt->alimento        := merc->alimento
                        movnt->bebida          := merc->bebida  
                        movnt->icm             := IF(merc->sit_trib = "T",17,0)
                        movnt->tipo            := "01"
                        DBCOMMIT()

                        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                                m_MFAdicional+; //2
                                m_ModeloImp+; //3
                                STRZERO(VAL(m_numerocaixa),2)+; //4
                                mdocumento+SPACE(6-LEN(mdocumento))+; //5
                                SUBSTR(mnum_ccf,1,6)+; //6
                                STRZERO(mnum_item,3)+; //7
                                STRZERO(mcod_merc,10)+SPACE(14-LEN(STRZERO(mcod_merc,10)))+; //8
                                mmerc+SPACE(100-LEN(mmerc))+; //9
                                STRZERO(mquantd*1000,7)+; //10
                                merc->unidade+; //11
                                STRZERO(merc->pr_venda*100,8)+; //12
                                STRZERO(IF(merc->pr_venda > mvlr_fat,(merc->pr_venda - mvlr_fat)*100,0),8)+; //13
                                STRZERO(IF(merc->pr_venda < mvlr_fat,(mvlr_fat - merc->pr_venda)*100,0),8)+; //14
                                STRZERO(mvlr_fat*100,14)+; //15
                                maliq_prod+SPACE(7-LEN(maliq_prod))+; //16
                                'N'+; //17
                                STRZERO(0,7)+; //18
                                STRZERO(0,13)+; //19
                                STRZERO(0,13)+; //20
                                merc->iat+; //21
                                merc->ippt+; //22
                                '3'+; //23
                                '2' //24
                                mensagem('Atualizando arquivo R5')
                                *********
                                SELE('ir5')
                                ADIREG()
                                **********
                                ir5->NUMERO_FAB := m_numeroSerie  //1
                                ir5->MF_ADICION := m_MFAdicional  //2
                                ir5->MODELO_ECF := m_ModeloImp  //3
                                ir5->NUMERO_USU := STRZERO(VAL(m_numerocaixa),2)  //4
                                ir5->COO        := mdocumento  //5
                                ir5->CCF_CVC_CB := mnum_ccf  //6
                                ir5->NUM_ITEM   := STRZERO(mnum_item,3)  //7
                                ir5->COD_PROD   := STRZERO(mcod_merc,10)  //8
                                ir5->DESCRICAO  := mmerc  //9
                                ir5->QUANTIDADE := STRZERO(mquantd*1000,7)  //10
                                ir5->UNIDADE    := merc->unidade  //11
                                ir5->VLR_UNIT   := STRZERO(merc->pr_venda*100,8)  //12
                                ir5->DESCON_ITE := STRZERO(IF(merc->pr_venda > mvlr_fat,(merc->pr_venda - mvlr_fat)*100,0),8)  //13
                                ir5->ACRESC_ITE := STRZERO(IF(merc->pr_venda < mvlr_fat,(mvlr_fat - merc->pr_venda)*100,0),8)  //14
                                ir5->VLR_LIQ    := STRZERO(mvlr_fat*100,14)  //15
                                ir5->TOTAL_PARC := maliq_prod  //16
                                ir5->IND_CANCEL := 'N'  //17
                                ir5->QUANT_CANC := STRZERO(0,7)  //18
                                ir5->VLR_CANCEL := STRZERO(0,13)  //19
                                ir5->CANCEL_ACR := STRZERO(0,13)  //20
                                ir5->IAT        := merc->iat  //21
                                ir5->IPPT       := merc->ippt  //22
                                ir5->CASASDECQT := '3'  //23
                                ir5->CASASDECUN := '2'  //24
                                ir5->DATA_MOV   := mdata_sis  //25
                                ir5->CHV_CRIPT  := criptografia(mlinha,'C')   //26
                        DBCOMMITALL()
                        atu_gt()
                        **********
                        SELE("merc");ORDSETFOCUS(1)
                        **********
                        EXIT
                ENDIF
        ENDDO
ENDDO
RETURN NIL
***************************  F I M  **********************************
//#include "EasyTEF.ch"
*********************
* RECEBIMENTO DE TP"s
*********************
FUNCTION fecha_off
******************
LOCAL MPRG:="FECHA_ECF",;
      opcao,mtela2,mtela1,lci,lba,cba,i,msele,morde,point,;
      mopcao,mtela,pode,f,mtraco,mtipo_comp,mtipo_pag,mbox,mtot_verif,;
      mtot_icmf,mperc_comissao,;
      li,ci,lb,cb,mdiferenca,mtroco:=0,;
      m_recebe:={},mdinheiro,mn_banco,mn_cheque,mn_dup,mn_trans,mvencimento,mt_pag,;
      mvalor,mn_fin,mtot_ipi,mbox_rece,magencia,mc_c,mcorrente,;
      mcartao_sn:=" ",;
      iconta,sarq,sretorno,sdadostef,itamarq,sdados,mcampo009:="0",mcampo030:="0",;
      mcampo028:="0",opcao_TEF,varq:="",aret:={},mvlr_cred:=0,mcredito_aux:=0,achou:=0,;
      m_credito:={}
MEMVAR mtot_nota,m_codigo,m_merc,m_matriz,mdocumento,mnum_ecf,mcod_bc,mflag,mhoras

PRIVATE mlin,mcartao,mprazo_cart,mdesc_cart,mcobra_fin,mtaxa_fin,;
        m_desc:={},mdesconto,tela,mreceb,mcom_ven,mcom_ap,mbanco,;
        mcliente,mnome_vend,mperc,mcgc,mcpf,;
        minsc,mcond_vezes,mcond_intev,mtp_vend,mtot_desc,msub_total,;
        mvl_vend:=0,mtot_icm:=0,mtipo_pg:=0,mvalor_aux,string_devolvida,mtot_rece:=0,;
        mn_cupom,mcli:=" ",mnome_arq:=' ',mvalor_cart:=0,mcod_cart,mdesc_cx:=0,mdesc_perc:=0,;
        mcredito:=0,mn_cred:=SPACE(8),nTotalAPagar:=0,mind_cartao:='',mflag_f:=' ',m_flag_f:=' '
PUBLIC EasyTEF

CLEAR GETS

mreceb := "R"
lci = 04
lba = 23
cba = 90
tela = SAVESCREEN(00,00,24,90)
*----------------------------------------------------
IF ! AbriArq("saccli","cli");RETURN NIL;ENDIF
IF ! AbriArq("sacdupr","dupr");RETURN NIL;ENDIF
IF ! AbriArq("sacmov","mov");RETURN NIL;ENDIF
IF ! AbriArq("saccaixa","caix");RETURN NIL;ENDIF
IF ! AbriArq("saccarta","car");RETURN NIL;ENDIF
*---------------------------------------------
ver_ven(cod_operado)
atencao(" Operador:"+cod_operado+"-"+RTRIM(sen->snome))
mtot_nota := sub_total()        //IBR_SUBTOTAL()
op_tela(00,05,25,95," RECEBIMENTOS    -    TEF: "+m_indiv[1,41])
WHILE .T.
        ASIZE(m_desc,0)
        SET INTEN ON
        mensagem("Preencha os Campos - <ESC> p/Retornar ")
        mcom_ven := mcom_ap := mdesconto := mperc := mcod_cli := mvl_vend :=;
        mperc_comissao := mprazo_cart := mdesc_cart := mtot_icm :=;
        mdinheiro := mcod_cart := mvalor := mtot_desc := mtot_verif := ;
        mtot_ipi := mdiferenca := i := f := mtot_verif := mtot_rece := mvlr_cred := 0
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
        mt_pag := m_flag_f := SPACE(1)
        mn_cupom := mn_cred:=SPACE(8)        
        i := 1

        mbox := SAVESCREEN(01,00,24,79)
        ASIZE(m_recebe,0)
        li := ci := 00
        lb := 22
        cb := 90
        DEVPOS(li+1,ci+1);DEVOUT("Cod.Vendedor:")
        DEVPOS(li+2,ci+1);DEVOUT("Cod.Cliente:")
        DEVPOS(li+3,ci+1);DEVOUT("C.P.F......:")
        DEVPOS(li+3,ci+31);DEVOUT("C.G.C.:")
        @ li+4,ci TO li+4,cb
        DEVPOS(li+8,ci+1);DEVOUT("Total da COMPRA.....R$:")
        @ li+9,ci TO li+9,cb
        DEVPOS(li+10,ci+1);DEVOUT("Total RECEBIDO......R$:")
        DEVPOS(li+10,ci+40);DEVOUT("a RECEBER R$:")
        @ li+11,ci TO li+11,cb
        @ li+15,ci TO li+15,cb
        janela(li+15,cb," Formas de Pagamentos ","*")

        IF LASTKEY() = 27
                UNLOCK
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cli := m_set[1,84]
        ***************
        SELE("cli");ORDSETFOCUS(1)
        GO TOP
        ***************
        mcod_vend := VAL(mcod_vend)
        @ li+1,ci+15 GET mcod_vend PICT "999" VALID IF(EMPTY(mcod_vend),.F.,ven(@mcod_vend,li+1,ci+20))
        @ li+2,ci+14 GET mcod_cli PICT "99999" VALID ver_cli(mcod_cli,li+2,ci+21)
        @ li+3,ci+14 GET mcpf PICT "@@R 999.999.999-99" VALID IF(mcpf = SPACE(11),.T.,ver_cpf(mcpf)) WHEN mcod_cli = 0
        @ li+3,ci+38 GET mcgc PICT "@@R 99.999.999/9999-99" VALID IF(mcgc = SPACE(14),.T.,ver_cgc(mcgc)) WHEN mcod_cli = 0 .AND. mcpf = SPACE(11)
        READ
        IF INKEY() = 27
                DBUNLOCKALL()
                LOOP
        ENDIF
        ver_cli(mcod_cli,li+2,ci+21)
        mcpf := cli->cpf
        mcgc := cli->cgc
        minsc := cli->insc
        mcli := "<< Cliente:"+mcod_cli+"-"+ALLTRIM(mcliente)+" >> "
        setcor(3)
        DEVPOS(li+2,ci+14);DEVOUT(mcod_cli+" - ")
        DEVPOS(li+2,ci+21);DEVOUT(mcliente)
        DEVPOS(li+3,ci+14);DEVOUTPICT(mcpf,"@@R 999.999.999-99")
        DEVPOS(li+3,ci+38);DEVOUTPICT(mcgc,"@@R 99.999.999/9999-99")
        SUB_BANNER(li+5,ci+26,TRANSFORM(mtot_nota,"999,999.99"))
        //SUB_BANNER(li+5,ci+30,TRANSFORM(mtot_nota,"999,999.99"))
        setcor(1)
        mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
        mcredito := 0
        IF EMPTY(cli->cpf) .AND. EMPTY(cli->cgc)
                @ li+2,ci+21 GET mcliente PICT "@!"
                @ li+3,ci+14 GET mcpf PICT "@@R 999.999.999-99" VALID IF(mcpf = SPACE(11),.T.,pesq_cpf(mcpf,'cli',))        //VALID ver_cpf(cons_cli[1,34])
                @ li+3,ci+38 GET mcgc PICT "@@R 99.999.999/9999-99" VALID IF(mcgc = SPACE(14),.T.,pesq_cgc(mcgc,'cli',,'cli')) WHEN EMPTY(cons_cli[1,34])  //VALID ver_cgc(cons_cli[1,32])
                READ
                IF LASTKEY() = 27
                        DBUNLOCKALL()
                        LOOP
                ENDIF
        ENDIF

        WHILE .T.
                SUB_BANNER(li+5,ci+26,TRANSFORM(mtot_nota,"999,999.99"))
                mensagem("Escolha a opcao que deseja fazer o Recebimento  -  <ESC> Retorna" )
                mtroco := mdinheiro := mcod_cart := mvalor := 0
                mn_banco := SPACE(3)
                mn_cheque := SPACE(6)
                mn_dup := mn_trans := mn_fin := magencia := SPACE(8)
                mc_c := SPACE(13)
                mvencimento := CTOD("  /  /  ")
                mt_pag := "C"
                mn_cupom := SPACE(10)
                mopcao := mflag_f := SPACE(1)
                mcorrente := SPACE(35)
                botao(li+12,ci+1,li+14,ci+12)
                botao(li+12,ci+13,li+14,ci+22)
                botao(li+12,ci+23,li+14,ci+35)
                botao(li+12,ci+36,li+14,ci+52)
                botao(li+12,ci+53,li+14,ci+62)
                botao(li+12,ci+63,li+14,ci+75)
                setcor(1)
                @ li+13,ci+ 2 PROMPT "1-Dinheiro"
                @ li+13,ci+14 PROMPT "2-Cheque"
                @ li+13,ci+24 PROMPT "3-Duplicata"
                @ li+13,ci+37 PROMPT "4-Financiamento"
                @ li+13,ci+54 PROMPT "5-Cartao"
                @ li+13,ci+64 PROMPT " 7-Credito "
                SET INTEN ON
                MENU TO mtipo_pg

                IF LASTKEY() = 27
                        RESTSCREEN(01,00,24,79,mbox)
                        EXIT
                ENDIF
                setcor(1)
                IF mtipo_pg = 1
                        mbox_rece := SAVESCREEN(00,00,24,79)
                        botao(li+16,ci+1,li+18,ci+40)
                        DEVPOS(li+17,ci+2);DEVOUT("Dinheiro............R$:")
                        @ li+17,ci+25 GET mdinheiro PICT "999,999,999.99"
                        READ
                        RESTSCREEN(00,00,24,79,mbox_rece)
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ELSEIF mtipo_pg = 2
                        IF EMPTY(mcod_cli)
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        mbox_rece := SAVESCREEN(00,00,24,79)
                        botao(li+15,ci+15,li+23,ci+75)
                        setcor(1)
                        DEVPOS(li+16,ci+16);DEVOUT("No.Banco...:")
                        DEVPOS(li+17,ci+16);DEVOUT("Agencia....:")
                        DEVPOS(li+18,ci+16);DEVOUT("C/C........:")
                        DEVPOS(li+19,ci+16);DEVOUT("No.Cheque..:")
                        DEVPOS(li+20,ci+16);DEVOUT("Vencimento.:")
                        DEVPOS(li+21,ci+16);DEVOUT("Valor......:")
                        DEVPOS(li+22,ci+16);DEVOUT("Correntista:")
                        @ li+16,ci+29 GET mn_banco PICT "9999" WHEN EMPTY(mdinheiro)
                        @ li+17,ci+29 GET magencia PICT "@!"
                        @ li+18,ci+29 GET mc_c PICT "@!" 
                        @ li+19,ci+29 GET mn_cheque PICT "99999999" VALID IF(! EMPTY(mn_banco) .AND. EMPTY(mn_cheque),.F.,.T.) WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ li+20,ci+29 GET mvencimento WHEN ! EMPTY(mn_banco) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ li+21,ci+29 GET mvalor PICT "9,999,999.99" WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ li+22,ci+29 GET mcorrente PICT "@!"
                        READ
                        RESTSCREEN(00,00,24,79,mbox_rece)
                        IF LASTKEY() = 27 .OR. EMPTY(mn_banco)
                               LOOP
                        ENDIF
                        IF mvencimento > mdata_sis
                                mtipo_comp = "AP"
                        ENDIF
               ELSEIF mtipo_pg = 3
                        atencao('Sistema em OFF LINE ...')
                        LOOP
                ELSEIF mtipo_pg = 4
                        atencao('Sistema em OFF LINE ...')
                        LOOP
               ELSEIF mtipo_pg = 5
                        mbox_rece := SAVESCREEN(00,00,24,79)
                        mvalor := mtot_nota - mtot_verif
                        mn_cupom := mdocumento
                        botao(li+16,ci+40,li+21,ci+79)
                        DEVPOS(li+17,ci+41);DEVOUT("Cod.Cartao:")
                        DEVPOS(li+18,ci+41);DEVOUT("No.Cupom..:")
                        DEVPOS(li+19,ci+41);DEVOUT("Vencimento:")
                        DEVPOS(li+20,ci+41);DEVOUT("Valor R$..:")
                        @ li+17,ci+53 GET mcod_cart PICT "999" VALID IF(EMPTY(mcod_cart),.F.,ver_cartao(mcod_cart,li+17,ci+57))
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                RESTSCREEN(00,00,24,79,mbox_rece)
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(li+17,ci+53);DEVOUT(STRZERO(mcod_cart,3))
                        setcor(1)
                        ver_cartao(mcod_cart,li+17,ci+57)
                        mvencimento := mdata_sis + car->prazo
                        @ li+18,ci+53 GET mn_cupom PICT "@!" WHEN car->tef <> 'S' VALID IF(EMPTY(mn_cupom),.F.,.T.)
                        @ li+19,ci+53 GET mvencimento WHEN  car->tef <> 'S' VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ li+20,ci+53 GET mvalor PICT "999,999.99" WHEN EMPTY(mdinheiro)
                        READ
                        RESTSCREEN(00,00,24,79,mbox_rece)
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                LOOP
                        ENDIF
                        IF car->tef = 'S'
                                //IBR_INI_FECHA(mdesconto)
                                mgerenciador := ALLTRIM(car->cartao)
                                 //ATENCAO(mgerenciador)
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
                                IF car->tipo_venda = 'A' .OR. car->prazo = 0
                                        mtipo_comp = 'AV'
                                ELSE
                                        mtipo_comp = 'AP'
                                ENDIF
                        ENDIF
                ELSEIF mtipo_pg = 6
                        atencao('Sistema em OFF LINE ...')
                        LOOP
                ELSE
                        LOOP
                ENDIF
                IF EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup) .AND. EMPTY(mn_fin) .AND.;
                   EMPTY(mcod_cart) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred) .AND. mvalor+mdinheiro > 0
                        RESTSCREEN(00,00,24,79,mbox_rece)
                        LOOP
                ENDIF
                IF (! EMPTY(mn_banco) .OR. ! EMPTY(mn_dup) .OR. ! EMPTY(mn_fin) .OR. ! EMPTY(mcod_cart) .OR. ! EMPTY(mn_cred)) .AND. ! EMPTY(mn_trans) .AND. EMPTY(mcod_cli)
                        atencao("Este tipo de operacao exige cliente para que nao haja problemas futuros")
                        RESTSCREEN(00,00,24,79,mbox_rece)
                       LOOP
                ENDIF
                IF mflag_f = 'T'
                        mopcao := 'S'
                ELSE
                        mopcao := op_simnao("S","Confirma a Inclusao:")
                ENDIF               
                RESTSCREEN(00,00,24,79,mbox_rece)
                SUB_BANNER(li+5,ci+26,TRANSFORM(mtot_nota,"999,999.99"))

                IF mopcao = "N"
                        LOOP
                ENDIF
                IF mopcao = "S"
                        mtot_rece = mtot_rece + mvalor + mdinheiro
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
                                        AADD(m_recebe,{"DN","AV",mn_banco,mn_cheque,"99999999",mdata_sis,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                ELSE
                                        IF ! EMPTY(mn_banco)
                                                IF mvencimento > mdata_sis
*                                                                        1    2      3         4       5        6        7         8                  8       10     11       12    13      14
                                                        AADD(m_recebe,{"CH","AP",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ELSE
                                                        AADD(m_recebe,{"CH","AV",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_dup)
                                                 AADD(m_recebe,{"DU","AP",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                        ELSEIF ! EMPTY(mn_cupom)
*                                               mvencimento := mdata_sis + mprazo_cart
                                                IF mvencimento > mdata_sis
                                                        AADD(m_recebe,{"CT","AP",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ELSE
                                                                  //     1    2     3         4         5       6       7          8               9       10      11    12        13     14    15
                                                        AADD(m_recebe,{"CT","AV",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_fin)
                                                IF mvencimento > mdata_sis
                                                        AADD(m_recebe,{"FI","AP",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ELSE
                                                        AADD(m_recebe,{"FI","AV",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_trans)
                                                AADD(m_recebe,{"TR","AP",mn_banco,mn_cheque,mn_trans,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                        ELSEIF ! EMPTY(mn_cred)
                                                mcredito := mcredito - mvalor
                                                AADD(m_recebe,{'CR','AV',SPACE(3),SPACE(6) ,mn_cred,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',' '})
                                        ENDIF
                                ENDIF
                        ENDIF
                        mtot_verif := mtot_verif + mvalor       //+ mdinheiro
                        mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
                        setcor(3)
                        DEVPOS(li+10,ci+25);DEVOUTPICT(mtot_verif,"9,999,999.99")
                        DEVPOS(li+10,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,"9,999,999.99")
                        limpa(li+17,ci+1,lb-1,cb-1)
                        f := 1
                        i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                IF m_recebe[i,1] = "DN"
                                        DEVPOS(li+16+f,ci+1);DEVOUT("DINHEIRO.....: ")
                                ELSEIF m_recebe[i,1] = "CH"
                                        DEVPOS(li+16+f,ci+1);DEVOUT("CHEQUE.......: Bco.: "+m_recebe[i,3]+" No.: "+m_recebe[i,4]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "DU"
                                        DEVPOS(li+16+f,ci+1);DEVOUT("DUPLICATA....: No.: "+m_recebe[i,5]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "CT"
                                        DEVPOS(li+16+f,ci+1);DEVOUT("CARTAO.......: "+m_recebe[i,8]+"-"+LEFT(m_recebe[i,12],10)+" Cupom No.: "+m_recebe[i,9])
                                ELSEIF m_recebe[i,1] = "FI"
                                        DEVPOS(li+16+f,ci+1);DEVOUT("FINANCIAMENTO: "+m_recebe[i,11]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "TR"
                                        DEVPOS(li+16+f,ci+1);DEVOUT("TRANSFERENCIA: "+m_recebe[i,11]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "CR"
                                        DEVPOS(li+16+f,ci+1);DEVOUT("CREDITO......: ")
                                ENDIF
                                DEVPOS(li+16+f,ci+59);DEVOUT("Valor: "+TRANSFORM(m_recebe[i,10],"999,999.99"))
                                IF i > 4
                                        SCROLL(li+17,ci+1,lb-1,cb-1,1)
                                ELSE
                                        f++
                                ENDIF
                        NEXT
                        mdinheiro := 0
                        setcor(1)
                        IF mtot_verif >= mtot_nota
                                mopcao := op_simnao("S","Todas informacoes [OK], Confirma Dados Preenchido:")
                                IF mopcao = "N"
                                        ASIZE(m_recebe,0)
                                        mtot_verif := 0
                                        setcor(3)
                                        DEVPOS(li+10,ci+25);DEVOUTPICT(mtot_verif,"9,999,999.99")
                                        DEVPOS(li+10,ci+54);DEVOUTPICT(mtot_nota,"9,999,999.99")
                                        setcor(1)
                                        limpa(li+17,ci+1,lb-1,cb-1)
                                        LOOP
                                ENDIF
                                IF mopcao = "S"
                                        IF mtroco > 0
	                                        SUB_BANNER(20,01,'Troco:'+TRANSFORM(mtroco,'999,999.99'))
        	                                atencao('T R O C O   D E   R$: '+TRANSFORM(mtroco,'999,999.99'))
                                        ENDIF
                                        EXIT
                                ENDIF
                        ENDIF
                ENDIF
        ENDDO
        IF LASTKEY() = 27;LOOP;ENDIF
                mnome_arq := ' '
                mvalor_cart := 0
                mind_pg := '  '
                mtef := ' '
                i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF m_recebe[i,1] = 'DN'
                                IF mflag_f # 'T'
                                        IBR_INI_FECHA()
                                ENDIF
                                mind_cartao := forma_pag('DINHEIRO',m_recebe[i,10]+mtroco)
                        ELSEIF m_recebe[i,1] = 'CH'
                                IF mflag_f # 'T'
                                        IBR_INI_FECHA()
                                ENDIF
                                mind_cartao := forma_pag('CHEQUE',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'DU'
                                IF mflag_f # 'T'
                                        IBR_INI_FECHA()
                                ENDIF
                                mind_cartao := forma_pag('DUPLICATA',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'FI'
                                IF mflag_f # 'T'
                                        IBR_INI_FECHA()
                                ENDIF
                                mind_cartao := forma_pag('FINANCIAMENTO',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'CT'
                                IF mflag_f # 'T'
                                        IBR_INI_FECHA()
                                ENDIF
                                cons_forma := {}
                                sr_getconnection():exec("SELECT * FROM saccarta WHERE codigo = "+sr_cdbvalue(m_recebe[i,8]),,.t.,@cons_forma)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_forma) = 0
                                        LOOP
                                ENDIF
                                mind_cartao := forma_pag(ALLTRIM(cons_forma[1,2]),m_recebe[i,10])
                        ENDIF
                NEXT
                IF mtef = '*'
                        LOOP
                ENDIF
                mensagem('Imprimindo Mensagem rodape do cumpom fiscal.')
                mcpf_cnpj := IF(! EMPTY(mcpf),TRANSFORM(mcpf,'@@R 999.999.999-99'),IF(! EMPTY(mcgc),TRANSFORM(mcgc,'@@R 99.999.999/9999-99'),''))
                mnome_cli := cli->cod_cli+'-'+mclienteo
                mend_aux  := IF(! EMPTY(cli->endereco),ALLTRIM(cli->bairro)+'-'+ALLTRIM(cli->cidade)+' - '+ALLTRIM(cli->uf)+'-'+ALLTRIM(cli->cep),'')
                mend_cli  := IF(! EMPTY(cli->endereco),RTRIM(cli->endereco),'')
                mlinha1 := ALLTRIM(mmd5)
                mlinha2 := IF(muf_firm = 'MG','Minas Legal:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;
                                IF(muf_firm = 'RJ','Minas Legal:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;
                                IF(muf_firm = 'PB','PARAIBA LEGAL - RECEITA CIDADA'+m_qp+'TORPEDO PREMIADO:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+IF(! EMPTY(cli->cpf),cli->cpf,IF(! EMPTY(cli->cgc),cli->cgc,''))+m_qp,'')

                IBR_COMANDO('ECF.IdentificaPAF',{mlinha1, mlinha2},,,.T. )
                IBR_COMANDO('ECF.IdentificaConsumidor',{mcpf_cnpj, mnome_cli,mend_cli+' '+mend_aux},,,.T. )
                fim_fecha('HTI SISTEMAS 81-'+mfone_HTI+'   Aplic.:'+mpaf_HTI+' '+mpaf_ver+m_qp+;
                        ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3))

                IF m_flag_f = 'T'
                        PAC00TEF(NumeroCupom,mind_tef,mvalor)
                ENDIF
        IF mtroco > 0
                INKEY(3)
                RESTSCREEN(00,00,24,79,mbox_rece)
        ENDIF
        mensagem("Atualizando o Arquivo de CAIXA....")
        ************
        SELE('caix')
        ************
        i = 0
        FOR i = 1 TO LEN(m_recebe)
                IF EMPTY(m_recebe[i,1]);LOOP;ENDIF
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
                ENDIF
                ADIREG()
                caix-> empresa    :=   mcodempresa
                caix-> data       :=   mdata_sis
                caix-> tipo       :=   m_recebe[i,1]
                caix-> tipo_comp  :=   m_recebe[i,2]
                caix-> nota       :=   IF(EMPTY(mnum_ped),'CP'+mdocumento,'PD'+STRZERO(mnum_ped,6))
                caix-> cod_cli    :=   mcod_cli
                caix-> cod_vend   :=   STRZERO(mcod_vend,3)
                caix-> cod_opera  :=   cod_operado
                caix-> hora       :=   mhoras
                caix-> valor_com  :=   m_recebe[i,10]
                caix-> comissao   :=   mperc_comissao
                caix-> venci      :=   m_recebe[i,6]
                caix-> valor      :=   m_recebe[i,10]
                caix-> num_ban    :=   m_recebe[i,3]
                caix-> cod_ct     :=   m_recebe[i,8]
                caix-> c_s        :=   'C'
                caix-> num_dup    :=   mnum_dup
                caix-> documento  :=   mdup_num
                caix-> descri2    :=   IF(m_recebe[i,1] = 'CT',m_recebe[i,12],' ')
                caix-> num_cup    :=   mdocumento
        NEXT
        mensagem('Atualizando o DUPLICATAS....')
        c := i := 0
        SELE('dupr')
        FOR i = 1 TO LEN(m_recebe)
                IF EMPTY(m_recebe[i,1]);LOOP;ENDIF
                IF m_recebe[i,1] = 'DN'
                        mnum_dup := STRZERO(mnum_ped,6)
                ELSEIF m_recebe[i,1] = 'CH'
                        mnum_dup := m_recebe[i,4]
                ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR'
                        mnum_dup := m_recebe[i,5]
                ELSEIF m_recebe[i,1] = 'FI'
                        mnum_dup := m_recebe[i,11]
                ELSEIF m_recebe[i,1] = 'CT'
                        mnum_dup := m_recebe[i,9]
                ENDIF
                ADIREG()
                dupr->empresa         := mcodempresa         
                dupr->emissao         := mdata_sis           
                dupr->tipo            := m_recebe[i,1]       
                dupr->tip_cli         := cli->tipo
                dupr->fornec          := mcod_cli 
                dupr->cliente         := mcliente            
                dupr->venc            := m_recebe[i,6]       
                dupr->venc1           := m_recebe[i,6]       
                dupr->comissao        := mperc_comissao      
                dupr->comissao1       := 0                   
                dupr->operador        := cod_operado         
                dupr->vendedor        := STRZERO(mcod_vend,3)
                dupr->num_ped         := STRZERO(mnum_ped,6) 
                dupr->ope_venda       := STRZERO(mcod_oper,3)
                dupr->mov_cx          := 'C'
                dupr->c_cpfcnpj       := IF(! EMPTY(cli->cgc),cli->cgc,cli->cpf)
                dupr->numero          := IF(m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT',m_recebe[i,8],m_recebe[i,3])
                dupr->duplicata       := mnum_dup
                dupr->valor_dup       := m_recebe[i,10]
                dupr->valor           := IF(m_recebe[i,1] = 'CT',m_recebe[i,10] - (m_recebe[i,10] * (m_recebe[i,16] / 100)),m_recebe[i,10])
                dupr->agencia         := m_recebe[i,13]
                dupr->c_c             := m_recebe[i,14]
                dupr->datpag          := IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),m_recebe[i,6],CTOD('  /  /  '))
                dupr->vlpago          := IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),m_recebe[i,10],0)
                dupr->pago            := IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),'B',' ')
                dupr->banco           := IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR','C',' ')
                dupr->corrente        := m_recebe[i,15]
        NEXT
        i := 0
        mensagem('Atualizando o MOVIMENTO....')
        SELE('mov')
        FOR i = 1 TO LEN(m_codigo)
                IF EMPTY(m_codigo[i]);LOOP;ENDIF
                ADIREG()
                mov-> empresa     := mcodempresa        
                mov-> num_ped     := STRZERO(mnum_ped,6)
                mov-> documento   := 'CP'+mdocumento    
                mov-> codigo      := m_codigo[i]        
                mov-> gru_sub     := m_matriz[i,4]      
                mov-> produto     := m_matriz[i,5]      
                mov-> especie     := m_matriz[i,23]     
                mov-> cod_fab     := m_matriz[i,10]     
                mov-> fabrica     := SUBSTR(m_matriz[i,11],1,30)
                mov-> emissao     := mdata_sis
                mov-> data_s_e    := mdata_sis
                mov-> ent_sai     := "S"      
                mov-> quantd      := m_matriz[i,1]
                mov-> pr_venda    := m_matriz[i,8]
                mov-> vl_vend     := m_matriz[i,2]
                mov-> cod_vend    := STRZERO(mcod_vend,3)
                mov-> cod_oper    := cod_operado
                mov-> cod_cli     := mcod_cli
                mov-> cliente     := SUBSTR(mcliente,1,30)
                mov-> vl_fatura   := m_matriz[i,2]
                mov-> tipo        := "02"         
                mov-> pr_unit     := m_matriz[i,9]
                mov-> cust_mer    := m_matriz[i,18]
                mov-> isento      := m_matriz[i,13]
                mov-> comissao    := IF(mtipo_comp = "AV",m_matriz[i,15] + mcom_ven,m_matriz[i,15] + mcom_ap)
                mov-> tp_venda    := mtipo_comp
                mov-> cond_vezes  := mcond_vezes
                mov-> cond_intev  := mcond_intev
        NEXT
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
                  IF(! EMPTY(mcgc),mcgc,mcpf)+SPACE(14-LEN(IF(! EMPTY(mcgc),mcgc,mcpf)))
                mensagem("Atualizando o Arquivo de R4....")
                ***********
                SELE('ir4')
                ADIREG()
                ***********
                ir4->NUMERO_FAB := m_numeroSerie  //1                                                                       //1
                ir4->MF_ADICION := m_MFAdicional  //2                                                                       //2
                ir4->MODELO_ECF := m_ModeloImp  //3                                                                         //3
                ir4->NUMERO_USU := STRZERO(VAL(m_numerocaixa),2)  //4                                                       //4
                ir4->CCF_CVC_CB := mnum_ccf  //5                                                                            //5
                ir4->COO        := mdocumento  //6                                                                          //6
                ir4->DATA_INI   := SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)  //7 //7
                ir4->SUB_TOTAL  := STRZERO(mtot_desc*100,14)  //8                                                           //8
                ir4->DESCONT    := STRZERO(IF(mtot_desc > mtot_nota,(mtot_desc - mtot_nota)*100,0),13)  //9                 //9
                ir4->IND_DESCON := 'V'  //10                                                                                //10
                ir4->ACRES_SUB  := STRZERO(IF(mtot_desc < mtot_nota,(mtot_nota - mtot_desc)*100,0),13)  //11                //11
                ir4->IND_ACRESC := 'V'  //12                                                                                //12
                ir4->VLR_LIQ    := STRZERO(mtot_nota*100,14)  //13                                                          //13
                ir4->IND_CANCEL := 'N'  //14                                                                                //14
                ir4->CANCEL_ACR := STRZERO(0,13)  //15                                                                      //15
                ir4->ORD_DESC_A := 'D'  //16                                                                                //16
                ir4->NOME_CLIEN := mcliente  //17                                                                           //17
                ir4->CNPJ_CPF   := IF(! EMPTY(mcgc),mcgc,mcpf)  //18                                                        //18
                ir4->DATA_MOV   := mdata_sis  //13                                                                          //19
                ir4->CHV_CRIPT  := criptografia(mlinha,'C')   //19                                                                  //19

                mensagem("Atualizando o Arquivo de R7....")
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
                        STRZERO(0,13) //11
                        ***********
                        SELE('ir7')
                        ADIREG()
                        ***********
                        ir7->NUMERO_FAB :=  m_numeroSerie  //1
                        ir7->MF_ADICION :=  m_MFAdicional  //2
                        ir7->MODELO_ECF :=  m_ModeloImp  //3
                        ir7->NUMERO_USU :=  STRZERO(VAL(m_numerocaixa),2)  //4
                        ir7->COO        :=  mdocumento  //5
                        ir7->CCF        :=  mnum_ccf  //6
                        ir7->GNF        :=  STRZERO(0,6)  //7
                        ir7->MEIO_PAG   :=  SPACE(15)  //8
                        ir7->VLR_PAGO   :=  STRZERO(0,13)  //9
                        ir7->IND_ESTORN :=  'N'  //10
                        ir7->VLR_ESTORN :=  STRZERO(0,13)  //11
                        ir7->DATA_MOV   :=  mdata_sis  //12
                        ir7->CHV_CRIPT  :=  criptografia(mlinha,'C')   //26

        SET CENTURY OFF
        DBCOMMITALL()
        mabrir_cp := mflag_f := " "
        ASIZE(m_codigo,0)
        ASIZE(m_merc,0)
        ASIZE(m_matriz,0)
        ASIZE(m_recebe,0)
        ASIZE(m_desc,0)
        mflag :=0
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
*********************** FIM ***************************
 