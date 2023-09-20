#include "wvwtools.ch"
#include "inkey.ch"              // constantes de codigos das teclas
#include "Fileio.ch"             // funcoes de leitura/gravacao de arquivo
#include "set.ch"                // constantes da funcao SETKEY()
#include "wingdi.ch"
#include "winuser.ch"
#include "common.ch"
#include "setcurs.ch"
#include "getexit.ch"
MEMVAR getlist
*******************
* SOLICITAR PEDIDO
*******************
FUNCTION sac23pd1(orc,venda,m_altpd)
************************************
MEMVAR cod_operado,nivel_acess,mdata_sis

LOCAL mp_venda,msele,morde,f,mvar,mtelap,mtot_ipi,telaobs,;
      mdocum,mchass:=SPACE(20),mdescri1:=SPACE(54),mreg,telapro,;
      mdescri2:=SPACE(54),mdescri3:=SPACE(54),mdescri4:=SPACE(54),mdescri5:=SPACE(54),;
      mquantd_aux:=0,v:=0,linhas,linha,lin,nPos,cComm,mitem:=0,mcampo_ped:=' ',c_ped:={},;
      mcod_tab,mcont,mpre:=' ',c_orcam,m_ped,m_pos,point:=0,cons_orcam := {},mdesc_prod:=0,;
      op_cartao := ' ',npesquisa,nbota

PRIVATE MPRG:='SAC23PD1',;
        m_matriz:={},m_codigo:={},m_Cbarra:={},m_alt:={},i,opcao,;
        mcod_merc:=0,mquantd:=1,mdesconto,mvlr_fat,mtot_ped,mmerc,mpr_venda,;
        ci:=0,lb:=0,cb:=0,mnome_ven:=' ',lci:=15,cci:=75,lba:=49,cba:=116,tela,mautoriz,mlibera,;
        mcod_bc,mcont_item:=0,mvarejo:=1,f4,;
        mprz:=0,mnum_ped:=0,menvelope := SPACE(10),mcod_cli:=0,mnome_cli,mponto:=0,mflag,ali,no,mcod_ven,;
        msubtotal,mtot_custo:=0,mcod_aux,mproducao,mcomissao:=0,mcust_real,mvendido:=0,;
        mobs_prod:=SPACE(40),mlib_spc:=' ',msit_tip:=' ',;
        mqtd_dias:=0,mqtd_prz:=0,mcond_veze:=SPACE(3),mpromocao,mperc:=0,mcom_oper:=0,;
        mtp_venda:='  ',mhoras,m_dia[15],m_vlr[15],;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mmontador:=0,mmontador1:=0,mtel_carro,mcodemp,;
        mmasc_qtd:=SPACE(10),mnum_os:=0,mobs1,mobs2,mobs3,mobs4,;
        mplaca,mcarro,mmodelo,mkm,mpt_os:=0,mcomi_tab:=0,mcod_cond:=0,mpacote:=0,;
        mpecas:=0,mlimite:=0,mcompras:=0,malterou:=' ',cons_tabpg := {},mcons_tabpg:=' ',;
        mtot_desc:=0,mloop:=0,mcod_pres:=0,merroped:=0,mdesc_aux:=0,mcgc,mcpf,minsc,;
        mdata_pedido,m_produto:={},mnum_orc:=0,mconvidado:='',mavaria:=1,aret:={},mdesc_esp:=0,;
        mdescri:=SPACE(30),mdesc1:=SPACE(20),cons_cli:={},mav_ap:='',mnum_app:='',mdata_app:=CTOD('  /  /  ')

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

//SETMODE(30,100)
//WVW_SetFont(,"lucida console",19,12,FW_HEAVY,PROOF_QUALITY )  // 800X600


mcod_cli:=m_set[1,84]
mplaca:= SPACE(10)
mcarro:=mmodelo:=mkm := SPACE(15)
mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := mobs7 := mobs8 := SPACE(40)
setcor(1)                    && cor para os SAY
op_tela(00,00,53,120,memp_resa+SPACE(50)+'EMISSAO DE PEDIDOS'+SPACE(40)+'Terminal: '+m_indiv[1,1]+'     Emissao: '+DTOC(mdata_sis),,1)

setcor(1)
limpa(00,00,53,120)
*/
/*
cam_dba:={'teste1','teste3','teste4','teste5'}
mposicao:={0,0,3,4}
//sr_getconnection():exec("SELECT * FROM sacmerc",,.t.,@cam_dba)
//aadd(mposicao,{0,0,3,4})
//mid_cb := WVW_CBCreate( , 10, 10,60, cam_dba,{||fecha_pd('1')} ,,, 0,mposicao )
mid_cb := WVW_CBCreate( , 10, 56,11, cam_dba,,5,,0,mposicao )
//WVW_cbcreate( 0,12,56,11,aTimes,,0,,xtm,)
WVW_CBAddString( , mid_cb, 'teste')
//IF mid_cb # 0
//        ATENCAO(STRZERO(mid_cb,5))
//ENDIF
//IF WVW_CBEnable( NIL, mid_cb, .T. )
//        ATENCAO('OK')
//ENDIF
atencao(WVW_CBGetCurText( , mid_cb))
//inkey(0)
*/
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
IF m_cfg[2] = 'L'
        mnum_app:='LOJA'
ENDIF        
WHILE .T.
        IF ! AbriArq('merc_det','deta');RETURN NIL;ENDIF
        IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
        IF ! AbriArq('sactabme','tabme');RETURN NIL;ENDIF
        mtipo_preco := mproducao := ' '
        msubtotal := mtot_ipi  := 0
        mnome_ven := SPACE(30)
        SET KEY 287 TO
        mautoriz := SPACE(3)
        mflag := mtot_custo := 0
        mcod_ven := SPACE(3)
        mav_ap := ''
        //IF ! AbriArq('sacemp','emp');RETURN NIL;ENDIF
        //IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
        WHILE .T.
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
                IF venda # NIL
                        mnum_ped := venda
                ENDIF
                m_matriz := {}
                m_codigo := {}
                m_Cbarra := {}
                m_alt    := {}
                IF m_indiv[1,26] = 'T'
                        mcod_cli := IF(EMPTY(m_set[1,84]),1,m_set[1,84])
                        mnome_cli := SPACE(40)
                        mcod_ven := cod_operado
                        mflag := 1
                        op_tela(00,01,31,110,' A B E R T U R A   D O   P E D I D O                      Informacoes para o PEDIDO ** 1 ** ',,1)
                        botao(0,0,7,120)
                        SUB_BANNER(00,02,'TERMINAL LIVRE')
                        IF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                                botao(08,21,18,73)
                        	WVW_DrawImage( ,08,21,18,73,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                        ENDIF
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
                                        DEVPOS(25,24);DEVOUT(STR(cons_cli[1,2],5))
                                        DEVPOS(25,30);DEVOUT(cons_cli[1,3])
                                        DEVPOS(26,24);DEVOUT(cons_cli[1,4])
                                        botao(27,24,30,97)
                                        WVW_DrawLabel(,27,24,cons_cli[1,48],,,240,, 'arial',15,10,,,,,)
                                        WVW_DrawLabel(,28,24,cons_cli[1,113],,,240,, 'arial',15,10,,,,,)
                                        WVW_DrawLabel(,29,24,cons_cli[1,114],,,240,, 'arial',15,10,,,,,)
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
                        EXIT
                ENDIF
                IF m_indiv[1,9] <> 'V' .AND. m_indiv[1,26] # 'P'
                        IF orc # NIL
                                cons_orcam := {}
                                sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(orc),,.t.,@cons_orcam)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_orcam) = 0
                                        atencao('Nao foi possivel encontrar este ORCAMENTO...')
                                ELSE
                                        mcod_cli := cons_orcam[1,23]
                                        mcod_ven := cons_orcam[1,32]
                                        mnum_app := cons_orcam[1,94]
                                        mdata_app:= cons_orcam[1,117]
                                        mcod_cond:= VAL(cons_orcam[1,42])
                                ENDIF
                        
                        ENDIF
                        op_tela(00,01,31,110,' A B E R T U R A   D O   P E D I D O                      Informacoes para o PEDIDO ** 1 ** ',,1)
                        /*
                        IF ver_serie() = '141237'
                                op_tela(10,10,12,50,'DATA DO PEDIDO')
                                DEVPOS(01,00);DEVOUT('Digite a Data do Pedido:')
                                @ 01,COL()+1 GET mdata_pedido VALID IF(EMPTY(mdata_pedido) .OR. mdata_pedido < mdata_sis .OR. mdata_pedido > mdata_sis + 1,.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                                opcao := op_simnao('S','Confirma a Data do Pedido:')
                                wvw_lclosewindow()
                                IF opcao = 'N'
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                        ENDIF
                        */
                        botao(0,0,4,120)
                        SUB_BANNER(00,04,'TERMINAL LIVRE')
                        DEVPOS(06,00);DEVOUT('Numero do Pedido.....:')
                        DEVPOS(07,00);DEVOUT('Numero da O.S........:')
                        DEVPOS(08,00);DEVOUT('Codigo do Cliente....:')
                        DEVPOS(09,00);DEVOUT('Nome Fantasia........:')
                        DEVPOS(10,00);DEVOUT('Observacao...........:')
                        @ 13,00 TO 13,120
                        DEVPOS(14,00);DEVOUT('Vendedor.............:')
                        //@ 14,00 TO 14,120
                        /*
                        IF m_set[1,37] = 'S'
                                DEVPOS(16,00);DEVOUT('Placa................:')
                                DEVPOS(17,00);DEVOUT('KM...................:')
                        ELSE
                                DEVPOS(16,00);DEVOUT('Serie................:')
                                DEVPOS(17,00);DEVOUT('Numero...............:')
                        ENDIF
                        DEVPOS(18,00);DEVOUT('Marca................:')
                        DEVPOS(19,00);DEVOUT('Modelo...............:')
                        */
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
                        DEVPOS(30,00);DEVOUT('Tipo de PEDIDO.......:')
                        IF m_set[1,80] = 'S'
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
                        @ 06,23 GET mnum_ped PICT '999999' VALID IF(m_altpd # NIL .AND. EMPTY(mnum_ped),.F.,.T.)
                        READ
                        IF ! EMPTY(mnum_ped)
                	       	c_orcam := {}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_orcam)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(c_orcam) = 0
	               	                atencao('Nao foi possivel encontrar este PEDIDO...')
        	                	wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                IF ! EMPTY(c_orcam[1,50])
                                        atencao('Este pedido ja foi PAGO ou CANCELADO em :'+DTOC(c_orcam[1,50]))
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                //wvw_lclosewindow()
                                mcond_veze := c_orcam[1,43]
                                mcod_cli := c_orcam[1,23]
        			cons_cli := {}
                                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(c_orcam[1,23]),,.t.,@cons_cli)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_cli) > 0
                                        mcod_aux  := cons_cli[1,106]
                	                mcod_ven := cons_cli[1,106]
                                	IF cons_cli[1,45] = 'A'
                                                mvarejo := 2
                                        ELSE
                                                mvarejo := 1
                                        ENDIF
                                        IF m_set[1,10] <> 'S'
                        	                mcod_ven := cod_operado
                                	ENDIF
                                        mcgc := cons_cli[1,32]
                	                minsc:= cons_cli[1,33]
                	                mcpf := cons_cli[1,34]
                                        DEVPOS(07,29);DEVOUT(cons_cli[1,3])
                                        DEVPOS(08,23);DEVOUT(cons_cli[1,4])
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
                                                AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],        0,aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],       0,         0,aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],c_orcam[i,53],aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],c_orcam[i,10],mhoras,aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
                                                               aret[1,47],'  ',c_orcam[i,15],c_orcam[i,16],'00000'})
                                        ELSE
                                                AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],c_orcam[i,39],aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],c_orcam[i,20],aret[1,45],aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,mhoras,aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
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
                                mobs5 := c_orcam[1,113]
                                mobs6 := c_orcam[1,114]
                                mobs7 := c_orcam[1,115]
                                mobs8 := c_orcam[1,116]
                                IF ! EMPTY(VAL(c_orcam[1,42]))
                                        mcons_tabpg:=' '
                                        cons_tabpg := {}
                                        sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(c_orcam[1,42]),,.t.,@cons_tabpg)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_tabpg) = 0
                                                atencao('Nao foi encontrado esta tabela de preco: '+c_orcam[1,42])
                                                LOOP
                                        ENDIF
                                        mcod_cond   := VAL(c_orcam[1,42])
                                        mcons_tabpg := cons_tabpg[1,6]
                                        mtipo_preco := cons_tabpg[1,24]
                                        mcomi_tab   := cons_tabpg[1,22]
                                        mcond_veze := cons_tabpg[1,6]
                                        mprz := cons_tabpg[1,7]
                                        mperc := cons_tabpg[1,5]
                                        setcor(3)
                                        DEVPOS(21,27);DEVOUT(cons_tabpg[1,4])
                                        DEVPOS(22,23);DEVOUTPICT(cons_tabpg[1,6],'@@R 9-99')
                                        DEVPOS(24,23);DEVOUT(TRANSFORM(mprz,'9999'))
                                        DEVPOS(25,23);DEVOUT(TRANSFORM(mperc,'999.99'))
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
                                        DEVPOS(23,23);DEVOUTPICT(m_dia[1],'999')
                                        DEVPOS(23,27);DEVOUTPICT(m_dia[2],'999')
                                        DEVPOS(23,31);DEVOUTPICT(m_dia[3],'999')
                                        DEVPOS(23,35);DEVOUTPICT(m_dia[4],'999')
                                        DEVPOS(23,39);DEVOUTPICT(m_dia[5],'999')
                                        DEVPOS(23,43);DEVOUTPICT(m_dia[6],'999')
                                        DEVPOS(23,47);DEVOUTPICT(m_dia[7],'999')
                                        DEVPOS(23,51);DEVOUTPICT(m_dia[8],'999')
                                        DEVPOS(23,55);DEVOUTPICT(m_dia[9],'999')
                                        DEVPOS(23,59);DEVOUTPICT(m_dia[10],'999')
                                        DEVPOS(23,63);DEVOUTPICT(m_dia[11],'999')
                                        DEVPOS(23,67);DEVOUTPICT(m_dia[12],'999')
                                        DEVPOS(23,71);DEVOUTPICT(m_dia[13],'999')
                                        DEVPOS(23,75);DEVOUTPICT(m_dia[14],'999')
                                        DEVPOS(23,79);DEVOUTPICT(m_dia[15],'999')
                                        IF m_dia[1] > cons_tabpg[1,7] .OR. m_dia[2] > cons_tabpg[1,8] .OR. m_dia[3] > cons_tabpg[1,9] .OR. m_dia[4] > cons_tabpg[1,10] .OR. m_dia[5] > cons_tabpg[1,11];
                                           .OR. m_dia[6] > cons_tabpg[1,12] .OR. m_dia[7] > cons_tabpg[1,13] .OR. m_dia[8] > cons_tabpg[1,14] .OR. m_dia[9] > cons_tabpg[1,15] .OR. m_dia[10] > cons_tabpg[1,16];
                                           .OR. m_dia[11] > cons_tabpg[1,17] .OR. m_dia[12] > cons_tabpg[1,18] .OR. m_dia[13] > cons_tabpg[1,19] .OR. m_dia[14] > cons_tabpg[1,20] .OR. m_dia[15] > cons_tabpg[1,21]
                                                IF ! aut_sen('Alteracao de Prazo na Tabela: '+STRZERO(mcod_cond,3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        IF VAL(cons_tabpg[1,6]) > 0
                                                mav_ap := 'P'
                                        ENDIF
                                ENDIF
                                opcao := op_simnao('S','Confirma o PEDIDO de No. '+STRZERO(mnum_ped,6)+':')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                        ELSEIF m_altpd # NIL
        	                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        */
                        mcom_oper := sen->scom_oper
                        mnome_cli := SPACE(40)
                        // UTILIZAR A ORDEM DE SERVICOS
                        IF m_set[1,42] = 'S' .AND. EMPTY(mnum_ped)
                                IF ! AbriArq('sacoss','oss');RETURN NIL;ENDIF
                                IF ! AbriArq('sacospro','ospro');RETURN NIL;ENDIF
                                WHILE .T.
                                        mpt_os  := mnum_os := 0
                                        @ 07,23 GET mnum_os PICT '999999'
                                        READ
                                        IF LASTKEY() = 27
                                                RELEASE ALL
                                                wvw_lclosewindow()
                                                wvw_lclosewindow()
                                                RETURN NIL
                                        ENDIF
                                        IF EMPTY(mnum_os)
                                                IF ver_nivel('CUSTOMERC','EMISSAO DE PEDIDO SEM ORDEM DE SERVICOS (O.S.)','15',nivel_acess,,'AMBIE')
                                                        EXIT
                                                ELSE
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        *****************
                                        SELE('oss');ORDSETFOCUS(1)
                                        GO TOP
                                        *****************
                                        IF ! oss->(DBSEEK(STRZERO(mnum_os,6)))
                                                atencao('O.S. nao Encontrada em nosso Arquivos')
                                                LOOP
                                        ENDIF
                                        IF oss->pag = 'P'
                                        	atencao('Esta O.S. ja foi transformada em PEDIDO...')
                                        	LOOP
                                        ENDIF
                                        IF oss->pag = 'C'
                                        	atencao('Esta O.S. foi CANCELADA...')
                                        	LOOP
                                        ENDIF
                                        IF oss->pag = '*'
                                        	atencao('Esta O.S. ja foi dado BAIXA...')
                                        	LOOP
                                        ENDIF
					mpt_os := RECNO()
                                        *****************
                                        SELE('ospro');ORDSETFOCUS(1)
                                        GO TOP
                                        *****************
                                        IF ! ospro->(DBSEEK(STRZERO(mnum_os,6)))
                                                atencao('Nao existe nenhum PRODUTO nesta O.S.')
                                                mpt_so := 0
                                                EXIT
                                        ENDIF
                                        mmen_os := 'Numero da O.S.: '+STRZERO(mnum_os,6)+m_qp
                                        IF m_set[1,37] = 'S'
                                                mmen_os := mmen_os + 'Placa.........: '+oss->serie+m_qp
                                                mmen_os := mmen_os + 'KM............: '+oss->numero+m_qp
                                        ELSE
                                                mmen_os := mmen_os + 'Serie.........: '+oss->serie+m_qp
                                                mmen_os := mmen_os + 'Numero........: '+oss->numero+m_qp
                                        ENDIF
                                        mmen_os := mmen_os + 'Marca.........: '+oss->marca+m_qp
                                        mmen_os := mmen_os + 'Modelo........: '+oss->modelo+m_qp

                                        //DEVPOS(16,23);DEVOUT(oss->serie)
                                        //DEVPOS(17,23);DEVOUT(oss->numero)
                                        //DEVPOS(18,23);DEVOUT(oss->marca)
                                        //DEVPOS(19,23);DEVOUT(oss->modelo)
                                        setcor(1)
                                        opcao := op_simnao('S',mmen_os+m_qp+'Confirma a ORDEM DE SERVICO:')
                                        IF opcao = 'S'
                                                mplaca := oss->serie
                                                mkm    := oss->numero
                                                mmodelo:= oss->modelo
                                                mcarro := oss->marca
                                                mcod_cli := oss->cod_cli
		                                mensagem('Aguarde um momento Gerando NUMERO para o PEDIDO....')

                                                gerar_no_ped()

                		                //sr_starttrace()
                                                /*
                                                lExit := .T.
		                                WHILE lExit
                		                        sr_begintransaction()
                                		        try
        		                                        aret:={}
                        		                        sr_getconnection():exec( "select MAX(numero) from sacnoped",,.t.,@aret)
                                        		        mnum_ped = VAL(aret[1,1])+1
                                                                mnum = strzero(VAL(aret[1,1])+1,6)
                                                                sr_getconnection():exec("update sacnoped set numero = " + sr_cdbvalue(mnum) + ", data_ped = " + sr_cdbvalue( mdata_sis),,.f.)
                                                                sr_committransaction()
                                                                lExit:=.T.
                		                        catch e
                                                                tracelog(valtoprg())
                                                                sr_COMMITtransaction()
                                                                sr_getconnection():exec('INSERT INTO sacnoped (numero,data_ped,SR_DELETED)'+;
                                                                                        ' VALUES ('+;
                                                                                        sr_cdbvalue('000000')+','+; //1
                                                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                                                        sr_cdbvalue(' ')+')',,.f.)
                                                                sr_getconnection():exec("COMMIT",,.f.)

                                                                lExit:=.F.
                                                                //aret:={}
                                                                //sr_getconnection():exec("SELECT count(*) FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@aret)
                                                                //IF aret[1,1] > 0
                                                                //        lexit := .T.
                                                                //ENDIF
                                                        END
                                                        sr_endtransaction()
		                                ENDDO
		                                */
                		                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO PEDIDOS No.:'+STRZERO(mnum_ped,6)+SPACE(30)+'Terminal: '+m_indiv[1,1])

                                                WHILE ! EOF() .AND. STRZERO(mnum_os,6) = ospro->num_os
				                        mped_merc := {}
				                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(ospro->cod_merc),,.t.,@mped_merc)
                                                        sr_getconnection():exec('COMMIT',,.f.)
				                        IF LEN(mped_merc) = 0
				                                atencao('Codigo da mercadoria nao cadastrado')
				                                LOOP
				                        ENDIF
                                                        mvlr_fat := ospro->vlr_fat
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
                        			                      +'data_so,'       ;//72
			                                              +'cod_pres'    //72
                        			        cComm  := 'INSERT INTO sacped_s ('+mcampo_ped+',sr_deleted) VALUES ('
			                                cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                        			        sr_cdbvalue(STRZERO(mnum_ped,6)      )+','+;//2
			                                sr_cdbvalue(SUBSTR(NETNAME(),1,10)       )+','+;//3
                        			        sr_cdbvalue(mdata_sis                )+','+;//4
			                                sr_cdbvalue(mped_merc[1,7]           )+','+;//5
                        			        sr_cdbvalue(ospro->cod_merc          )+','+;//6
			                                sr_cdbvalue(ospro->merc              )+','+;//7
                        			        sr_cdbvalue(mped_merc[1,14]          )+','+;//8
			                                sr_cdbvalue(mped_merc[1,15]          )+','+;//9
                        			        sr_cdbvalue(''                       )+','+;//10
			                                sr_cdbvalue(mped_merc[1,17]          )+','+;//11
                        			        sr_cdbvalue(mped_merc[1,16]          )+','+;//12
			                                sr_cdbvalue(mped_merc[1,74]          )+','+;//13
                        			        sr_cdbvalue(ospro->quantd            )+','+;//14
			                                sr_cdbvalue(0                        )+','+;//15
                        			        sr_cdbvalue(0                        )+','+;//16
			                                sr_cdbvalue(ospro->vlr_fat           )+','+;//17
                        			        sr_cdbvalue(0                        )+','+;//18
			                                sr_cdbvalue(mvlr_fat                 )+','+;//19
                        			        sr_cdbvalue(ospro->vlr_fat           )+','+;//20
			                                sr_cdbvalue(mped_merc[1,47]          )+','+;//21
                        			        sr_cdbvalue(mped_merc[1,45]          )+','+;//22
			                                sr_cdbvalue(mped_merc[1,44]          )+','+;//23
                        			        sr_cdbvalue(mcod_cli      )+','+;//24
			                                sr_cdbvalue(''                       )+','+;//25
                        			        sr_cdbvalue(''                       )+','+;//26
			                                sr_cdbvalue(mplaca                   )+','+;//27
                        			        sr_cdbvalue(mcarro                   )+','+;//28
			                                sr_cdbvalue(mmodelo                  )+','+;//29
                        			        sr_cdbvalue(mkm                      )+','+;//30
			                                sr_cdbvalue(mped_merc[1,30]          )+','+;//31
	                        		        sr_cdbvalue(LEFT(mped_merc[1,31],30) )+','+;//32
        			                        sr_cdbvalue(ospro->operador          )+','+;//33
                                			sr_cdbvalue(0                        )+','+;//34
			                                sr_cdbvalue(ospro->operador          )+','+;//35
                        			        sr_cdbvalue(''                       )+','+;//36
			                                sr_cdbvalue(mped_merc[1,21]          )+','+;//37
                        			        sr_cdbvalue(STRZERO(0,3)             )+','+;//38
			                                sr_cdbvalue(STRZERO(0,3)             )+','+;//39
                        			        sr_cdbvalue(0                        )+','+;//40
			                                sr_cdbvalue(0                        )+','+;//41
                        			        sr_cdbvalue(' '                      )+','+;//42
			                                sr_cdbvalue(mhoras                   )+','+;//43
                        			        sr_cdbvalue(''                       )+','+;//44
			                                sr_cdbvalue(0                        )+','+;//45
                        			        sr_cdbvalue(mped_merc[1,61]          )+','+;//46
			                                sr_cdbvalue(mped_merc[1,23]          )+','+;//47
                        			        sr_cdbvalue(ospro->montador          )+','+;//48
		                	                sr_cdbvalue(ospro->montador1         )+','+;//49
                		        	        sr_cdbvalue(0                        )+','+;//50
			                                sr_cdbvalue(mped_merc[1,27]          )+','+;//51
                        			        sr_cdbvalue(mped_merc[1,75]          )+','+;//52
			                                sr_cdbvalue(mped_merc[1,62]          )+','+;//53
                        			        sr_cdbvalue(iat(mped_merc[1,65],2) )+','+;//54
			                                sr_cdbvalue(ospro->obs_prod          )+','+;//55
                        			        sr_cdbvalue(mped_merc[1,82]          )+','+;//56
			                                sr_cdbvalue(' '                      )+','+;//57
                        			        sr_cdbvalue(mped_merc[1,83]          )+','+;//58
			                                sr_cdbvalue(''                       )+','+;//59
                        			        sr_cdbvalue(''                       )+','+;//60
			                                sr_cdbvalue(''                       )+','+;//61
                        			        sr_cdbvalue(''                       )+','+;//62
			                                sr_cdbvalue(SUBSTR(mped_merc[1,73],1,2)  )+','+;//63
                        			        sr_cdbvalue(''                       )+','+;//64
		                	                sr_cdbvalue(''                       )+','+;//65
                		        	        sr_cdbvalue(''                       )+','+;//66
			                                sr_cdbvalue(''                       )+','+;//67
                        			        sr_cdbvalue(''                       )+','+;//68
			                                sr_cdbvalue(''                       )+','+;//69
	                      			        sr_cdbvalue(''                       )+','+;//70
	                                		sr_cdbvalue(' '                      )+','+;//71
			                                sr_cdbvalue(IF(! EMPTY(mnum_os),STRZERO(mnum_os,6),''))+','+;//72
                        			        sr_cdbvalue(DATE()                   )+','+;//73
		        	                        sr_cdbvalue('00000'                  )+','+;//74
                	        		        sr_cdbvalue(' ')+')'
			                                sr_getconnection():exec(ccomm,,.f.)
                        			        sr_getconnection():exec("COMMIT",,.f.)
                                                        AADD(m_codigo,ospro->cod_merc)
                                                        AADD(m_Cbarra,mped_merc[1,2])
                                                        IF mped_merc[1,14] = 'EV'
                                                                AADD(m_alt,ospro->cod_merc+' '+LEFT(ospro->merc,27)+' '+menvelope+' '+TRANSFORM(ospro->quantd,'99999.99')+' '+TRANSFORM(ospro->vlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(ospro->vlr_fat * ospro->quantd,ALLTRIM('@E '+m_set[1,98])))
                                                        ELSE
                                                                AADD(m_alt,ospro->cod_merc+' '+LEFT(ospro->merc,38)+' '+TRANSFORM(ospro->quantd,'99999.99')+' '+TRANSFORM(ospro->vlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(ospro->vlr_fat * ospro->quantd,ALLTRIM('@E '+m_set[1,98])))
                                                        ENDIF
                                                        AADD(m_matriz,{ospro->quantd,ospro->vlr_fat,        0,mped_merc[1,7],ospro->merc,mped_merc[1,14],mped_merc[1,17],       0,              0,mped_merc[1,30],mped_merc[1,31],mped_merc[1,21],mped_merc[1,61],mped_merc[1,23],mped_merc[1,26],mped_merc[1,62],mped_merc[1,16],mped_merc[1,44],mobs1,mobs2,mped_merc[1,73],mped_merc[1,65],mped_merc[1,15],mplaca,mhoras,mped_merc[1,82],mped_merc[1,83],mchass,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,mped_merc[1,75],mped_merc[1,74],ospro->obs_prod,;
	                                                             VAL(ospro->montador),VAL(ospro->montador1),mped_merc[1,27],mped_merc[1,47],'OS',mpacote,mpecas})
                                                        mcod_bc := mped_merc[1,2]
                                                        SKIP
                                                ENDDO
                                                EXIT
                                        ELSE
                                                LOOP
                                        ENDIF
                                ENDDO
                        ENDIF
                        // CLIENTE ANTES DO PEDIDO
                        IF EMPTY(mnum_ped)
                                WHILE .T.
                                        SET KEY -8 TO sac130()           // inclusao de clientes
                                        IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
                                        @ 08,23 GET mcod_cli PICT '99999'
                                        @ 08,29 GET mnome_cli PICT '@!' WHEN EMPTY(mcod_cli)
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
                                                        f7_cli(,cons_cli[1,145])
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
                                                DEVPOS(08,23);DEVOUT(STR(cons_cli[1,2],5))
                                                DEVPOS(08,29);DEVOUT(cons_cli[1,3])
                                                DEVPOS(09,23);DEVOUT(cons_cli[1,4])
                                                botao(10,23,12,96)
                                                WVW_DrawLabel(,10,23,cons_cli[1,48],,,240,, 'arial',15,10,,,,,)
                                                WVW_DrawLabel(,11,23,cons_cli[1,113],,,240,, 'arial',15,10,,,,,)
                                                WVW_DrawLabel(,12,23,cons_cli[1,114],,,240,, 'arial',15,10,,,,,)
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
                                        IF cons_cli[1,45] = 'A'
                                                setcor(3)
                                                DEVPOS(07,70);DEVOUT('ATACADISTA')
                                                setcor(1)
                                        ENDIF
                                        IF ! EMPTY(cons_cli[1,59])
                                                IF ver_serie() = '141302'
                                                        op_cartao = 'S'
                                                ELSE
                                                        op_cartao := op_simnaocan('C','       A T E N C A O '+m_qp+'Forma de Pagamento vai ser em'+m_qp+'     CARTAO DE CREDITO')
                                                        IF op_cartao = 'C'
                                                                LOOP
                                                        ENDIF
                                                ENDIF
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
                                                IF ! EMPTY(mcod_cond)
                                                        cons_tabpg := {}
                                                        sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_cond,3)),,.t.,@cons_tabpg)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        IF LEN(cons_tabpg) = 0
                                                                atencao('Nao foi encontrado esta Tabela de Condicao de Pagamento Cod.: '+STRZERO(mcod_cond,3))
                                                        ELSE
                                                                mcond_veze := cons_tabpg[1,6]
                                                                mperc := cons_tabpg[1,5]
                                                                mcons_tabpg := cons_tabpg[1,6]
                                                                IF VAL(cons_tabpg[1,6]) > 0
                                                                        mav_ap := 'P'
                                                                ENDIF
                                                        ENDIF
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
                                        EXIT
                                ENDDO
                        ELSEIF ! EMPTY(mnum_ped)
                                DEVPOS(08,23);DEVOUT(STR(mcod_cli,5))
                               	cons_cli := {}
                                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_cli) > 0
                                        DEVPOS(07,29);DEVOUT(cons_cli[1,3])
                                        DEVPOS(08,23);DEVOUT(cons_cli[1,4])
                                        IF mcod_cond = 0
                                                mcod_cond := VAL(cons_cli[1,133])
                                        ENDIF
                                        mcod_aux  := cons_cli[1,106]
                                        mcod_ven := cons_cli[1,106]
                                ENDIF
                                IF m_set[1,10] <> 'S'
                                        mcod_ven := cod_operado
                                ENDIF
                        ENDIF
                        // SOLICITACAO DE VENDEDOR
                        WHILE .T. .AND. m_set[1,108] = 'S' .AND. EMPTY(mnum_ped) .OR. EMPTY(mcod_ven)
                                @ 14,23 GET mcod_ven PICT '999' VALID IF(ver_ven(mcod_ven),.T.,.F.)
                                READ
                                mcod_ven := sen->scod_op
                                mnome_ven := sen->snome
                                DEVPOS(14,23);DEVOUT(mcod_ven)
                                DEVPOS(14,27);DEVOUT(mnome_ven)
                                IF m_set[1,10] = 'S' .AND. mcod_ven <> mcod_aux .AND. mcod_cli <> m_set[1,84];
                                   .AND. ! aut_sen('Cod. Vend. Diferente do Vend. Resp.CLIENTE, Senha autorizacao:','LIBCLIVEN',,mcod_cli)
                                        LOOP
                                ENDIF
                                EXIT
                        ENDDO
                        ver_ven(mcod_ven)
                        mnome_ven := sen->snome
                        // VENDAS A VAREJO OU ATACADO
                        IF m_set[1,5] = 'S' .AND. EMPTY(mnum_ped)
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
                                        wvw_lclosewindow()
                                        //LOOP
                                        RETURN NIL
                                ENDIF
                                wvw_lclosewindow()
                                IF mvarejo=1
                                        DEVPOS(lba,1);DEVOUT(' Normal ')
                                        mav_ap := 'A'
                                ELSE
                                        DEVPOS(lba,1);DEVOUT(' Especial ')
                                        mav_ap := 'P'
                                ENDIF
                        ENDIF
                        IF mmult_emp= 'S'
                                alt_emp('*')
                        ENDIF
                        // CONDICOES DE PAGAMENTO ANTE DO PEDIDO
                        IF m_set[1,46] = 'S' .AND. EMPTY(mnum_ped)
                                WHILE .T.
                                        mquantd := 1
                                        mperc := mcomi_tab := mprz := 0
                                        //@ 21,23 GET mcod_cond PICT '999' VALID IF(EMPTY(mcod_cond),.T.,ver_cond(mcod_cond,21,27))
                                        @ 21,23 GET mcod_cond PICT '999' VALID IF(EMPTY(mcod_cond),.F.,ver_cond(mcod_cond,21,27))
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
                                                IF m_dia[1] > cons_tabpg[1,7]+3 .OR. m_dia[2] > cons_tabpg[1,8]+3 .OR. m_dia[3] > cons_tabpg[1,9]+3 .OR. m_dia[4] > cons_tabpg[1,10]+3 .OR. m_dia[5] > cons_tabpg[1,11]+3;
                                                   .OR. m_dia[6] > cons_tabpg[1,12]+3 .OR. m_dia[7] > cons_tabpg[1,13]+3 .OR. m_dia[8] > cons_tabpg[1,14]+3 .OR. m_dia[9] > cons_tabpg[1,15]+3 .OR. m_dia[10] > cons_tabpg[1,16]+3;
                                                   .OR. m_dia[11] > cons_tabpg[1,17]+3 .OR. m_dia[12] > cons_tabpg[1,18]+3 .OR. m_dia[13] > cons_tabpg[1,19]+3 .OR. m_dia[14] > cons_tabpg[1,20]+3 .OR. m_dia[15] > cons_tabpg[1,21]+3
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
                                        IF VAL(mcond_veze) > 0
                                                mav_ap := 'P'
                                        ENDIF
                                        opcao := op_simnao('S','Confirma o percentual:')
                                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                                LOOP
                                        ENDIF
                                        EXIT
                                ENDDO
                        ENDIF
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        // INFORMAR REPRESENTANTE
                        IF m_set[1,152] = 'S'
                                WHILE .T.
                                        mmontador := 0
                                        @ 27,23 GET mmontador PICT '999' VALID ven(mmontador,27,27)
                                        READ
                                        opcao := op_simnao('S','Confirma o Representante:')
                                        IF opcao = 'N'
                                                LOOP
                                        ENDIF
                                        EXIT
                                ENDDO
                        ENDIF
                        IF ver_nivel(mprg+'AV','EMISSAO DE PEDIDO VENDA DE AVARIAS','1',nivel_acess,'*') .AND. (ver_serie() = '141225' .OR. ver_serie() = '141254')
                                setcor(10)
                                @ 30,23 PROMPT ' Pedido NORMAL '
                                @ 30,COL()+1 PROMPT ' Pedido AVARIAS '
                                SET INTEN ON
                                MENU TO mavaria
                                setcor(1)
                                IF LASTKEY() = 27
                                        SET KEY -9 TO
                                        RELEASE ALL
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mcod_cli) .AND. ! EMPTY(cons_cli[1,59]) .AND. op_cartao = 'S'
                                mperc := mperc + (cons_cli[1,59] * -1)
                        ENDIF
                        opcao := op_simnaocan('S','CONFIRMA TODAS AS INFORMACOES DO PEDIDO:')
                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        IF opcao = 'C'
                                wvw_lclosewindow()
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                ELSE
                        op_tela(00,01,31,110,' A B E R T U R A   D O   P E D I D O                      Informacoes para o PEDIDO ** 1 ** ',,1)
                        botao(0,0,7,120)
                        SUB_BANNER(00,04,'TERMINAL LIVRE')
                        cons_cli := {}
                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = 1",,.t.,@cons_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mcod_cli := 1
                        mcod_ven := cod_operado
                ENDIF
                mflag := 1
                EXIT
        ENDDO
        IF ! oper_ped(mcod_ven)
                fecha_tela()
                LOOP
        ENDIF
        IF mavaria = 1
                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DE PEDIDOS'+SPACE(40)+'Terminal: '+m_indiv[1,1])
        ELSE
                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DE PEDIDOS *** AVARIAS ***'+SPACE(25)+'Terminal: '+m_indiv[1,1])
        ENDIF
        merroped := 0
        IF m_indiv[1,9] <> 'V' .AND. m_indiv[1,26] <> 'T'
                wvw_lclosewindow()
        ENDIF
        IF m_set[1,84] <> mcod_cli .AND. ! EMPTY(mcod_cli)
                mlimite := cons_cli[1,44]
                mcompras := ver_compras(mcod_cli)
        ENDIF
        mensagem('Montando a tela de Pedidos...')
        DrawLabel(,lci-2,cci+10,'No.Pedido: '+STRZERO(0,6),,,'Arial Black',25,15,,,,,)
        //DrawLabel(12,05,'No.Pedido: '+STRZERO(mnum_ped,6),,,'Arial Black',25,15)

        WvW_PBSetFont( NIL, 'Arial Black', 25, 10,)
        npesquisa := wvw_pbCreate(NIL,49,30,51,50,'Pesquisar',,{||menu_cons()},,1,.F.)
        nBota := wvw_pbCreate(NIL,49,52,51,72,'[F10] Fechar Cupom',,{||fecha_pd('1')},,1,.F.)
        WVW_PBEnable( NIL, nBota, .F. )
        WVW_PBEnable( NIL, npesquisa, .T. )
/*
        limpa(0,0,54,120)
        botao(01,01,07,119)

        botao(09,01,12,25)
        botao(14,01,17,25)
        botao(19,01,22,25)
        botao(24,01,27,25)
        botao(29,01,32,25)
        botao(34,01,37,25)
        botao(39,01,42,25)
        botao(44,01,47,25)
        botao(49,01,52,25)
        //botao(52,01,55,25)
        DrawLabel(09,2,'Codigo:',,,'Arial Black',25,10)
        DrawLabel(14,2,'Quantidade',,,'Arial Black',25,10)
        DrawLabel(19,2,'Valor Unitario',,,'Arial Black',25,10)
        DrawLabel(24,2,'Valor Total',,,'Arial Black',25,10)
        DrawLabel(29,2,'Saldo',,,'Arial Black',25,10)
        DrawLabel(34,2,'Valor IPI',,,'Arial Black',25,10)
        DrawLabel(39,2,'Total c/IPI',,,'Arial Black',25,10)
        DrawLabel(44,2,'Desconto (%)',,,'Arial Black',25,10)
        DrawLabel(49,2,'Desconto R$',,,'Arial Black',25,10)
        WVW_DrawBoxGet(,11,2,20)
        WVW_DrawBoxGet(,16,2,20)
        WVW_DrawBoxGet(,21,2,20)
        WVW_DrawBoxGet(,26,2,20)
        WVW_DrawBoxGet(,31,2,20)
        WVW_DrawBoxGet(,36,2,20)
        WVW_DrawBoxGet(,41,2,20)
        WVW_DrawBoxGet(,46,2,20)
        WVW_DrawBoxGet(,51,2,20)
*/
                /*
                DEVPOS(28,02);DEVOUT('Cod.Produto:')
                DEVPOS(29,02);DEVOUT('Descricao..:')
                DEVPOS(30,02);DEVOUT('Quantidade.:')
                DEVPOS(31,02);DEVOUT('Vlr.Unita..:')
                DEVPOS(32,02);DEVOUT('Vlr.Total..:')
                DEVPOS(33,02);DEVOUT('Saldo......:')
                IF ver_serie() <> '141410'
	                DEVPOS(34,02);DEVOUT('Quantidade.:               ')
                ENDIF
                DEVPOS(35,02);DEVOUT('Sub-IPI....:')
                DEVPOS(35,25);DEVOUT('Total c/IPI:')
                DEVPOS(36,02);DEVOUT('Desc.(%)...:       - R$: ')
                */
        WHILE .T.
        limpa(0,0,54,120)
        botao(01,01,07,119)

        botao(09,01,12,25)
        botao(14,01,17,25)
        botao(19,01,22,25)
        botao(24,01,27,25)
        botao(29,01,32,25)
        botao(34,01,37,25)
        botao(39,01,42,25)
        botao(44,01,47,25)
        botao(49,01,52,25)
        //botao(52,01,55,25)
        DrawLabel(09,2,'Codigo:',,,'Arial Black',25,10)
        DrawLabel(14,2,'Quantidade',,,'Arial Black',25,10)
        DrawLabel(19,2,'Valor Unitario',,,'Arial Black',25,10)
        DrawLabel(24,2,'Valor Total',,,'Arial Black',25,10)
        DrawLabel(29,2,'Saldo',,,'Arial Black',25,10)
        DrawLabel(34,2,'Valor IPI',,,'Arial Black',25,10)
        DrawLabel(39,2,'Total c/IPI',,,'Arial Black',25,10)
        DrawLabel(44,2,'Desconto (%)',,,'Arial Black',25,10)
        DrawLabel(49,2,'Desconto R$',,,'Arial Black',25,10)
        WVW_DrawBoxGet(,11,2,20)
        WVW_DrawBoxGet(,16,2,20)
        WVW_DrawBoxGet(,21,2,20)
        WVW_DrawBoxGet(,26,2,20)
        WVW_DrawBoxGet(,31,2,20)
        WVW_DrawBoxGet(,36,2,20)
        WVW_DrawBoxGet(,41,2,20)
        WVW_DrawBoxGet(,46,2,20)
        WVW_DrawBoxGet(,51,2,20)
                IF LEN(m_codigo) = 0
                        WVW_PBEnable( NIL, nBota, .F. )
                        botao(01,01,07,119)
                        IF m_indiv[1,26] = 'T'
                                DrawLabel(2,45,'CAIXA LIVRE',,,'times',65,30)
                        ELSE
                                DrawLabel(2,45,'TERMINAL LIVRE',,,'times',65,30)
                        ENDIF
                ELSE
                        WVW_PBEnable( NIL, nBota, .T. )
                ENDIF
                botao(12,40,26,60)
                IF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                	WVW_DrawImage( ,12,40,26,60,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF
                IF mflag = 0
                        EXIT
                ENDIF
                // PEDIDO DO APP...
                IF orc # NIL .AND. EMPTY(mnum_ped)
                        c_orcam := {}  
                        sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(orc),,.t.,@c_orcam)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(c_orcam) = 0
                                atencao('Nao foi possivel encontrar este ORCAMENTO...')
                        ELSE
                                IF ! EMPTY(VAL(c_orcam[1,42]))
                                        mcons_tabpg:=' '
                                        cons_tabpg := {}
                                        sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(c_orcam[1,42]),,.t.,@cons_tabpg)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_tabpg) = 0
                                                atencao('Nao foi encontrado esta tabela de preco: '+c_orcam[1,42])
                                                LOOP
                                        ENDIF
                                        mcod_cond   := VAL(c_orcam[1,42])
                                        mcons_tabpg := cons_tabpg[1,6]
                                        mtipo_preco := cons_tabpg[1,24]
                                        mcomi_tab   := cons_tabpg[1,22]
                                        mcond_veze := cons_tabpg[1,6]
                                        //mprz := cons_tabpg[1,7]
                                        //mperc := cons_tabpg[1,5]
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
                                        IF mcod_cond > 0
                                                mav_ap := 'P'
                                        ENDIF
                                ENDIF

                                mobs1 := c_orcam[1,86]
                                mobs2 := c_orcam[1,87]
                                mobs3 := c_orcam[1,88]
                                mobs4 := c_orcam[1,89]
                                mobs5 := c_orcam[1,113]
                                mobs6 := c_orcam[1,114]
                                mobs7 := c_orcam[1,115]
                                mobs8 := c_orcam[1,116]
                                y:=0
                                FOR y = 1 TO LEN(c_orcam)
                                        IF ! EMPTY(c_orcam[y,49])
                                                LOOP
                                        ENDIF 
                                        mped_merc:={}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_orcam[y,6]),,.t.,@mped_merc)
                                        sr_getconnection():exec('COMMIT',,.f.)

                                        setcor(3)
                                        limpa(01,01,7,119)
                                        @ 28,14 SAY SPACE(13)
                                        @ 11,2 SAY mped_merc[1,8]
                                        WVW_DrawLabel(,01,02,mped_merc[1,9],,,,, 'arial black',60,20,,,,,)
                                        //@ 29,14 SAY mped_merc[1,9]
                                        @ 16,2 SAY c_orcam[y,14] PICT '9,999,999.99'
                                        @ 21,2 SAY c_orcam[y,18] PICT '9,999,999.99'
                                        @ 26,2 SAY c_orcam[y,18] * c_orcam[y,14] PICT '9,999,999.99'
                                        @ 31,2 SAY mped_merc[1,56] PICT '9,999,999.99'
                                        /*
                                        DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                                        WVW_DrawLabel(,01,02,mped_merc[1,8]+' - '+SUBSTR(mped_merc[1,9],1,30),,,,, 'arial black',60,20,,,,,)
                                        WVW_DrawLabel(,06,02,'             '+SUBSTR(mped_merc[1,9],31),,,,, 'arial black',60,20,,,,,)
                                        WVW_DrawLabel(,06,02,IF(! EMPTY(mped_merc[1,23]),'P:'+TRANSFORM(mped_merc[1,23],'99')+' %',''),,,245,, 'arial black',60,20,,,,,)
                                        DEVPOS(00,80);DEVOUT('Preco   R$:')
                                        WVW_DrawLabel(,08,70,TRANSFORM(mped_merc[1,46],ALLTRIM('@E '+m_set[1,98])),,,240,, 'arial black',60,30,,,,,)
                                        */
                                        setcor(1)
                                        IF mped_merc[1,24] = 'N'
                                                atencao('MERCADORIA NAO DISPONIVEL PARA VENDA',3)
                                                LOOP
                                        ELSEIF mped_merc[1,104] = 'S'
                                                atencao('PRODUTO: '+mped_merc[1,8]+' - '+mped_merc[1,9]+' *** D E S C O N T I N U A D O *** ....',3)
                                                LOOP
                                        ELSEIF mped_merc[1,103] = 'S' .AND. c_orcam[y,14] > mped_merc[1,56]
                	                        atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                        	                LOOP
                                        ELSEIF c_orcam[y,14] > mped_merc[1,56] .AND. (m_set[1,107] = "P" .OR. m_set[1,107] = "2") .AND. SUBSTR(mped_merc[1,9],1,1) <> '@'
                	                        IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(c_orcam[y,14],'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(mped_merc[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,c_orcam[y,6])
                        	                        LOOP
                                	        ENDIF
                                        ELSEIF c_orcam[y,14] > mped_merc[1,56] .AND. mped_merc[1,9] <> 'DIVERSOS' .AND. (m_set[1,107] = "P" .OR. m_set[1,107] = "2") .AND. SUBSTR(mped_merc[1,9],1,1) <> '@'
                                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(c_orcam[y,14],'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(mped_merc[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,c_orcam[y,6])
                                                        LOOP
                                                ENDIF
                                                mlibera := 'S'
                                        ELSEIF ! EMPTY(m_set[1,153]) .AND. c_orcam[y,14] > m_set[1,153]
                                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(c_orcam[y,14],'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDOADM',,,c_orcam[y,6])
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        IF ! EMPTY(m_set[1,154]) .AND. c_orcam[y,14] > m_set[1,154]
                                                atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                                                LOOP
                                        ENDIF
                                        mcomissao := mped_merc[1,26]
                                        IF c_orcam[y,18] < mped_merc[1,46]
                                                mdesconto := ((mped_merc[1,46]-c_orcam[y,18])/mped_merc[1,46])*100
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
                                                // FRIPAL, FRANGO DOURADO OU DISCAPE
                                                /*
                                                IF c_orcam[y,46] < (mped_merc[1,45] * 1.10) .AND. (ver_serie() = '141597' .OR. ver_serie() = '141390' .OR. ver_serie() = '141336')
                                                        atencao('Cod.Prod...: '+mped_merc[1,8]+m_qp+;
                                                                'Vlr.p/Produto Solic.: '+ALLTRIM(TRANSFORM(c_orcam[y,46],'999,999,999.99'))+m_qp+;
                                                                'Valor Minimo R$.....: '+ALLTRIM(TRANSFORM(mped_merc[1,45] * 1.10,'999,999.99')))
                                                        LOOP
                                                ENDIF
                                                */
                                                IF ! EMPTY(mped_merc[1,80])
                                                        IF mdesconto > mped_merc[1,80]
                                                                IF ! aut_sen('Codigo do Produto: '+mped_merc[1,8]+m_qp+'Vlr.Solicitado R$:'+TRANSFORM(c_orcam[y,18],'999,999.99')+m_qp+'Preco Venda R$...:'+TRANSFORM(mped_merc[1,46],'999,999.99')+m_qp+'Desconto (%).....: '+TRANSFORM(mdesconto,'999.99')+' Desconto nao e permitido','LIB_DESC',,,mcod_merc)
                                                                        mquantd := 1
                                                                        LOOP
                                                                ENDIF
                                                        ENDIF
                                                ELSEIF ! EMPTY(m_set[1,33])
                                                        IF mdesconto > m_set[1,33]
                                                                IF ! aut_sen('Codigo do Produto: '+mped_merc[1,8]+m_qp+'Vlr.Solicitado R$:'+TRANSFORM(c_orcam[y,18],'999,999.99')+m_qp+'Preco Venda R$...:'+TRANSFORM(mped_merc[1,46],'999,999.99')+m_qp+'Desconto (%).....: '+TRANSFORM(mdesconto,'999.99')+' Desconto nao e permitido','LIB_DESC',,,mcod_merc)
                                                                        mquantd := 1
                                                                        LOOP
                                                                ENDIF
                                                        ENDIF
                                                ELSEIF m_set[1,38] = 'C' .AND. c_orcam[y,18] < mped_merc[1,45]
                                                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' Vlr.Solicitado R$:'+TRANSFORM(c_orcam[y,18],'999,999.99')+' - Pr.Custo R$:'+TRANSFORM(mped_merc[1,45],'999,999.99')+' - Senha de autorizacao:','LIB_DESC',,,mcod_merc)
                                                                mquantd := 1
                                                                LOOP
                                                        ENDIF
                                                ELSEIF m_set[1,38] = 'V' .AND. c_orcam[y,18] < mped_merc[1,46]
                                                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' Vlr.Solicitado R$:'+TRANSFORM(c_orcam[y,18],'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mped_merc[1,46],'999,999.99')+' - Senha de autorizacao:','LIB_DESC',,,mcod_merc)
                                                                mquantd := 1
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                        ENDIF
                                        //IF 'N' = op_simnao('S','Confirma Inclusao da Mercadoria:')
                                        //        LOOP
                                        //ENDIF
                                        IF EMPTY(mnum_ped)
                                                mensagem('Aguarde um momento Gerando NUMERO para o PEDIDO ....')

                                                gerar_no_ped()
                                                
                                                /*
                                                //sr_starttrace()

                                                lExit := .T.
                                                WHILE lExit
                                                        sr_begintransaction()
                                                        try
                                                                aret:={}
                                                                //sr_getconnection():exec( "select numero from sacnoped where sr_recno = 1 for update with lock",,.t.,@aret)
                                                                //sr_getconnection():exec( "select numero from sacnoped where sr_recno = 1",,.t.,@aret)
                                                                sr_getconnection():exec( "select MAX(numero) from sacnoped",,.t.,@aret)
                                                                mnum_ped = VAL(aret[1,1])+1
                                                                mnum = strzero(VAL(aret[1,1])+1,6)
                                                                //sr_getconnection():exec("update sacnoped set numero = " + sr_cdbvalue(mnum) + ", data_ped = " + sr_cdbvalue( mdata_sis) + " where sr_recno = 1 ",,.f.)
                                                                sr_getconnection():exec("update sacnoped set numero = " + sr_cdbvalue(mnum) + ", data_ped = " + sr_cdbvalue( mdata_sis),,.f.)
                                                                sr_committransaction()
                                                                lExit:=.T.
                                                        catch e
                                                                tracelog(valtoprg())
                                                                sr_COMMITtransaction()
                                                                lExit:=.F.
                                                        END
                                                        //sr_endtransaction()
                                                END
                                                sr_getconnection():exec("COMMIT",,.f.)
                                                */
                                                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO PEDIDOS No.:'+STRZERO(mnum_ped,6)+SPACE(30)+'Terminal: '+m_indiv[1,1])
                                        ENDIF
                                        mlinha := mped_merc[1,2]        //+mped_merc[1,8]+mped_merc[1,9]+mped_merc[1,14]+STRZERO((mped_merc[1,56] - c_orcam[y,14])*1000,13)+STRZERO(iat(mped_merc[1,46])*100,14)+mped_merc[1,68]
                                        sr_begintransaction()
                                                //try
                                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(mped_merc[1,56] - c_orcam[y,14])+",data_atu = "+sr_cdbvalue(mdata_sis)+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(c_orcam[y,6]),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
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
                                                                                sr_cdbvalue(c_orcam[y,6])+','+; //4
                                                                                sr_cdbvalue(c_orcam[y,14])+','+; //5
                                                                                sr_cdbvalue(mped_merc[1,56])+','+; //6
                                                                                sr_cdbvalue(mped_merc[1,56] - c_orcam[y,14])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC23PD1')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue('INCLUSAO PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                                sr_cdbvalue('S')+','+; //11
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
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
                                                                      +'pquantd,'   ;//14                          3
                                                                      +'ppacote,'   ;//15
                                                                      +'ppecas,'    ;//16
                                                                      +'ppre_dig,'  ;//17
                                                                      +'pdesc,'     ;//18                         1
                                                                      +'pvlr_fat,'  ;//19
                                                                      +'ppre_venda,';//20
                                                                      +'ppr_venda1,';//21
                                                                      +'pcust_real,';//22
                                                                      +'pcust_merc,';//23                        2
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
                                                                      +'data_app,'   ;//73
                                                                      +'cod_pres'    //75
                                                        cComm  := 'INSERT INTO sacped_s ('+mcampo_ped+',sr_deleted) VALUES ('
                                                        cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                                                        sr_cdbvalue(STRZERO(mnum_ped,6)     )+','+;//2
                                                        sr_cdbvalue(SUBSTR(NETNAME(),1,10)      )+','+;//3
                                                        sr_cdbvalue(mdata_pedido            )+','+;//4
                                                        sr_cdbvalue(mped_merc[1,7]               )+','+;//5
                                                        sr_cdbvalue(c_orcam[y,6]            )+','+;//6
                                                        sr_cdbvalue(c_orcam[y,7]            )+','+;//7
                                                        sr_cdbvalue(mped_merc[1,14]              )+','+;//8
                                                        sr_cdbvalue(mped_merc[1,15]              )+','+;//9
                                                        sr_cdbvalue(IF(! EMPTY(c_orcam[y,26]),c_orcam[y,26],c_orcam[y,10]))+','+;//10
                                                        sr_cdbvalue(mped_merc[1,17]              )+','+;//11
                                                        sr_cdbvalue(mped_merc[1,16]              )+','+;//12
                                                        sr_cdbvalue(mped_merc[1,74]              )+','+;//13
                                                        sr_cdbvalue(c_orcam[y,14]           )+','+;//14
                                                        sr_cdbvalue(c_orcam[y,15]           )+','+;//15
                                                        sr_cdbvalue(c_orcam[y,16]           )+','+;//16
                                                        sr_cdbvalue(c_orcam[y,17]           )+','+;//17
                                                        sr_cdbvalue(c_orcam[y,39]           )+','+;//18
                                                        sr_cdbvalue(iat(c_orcam[y,18])      )+','+;//19
                                                        sr_cdbvalue(c_orcam[y,20]           )+','+;//20
                                                        sr_cdbvalue(mped_merc[1,47]              )+','+;//21
                                                        sr_cdbvalue(mped_merc[1,45]              )+','+;//22
                                                        sr_cdbvalue(mped_merc[1,44]              )+','+;//23
                                                        sr_cdbvalue(c_orcam[y,23]           )+','+;//24
                                                        sr_cdbvalue(c_orcam[y,24]           )+','+;//25
                                                        sr_cdbvalue(c_orcam[y,25]           )+','+;//26
                                                        sr_cdbvalue(c_orcam[y,26]           )+','+;//27
                                                        sr_cdbvalue(c_orcam[y,27]           )+','+;//28
                                                        sr_cdbvalue(c_orcam[y,28]           )+','+;//29
                                                        sr_cdbvalue(c_orcam[y,29]           )+','+;//30
                                                        sr_cdbvalue(mped_merc[1,30]              )+','+;//31
                                                        sr_cdbvalue(LEFT(mped_merc[1,31],30)     )+','+;//32
                                                        sr_cdbvalue(cod_operado             )+','+;//33
                                                        sr_cdbvalue(c_orcam[y,35]           )+','+;//34
                                                        sr_cdbvalue(c_orcam[y,32]           )+','+;//35
                                                        sr_cdbvalue(c_orcam[y,33]           )+','+;//36
                                                        sr_cdbvalue(mped_merc[1,21]              )+','+;//37
                                                        sr_cdbvalue(STRZERO(0,3)            )+','+;//38
                                                        sr_cdbvalue(STRZERO(0,3)            )+','+;//39
                                                        sr_cdbvalue(0                       )+','+;//40
                                                        sr_cdbvalue(0                       )+','+;//41
                                                        sr_cdbvalue(' '                     )+','+;//42
                                                        sr_cdbvalue(mhoras                  )+','+;//43
                                                        sr_cdbvalue(c_orcam[y,45]           )+','+;//44
                                                        sr_cdbvalue(0                       )+','+;//45
                                                        sr_cdbvalue(mped_merc[1,61]              )+','+;//46
                                                        sr_cdbvalue(mped_merc[1,23]              )+','+;//47
                                                        sr_cdbvalue(c_orcam[y,36]           )+','+;//48
                                                        sr_cdbvalue(c_orcam[y,38]           )+','+;//49
                                                        sr_cdbvalue(c_orcam[y,53]           )+','+;//50
                                                        sr_cdbvalue(mped_merc[1,27]              )+','+;//51
                                                        sr_cdbvalue(mped_merc[1,75]              )+','+;//52
                                                        sr_cdbvalue(mped_merc[1,62]              )+','+;//53
                                                        sr_cdbvalue(mped_merc[1,65]              )+','+;//54
                                                        sr_cdbvalue(c_orcam[y,58]           )+','+;//55
                                                        sr_cdbvalue(mped_merc[1,82]              )+','+;//56
                                                        sr_cdbvalue(' '                     )+','+;//57
                                                        sr_cdbvalue(mped_merc[1,83]              )+','+;//58
                                                        sr_cdbvalue(c_orcam[y,86]           )+','+;//59
                                                        sr_cdbvalue(c_orcam[y,87]           )+','+;//60
                                                        sr_cdbvalue(c_orcam[y,88]           )+','+;//61
                                                        sr_cdbvalue(c_orcam[y,89]           )+','+;//62
                                                        sr_cdbvalue(SUBSTR(mped_merc[1,73],1,2)  )+','+;//63
                                                        sr_cdbvalue(c_orcam[y,80]           )+','+;//64
                                                        sr_cdbvalue(c_orcam[y,81]           )+','+;//65
                                                        sr_cdbvalue(c_orcam[y,82]           )+','+;//66
                                                        sr_cdbvalue(c_orcam[y,83]           )+','+;//67
                                                        sr_cdbvalue(c_orcam[y,84]           )+','+;//68
                                                        sr_cdbvalue(c_orcam[y,85]           )+','+;//69
                                                        sr_cdbvalue(c_orcam[y,93]           )+','+;//70
                                                        sr_cdbvalue(' ')+','+;//71
                                                        sr_cdbvalue(mnum_app)+','+;//72
                                                        sr_cdbvalue(DATE())+','+;//73
                                                        IF(EMPTY(mdata_app),'NULL',sr_cdbvalue(mdata_app))+','+; //73
                                                        sr_cdbvalue('00000')+','+;//75
                                                        sr_cdbvalue(' ')+')'
                                                        sr_getconnection():exec(ccomm,,.f.)
                                                //catch e
                                                //        tracelog(valtoprg())
                                                //        sr_COMMITtransaction()
                                                //END
                                                sr_committransaction()
                                        sr_endtransaction()
                                        //sr_getconnection():exec("COMMIT",,.f.)
                                        AADD(m_codigo,c_orcam[y,6])
                                        AADD(m_Cbarra,mped_merc[1,2])

                                        IF c_orcam[y,18] = 0
                                        *                              1            2        3           4         5            6          7         8           9         10        11          12        13         14           15          16          17        18       19   20        21         22         23        24          25        26        27       28      29      30       31       32       33         34         35        36        37        38          39
                                        *                          40      41    42      43     44
                                                AADD(m_matriz,{c_orcam[y,14],c_orcam[y,18],        0,mped_merc[1,7],c_orcam[y,7],mped_merc[1,14],mped_merc[1,17],       0,         0,mped_merc[1,30],mped_merc[1,31],mped_merc[1,21],mped_merc[1,61],mped_merc[1,23],c_orcam[y,53],mped_merc[1,62],mped_merc[1,16],mped_merc[1,44],mobs1,mobs2,mped_merc[1,73],mped_merc[1,65],mped_merc[1,15],c_orcam[y,10],mhoras,mped_merc[1,82],mped_merc[1,83],c_orcam[y,80],c_orcam[y,81],c_orcam[y,82],c_orcam[y,83],c_orcam[y,84],c_orcam[y,85],mped_merc[1,75],mped_merc[1,74],c_orcam[y,58],c_orcam[y,36],c_orcam[y,38],mped_merc[1,27],;
                                                               mped_merc[1,47],'  ',c_orcam[y,15],c_orcam[y,16],'00000'})
                                        ELSE            
                                                AADD(m_matriz,{c_orcam[y,14],c_orcam[y,18],c_orcam[y,39],mped_merc[1,7],c_orcam[y,7],mped_merc[1,14],mped_merc[1,17],c_orcam[y,20],mped_merc[1,45],mped_merc[1,30],mped_merc[1,31],mped_merc[1,21],mped_merc[1,61],mped_merc[1,23],mcomissao+mcomi_tab,mped_merc[1,62],mped_merc[1,16],mped_merc[1,44],mobs1,mobs2,mped_merc[1,73],mped_merc[1,65],mped_merc[1,15],menvelope,mhoras,mped_merc[1,82],mped_merc[1,83],c_orcam[y,80],c_orcam[y,81],c_orcam[y,82],c_orcam[y,83],c_orcam[y,84],c_orcam[y,85],mped_merc[1,75],mped_merc[1,74],c_orcam[y,58],c_orcam[y,36],c_orcam[y,38],mped_merc[1,27],;
                                                               mped_merc[1,47],'  ',c_orcam[y,15],c_orcam[y,16],'00000'})
                                        ENDIF
                                        IF mped_merc[1,14] = 'EV'
                                                AADD(m_alt,c_orcam[y,6]+' '+LEFT(mped_merc[1,9],27)+' '+c_orcam[y,10]+' '+TRANSFORM(c_orcam[y,14],'99999.99')+' '+TRANSFORM(c_orcam[y,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(c_orcam[y,18] * c_orcam[y,14],ALLTRIM('@E '+m_set[1,98])))
                                        ELSE
                                                AADD(m_alt,c_orcam[y,6]+' '+LEFT(mped_merc[1,9],38)+' '+TRANSFORM(c_orcam[y,14],'99999.99')+' '+TRANSFORM(c_orcam[y,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(c_orcam[y,18] * c_orcam[y,14],ALLTRIM('@E '+m_set[1,98])))
                                        ENDIF

                                        mlibera := ' '
                                        i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := mqtd_lin := 0
                                NEXT
                                mobs1 := c_orcam[1,86]
                                mobs2 := c_orcam[1,87]
                                mobs3 := c_orcam[1,88]
                                mobs4 := c_orcam[1,89]
                                mobs5 := c_orcam[1,113]
                                mobs6 := c_orcam[1,114]
                                mobs7 := c_orcam[1,115]
                                mobs8 := c_orcam[1,116]
                        ENDIF
                        //sr_getconnection():exec("UPDATE sacorcam SET ppag = '*' WHERE pnum_ped = "+sr_cdbvalue(orc)+" AND pcod_merc = "+sr_cdbvalue(c_orcam[y,6]),,.f.)
                        sr_getconnection():exec("UPDATE sacorcam SET ppag = '*' WHERE pnum_ped = "+sr_cdbvalue(orc),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ENDIF
                mlibera := ' '
                i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := 0
                //SETCOLOR('B/GR,W/B')
                botao(lci-3,cci,lba,cba)
                DrawLabel(lci-3,cci+10,'No.Pedido: '+STRZERO(mnum_ped,6),,,'Arial Black',25,15)
                mqtd_lin := 0
                mitem := 1
                cons_tela := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_tela)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_tela) > 10
                        mqtd_lin := LEN(cons_tela) - 10
                ENDIF
                IF ! EMPTY(mcod_cond)
                        @ lci+f,cci SAY ''
                        DrawLabel(lci+f,COL()+1,'Usando a Tabela:'+STRZERO(mcod_cond,3)+'-'+TRANSFORM(mperc,'999.99')+IF(! EMPTY(mtipo_preco),' - Preco:'+mtipo_preco,'')+IF(! EMPTY(cons_cli[1,59]),' [ Desc.Esp.:'+TRANSFORM((cons_cli[1,59] * -1),'9999.99')+' ] ',''),,, 'lucida console',14,7)
                        //WVW_DrawLabel(,lci+f,COL()+1,'Usando a Tabela:'+STRZERO(mcod_cond,3)+'-'+TRANSFORM(mperc,'999.99')+IF(! EMPTY(mtipo_preco),' - Preco:'+mtipo_preco,'')+IF(! EMPTY(cons_cli[1,59]),' [ Desc.Esp.:'+TRANSFORM((cons_cli[1,59] * -1),'9999.99')+' ] ',''),,,,, 'terminal',13,8,,,,,)
                        f++
                ELSEIF ! EMPTY(cons_cli[1,59]) .AND. op_cartao = 'N'
                        @ lci+f,cci SAY ''
                        DrawLabel(lci+f,COL()+1,'Cliente Desconto Especial: '+TRANSFORM((cons_cli[1,59]),'9999.99')+' %',,, 'lucida console',14,7)
                        //WVW_DrawLabel(,lci+f,COL()+1,'Cliente Desconto Especial: '+TRANSFORM((cons_cli[1,59]),'9999.99')+' %',,,,, 'terminal',13,8,,,,,)
                        f++
                ENDIF
                @ lci+f,cci SAY ''
                DrawLabel(lci+f,COL()+1,'Cliente:'+STR(cons_cli[1,2],5)+'-'+LEFT(cons_cli[1,3],15)+' - Vend.:'+mcod_ven+'-'+LEFT(mnome_ven,20),,, 'lucida console',14,7)

                //WVW_DrawLabel(,lci+f,COL()+1,'Cliente:'+STR(cons_cli[1,2],5)+'-'+LEFT(cons_cli[1,3],35)+' - Vend.:'+mcod_ven+'-'+LEFT(mnome_ven,25),,,,, 'terminal',13,8,,,,,)
                f++
                //WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),57),,,,, 'terminal',13,8,,,,,)
                f++
                @ lci+f,cci SAY ''
                DrawLabel(lci+f,COL()+1,'Item Cod.   Descricao           Quantd.   Vlr.Unit.   Vlr.Total',,m_color[8],'lucida console',14,7)
                //WVW_DrawLabel(,lci+f,COL(),'Item  Cod.  Descricao',,,,,  'terminal',13,11,,,,,)//                                      Quantd.   Vlr.Unit.   Vlr.Total'
                //f++
                //WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),104),,,,, 'terminal',13,8,,,,,)
                f++
                i:=0
                FOR i = 1 TO LEN(cons_tela)
                        mtot_desc := mtot_desc + iat((cons_tela[i,14] * cons_tela[i,20]),m_set[1,103])
                        msubtotal := msubtotal + iat((cons_tela[i,14] * cons_tela[i,18]),m_set[1,103])
                        mtot_custo:= mtot_custo + iat((cons_tela[i,14] * cons_tela[i,21]),m_set[1,103])
                        mtot_ipi := mtot_ipi + ((cons_tela[i,18] * cons_tela[i,14]) * (cons_tela[i,57]/100))
                        mlibera := ' '
                        SETCOLOR('W/b,W/b')
                        IF mqtd_lin < i
                                @ lci+f,cci SAY ''
                                IF EMPTY(m_cfg[6])
                                        DrawLabel(lci+f,COL()+1,' '+ALLTRIM(STR(i))+'  '+cons_tela[i,6]+' '+SUBSTR(cons_tela[i,7],1,18)+' '+TRANSFORM(cons_tela[i,14],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(cons_tela[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(cons_tela[i,18] * cons_tela[i,14],ALLTRIM('@E '+m_set[1,98])),,, 'lucida console',14,7)
                                ELSE
                                        DrawLabel(lci+f,COL()+1,' '+ALLTRIM(STR(i))+'  '+cons_tela[i,6]+' '+SUBSTR(cons_tela[i,7],1,18)+' '+TRANSFORM(cons_tela[i,14],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(cons_tela[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(cons_tela[i,18] * cons_tela[i,14],ALLTRIM('@E '+m_set[1,98])),,, 'lucida console',12,5)
                                ENDIF
                                IF cons_tela[i,8] = 'EV ' .OR. cons_tela[i,8] = 'PL '
                                        f++
                                        WVW_DrawLabel(,lci+f,COL()+8,cons_tela[i,10]+' '+cons_tela[i,80],,,,, 'lucida console',14,7,,,,,)
                                ENDIF
                                IF ! EMPTY(cons_tela[i,58])
                                        f++
                                        @ lci+f,cci SAY ''
                                        WVW_DrawLabel(,lci+f,COL(),'Obs.: '+cons_tela[i,58],,,,, 'lucida console',13,8,,,,,)
                                ENDIF
                                f++
                        ENDIF
                NEXT
                tela_ := {}
                tela_ := WVW_SAVESCREEN(,lci,cci,lba,cba-1)
                setcor(3)
                IF (mtot_desc - msubtotal) > 0
                        DEVPOS(46,2);DEVOUT(TRANSFORM(((mtot_desc - msubtotal)/mtot_desc)*100,'99.99'))
                        DEVPOS(51,2);DEVOUT(TRANSFORM((mtot_desc - msubtotal),'99,999.99'))
                        botao(42,40,47,60,,,'*')
                        DrawLabel(42,42,'Economia R$',,,'arial black',25,10)
                        DrawLabel(44,42,ALLTRIM(TRANSFORM(mtot_desc - msubtotal,'@E 99,999.99')),210,, 'arial black',45,15)
                        //botao(44,01,49,53,,,'*')
                        //WVW_DrawLabel(,45,02,'Economia R$:'+TRANSFORM(mtot_desc - msubtotal,'@E 99,999.99'),,,210,, 'arial black',40,17,,,,,)

                ELSE
                        DEVPOS(46,2);DEVOUT(TRANSFORM(0,'99.99'))
                        DEVPOS(51,2);DEVOUT(TRANSFORM(0,'99,999.99'))
                ENDIF
                DEVPOS(36,2);DEVOUTPICT(mtot_ipi,'99,999.99')
                DEVPOS(41,2);DEVOUTPICT(msubtotal+mtot_ipi,ALLTRIM('@E '+m_set[1,98]))

                botao(35,40,40,60,,,'*')
                DrawLabel(35,42,'TOTAL DAS VENDAS',,,'arial black',25,10)
                DrawLabel(37,42,ALLTRIM(TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98]))),210,, 'arial black',45,15)
                setcor(1)
                limpa(28,26,33,48)
                //ATENCAO('OK')
                malterou := ' '
                mmerc := SPACE(40)
                IF mpre = ' '
                        mcod_bc := SPACE(14)
                ENDIF
                mcod_merc := mdesconto := mvlr_fat := mpromocao := 0
                IF(mquantd > 1,mquantd,mquantd=1)
                //menvelope := SPACE(10)
                f4 := ' '
                setcor(1)
                // ATIVA O FECHAMENTO DO PEDIDO
                SET KEY -9 TO fecha_pd('1')       // neste mesmo PRG. <F10>Tecla
                mensagem('<F10>Fechamento  - <X mais a qtd.>Informa Qtd. - <TAB>Cond.Pagamento - <PD>Recuperar Pedido - <ESC>Sair')
                SET KEY -7 TO F8_PROD()
                mloop := 0
                @ 11,2 GET mcod_bc PICT '@!'
                READ
                IF ALLTRIM(mcod_bc) = 'ORCAMENTO' .OR. ALLTRIM(mcod_bc) = 'ORC'
                        IF LEN(m_codigo) > 0
                                atencao('Nao e possivel Incluir este orcamento neste pedido porque ja foi Incluso algum Produto...')
                                LOOP
                        ENDIF
                        mnum_orc := 0
                        op_tela(10,10,12,80,'Numero do Orcamento')
                        DEVPOS(01,01);DEVOUT('Digite o Numero do Orcamento:')
                        @ 01,31 GET mnum_orc PICT '999999'
                        READ
                        //ali := 'ped_s'
                        c_orcam := {}
                        sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_orc,6)),,.t.,@c_orcam)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(c_orcam) = 0
                                atencao('Nao foi possivel encontrar este ORCAMENTO...')
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        opcao := op_simnao('S','Confirma o ORCAMENTO para PEDIDO:')
                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        wvw_lclosewindow()
                        i:=ok:=0
                        FOR i = 1 TO LEN(c_orcam)
                                aret:={}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_orcam[i,6]),,.t.,@aret)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF c_orcam[i,14] > aret[1,56] .AND. (m_set[1,107] = "P" .OR. m_set[1,107] = "2") .AND. SUBSTR(aret[1,9],1,1) <> '@'
                                        atencao('Produto: '+c_orcam[i,6]+' com saldo a menor....')
                                        LOOP
                                ELSE
                                        ok := 1
                                        EXIT
                                ENDIF
                                EXIT
                        NEXT
                        IF EMPTY(ok)
                                LOOP
                        ENDIF
                        mcod_cli := c_orcam[1,23]
                        cons_cli := {}
                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_cli) = 0
                                atencao('Nao foi encontrado este CLIENTE verifique este ORCAMENTO....')
                                LOOP
                        ENDIF
                        IF m_set[1,10] <> 'S'
                                mcod_aux  := cons_cli[1,106]
                                mcod_ven := cod_operado
                        ENDIF
                        mcgc := cons_cli[1,32]
                        mcpf := cons_cli[1,34]
                        minsc:= cons_cli[1,33]
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
                                        IF mcod_cond > 0
                                                mav_ap := 'P'
                                        ENDIF
	                       	ENDIF
                        ENDIF
                        mtp_venda := c_orcam[1,45]
                        //IF LEN(m_codigo) = 0 .AND. mnum_ped = 0
                                mensagem('Aguarde um momento Gerando NUMERO para o PEDIDO....')

                                gerar_no_ped()

                                /*
                                //sr_starttrace()
                                lExit := .T.
                                WHILE lExit
                                        sr_begintransaction()
                                        try
                                                aret:={}
                                                //sr_getconnection():exec( "select numero from sacnoped where sr_recno = 1 for update with lock",,.t.,@aret)
                                                sr_getconnection():exec( "select MAX(numero) from sacnoped",,.t.,@aret)
                                                mnum_ped = VAL(aret[1,1])+1
                                                mnum = strzero(VAL(aret[1,1])+1,6)
                                                sr_getconnection():exec("update sacnoped set numero = " + sr_cdbvalue(mnum) + ", data_ped = " + sr_cdbvalue( mdata_sis),,.f.)
                                                sr_committransaction()
                                                lExit:=.T.
                                        catch e
                                                tracelog(valtoprg())
                                                sr_COMMITtransaction()
                                                lExit:=.F.
                                        END
                                        //sr_endtransaction()
                                        sr_getconnection():exec("COMMIT",,.f.)
                                END
                                */
                                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO PEDIDOS No.:'+STRZERO(mnum_ped,6)+SPACE(30)+'Terminal: '+m_indiv[1,1])
                        //ENDIF
                        mobs1 := c_orcam[1,86]
                        mobs2 := c_orcam[1,87]
                        mobs3 := c_orcam[1,88]
                        mobs4 := c_orcam[1,89]
                        mobs5 := c_orcam[1,113]
                        mobs6 := c_orcam[1,114]
                        mobs7 := c_orcam[1,115]
                        mobs8 := c_orcam[1,116]
                        i:=0
                        FOR i = 1 TO LEN(c_orcam)
                                aret:={}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_orcam[i,6]),,.t.,@aret)
                                sr_getconnection():exec('COMMIT',,.f.)
	                        IF aret[1,103] = 'S' .AND. c_orcam[i,14] > aret[1,56]
        	                        atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                	                LOOP
	                        ENDIF
                                // FRIPAL, FRANGO DOURADO OU DISCAPE
                                IF c_orcam[i,46] < (aret[1,45] * 1.10) .AND. (ver_serie() = '141597' .OR. ver_serie() = '141390' .OR. ver_serie() = '141336')
                                        atencao('Cod.Prod...: '+aret[1,8]+m_qp+;
                                                'Vlr.p/Produto Solic.: '+ALLTRIM(TRANSFORM(c_orcam[i,46],'999,999,999.99'))+m_qp+;
                                                'Valor Minimo R$.....: '+ALLTRIM(TRANSFORM(aret[1,45] * 1.10,'999,999.99')))
                                        LOOP
                                ENDIF

	                        IF c_orcam[i,14] > aret[1,56] .AND. (m_set[1,107] = "P" .OR. m_set[1,107] = "2") .AND. SUBSTR(aret[1,9],1,1) <> '@'
        	                        IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(c_orcam[i,14],'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(aret[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,c_orcam[i,6])
                	                        LOOP
                        	        ENDIF
	                        ENDIF
	                        
/*
                                IF c_orcam[i,14] > aret[1,56] .AND. m_set[1,107] = 'S' .AND. SUBSTR(aret[1,9],1,1) <> '@'
                                        LOOP
                                ENDIF
*/
                                mlinha := aret[1,2]     //+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] - c_orcam[i,14])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                                //sr_begintransaction()
                                        //try
                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] - c_orcam[i,14])+",data_atu = "+sr_cdbvalue(mdata_sis)+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(c_orcam[i,6]),,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
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
                                                                        sr_cdbvalue(c_orcam[i,6])+','+; //4
                                                                        sr_cdbvalue(c_orcam[i,14])+','+; //5
                                                                        sr_cdbvalue(aret[1,56])+','+; //6
                                                                        sr_cdbvalue(aret[1,56] - c_orcam[i,14])+','+; //7
                                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                                        sr_cdbvalue('SAC23PD1')+','+; //9
                                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                        sr_cdbvalue('INCLUSAO PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                        sr_cdbvalue('S')+','+; //11
                                                                        sr_cdbvalue(' ')+')',,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
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
                                                              +'data_so,'   ;//72
                                                              +'data_app,'   ;//72
                                                              +'cod_pres,'  ;//72
                                                              +'obs_visita' //72
                                                cComm  := 'INSERT INTO sacped_s ('+mcampo_ped+',sr_deleted) VALUES ('
                                                cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                                                sr_cdbvalue(STRZERO(mnum_ped,6)     )+','+;//2
                                                sr_cdbvalue(SUBSTR(NETNAME(),1,10)  )+','+;//3
                                                sr_cdbvalue(mdata_pedido            )+','+;//4
                                                sr_cdbvalue(aret[1,7]               )+','+;//5
                                                sr_cdbvalue(c_orcam[i,6]            )+','+;//6
                                                sr_cdbvalue(c_orcam[i,7]            )+','+;//7
                                                sr_cdbvalue(aret[1,14]              )+','+;//8
                                                sr_cdbvalue(aret[1,15]              )+','+;//9
                                                sr_cdbvalue(IF(! EMPTY(c_orcam[i,26]),c_orcam[i,26],c_orcam[i,10]))+','+;//10
                                                sr_cdbvalue(aret[1,17]              )+','+;//11
                                                sr_cdbvalue(aret[1,16]              )+','+;//12
                                                sr_cdbvalue(aret[1,74]              )+','+;//13
                                                sr_cdbvalue(c_orcam[i,14]           )+','+;//14
                                                sr_cdbvalue(c_orcam[i,15]           )+','+;//15
                                                sr_cdbvalue(c_orcam[i,16]           )+','+;//16
                                                sr_cdbvalue(c_orcam[i,17]           )+','+;//17
                                                sr_cdbvalue(c_orcam[i,39]           )+','+;//18
                                                sr_cdbvalue(iat(c_orcam[i,18])      )+','+;//19
                                                sr_cdbvalue(c_orcam[i,20]           )+','+;//20
                                                sr_cdbvalue(aret[1,47]              )+','+;//21
                                                sr_cdbvalue(aret[1,45]              )+','+;//22
                                                sr_cdbvalue(aret[1,44]              )+','+;//23
                                                sr_cdbvalue(c_orcam[i,23]           )+','+;//24
                                                sr_cdbvalue(c_orcam[i,24]           )+','+;//25
                                                sr_cdbvalue(c_orcam[i,25]           )+','+;//26
                                                sr_cdbvalue(c_orcam[i,26]           )+','+;//27
                                                sr_cdbvalue(c_orcam[i,27]           )+','+;//28
                                                sr_cdbvalue(c_orcam[i,28]           )+','+;//29
                                                sr_cdbvalue(c_orcam[i,29]           )+','+;//30
                                                sr_cdbvalue(aret[1,30]              )+','+;//31
                                                sr_cdbvalue(LEFT(aret[1,31],30)     )+','+;//32
                                                sr_cdbvalue(cod_operado             )+','+;//33
                                                sr_cdbvalue(c_orcam[i,35]           )+','+;//34
                                                sr_cdbvalue(c_orcam[i,32]           )+','+;//35
                                                sr_cdbvalue(c_orcam[i,33]           )+','+;//36
                                                sr_cdbvalue(aret[1,21]              )+','+;//37
                                                sr_cdbvalue(STRZERO(0,3)            )+','+;//38
                                                sr_cdbvalue(STRZERO(0,3)            )+','+;//39
                                                sr_cdbvalue(0                       )+','+;//40
                                                sr_cdbvalue(0                       )+','+;//41
                                                sr_cdbvalue(' '                     )+','+;//42
                                                sr_cdbvalue(mhoras                  )+','+;//43
                                                sr_cdbvalue(c_orcam[i,45]           )+','+;//44
                                                sr_cdbvalue(0                       )+','+;//45
                                                sr_cdbvalue(aret[1,61]              )+','+;//46
                                                sr_cdbvalue(aret[1,23]              )+','+;//47
                                                sr_cdbvalue(c_orcam[i,36]           )+','+;//48
                                                sr_cdbvalue(c_orcam[i,38]           )+','+;//49
                                                sr_cdbvalue(c_orcam[i,53]           )+','+;//50
                                                sr_cdbvalue(aret[1,27]              )+','+;//51
                                                sr_cdbvalue(aret[1,75]              )+','+;//52
                                                sr_cdbvalue(aret[1,62]              )+','+;//53
                                                sr_cdbvalue(aret[1,65]              )+','+;//54
                                                sr_cdbvalue(c_orcam[i,58]           )+','+;//55
                                                sr_cdbvalue(aret[1,82]              )+','+;//56
                                                sr_cdbvalue(' '                     )+','+;//57
                                                sr_cdbvalue(aret[1,83]              )+','+;//58
                                                sr_cdbvalue(c_orcam[i,86]           )+','+;//59
                                                sr_cdbvalue(c_orcam[i,87]           )+','+;//60
                                                sr_cdbvalue(c_orcam[i,88]           )+','+;//61
                                                sr_cdbvalue(c_orcam[i,89]           )+','+;//62
                                                sr_cdbvalue(SUBSTR(aret[1,73],1,2)  )+','+;//63
                                                sr_cdbvalue(c_orcam[i,80]           )+','+;//64
                                                sr_cdbvalue(c_orcam[i,81]           )+','+;//65
                                                sr_cdbvalue(c_orcam[i,82]           )+','+;//66
                                                sr_cdbvalue(c_orcam[i,83]           )+','+;//67
                                                sr_cdbvalue(c_orcam[i,84]           )+','+;//68
                                                sr_cdbvalue(c_orcam[i,85]           )+','+;//69
                                                sr_cdbvalue(c_orcam[i,93]           )+','+;//70
                                                sr_cdbvalue(' ')+','+;//71
                                                sr_cdbvalue(mnum_app)+','+;//72
                                                sr_cdbvalue(DATE()                  )+','+;//73
                                                IF(EMPTY(mdata_app),'NULL',sr_cdbvalue(mdata_app))+','+; //73
                                                sr_cdbvalue('00000'                 )+','+;//74
                                                sr_cdbvalue(c_orcam[i,110]           )+','+;//70
                                                sr_cdbvalue(' ')+')'
                                                sr_getconnection():exec(ccomm,,.f.)
                                        //catch e
                                        //        tracelog(valtoprg())
                                        //        sr_COMMITtransaction()
                                        //END
                                        sr_committransaction()
                                //sr_endtransaction()
                                AADD(m_codigo,c_orcam[i,6])
                                AADD(m_Cbarra,aret[1,2])
                                IF c_orcam[i,18] = 0
                                *                              1            2        3           4         5            6          7         8           9         10        11          12        13         14           15          16          17        18       19   20        21         22         23        24          25        26        27       28      29      30       31       32       33         34         35        36        37        38          39
                                *                          40      41    42      43     44
                                        AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],        0,aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],       0,         0,aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],c_orcam[i,53],aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],c_orcam[i,10],mhoras,aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
                                                       aret[1,47],'  ',c_orcam[i,15],c_orcam[i,16],'00000'})
                                ELSE
                                        AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],c_orcam[i,39],aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],c_orcam[i,20],aret[1,45],aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,mhoras,aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
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
                        mobs5 := c_orcam[1,113]
                        mobs6 := c_orcam[1,114]
                        mobs7 := c_orcam[1,115]
                        mobs8 := c_orcam[1,116]
                        LOOP
                ELSEIF ALLTRIM(mcod_bc) = 'PD'	//RESTAURAR O PEDIDO
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
			        	        AADD(m_ped,DTOC(c_orcam[i,4])+'  '+c_orcam[i,1]+'  '+TRANSFORM(c_orcam[i,3],'999,999.99')+'  '+cons_cli[1,2]+' - '+cons_cli[1,3])
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
                        /*
                        IF ! EMPTY(c_orcam[1,100])
				atencao('Este Pedido ja foi FECHADO Faca um ALTERACAO no mesmo ....')
        	        	wvw_lclosewindow()
				LOOP
			ENDIF
			*/
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
                                IF mcod_cond = 0
                                        mcod_cond := VAL(cons_cli[1,133])
                                ENDIF
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
                                        IF mcod_cond > 0
                                                mav_ap := 'P'
                                        ENDIF
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
                                        AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],        0,aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],       0,         0,aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],c_orcam[i,53],aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],c_orcam[i,10],mhoras,aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
                                                       aret[1,47],'  ',c_orcam[i,15],c_orcam[i,16],'00000'})
                                ELSE
                                        AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],c_orcam[i,39],aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],c_orcam[i,20],aret[1,45],aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,mhoras,aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
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
                        mobs5 := c_orcam[1,113]
                        mobs6 := c_orcam[1,114]
                        mobs7 := c_orcam[1,115]
                        mobs8 := c_orcam[1,116]
                        LOOP
                ENDIF
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
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@mped_merc)
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
                IF LASTKEY() = 27
                        IF LEN(m_codigo) = 0 .AND. mnum_ped = 0
	                        SET KEY -2 TO
        	                SET KEY -7 TO
                                m_codigo := {}
                                m_matriz := {}
                                IF m_indiv[1,26] = 'T' .OR. m_indiv[1,26] = 'P'
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                                EXIT
                        ENDIF
                        SET KEY -2 TO
                        SET KEY -7 TO
                        c_ped := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF EMPTY(c_ped[1,100])
        			IF 'N' = op_simnao('S','Deseja Sair o Pedido:')
                                        LOOP
                                ENDIF
        			IF 'N' = op_simnao('N','Deseja CANCELAR este Pedido de No. '+STRZERO(mnum_ped,6)+':') .AND. ver_serie() <> '141237' .AND. ver_serie() <> '141525' .AND. ver_serie() <> '141414'
	              	                SET KEY -2 TO
                		        SET KEY -7 TO
                        	        m_codigo := {}
                                	m_matriz := {}
                                        IF m_indiv[1,26] = 'T'
                                        	wvw_lclosewindow()
	                                        RETURN NIL
                                        ENDIF
                                        EXIT
                                ENDIF
                                IF ! aut_sen('Deseja CANCELAR este Pedido: '+STRZERO(mnum_ped,6)+' - Senha de Liberacao','LIB_PED',,,,,STRZERO(mnum_ped,6))
                                        LOOP
                                ENDIF
                                i := 0
                                FOR i = 1 TO LEN(c_ped)
                                        IF ! EMPTY(c_ped[i,80])
                                                sr_getconnection():exec("UPDATE merc_det SET venda = NULL,n_ped = NULL WHERE codigo = "+sr_cdbvalue(c_ped[i,6])+" .AND. chassis = "+sr_cdbvalue(c_ped[i,80]),,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        mensagem('Atualizando o SALDO DA MERCADORIA... Aguarde')
                                        aret:={}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_ped[i,6]),,.t.,@aret)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        mlinha := aret[1,2]     //+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] + c_ped[i,14])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                                        sr_begintransaction()
                                                //try
                                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] + c_ped[i,14])+",data_atu = "+sr_cdbvalue(mdata_sis)+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(c_ped[i,6]),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
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
                                                                                sr_cdbvalue(c_ped[i,6])+','+; //4
                                                                                sr_cdbvalue(c_ped[i,14])+','+; //5
                                                                                sr_cdbvalue(IF(EMPTY(aret[1,56]),0,aret[1,56]))+','+; //6
                                                                                sr_cdbvalue(aret[1,56] + c_ped[i,14])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC34')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue('CANCELAR PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                                sr_cdbvalue('E')+','+; //11
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                //catch e
                                                //        tracelog(valtoprg())
                                                //        sr_COMMITtransaction()
                                                //END
                                                mensagem('Atualizando o OCORRENCIA... Aguarde')
                                                //try
                                                        sr_getconnection():exec('INSERT INTO sacocorr (tipo,documento,data_exe,hora_exe,cod_oper,data_oco,hora_oco,cod_vend,codigo,quantd,saldo_atu,saldo_exe,pedido,obs,sr_deleted) VALUES ('+;      //?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? , ' ')"
                                                                                sr_cdbvalue('CAN')+','+; //1
                                                                                sr_cdbvalue(STRZERO(mnum_ped,6))+','+; //2
                                                                                sr_cdbvalue(mdata_sis)+','+; //3
                                                                                sr_cdbvalue(TIME())+','+; //4
                                                                                sr_cdbvalue(cod_operado)+','+; //5
                                                                                sr_cdbvalue(c_ped[i,4])+','+; //6
                                                                                sr_cdbvalue(c_ped[i,47])+','+; //7
                                                                                sr_cdbvalue(c_ped[i,32])+','+; //8
                                                                                sr_cdbvalue(c_ped[i,6])+','+;//9
                                                                                sr_cdbvalue(c_ped[i,14])+','+;//10
                                                                                sr_cdbvalue(aret[1,56])+','+; //11
                                                                                sr_cdbvalue(aret[1,56] + c_ped[i,14])+','+;//12
                                                                                sr_cdbvalue('S')+','+;//13
                                                                                sr_cdbvalue('CANCELAR PEDIDO EM ANDAMENTO No.: '+STRZERO(mnum_ped,6))+','+;//14
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                //catch e
                                                //        tracelog(valtoprg())
                                                //        sr_COMMITtransaction()
                                                //END
                                                sr_committransaction()
                                        sr_endtransaction()
                                NEXT
                                mensagem('Atualizando o CANCELANDO NO CAIXA... Aguarde')                                               //  1 2 3 4 5 6 7 8
                                sr_begintransaction()
                                        //try
                                                sr_getconnection():exec("INSERT INTO saccaixa (empresa,tipo,data,nota,descri1,descri2,cod_opera,hora,sr_deleted) VALUES ("+;    //?,?,?,?,?,?,?,?,' ')"
                                                                                sr_cdbvalue(mcodempresa)+','+; //1
                                                                                sr_cdbvalue('CA')+','+; //2
                                                                                sr_cdbvalue(mdata_sis)+','+; //3
                                                                                sr_cdbvalue('PD'+STRZERO(mnum_ped,6))+','+; //4
                                                                                sr_cdbvalue('Pedido CANCELADO')+','+; //5
                                                                                sr_cdbvalue(LEFT('(PEDIDO EM ANDAMENTO No.: '+STRZERO(mnum_ped,6),37)+')')+','+; //6
                                                                                sr_cdbvalue(cod_operado)+','+; //7
                                                                                sr_cdbvalue(TIME())+','+; //8
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                        //catch e
                                        //        tracelog(valtoprg())
                                        //        sr_COMMITtransaction()
                                        //END
                                        //try
                                		sr_getconnection():exec("UPDATE sacped_s SET ppag = 'C',pdatapag = "+sr_cdbvalue(mdata_sis)+",pautoriz = "+sr_cdbvalue(cod_operado)+",pent_por = "+sr_cdbvalue(cod_operado)+",pent_dat = "+sr_cdbvalue(mdata_sis)+",pmotivo = "+sr_cdbvalue('CANCELAR PEDIDO EM ANDAMENTO No.: '+STRZERO(mnum_ped,6))+",phora_pg = "+sr_cdbvalue(TIME())+" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                                sr_getconnection():exec("UPDATE cnnt_pedido SET status_ped = 'FINALIZADO',obs_pc = "+sr_cdbvalue('PEDIDO No.: '+STRZERO(mnum_ped,6)+' CANCELADO')+",importado = 1 WHERE codigo = "+sr_cdbvalue(VAL(c_ped[1,94]))+" AND cod_funcionario = "+sr_cdbvalue(c_ped[1,32]),,.f.)

                                        //catch e
                                        //        tracelog(valtoprg())
                                        //        sr_COMMITtransaction()
                                        //END
                                        sr_committransaction()
                                sr_endtransaction()
                                sr_getconnection():exec('COMMIT',,.f.)
                                EXIT
                        ELSE
                                IF ! aut_sen('Deseja CANCELAR este Pedido: '+STRZERO(mnum_ped,6)+' - Senha de Liberacao','LIB_PED',,,,,STRZERO(mnum_ped,6))
                                        LOOP
                                ENDIF
                                i := 0
                                FOR i = 1 TO LEN(c_ped)
                                        IF ! EMPTY(c_ped[i,80])
                                                sr_getconnection():exec("UPDATE merc_det SET venda = NULL,n_ped = NULL WHERE codigo = "+sr_cdbvalue(c_ped[i,6])+" .AND. chassis = "+sr_cdbvalue(c_ped[i,80]),,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        mensagem('Atualizando o SALDO DA MERCADORIA... Aguarde')
                                        aret:={}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_ped[i,6]),,.t.,@aret)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] + c_ped[i,14])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                                        sr_begintransaction()
                                                //try
                                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] + c_ped[i,14])+",data_atu = "+sr_cdbvalue(mdata_sis)+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(c_ped[i,6]),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
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
                                                                                sr_cdbvalue(c_ped[i,6])+','+; //4
                                                                                sr_cdbvalue(c_ped[i,14])+','+; //5
                                                                                sr_cdbvalue(IF(EMPTY(aret[1,56]),0,aret[1,56]))+','+; //6
                                                                                sr_cdbvalue(aret[1,56] + c_ped[i,14])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC34')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue('CANCELAR PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                                sr_cdbvalue('E')+','+; //11
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                //catch e
                                                //        tracelog(valtoprg())
                                                //        sr_COMMITtransaction()
                                                //END

                                                        mensagem('Atualizando o OCORRENCIA... Aguarde')
                                                //try
                                                        sr_getconnection():exec('INSERT INTO sacocorr (tipo,documento,data_exe,hora_exe,cod_oper,data_oco,hora_oco,cod_vend,codigo,quantd,saldo_atu,saldo_exe,pedido,obs,sr_deleted) VALUES ('+;      //?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? , ' ')"
                                                                                sr_cdbvalue('CAN')+','+; //1
                                                                                sr_cdbvalue(STRZERO(mnum_ped,6))+','+; //2
                                                                                sr_cdbvalue(mdata_sis)+','+; //3
                                                                                sr_cdbvalue(TIME())+','+; //4
                                                                                sr_cdbvalue(cod_operado)+','+; //5
                                                                                sr_cdbvalue(c_ped[i,4])+','+; //6
                                                                                sr_cdbvalue(c_ped[i,47])+','+; //7
                                                                                sr_cdbvalue(c_ped[i,32])+','+; //8
                                                                                sr_cdbvalue(c_ped[i,6])+','+;//9
                                                                                sr_cdbvalue(c_ped[i,14])+','+;//10
                                                                                sr_cdbvalue(aret[1,56])+','+; //11
                                                                                sr_cdbvalue(aret[1,56] + c_ped[i,14])+','+;//12
                                                                                sr_cdbvalue('S')+','+;//13
                                                                                sr_cdbvalue('CANCELAR PEDIDO EM ANDAMENTO No.: '+STRZERO(mnum_ped,6))+','+;//14
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                //catch e
                                                //        tracelog(valtoprg())
                                                //        sr_COMMITtransaction()
                                                //END
                                                sr_committransaction()
                                        sr_endtransaction()
                                NEXT
                                mensagem('Atualizando o CANCELANDO NO CAIXA... Aguarde')                                               //  1 2 3 4 5 6 7 8
                                sr_begintransaction()
                                        //try
                                                sr_getconnection():exec("INSERT INTO saccaixa (empresa,tipo,data,nota,descri1,descri2,cod_opera,hora,sr_deleted) VALUES ("+;    //?,?,?,?,?,?,?,?,' ')"
                                                                                sr_cdbvalue(mcodempresa)+','+; //1
                                                                                sr_cdbvalue('CA')+','+; //2
                                                                                sr_cdbvalue(mdata_sis)+','+; //3
                                                                                sr_cdbvalue('PD'+STRZERO(mnum_ped,6))+','+; //4
                                                                                sr_cdbvalue('Pedido CANCELADO')+','+; //5
                                                                                sr_cdbvalue(LEFT('(PEDIDO EM ANDAMENTO No.: '+STRZERO(mnum_ped,6),37)+')')+','+; //6
                                                                                sr_cdbvalue(cod_operado)+','+; //7
                                                                                sr_cdbvalue(TIME())+','+; //8
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                        //catch e
                                        //        tracelog(valtoprg())
                                        //        sr_COMMITtransaction()
                                        //END
                                        //try
                                		sr_getconnection():exec("UPDATE sacped_s SET ppag = 'C',pdatapag = "+sr_cdbvalue(mdata_sis)+",pautoriz = "+sr_cdbvalue(cod_operado)+",pent_por = "+sr_cdbvalue(cod_operado)+",pent_dat = "+sr_cdbvalue(mdata_sis)+",pmotivo = "+sr_cdbvalue('CANCELAR PEDIDO EM ANDAMENTO No.: '+STRZERO(mnum_ped,6))+",phora_pg = "+sr_cdbvalue(TIME())+" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                                sr_getconnection():exec("UPDATE cnnt_pedido SET status_ped = 'FINALIZADO',obs_pc = "+sr_cdbvalue('PEDIDO No.: '+STRZERO(mnum_ped,6)+' CANCELADO')+",importado = 1 WHERE codigo = "+sr_cdbvalue(VAL(c_ped[1,94]))+" AND cod_funcionario = "+sr_cdbvalue(c_ped[1,32]),,.f.)
                                        //catch e
                                        //        tracelog(valtoprg())
                                        //        sr_COMMITtransaction()
                                        //END
                                        sr_committransaction()
                                sr_endtransaction()
                                EXIT
                        ENDIF
                ENDIF
                IF mflag = 0
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_bc)
                        IF mcod_bc = 'TAB'
                                mcont := 0
                                mcod_tab := SPACE(3)
                                mcod_tab := sac20()
                                cons_tabpg := {}
                                sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(mcod_tab),,.t.,@cons_tabpg)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                mcod_cond   := VAL(mcod_tab)
                                mcons_tabpg := cons_tabpg[1,6]
                                mtipo_preco := cons_tabpg[1,24]
                                mcomi_tab   := cons_tabpg[1,22]
                                mcond_veze := cons_tabpg[1,6]
                                mprz := cons_tabpg[1,7]
                                mperc := cons_tabpg[1,5]
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
                                IF mcod_cond > 0
                                        mav_ap := 'P'
                                ENDIF
                                m_codigo := {}
                                m_Cbarra := {}
                                m_matriz := {}
                                c_ped := {}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_ped)
                                sr_getconnection():exec('COMMIT',,.f.)
                                FOR mcont = 1 TO LEN(c_ped)
                                        m_produto := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_ped[mcont,6]),,.t.,@m_produto)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF ! EMPTY(cons_tabpg[1,24])
                                                IF cons_tabpg[1,24] = '1'
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(iat(m_produto[1,46]))+",ppre_venda = "+sr_cdbvalue(m_produto[1,46])+",ppre_dig = "+sr_cdbvalue(m_produto[1,46])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := iat(m_produto[1,46])
                                                ELSEIF cons_tabpg[1,24] = '2'
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(iat(m_produto[1,47]))+",ppre_venda = "+sr_cdbvalue(m_produto[1,47])+",ppre_dig = "+sr_cdbvalue(m_produto[1,47])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := iat(m_produto[1,47])
                                                ELSEIF cons_tabpg[1,24] = '3'
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(iat(m_produto[1,100]))+",ppre_venda = "+sr_cdbvalue(m_produto[1,100])+",ppre_dig = "+sr_cdbvalue(m_produto[1,100])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := iat(m_produto[1,100])
                                                ELSEIF cons_tabpg[1,24] = '4'
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(iat(m_produto[1,101]))+",ppre_venda = "+sr_cdbvalue(m_produto[1,101])+",ppre_dig = "+sr_cdbvalue(m_produto[1,101])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := iat(m_produto[1,101])
                                                ELSE
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(iat(m_produto[1,102]))+",ppre_venda = "+sr_cdbvalue(m_produto[1,102])+",ppre_dig = "+sr_cdbvalue(m_produto[1,102])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := iat(m_produto[1,102])
                                                ENDIF
                                                sr_getconnection():exec(ccomm,,.f.)
                                                mtipo_preco := cons_tabpg[1,24]
                                        ELSE
                                                IF cons_tabpg[1,5] =  0
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(iat(m_produto[1,46]))+",ppre_venda = "+sr_cdbvalue(m_produto[1,46])+",ppre_dig = "+sr_cdbvalue(m_produto[1,46])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := iat(m_produto[1,46])
                                                ELSE
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(iat(m_produto[1,46]) *  ((cons_tabpg[1,5]/100)+1))+",ppre_venda = "+sr_cdbvalue(m_produto[1,46] *  ((cons_tabpg[1,5]/100)+1))+",ppre_dig = "+sr_cdbvalue(m_produto[1,46] *  ((cons_tabpg[1,5]/100)+1)) +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := iat(m_produto[1,46] *  ((cons_tabpg[1,5]/100)+1))
                                                ENDIF
                                                sr_getconnection():exec(ccomm,,.f.)
                                        ENDIF
                                        AADD(m_codigo,c_ped[mcont,6])
                                        AADD(m_Cbarra,m_produto[1,2])

                                        mvlr_fat := iat(mvlr_fat,m_produto[1,81])

                                        IF mvlr_fat = 0
                                        *                               1         2         3             4           5             6                  7         8           9         10                  11            12               13            14             15                16          17                 18                19           20                  21            22               23            24           25                 26              27       28      29      30       31       32       33         34         35        36        37        38          39
                                        *                          40      41    42      43     44
                                                AADD(m_matriz,{c_ped[mcont,14],mvlr_fat,        0,c_ped[mcont,5],m_produto[1,2],c_ped[mcont,8],c_ped[mcont,11],       0,         0,c_ped[mcont,30],c_ped[mcont,31],c_ped[mcont,48],c_ped[mcont,51],c_ped[mcont,52],c_ped[mcont,53],c_ped[mcont,56],c_ped[mcont,12],c_ped[mcont,22],c_ped[mcont,86],c_ped[mcont,87],c_ped[mcont,92],c_ped[mcont,57],c_ped[mcont,9],c_ped[mcont,10],c_ped[mcont,47],c_ped[mcont,78],c_ped[mcont,79],c_ped[mcont,80],c_ped[mcont,81],c_ped[mcont,82],c_ped[mcont,83],c_ped[mcont,84],c_ped[mcont,85],c_ped[mcont,55],c_ped[mcont,13],c_ped[mcont,58],c_ped[mcont,36],c_ped[mcont,38],c_ped[mcont,37],;
                                                               c_ped[mcont,19],'  ',c_ped[mcont,15],c_ped[mcont,16],c_ped[mcont,99]})
                                        ELSE
                                                AADD(m_matriz,{c_ped[mcont,14],mvlr_fat,c_ped[mcont,39],c_ped[mcont,5],m_produto[1,2],c_ped[mcont,8],c_ped[mcont,11],mvlr_fat,c_ped[mcont,21],c_ped[mcont,30],c_ped[mcont,31],c_ped[mcont,48],c_ped[mcont,51],c_ped[mcont,52],c_ped[mcont,53],c_ped[mcont,56],c_ped[mcont,12],c_ped[mcont,22],c_ped[mcont,86],c_ped[mcont,87],c_ped[mcont,92],c_ped[mcont,57],c_ped[mcont,9],c_ped[mcont,10],c_ped[mcont,47],c_ped[mcont,78],c_ped[mcont,79],c_ped[mcont,80],c_ped[mcont,81],c_ped[mcont,82],c_ped[mcont,83],c_ped[mcont,84],c_ped[mcont,85],c_ped[mcont,55],c_ped[mcont,13],c_ped[mcont,58],c_ped[mcont,36],c_ped[mcont,38],c_ped[mcont,37],;
                                                               c_ped[mcont,19],'  ',c_ped[mcont,15],c_ped[mcont,16],c_ped[mcont,99]})
                                        ENDIF
                                        IF m_produto[1,14] = 'EV'
                                                AADD(m_alt,c_ped[mcont,6]+' '+LEFT(m_produto[1,9],27)+' '+menvelope+' '+TRANSFORM(c_ped[mcont,14],'99999.99')+' '+TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(mvlr_fat * c_ped[mcont,14],ALLTRIM('@E '+m_set[1,98])))
                                        ELSE
                                                AADD(m_alt,c_ped[mcont,6]+' '+LEFT(m_produto[1,9],38)+' '+TRANSFORM(c_ped[mcont,14],'99999.99')+' '+TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(mvlr_fat * c_ped[mcont,14],ALLTRIM('@E '+m_set[1,98])))
                                        ENDIF
                                NEXT
                                sr_getconnection():exec('COMMIT',,.f.)
                                LOOP
                        ELSEIF mcod_bc = 'ALT'
                                IF LEN(M_MATRIZ) = 0
                                        atencao('Nao tem nenhum produto neste PEDIDO para ser alterado....')
                                        LOOP
                                ENDIF
                                alt_prod2()
                                LOOP
                        /*
                        ELSEIF mcod_bc = 'PRE'
                                mconvidado := SPACE(30)
                                mcod_merc := VAL(cons_pre())
                                DEVPOS(20,14);DEVOUT(SPACE(14))
                                **********
                                IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
                                SELE('merc');ORDSETFOCUS(1)
                                **********
                                IF LASTKEY() <> 27 .AND. ! EMPTY(mcod_merc)
                                        mpre := '*'
                                        op_tela(15,20,16,80,'Informar o Nome do Convidado')
                                        mensagem('Campo Obrigatorio nao pode ficar em Branco')
                                        DEVPOS(00,01);DEVOUT('Nome do Convidado:')
                                        @ 0,COL()+1 GET mconvidado PICT '@!' VALID IF(EMPTY(mconvidado),.F.,.T.)
                                        READ
                                        fecha_tela()
                                        IF LASTKEY() = 27
                                                mconvidado := SPACE(30)
                                                LOOP
                                        ENDIF
                                ELSE
                                        mpre := ' '
                                ENDIF
                                LOOP
                        */
                        ELSEIF SUBSTR(mcod_bc,1,1) = '2' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0) .AND. m_set[1,159] <> 'N'
                                mcod_merc := VAL(SUBSTR(mcod_bc,2,m_set[1,181]))
/*
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
*/
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@mped_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mped_merc) = 0
                                        atencao('Codigo Barra nao cadastrado')
                                        LOOP
                                ENDIF
                                mmerc := mped_merc[1,9]
                        /*
                        ELSEIF SUBSTR(mcod_bc,1,1) = '4' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0) .AND. m_set[1,159] <> 'N'
                                mcod_merc := VAL(SUBSTR(mcod_bc,2,4))
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@mped_merc)
                                IF LEN(mped_merc) = 0
                                        atencao('Codigo Barra nao cadastrado')
                                        LOOP
                                ENDIF
                                mmerc := mped_merc[1,9]
                        */
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
                                m_produto := {}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@m_produto)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_produto) > 0 .AND. RTRIM(m_produto[1,9]) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                        alt_prod2(STRZERO(mcod_merc,5))
                                        LOOP
                                ENDIF
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mped_merc) = 0
                                        atencao('Codigo da mercadoria nao cadastrado 1')
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
                                atencao('Codigo da mercadoria nao cadastrado 2')
                                LOOP
                        ENDIF
                        mmerc := mped_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                mpre := ' '
                IF FILE(ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.jpg')
                        botao(12,40,26,60)
                        WVW_DrawImage( ,12,40,26,60,ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.bmp')
                        botao(12,40,26,60)
                        WVW_DrawImage( ,12,40,26,60,ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.jpg')
                        botao(12,40,26,60)
                        WVW_DrawImage( ,12,40,26,60,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.bmp')
                        botao(12,40,26,60)
                        WVW_DrawImage( ,12,40,26,60,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                        botao(12,40,26,60)
                	WVW_DrawImage( ,12,40,26,60,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ELSE
                        botao(12,40,26,60)
                        IF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                        	WVW_DrawImage( ,12,01,26,70,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                        ENDIF
                ENDIF
                IF mcont_item >= m_set[1,34] .AND. m_set[1,34] > 0
                        atencao('Nao e possivel incluir mais item porque ja ultrapassou o numero maximo de itens estipulado que e de '+STRZERO(m_set[1,34],5))
                        WVW_RESTSCREEN(,lci,cci,lba,cba-1,tela_,.T.)
                        LOOP
                ENDIF
                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                        WVW_RESTSCREEN(,lci,cci,lba,cba-1,tela_,.T.)
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
                IF mmult_emp = 'S' .AND. ! EMPTY(mped_merc[1,1]) .AND. mcodempresa <> mped_merc[1,1]
                        atencao('Este produto nao e da EMPRESA em uso...')
                        LOOP
                ENDIF
                mcod_merc := VAL(mped_merc[1,8])
                setcor(3)
                @ 11,2 SAY SPACE(13)
                @ 11,2 SAY mcod_merc
                //@ 29,14 SAY mped_merc[1,9]
                @ 31,2 SAY mped_merc[1,56] PICT '9,999,999.99'
                //setcor(4)
                limpa(29,27,32,47)
                //setcor(1)
                IF ncnn1 > 0
                        IF SR_SetActiveConnection(nCnn1) > 0
                                m_merc1 := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@m_merc1)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_merc1) > 0
                                        setcor(1)
                                        botao(29,27,32,47)
                                        DrawLabel(29,29,'Deposito',,,'Arial Black',25,10)
                                        WVW_DrawBoxGet(,31,29,15)
                                        DEVPOS(31,29);DEVOUT(TRANSFORM(m_merc1[1,56],'999,999.999'))
                                ENDIF
                        ENDIF
                        SR_SetActiveConnection(nCnn)
                ENDIF
                setcor(1)
                IF m_cfg[2] = 'L'
                        mvlr_fat := iat(mped_merc[1,46] * ((mped_merc[1,50]/100) + 1),,2)
                        mp_venda := mvlr_fat
                ELSE
                        IF mavaria = 2
//atencao('0')
                                mvlr_fat := iat(mped_merc[1,45])
                                mp_venda := mvlr_fat
                        ELSEIF mped_merc[1,23] > 0
//atencao('1')
                                mvlr_fat := iat(mped_merc[1,46] - (mped_merc[1,46] * (mped_merc[1,23] / 100)))
                                mp_venda := mvlr_fat
                        ELSEIF ! EMPTY(mtipo_preco)
//atencao('2')
                                IF mtipo_preco = 'A'
                                        mvlr_fat := mped_merc[1,46] * ((mped_merc[1,50]/100) + 1)
                                        mvlr_fat := iat(mvlr_fat + (mvlr_fat * (mperc/100)))
                                ELSEIF mtipo_preco = '2'
                                        mvlr_fat := mped_merc[1,47]
                                        mvlr_fat := iat(mvlr_fat + (mvlr_fat * (mperc/100)))
                                ELSEIF mtipo_preco = 'C'
                                        mvlr_fat := iat(mped_merc[1,45] * ((mperc/100) + 1))
                                ENDIF
                                //IAT(mvlr_fat,mped_merc[i,81])
                                mp_venda := mvlr_fat
                        ELSE
//atencao('3')
                                mvlr_fat := iat(mped_merc[1,46])
                                mp_venda := mvlr_fat
                                IF mvarejo = 2
//atencao('4')
                                        IF ! EMPTY(mped_merc[1,47])
                                                mvlr_fat := iat(mped_merc[1,47])
                                        ELSE
                                                //IF mav_ap = 'P'
                                                        mvlr_fat := iat(mped_merc[1,46]*((mped_merc[1,50]/100)+1))
                                                //ENDIF
                                        ENDIF
                                        mp_venda := mvlr_fat
                                ELSE
//atencao('5')
                                        mvlr_fat := iat(mped_merc[1,46])
                                ENDIF
                                IF ver_descon(mcod_cli,mcod_merc,mped_merc[1,7]) > 0
                                        mvlr_fat := iat(mp_venda - (mp_venda*(ver_descon(mcod_cli,mcod_merc,mped_merc[1,7])/100)))
                                        mp_venda := mvlr_fat
                                ENDIF
                                IF ! EMPTY(mperc)
                                        mvlr_fat := iat(mp_venda*((mperc/100)+1))
                                ENDIF
                        ENDIF
                ENDIF
                WVW_RESTSCREEN(,lci,cci,lba,cba-1,tela_,.T.)
                botao(01,01,7,119)
                IF mped_merc[1,23] > 0
                        setcor(6)
                        DEVPOS(03,20);DEVOUT('(Promocao)')
                ENDIF
                botao(01,01,07,119)
                //DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                //WVW_DrawLabel(,01,02,mped_merc[1,8]+' - '+SUBSTR(mped_merc[1,9],1,30),,,,, 'arial black',60,20,,,,,)
                WVW_DrawLabel(,01,02,mped_merc[1,9],,,,, 'arial black',60,20,,,,,)
                //WVW_DrawLabel(,04,02,'             '+SUBSTR(mped_merc[1,9],21)+' '+IF(! EMPTY(mped_merc[1,23]),'P:'+TRANSFORM(mped_merc[1,23],'99'),''),,,,, 'arial black',60,20,,,,,)
                //WVW_DrawLabel(,06,02,'             '+SUBSTR(mped_merc[1,9],31),,,,, 'arial black',60,20,,,,,)
                //WVW_DrawLabel(,06,02,IF(! EMPTY(mped_merc[1,23]),'P:'+TRANSFORM(mped_merc[1,23],'99')+' %',''),,,245,, 'arial black',60,20,,,,,)

                /*
                IF mped_merc[1,84] = 'S'
                        mp_venda := mvlr_fat := (mvlr_fat * ver_dolar(mdata_sis))
                ENDIF
                */
                IF ! EMPTY(mped_merc[1,65])
                        mp_venda := mvlr_fat := iat((mvlr_fat * ((mped_merc[1,65]/100)+1)))
                ENDIF                
                IF m_set[1,125] = 'S' .AND. mped_merc[1,23] = 0
                        mdesc_prod := 0
                        @ 46,2 GET mdesc_prod PICT '999.99'
                        READ
                        //limpa(32,46,32,52)
                        IF ! EMPTY(mdesc_prod)
                                mp_venda = mvlr_fat
                                IF (mvlr_fat*(mdesc_prod/100)) > 0.01
                                        mdesc_prod:= mdesc_prod * -1
                                        mvlr_fat := iat(mvlr_fat*((mdesc_prod/100)+1))
                                ENDIF
                        ENDIF
                ENDIF
                mvlr_fat := IAT(mvlr_fat)
                //DEVPOS(00,80);DEVOUT('Preco   R$:')
                //WVW_DrawLabel(,06,70,TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98])),,,240,, 'arial black',60,30,,,,,)
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
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(mped_merc[1,8]),,.t.,@m_produto)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(m_produto) > 0 .AND. RTRIM(mped_merc[1,9]) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                alt_prod2(mped_merc[1,8])
                                LOOP
                        ENDIF
                ENDIF
                setcor(1)
                mmerc := mped_merc[1,9]
                IF mped_merc[1,25] = 'S'
                        setcor(1)
                        @ 6,4 GET mmerc PICT '@!'
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF mped_merc[1,14] = 'EV'
                        op_tela(22,10,23,60,' ENVELOPE')
                        DEVPOS(01,01);DEVOUT('Numero do Envelope:')
                        @ 01,22 GET menvelope PICT '@!' VALID IF(EMPTY(menvelope),.F.,ver_envelope(menvelope+mcod_cli))
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ELSEIF mped_merc[1,14] = 'PL '
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
                ELSE
                        menvelope := SPACE(10)
                        mobs_prod := SPACE(40)
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
                mchass := cons_chass()
                IF ! EMPTY(mchass)
                        mdescri1 := deta->descri1
                        mdescri2 := deta->descri2
                        mdescri3 := deta->descri3
                        mdescri4 := deta->descri4
                        mdescri5 := deta->descri5
                        IF ! EMPTY(deta->vlr_venda)
                                mp_venda := deta->vlr_venda
                                mvlr_fat := deta->vlr_venda
                                mcust_real := deta->vlr_custo
                        ENDIF
                ENDIF
                mvlr_fat := IAT(mvlr_fat,2)
                mp_venda := iat(mp_venda,2)

                DEVPOS(21,2);DEVOUTPICT(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))
                IF ! EMPTY(mped_merc[1,65])
			//DEVPOS(23,27);DEVOUT('Vlr.C/IPI:'+TRANSFORM(mvlr_fat*((mped_merc[1,65]/100)+1),ALLTRIM('@E '+m_set[1,98])))
			DEVPOS(36,2);DEVOUT('Vlr.do IPI:'+TRANSFORM(mvlr_fat*((mped_merc[1,65]/100)),ALLTRIM('@E '+m_set[1,98])))
		ELSE
			DEVPOS(36,2);DEVOUT('                      ')
		ENDIF
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
                        setcor(3)
                        DEVPOS(16,2);DEVOUTPICT(mquantd,ALLTRIM(m_set[1,99]))
                        DEVPOS(21,2);DEVOUTPICT(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))
                        mcomissao := mped_merc[1,26]
                        setcor(1)
                ELSEIF m_indiv[1,26] <> 'T' .AND. m_indiv[1,26] <> 'P' .OR. (mped_merc[1,25] = 'S' .OR. mvlr_fat = 0)
                        setcor(1)
                        mensagem('<F8> para consultar aplicacao do produto')
                        mmasc_qtd := unidade(mped_merc[1,14])
                        //@ lba-6,cci+46 GET mquantd PICT ALLTRIM(mmasc_qtd) WHEN m_indiv[1,26] <> 'T' VALID IF(EMPTY(mquantd) .OR. (! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]),.F.,.T.)
                        @ 16,2 GET mquantd PICT ALLTRIM(mmasc_qtd) VALID IF(EMPTY(mquantd) .OR. mquantd < 0 .OR. (! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        IF mped_merc[1,103] = 'S' .AND. mquantd > mped_merc[1,56]
                                atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                                LOOP
                        ENDIF
                        IF ! EMPTY(mped_merc[1,28]) .AND. mped_merc[1,28] >= (mped_merc[1,56] - mquantd) .AND. mped_merc[1,9] <> 'DIVERSOS' .AND. (m_set[1,107] = "P" .OR. m_set[1,107] = "2") .AND. m_indiv[1,26] <> 'T'
                                atencao('SALDO esta menor que o ESTOQUE MINIMO: '+TRANSFORM(mped_merc[1,28],'9,999,999.99')+' estipulado !!!')
                        ENDIF
                        IF mquantd > mped_merc[1,56] .AND. mped_merc[1,9] <> 'DIVERSOS' .AND. (m_set[1,107] = "P" .OR. m_set[1,107] = "2") .AND. SUBSTR(mped_merc[1,9],1,1) <> '@'
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+m_qp+;
                                             'Maior que saldo......: '+ALLTRIM(TRANSFORM(mped_merc[1,56],'999,999.99')),'LIB_SALDO',,,mcod_merc)
                                        LOOP
                                ENDIF
                                mlibera := 'S'
                        ENDIF
                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDOADM',,,mcod_merc)
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mped_merc[1,23] > 0
                                setcor(6)
                                DEVPOS(lba-5,7);DEVOUT('Preco de Tabela R$: '+TRANSFORM(mped_merc[1,46],'999,999.99'))
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
                                DEVPOS(16,2);DEVOUTPICT(mquantd,ALLTRIM(mmasc_qtd))
                                setcor(1)
                                //mpecas  := iat((VAL(SUBSTR(TRANSFORM((mquantd/mped_merc[1,19])/mped_merc[1,20],'999999.99'),8))),1)      //*mped_merc[1,20])/100
                                //mpecas  := VAL(SUBSTR(STRZERO((mquantd/mped_merc[1,19])/mped_merc[1,20],14,2),13)),2
                                //DEVPOS(PROW(),56);DEVOUT(SUBSTR(STRZERO(mvl_nota,14,2),1,11)+SUBSTR(STRZERO(mvl_nota,14,2),13))
                        ENDIF
                        cons_formula :={}
                        sr_getconnection():exec("SELECT * FROM formula WHERE cod_merc = "+sr_cdbvalue(mped_merc[1,8]),,.t.,@cons_formula)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_formula) > 0
                                mvlr_fat := tab_formula(mped_merc[1,8])
                        ENDIF
                        mensagem('Digite o valor do produto - <ESC>Sair')
                        //@ 21,2 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF((mped_merc[1,23]>0 .OR. m_set[1,109] = 'S') .AND. mvlr_fat < mp_venda,.F.,.T.) WHEN (m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T') .OR. mped_merc[1,25] = 'S' .OR. mvlr_fat = 0
                        IF ver_serie() = '141302' .OR. ver_serie() = '141592' .OR. ver_serie() = '141607' .OR. ver_serie() = '141666'
                                @ 21,2 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF(mped_merc[1,23]>0 .AND. mvlr_fat < mp_venda,.F.,.T.) WHEN (m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T') .OR. mped_merc[1,25] = 'S' .OR. mvlr_fat = 0
                        ELSE
                                @ 21,2 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF(mvlr_fat < mp_venda,.F.,.T.) WHEN (m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T') .OR. mped_merc[1,25] = 'S' .OR. mvlr_fat = 0
                        ENDIF
                        READ
                        IF LASTKEY() = 27
                                UNLOCK
                                mquantd := 1
                                LOOP
                        ENDIF
                        IF ! EMPTY(m_set[1,154]) .AND. mvlr_fat > m_set[1,154] .AND. EMPTY(cons_cli[1,59])
                                IF ! aut_sen('Cod.Prod...: '+STRZERO(mcod_merc,5)+m_qp+;
                                             'Vlr.p/Produto Solic.: '+ALLTRIM(TRANSFORM(mvlr_fat,'999,999,999.99'))+m_qp+;
                                             'Maior Permitido  ADM: '+ALLTRIM(TRANSFORM(m_set[1,154],'999,999.99')),'LIB_SALDO',,,mcod_merc)
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
                                                mcomissao := mcomissao - (iat(mdesconto,2) * m_set[1,113])
                                                IF mcomissao < 0
                                                        mcomissao := 0
                                                ENDIF
                                        ENDIF
                                ENDIF
                                IF iat(((mp_venda - mvlr_fat)/mp_venda)*100,2) > m_set[1,33] .AND. EMPTY(mped_merc[1,80]) .AND. ! EMPTY(m_set[1,33]) .AND. EMPTY(cons_cli[1,59])
                                        IF ! aut_sen('Cod.Prod..: '+mped_merc[1,8]+' '+mped_merc[1,9]+m_qp+;
                                                     'Vlr.Solic.:'+TRANSFORM(mvlr_fat,'999,999.99')+m_qp+;
                                                     'Pr.Venda .:'+TRANSFORM(mp_venda,'999,999.99')+m_qp+;
                                                     'Desc.Soli.:'+TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,'999.999')+' %'+m_qp+;
                                                     'Desc.Aut..:'+TRANSFORM(m_set[1,33],'999.99')+' %','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ELSEIF ((mp_venda - mvlr_fat)/mp_venda)*100 > mped_merc[1,80] .AND. ! EMPTY(mped_merc[1,80])
                                        IF ver_serie() = '141220' .OR. ver_serie() = '141350' .OR. ver_serie() = '141384'
                                                atencao('Cod.Prod..:'+mped_merc[1,8]+' - '+mped_merc[1,9]+m_qp+;
                                                        'Vlr.Solic.:'+TRANSFORM(mvlr_fat,'999,999.99')+m_qp+;
                                                        'Pr.Venda..:'+TRANSFORM(mp_venda,'999,999.99')+m_qp+;
                                                        'Desc.Soli.:'+TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,'999.999')+' %'+m_qp+;
                                                        'Desc.Aut..:'+TRANSFORM(mped_merc[1,80],'999.99')+' %','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                        IF ! aut_sen('Cod.Prod..: '+mped_merc[1,8]+' - '+mped_merc[1,9]+m_qp+;
                                                     'Vlr.Solic.: '+TRANSFORM(mvlr_fat,'999,999.99')+m_qp+;
                                                     'Pr.Venda..: '+TRANSFORM(mp_venda,'999,999.99')+m_qp+;
                                                     'Desc.Soli.:'+TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,'999.999')+' %'+m_qp+;
                                                     'Desc.Aut..:'+TRANSFORM(mped_merc[1,80],'999.99')+' %','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = 'C' .AND. mvlr_fat < mped_merc[1,45]
                                        IF ! aut_sen('Cod.Prod..: '+STRZERO(mcod_merc,5)+m_qp+;
                                                     'Vlr.Solic.:'+TRANSFORM(mvlr_fat,'999,999.99')+m_qp+;
                                                     'Pr.Custo..:'+TRANSFORM(mped_merc[1,45],'999,999.99'),'LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = 'V' .AND. mvlr_fat < mp_venda
                                        IF ! aut_sen('Cod.Prod..: '+STRZERO(mcod_merc,5)+m_qp+;
                                                     'Vlr.Solic.: '+TRANSFORM(mvlr_fat,'999,999.99')+m_qp+;
                                                     'Pr.Venda..:'+TRANSFORM(mp_venda,'999,999.99'),'LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                ELSE
                        mmasc_qtd := unidade(mped_merc[1,14])
                        //mquantd := ROUND(mquantd,VAL(LEN(ALLTRIM(SUBSTR(AT('.',mmasc_qtd)+1
                        mquantd := VAL(TRANSFORM(mquantd,ALLTRIM(mmasc_qtd)))
                        DEVPOS(16,2);DEVOUTPICT(mquantd,ALLTRIM(mmasc_qtd))
                        DEVPOS(21,2);DEVOUTPICT(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))
                        setcor(1)
                ENDIF
                IF AT('.',mmasc_qtd) = 0
                        mquantd := ROUND(mquantd,0)
                ELSE
                        mquantd := ROUND(mquantd,LEN(SUBSTR(mmasc_qtd,AT('.',mmasc_qtd)+1)))
                ENDIF
                IF ! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]
                        atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                        LOOP
                ENDIF
                IF mlimite <= (mcompras+msubtotal+(mvlr_fat*mquantd)) .AND. mlimite > 0
                        atencao('Limite do Cliente foi ultrapassado em R$:'+TRANSFORM(mlimite-(mcompras+msubtotal+(mvlr_fat*mquantd)),'999,999.99'))
                ENDIF
                mtot_ped = 0
                mtot_ped = mvlr_fat * mquantd
                setcor(3)
                @ 26,2 SAY mtot_ped PICT ALLTRIM(m_set[1,98])
                setcor(1)
                IF (m_set[1,37] = 'S' .AND. m_set[1,152] <> 'S')
                        mmontador := 0
                        op_tela(22,25,27,75,' Informe os Montadores ')
                        DEVPOS(01,00);DEVOUT('Montador 1:')
                        DEVPOS(02,00);DEVOUT('Montador 2:')
                        @ 01,12 GET mmontador PICT '999' VALID ven(mmontador,01,16)
                        @ 02,12 GET mmontador1 PICT '999' VALID IF(mmontador1 = mmontador,.F.,ven(mmontador1,02,16)) WHEN ! EMPTY(mmontador)
                        READ
                        opcao := op_simnao('S','Confirma os Montador:')
                        wvw_lclosewindow()
                        IF opcao = 'N'
                                LOOP
                        ENDIF
                ENDIF
                IF m_set[1,115] = 'S'
                        op_tela(22,10,24,70,'COMISSAO DO VENDEDOR')
                        DEVPOS(01,00);DEVOUT('Digite o percentual de Comissao do Vendedor [%]:')
                        @ 01,COL()+1 GET mcomissao PICT '999.99' VALID IF(EMPTY(mcomissao),.F.,.T.)
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27;LOOP;ENDIF
                ENDIF
                IF m_indiv[1,26] <> 'T' .AND. m_indiv[1,26] <> 'P' .OR. mped_merc[1,25] = 'S'
                        opcao := op_simnao('S','Confirma Inclusao da Mercadoria:')
                ELSE
                        opcao := 'S'
                ENDIF
                IF opcao = 'N'
                        mquantd := 1
                ELSE
                        IF LEN(m_codigo) = 0 .AND. mnum_ped = 0
                                mensagem('Aguarde um momento Gerando NUMERO para o PEDIDO !!!....')
                                gerar_no_ped()
                                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO PEDIDOS No.:'+STRZERO(mnum_ped,6)+SPACE(30)+'Terminal: '+m_indiv[1,1])
                        ENDIF
                        aret:={}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF ! (aret[1,11] = 'S' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0))
                                IF mquantd > aret[1,56] .AND. aret[1,9] <> 'DIVERSOS' .AND. (m_set[1,107] = "P" .OR. m_set[1,107] = "2") .AND. mlibera = ' ' .AND. SUBSTR(aret[1,9],1,1) <> '@'
                                        IF ! aut_sen('Sld:'+TRANSFORM(aret[1,59],ALLTRIM('@E '+m_set[1,98]))+'-Ped:'+TRANSFORM(mquantd,'99999.99')+'-Aut.:','LIB_SALDO',,,mcod_merc)
                                                DBUNLOCKALL();LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                        mlinha := aret[1,2]     //+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] - mquantd)*1000,13)+STRZERO(iat(aret[1,46],2)*100,14)+aret[1,68]
                        sr_begintransaction()
                                //try
                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] - mquantd)+",data_atu = "+sr_cdbvalue(mdata_sis)+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
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
                                              +'data_so,'   ;//73
                                              +'data_app,'   ;//73
                                              +'convidado,' ;//74
                                              +'cod_pres,'  ;//75
                                              +'tipo_ped,'  ; //76
                                              +'tipo_venda'    //77
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
                                        sr_cdbvalue(mhoras)+','+;//43
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
                                        sr_cdbvalue(mobs5)+','+;                      //62
                                        sr_cdbvalue(mobs6)+','+;                      //62
                                        sr_cdbvalue(mobs7)+','+;                      //62
                                        sr_cdbvalue(mobs8)+','+;                      //62
                                        sr_cdbvalue(SUBSTR(aret[1,73],1,2))+','+; //63
                                        sr_cdbvalue(mchass)+','+;             //64
                                        sr_cdbvalue(mdescri1)+','+;             //65
                                        sr_cdbvalue(mdescri2)+','+;             //66
                                        sr_cdbvalue(mdescri3)+','+;             //67
                                        sr_cdbvalue(mdescri4)+','+;             //68
                                        sr_cdbvalue(mdescri5)+','+;             //69
                                        sr_cdbvalue(mproducao)+','+;            //70
                                        sr_cdbvalue(' ')+','+;                  //71
                                        sr_cdbvalue(mnum_app)+','+;   //72
                                        sr_cdbvalue(DATE())+','+;               //73
                                        IF(EMPTY(mdata_app),'NULL',sr_cdbvalue(mdata_app))+','+; //73
                                        sr_cdbvalue(mconvidado          )+','+; //74
                                        sr_cdbvalue(STRZERO(mcod_pres,5))+','+; //75
                                        sr_cdbvalue(mavaria             )+','+; //76
                                        sr_cdbvalue(STR(mvarejo,1)        )+','+; //77
                                        sr_cdbvalue(' ')+')'
                                        sr_getconnection():exec(ccomm,,.f.)
                                //catch e
                                //        tracelog(valtoprg())
                                //        sr_COMMITtransaction()
                                //END
                                mconvidado := SPACE(30)
                                //try
                                        IF ! EMPTY(mchass)
                                                sr_getconnection():exec("UPDATE merc_det SET venda='V',n_ped="+sr_cdbvalue(STRZERO(mnum_ped,6))+",dat_venda="+sr_cdbvalue(mdata_sis)+",vl_vendido="+sr_cdbvalue(mvlr_fat * 1)+" WHERE  merc_det.codigo = "+sr_cdbvalue(mcod_merc)+" AND merc_det.chassis = "+sr_cdbvalue(mchass)+" AND merc_det.venda IS NULL",,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                //catch e
                                //        tracelog(valtoprg())
                                //        sr_COMMITtransaction()
                                //END
                                //try
                                        IF mcod_pres > 0
                                                cons_presen:={}
                                                sr_getconnection():exec("SELECT * FROM sacpresen WHERE codcli = "+sr_cdbvalue(STRZERO(mcod_pres,5))+" AND cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,cons_presen)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                IF LEN(cons_presen) > 0
                                                        sr_getconnection():exec("UPDATE sacpresen SET qtd ="+sr_cdbvalue(cons_presen[1,6] - mquantd)+" WHERE codcli = "+sr_cdbvalue(STRZERO(mcod_pres,5))+" AND cod_merc = "+sr_cdbvalue(mcod_merc),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ENDIF
                                        ENDIF
                                //catch e
                                //        tracelog(valtoprg())
                                //        sr_COMMITtransaction()
                                //END
                                sr_committransaction()
                        sr_endtransaction()
                        sr_getconnection():exec("COMMIT",,.f.)

                        AADD(m_codigo,mcod_merc)
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
                        //menvelope := SPACE(10)
                        mcod_pres := 0
                        //mobs_prod:=SPACE(40)
                        mcont_item ++
                        mquantd := 1
                ENDIF
        ENDDO
ENDDO
RELEASE ALL
wvw_lclosewindow()
RETURN NIL
***********************************************************************************************
* FECHAMENTO DO PEDIDO
**********************
MEMVAR getlist
FUNCTION fecha_pd(mtip,magrupar,orc_tp)
***************************************
LOCAL lcia,ccia,lbaa,cbaa,mopcao,mdocum,mvenc,mcodvend,mtot_prazo:=0,mprazo_aux:=0,opcao,;
      mtotitens:=0,mtel_carro,mdesc_alt:=0,i,tela_ped,mtelemark:=' ',;
      mdesc_aux:=0,mppag:=' ',mcli_aux:=' ',mop_desc := ' ',cons_presen:={},mpd_entrega,;
      cComm,cons_ped:={},cons_merc:={},m_envelope:={},mcam_db := {}

MEMVAR ali,no,mcod_cli,mnome_ven,m_matriz,m_codigo,m_num,mcod_aux,;
       mnum_ped,mlci,mlib_spc,mprz,mtp_venda,mcond_veze,mdata_sis,m_dia,cod_operado,;
       m_alt,msit_tip,mproducao,mcont_item,mtela,m_pedido,;
       m_cbarra,mflag,mcom_oper,m_vlr,;
       mtot_limite,mlim_venc,mlim_avenc,mobs1,mobs2,mobs3,mobs4,mobs5,mobs6,mobs7,mobs8,;
       mplaca,mcarro,mmodelo,mkm,mnum_os,mcod_pres

PRIVATE mdocumento,mvalor_aux,mtipo_aux,mextenso,mhora,mdata,;
        f,mforma_pg,modo_pg,mvlr_ent,mfin,;
        mt_pedido,mtot_quant,mtraco,mcondicao,mprazo,;
        mperc,mlinha,lin,mlin,mdesc,mvlr_desc,mcartao,mdup,mcheque,;
        mdinheiro,mend,mbairro,mcidade,muf,;
        mcond_int,mvia,mtot_itens,malteracao:=0,;
        mdif,mnome,tela,mpoint,mquantd_prod,mtaxa_adm:=0,;
        mnome_cli,mjuros,mjuros_aux,mlimite:=0,mautoriza,;
        mpagina,mp,mtipo_fin,maliq_fin,mcobra_fin,mcod_fin,mtaxa_fin,;
        mvalor_pres,mvalor_fin,mporta_imp,;
        mnome_trans,mcgc_trans,mend_trans,mmun_trans,muf_trans,minsc_trans,;
        mplaca_trans,mcod_tran,mnum_trans,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtipo_pg,mmontador:=0,mmontador1:=0,;
        memissao:=CTOD('  /  /  '),mcart_ban:=' ',memail_cli:=' '

SET KEY -8 TO sac130()           // inclusao de clientes
SET KEY -9 TO
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacoss','oss');RETURN NIL;ENDIF
IF ! AbriArq('sacospro','ospro');RETURN NIL;ENDIF
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('merc_det','deta');RETURN NIL;ENDIF
IF ! AbriArq('sactran','tran');RETURN NIL;ENDIF
CLEAR GETS
lcia :=2
ccia := 0
lbaa := 24
cbaa := 75
mtraco := REPLI('=',80)
mlinha := lin := mlin := mtot_limite:= mlim_venc := mlim_avenc := mautoriza := ;
mvlr_ent := 0
i = 1
ali := 'ped_s'
no  := 'noped'
//IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
//IF ! AbriArq('sacnoped','noped');RETURN NIL;ENDIF
CLEAR GETS
mp := ' '
i:=0
IF m_set[1,84] > 0 .AND. (mtip = 'SAC23P1' .OR. mtip = '1' .OR. mtip = 'SAC23ORC') .AND. EMPTY(mcod_cli)
        mcod_cli := VAL(m_set[1,84])
ENDIF
mt_pedido := 0
op_tela(10,10,13,70,' Confirmacao de Vendedor ')
WHILE .T.
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
                mcod_aux := mcod_ven
		@ 01,11 GET mcod_ven PICT '999' VALID IF(ver_ven(mcod_ven),.T.,.F.)
                READ
                mcod_ven := sen->scod_op
                mnome_ven := sen->snome
                IF m_set[1,10] = 'S' .AND. mcod_ven <> mcod_aux .AND. mcod_cli <> m_set[1,84];
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
op_tela(05,10,35,85,' FECHAMENTO DO PEDIDO ')
WHILE .T.
        limpa(00,00,33,100)
        IF orc_tp = '*'
                mtelemark := mtele_mark
        ENDIF
        SET KEY 28 TO menu_cons()
        *********
        //SELE(ali);ORDSETFOCUS(1)
        *********
        mpd_entrega := CTOD('  /  /  ')
        mnome_cli := mnome := SPACE(40)
        mcartao := mdup := mcheque := mdinheiro := mcobra_fin := SPACE(1)
        mend := SPACE(35)
        mbairro := mcidade := SPACE(20)
        muf := mcond_int := SPACE(2)
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
                DEVPOS(lcia   ,ccia+1);DEVOUT('Sub-Total do Pedido:')
                DEVPOS(lcia+02,ccia+20);DEVOUT('Indentificacao Cliente')
                DEVPOS(lcia+06,ccia+20);DEVOUT('Condicoes de Pagamento')
                DEVPOS(lcia+3,ccia+1);DEVOUT('Cod.:')
                DEVPOS(lcia+4,ccia+1);DEVOUT('CPF.:')
                DEVPOS(lcia+4,ccia+28);DEVOUT('| Media de dias em Atraso:')
                DEVPOS(lcia+5,ccia+1);DEVOUT('CGC.:')
                DEVPOS(lcia+5,ccia+28);DEVOUT('| Quantidade Documento...:')
                DEVPOS(lcia+16,ccia+1);DEVOUT('Previsao de Entrega......:')
                DEVPOS(lcia+20,ccia+1);DEVOUT('Observacoes:')
        ELSE
                DEVPOS(lcia+01,ccia+1);DEVOUT('Sub-Total do Pedido:')
                DEVPOS(lcia+17,ccia+1);DEVOUT('Vaqueiros..:')
                DEVPOS(lcia+18,ccia+1);DEVOUT('Patrocinio.:')
                DEVPOS(lcia+21,ccia+1);DEVOUT('Sub-Total do Pedido:')
        ENDIF
        mtipo_imp := m_indiv[1,10]
        mporta_imp := m_indiv[1,7]
        mquantd := m_indiv[1,11]
        IF magrupar = 100
                mobs1 := orcam->pobs1
                mobs2 := orcam->pobs2
                mobs3 := orcam->pobs3
                mobs4 := orcam->pobs4
                mobs5 := orcam->pobs5
                mobs6 := orcam->pobs6
                mobs7 := orcam->pobs7
                mobs8 := orcam->pobs8
        ENDIF
        ****
        mt_pedido := i := mtotitens := 0
        mvia := '1a.via'
        //FOR i = 1 TO LEN(m_codigo)
        FOR i = 1 TO LEN(m_matriz)
                IF m_matriz[i,1] = NIL .OR. m_matriz[i,1] = 0
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
        setcor(3)
        WVW_DrawLabel(,0,ccia+22,ALLTRIM(TRANSFORM(mt_pedido,'99,999,999.99')),,,210,, 'Arial Black',40,30,,,,,)
        setcor(1)

        i = 1
        ***
        IF m_indiv[1,26] = 'P'
                mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := mobs7 := mobs8 := SPACE(40)
        ELSEIF SUBSTR(m_set[1,9],1,1) = 'S' .OR. SUBSTR(m_set[1,9],2,1) = 'S'

                IF magrupar = 1
                        mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := mobs7 := mobs8 := SPACE(40)
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
                        mobs5 := SUBSTR(mobs5,1,40)
                        mobs6 := SUBSTR(mobs6,1,40)
                        mobs7 := SUBSTR(mobs7,1,40)
                        mobs8 := SUBSTR(mobs8,1,40)
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
                        @ lcia+24,ccia+14 GET mobs5 WHEN ! EMPTY(mobs4)
                        @ lcia+25,ccia+14 GET mobs6 WHEN ! EMPTY(mobs5)
                        @ lcia+26,ccia+14 GET mobs7 WHEN ! EMPTY(mobs6)
                        @ lcia+27,ccia+14 GET mobs8 WHEN ! EMPTY(mobs7)
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
        mcli_aux := mcod_cli
        //ATENCAO(STRzero(mnum_orc,5))
        IF mnum_orc > 0 .OR. m_indiv[1,9] <> 'V' .AND. m_indiv[1,26] # 'P'
                IF mtip = '*' .OR.  mnum_orc > 0   //.OR. ali <> 'ped_s'       //.OR. orc_tp <> NIL
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
                                atencao('Voce nao pode Sair esta alteracao sem fazer o FECHAMENTO porque este pedido ja foi ALTERADO OK')
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
                                        sr_getconnection():exec("SELECT * FROM saccli WHERE razao like "+sr_cdbvalue(RTRIM(mnome_cli)+'%'),,.t.,@cons_cli)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_cli) = 0
                                                atencao('Cliente nao cadastrado !!!')
                                                LOOP
                                        ELSE
                                                f7_cli(,cons_cli[1,145])
                                                //mcod_cli := cons_cli[1,2]
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                ELSEIF ! EMPTY(mcpf)
                       			cons_cli := {}
                                        sr_getconnection():exec("SELECT * FROM saccli WHERE cpf = "+sr_cdbvalue(mcpf),,.t.,@cons_cli)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_cli) = 0
                                                atencao('Cliente nao cadastrado !!!')
                                                LOOP
                                        ENDIF
                                        mcod_cli := cons_cli[1,2]
                                ELSEIF ! EMPTY(mcgc)
                       			cons_cli := {}
                                        sr_getconnection():exec("SELECT * FROM saccli WHERE cgc = "+sr_cdbvalue(mcgc),,.t.,@cons_cli)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_cli) = 0
                                                atencao('Cliente nao cadastrado !!!')
                                                LOOP
                                        ENDIF
                                        mcod_cli := cons_cli[1,2]
                                ENDIF

                IF cons_cli[1,41] = 'S'
                        atencao('CLIENTE COM CREDITO BLOQUEADO PELO SISTEMA EM: '+DTOC(cons_cli[1,138])+m_qp+m_qp+'***************************************************************************'+m_qp+'M O T I V O: '+ALLTRIM(cons_cli[1,139])+m_qp+'***************************************************************************')
                        LOOP
                ENDIF
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
                        memail_cli := cons_cli[1,27]
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
                        IF ! spc(mcod_cli,mt_pedido,,'*',)
                                LOOP
                        ENDIF
                ENDIF
                IF m_set[1,37] = 'S'
                        op_tela(10,35,13,75,' Dados do Carro ')
                        DEVPOS(00,00);DEVOUT('Placa No..:')
                        DEVPOS(01,00);DEVOUT('Marca.....:')
                        DEVPOS(02,00);DEVOUT('Modelo....:')
                        DEVPOS(03,00);DEVOUT('KM........:')
                        mensagem('Preencha os campos')
                        @ 00,12 GET mplaca PICT '@!'
                        READ
                        IF ! EMPTY(mplaca)
                                m_envelope:={}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND penvelope = "+sr_cdbvalue(mplaca),,.t.,@m_envelope)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_envelope) > 0
                                        mcarro  := m_envelope[1,27]
                                        mmodelo := m_envelope[1,28]
                                        mkm     := m_envelope[1,29]
                                ENDIF
                        ENDIF
                        @ 01,12 GET mcarro PICT '@!'
                        @ 02,12 GET mmodelo PICT '@!'
                        @ 03,12 GET mkm PICT '@!'
                        READ
                        opcao := op_simnao('S','Confirma os dados digitados:')
        		fecha_tela()
                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                LOOP
                        ENDIF
                ENDIF
        ENDIF
        setcor(1)
        mjuros := mjuros_aux := mforma_pg := 0
        /*
        IF mdesc_alt # 0        //.AND. ver_serie() = '141220' .AND. ver_serie() = '141350' .AND. ver_serie() = '141384' .AND. ver_serie() = '141399'
                DEVPOS(lcia+8,ccia+1);DEVOUT('Modo de Pagamento:')
                SETCOLOR('W/B,B/W')
                DEVPOS(lcia+7,ccia+20);DEVOUT('1> AVISTA')
                @ lcia+8,ccia+20 PROMPT '1> DINHEIRO'
                setcor(1)
                DEVPOS(lcia+7,ccia+34);DEVOUT('1> Aprazo')
                @ lcia+8,ccia+34 PROMPT '2> Cheque'
                mforma_pg := 1
                mtp_venda = 'AV'
                mtipo_pg := 'DN'
                mdinheiro := '*'
        */
        IF m_indiv[1,26] = 'N'      //.OR. ver_serie() = '141414'         // NAO AUTOCAIXA
                DEVPOS(lcia+7,ccia+1);DEVOUT('Forma de Pagamento:')
                //atencao(mcons_tabpg+' - '+mtp_venda+' - '+STRZERO(mcod_cond,3))
                IF (SUBSTR(cons_cli[1,40],1,2) = '00' .OR. EMPTY(VAL(mcons_tabpg)) .OR. mtp_venda = 'AV') .AND. EMPTY(mcod_cond)
                        mforma_pg := 1
                        setcor(10)
                        @ lcia+7,ccia+20 PROMPT '1> AVISTA'
                        @ lcia+7,ccia+34 PROMPT '2> Aprazo'
                ELSE
                        mforma_pg := 2
                        setcor(10)
                        @ lcia+7,ccia+20 PROMPT '1> Avista'
                        @ lcia+7,ccia+34 PROMPT '2> APRAZO'
                        //DEVPOS(lcia+7,ccia+20);DEVOUT('1> Avista')
                        //SETCOLOR('W/B,B/W')
                        //DEVPOS(lcia+7,ccia+34);DEVOUT('2> APRAZO')
                        //setcor(1)
                ENDIF
                //ELSEIF EMPTY(mprz)
                        SET INTEN ON
                        MENU TO mforma_pg
                        setcor(1)
                //ENDIF
                IF mtp_venda = 'AV'     //.AND. mtip = '*'    //.OR. mforma_pg # mf_pg
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
                                @ lcia+8,COL()+2 PROMPT '2> Cheque  '
                                @ lcia+8,COL()+2 PROMPT '3> P I X   '
                                SET INTEN ON
                                MENU TO modo_pg
                                setcor(1)
                                IF modo_pg = 1
                                        mtipo_pg := 'DN'
                                        mdinheiro := '*'
                                ELSEIF modo_pg = 3
                                        mtipo_pg := 'PX'
                                        mpix := '*'
                                ELSEIF modo_pg = 2
                                        mtipo_pg := 'CH'
                                        mcheque := '*'
                                        IF ! spc(mcod_cli,mt_pedido,,'*',mlib_spc)
                                                mtp_venda = '  '
                                                LOOP
                                        ELSEIF mnum_os > 0 .AND. ! spc(mcod_cli,mt_pedido,,'*',mlib_spc)
                                                mtp_venda = '  '
                                                LOOP
                                        ELSEIF ! limite(mcod_cli,mt_pedido)
                                                mtp_venda = '  '
                                                LOOP
                                        ENDIF
                                ENDIF
                        CASE mforma_pg = 2
                                IF ! spc(mcod_cli,mt_pedido,,'*',mlib_spc)
                                        mtp_venda = '  '
                                        LOOP
                                ELSEIF mnum_os > 0 .AND. ! spc(mcod_cli,mt_pedido,,'*',mlib_spc)
                                        mtp_venda = '  '
                                        LOOP
                                ELSEIF ! limite(mcod_cli,mt_pedido)
                                        mtp_venda = '  '
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
                                                DEVPOS(lcia+11,ccia+1);devout('Valor Entrada R$..:')
                                                @ lcia+10,ccia+21 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.))
                                                READ
                                                IF m_dia[1] > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(m_dia[1],3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                        mtp_venda = '  '
                                                        LOOP
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,1,1)) = 1
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
                                                maliq_fin := ;
                                                mcod_fin := mtaxa_fin := ;
                                                mvalor_aux := mvalor_pres := ;
                                                mvalor_fin := mtaxa_fin := 0
                                                DEVPOS(lcia+9,ccia+1);DEVOUT('Cod.do Financiamento..:')
                                                DEVPOS(lcia+10,ccia+1);devout('Tipo do Financiamento:')
                                                DEVPOS(lcia+10,ccia+32);DEVOUT('Aliquota:')
                                                DEVPOS(lcia+11,ccia+1);devout('Valor Entrada R$.....:')
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
                                                        mvalor_pres := iat((mt_pedido + mtaxa_fin) * maliq_fin,2) + mtaxa_adm
                                                        IF VAL(SUBSTR(mtipo_fin,1,1)) > 0
                                                                mvlr_ent := mvalor_pres
                                                        ENDIF
                                                        @ lcia+11,ccia+28 GET mvlr_ent PICT '999,999.99' WHEN SUBSTR(mtipo_fin,1,1) = '1' VALID IF(EMPTY(mvlr_ent),.F.,.T.)
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
                                                        @ lcia+11,ccia+28 GET mvlr_ent PICT '999,999.99' WHEN SUBSTR(mtipo_fin,1,1) = '1'              //.AND. men_get(lcia+12,ccia+21,'Valor da Entrada do Fiananciamento')  VALID lim_get()
                                                        @ lcia+12,ccia+28 GET mvalor_pres PICT '999,999.99'
                                                        READ
                                                        mvalor_fin := (VAL(SUBSTR(mtipo_fin,2,2)) * mvalor_pres) + mvlr_ent
                                                        IF mvalor_fin < mt_pedido
                                                                atencao('O Valor do financiamento estar menor que o Valor do Pedido')
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
                                                DEVPOS(lcia+12,ccia+28);DEVOUTPICT(mvalor_pres,'999,999.99')
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
                                                DEVPOS(lcia+11,ccia+1);devout('Valor Entrada R$..:')
                                                IF m_set[1,46] # 'S'
                                                        @ lcia+10,ccia+21 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.))      //WHEN EMPTY(mcod_cond)
                                                        READ
                                                        IF EMPTY(mcod_cond) .AND. m_dia[1] > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(m_dia[1],3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                                mtp_venda = '  '
                                                                LOOP
                                                        ENDIF
                                                ELSE
                                                        DEVPOS(lcia+10,ccia+21);DEVOUTPICT( mcond_veze,'@@R 9-99')
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,1,1)) = 1
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
                                IF LASTKEY() = 27
                                        mtp_venda = '  '
                                        LOOP
                                ENDIF
                ENDCASE
                IF LASTKEY() = 27
                        mtp_venda = '  '
                        LOOP
                ENDIF
                IF mcli_aux <> mcod_cli .AND. mtipo_pg <> 'CT'
                        cons_cli := {}
                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_cli) > 0 .AND. cons_cli[1,59] > 0
                                mdesc := cons_cli[1,59]/100
                                atencao('ESTE CLIENTE: '+mcod_cli+'-'+cons_cli[1,3]+m_qp+'TERA UM DESCONTO DE :'+TRANSFORM(cons_cli[1,59],'9999.99')+' %')
                        ENDIF
                ELSEIF ((mtp_venda = 'AV' .OR. m_set[1,35] = 'S' .OR. malteracao = 1) .AND. m_set[1,105] = 'S' .AND. mdesc_alt = 0) .OR. (mtipo_pg = 'FI' .AND. ver_serie() = '141416')    // .AND. mtipo_pg <> 'FI'
                        mop_desc := ' '
			DEVPOS(lcia+15,ccia+1);DEVOUT('Desconto [1] (%)  [2] (R$):')
			@ lcia+15,COL()+1 GET mop_desc VALID mop_desc $ '1,2, '
                        READ
			IF mop_desc = '1'
                                SETCOLOR('i*')
                                DEVPOS(lcia+15,ccia+10);DEVOUT('[1] (%)')
                                setcor(1)
                                @ lcia+15,ccia+29 GET mdesc PICT '9,999.99999'
                                READ
                                IF mdesc > m_set[1,33] .AND. ! aut_sen('Desconto a maior.. senha de autorizacao:','LIB_DESC',,mcod_cli)
                                        LOOP
                                ENDIF
                                mdesc := mdesc/100
                                mvlr_desc := mt_pedido * mdesc
                                mt_pedido := mt_pedido - (mt_pedido * mdesc)
                        ELSEIF mop_desc = '2'
				mdesc := 0	
				SETCOLOR('i*')
                                DEVPOS(lcia+15,ccia+19);DEVOUT('[2] (R$)')
                                setcor(1)
                                @ lcia+15,ccia+29 GET mdesc PICT ALLTRIM(m_set[1,98])
                                READ
                                mvlr_desc := mdesc
                                mdesc := (mdesc/mt_pedido)
                                IF mdesc*100 > m_set[1,33] .AND. ! aut_sen('Desconto a maior.. senha de autorizacao:','LIB_DESC',,mcod_cli)
                                        LOOP
                                ENDIF
                                mt_pedido := mt_pedido - (mt_pedido * mdesc)
                        ELSE
                                SETCOLOR('i*')
                                DEVPOS(lcia+15,ccia+29);DEVOUT('Nenhum Desconto')
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
        ELSEIF m_indiv[1,26] = 'P'
                mtp_venda = 'AV'
                modo_pg := mforma_pg := 1
                //DEVPOS(lcia+8,ccia+1);DEVOUT('Modo de Pagamento:')
                //setcor(3)
                //DEVPOS(lcia+7,ccia+22);DEVOUT('1> Avista')
                //setcor(1)
                mtipo_pg := 'DN'
                mdinheiro := '*'
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
        setcor(3)
        @ lcia+17,ccia+1 TO lcia+17,cbaa-1
        DEVPOS(lcia+18,ccia+30);DEVOUT('TOTAL PEDIDO:')
        setcor(1)
        ************* DATA DA ENTREGA *****************
        WHILE m_indiv[1,26] # 'P'
                @ lcia+16,ccia+29 GET mpd_entrega WHEN m_set[1,92] <> 'N'
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF (! EMPTY(m_set[1,162]) .OR. ! EMPTY(m_set[1,163]) .OR. ! EMPTY(m_set[1,164])) .AND. ! EMPTY(mpd_entrega)
                        mped_exp:={}
                        sr_getconnection():exec("SELECT pnum_ped,sum(pquantd*pvlr_fat),sum(pquantd) FROM sacped_s WHERE sr_deleted = ' ' AND pd_entrega = "+sr_cdbvalue(mpd_entrega)+" AND (ppag = '*' OR ppag IS NULL) GROUP BY pnum_ped",,.t.,@mped_exp)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF ! EMPTY(m_set[1,162])
                                IF LEN(mped_exp) >= m_set[1,162]
                                        atencao('Para esse dia ja estar completo as Entregas favor verificar outro dia...')
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
                IF ! EMPTY(mpd_entrega)
                        DEVPOS(lcia+16,ccia+41);DEVOUT(' - '+ver_dia(mpd_entrega))
                ENDIF
                EXIT
        ENDDO

        IF mjuros = 0;mjuros := 1;ENDIF
        IF ver_ven(mcod_ven)
                mnome_ven := sen->snome
        ENDIF
        IF mjuros > 1 .OR. ! EMPTY(mdesc)
                mensagem('Atualizando e Recalculando o PEDIDO....')
                IF ! EMPTY(m_set[1,113]) .AND. mdesc >= m_set[1,114]
                        IF m_set[1,113] > 1
                                mcomissao := mcomissao * (m_set[1,113]/100)
                        ENDIF
                ENDIF

                i := 0
                cons_ped := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND SR_DELETED =' '",,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                FOR i = 1 TO LEN(cons_ped)
                        mdesc_aux := mdesc
                        IF ! EMPTY(cons_ped[i,52])
                        	LOOP
                        ENDIF

                        IF cons_ped[i,17] < cons_ped[i,20]
                                IF (cons_ped[i,20] * (mdesc_aux + (cons_ped[i,39]/100))) > 0.01
                                        cons_ped[i,18] := iat(cons_ped[i,20] - (cons_ped[i,20] * (mdesc_aux + (cons_ped[i,39]/100))),'A',2)
                                ENDIF
                        ELSE
                                IF (cons_ped[i,18] * mdesc_aux) > 0.01
                                        cons_ped[i,18] := iat(cons_ped[i,18] - (cons_ped[i,18] * mdesc_aux),'A',2)
                                ENDIF
                        ENDIF
                        SR_BEGINTRANSACTION()
                                ccomm := "UPDATE sacped_s SET pcgc = "+sr_cdbvalue(mcgc)
                                ccomm := ccomm + ",pcpf ="+sr_cdbvalue(mcpf)
                                ccomm := ccomm + ",pplaca = "+sr_cdbvalue(mplaca)
                                ccomm := ccomm + ",pcarro = "+sr_cdbvalue(mcarro)
                                ccomm := ccomm + ",pmodelo = "+sr_cdbvalue(mmodelo)
                                ccomm := ccomm + ",pkm = "+sr_cdbvalue(mkm)
                                ccomm := ccomm + ",pcod_cli = "+sr_cdbvalue(mcod_cli)
                                ccomm := ccomm + ",pcomi_oper ="+sr_cdbvalue(mcom_oper)
                                ccomm := ccomm + ",pcod_fin = "+sr_cdbvalue(STRZERO(mcod_fin,3))
                                ccomm := ccomm + ",pcod_tab = "+sr_cdbvalue(STRZERO(mcod_cond,3))
                                ccomm := ccomm + ",pvlr_pres = "+sr_cdbvalue(mvalor_pres)
                                ccomm := ccomm + ",pcond_veze = "+sr_cdbvalue(mcond_veze)
                                ccomm := ccomm + ",pcond_inte = "+sr_cdbvalue(IF(! EMPTY(mcond_int),mtipo_pg+STRZERO(VAL(mcond_int),3),mtipo_pg+STRZERO(m_dia[1],3)+STRZERO(m_dia[2],3)+STRZERO(m_dia[3],3)+STRZERO(m_dia[4],3)+STRZERO(m_dia[5],3)+STRZERO(m_dia[6],3)+STRZERO(m_dia[7],3)+STRZERO(m_dia[8],3)+STRZERO(m_dia[9],3)+STRZERO(m_dia[10],3)+STRZERO(m_dia[11],3)+STRZERO(m_dia[12],3)+STRZERO(m_dia[13],3)+STRZERO(m_dia[14],3)+STRZERO(m_dia[15],3)))
                                ccomm := ccomm + ",ptp_vend = "+sr_cdbvalue(mtp_venda)
                                ccomm := ccomm + ",pvlr_ent = "+sr_cdbvalue(mvlr_ent)
                                ccomm := ccomm + ",pstat_item = "+sr_cdbvalue(mtelemark)
                                ccomm := ccomm + ",pcod_vend = "+sr_cdbvalue(mcod_ven)
                                ccomm := ccomm + ",pvendedor = "+sr_cdbvalue(mnome_ven)
                                ccomm := ccomm + ",pcomissao = "+sr_cdbvalue(mcomissao)
                                ccomm := ccomm + ",pdesc = "+sr_cdbvalue(mdesc_aux * 100)
                                ccomm := ccomm + ",pdesc_merc = "+sr_cdbvalue(mvlr_desc)
                                ccomm := ccomm + ",pvlr_fat = "+sr_cdbvalue(cons_ped[i,18]*mjuros)
                                ccomm := ccomm + ",pobs1 = "+sr_cdbvalue(mobs1)
                                ccomm := ccomm + ",pobs2 = "+sr_cdbvalue(mobs2)
                                ccomm := ccomm + ",pobs3 = "+sr_cdbvalue(mobs3)
                                ccomm := ccomm + ",pobs4 = "+sr_cdbvalue(mobs4)
                                ccomm := ccomm + ",pobs5 = "+sr_cdbvalue(mobs5)
                                ccomm := ccomm + ",pobs6 = "+sr_cdbvalue(mobs6)
                                ccomm := ccomm + ",pobs7 = "+sr_cdbvalue(mobs7)
                                ccomm := ccomm + ",pobs8 = "+sr_cdbvalue(mobs8)
                                ccomm := ccomm + ",pproducao = "+sr_cdbvalue(mproducao)
                                ccomm := ccomm + ",pcod_tran = "+sr_cdbvalue(mcod_tran)
                                ccomm := ccomm + ",pd_entrega = "+IF(! EMPTY(mpd_entrega),sr_cdbvalue(mpd_entrega),'NULL')
                                ccomm := ccomm + ",pfecha = 'F' WHERE SR_RECNO = "+sr_cdbvalue(cons_ped[i,111])
                                //ccomm := ccomm + ",pfecha = 'F' WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(cons_ped[i,6])
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_committransaction()
                        SR_ENDTRANSACTION()
                NEXT
        ELSE
                //atencao('Atualizando PEDIDO....')
                mensagem('Atualizando PEDIDO....')
                cons_ped := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND SR_DELETED = ' '",,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                //sr_getconnection():exec("SELECT sum((ppre_venda-ppre_dig)*pquantd) FROM sacped_s WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND ppre_dig < ppre_venda AND SR_DELETED = ' '",,.t.,@cons_ped)
                //mvlr_desc := cons_ped[1,1]

                y := mvlr_desc := 0
                FOR y = 1 TO LEN(cons_ped)
                        IF cons_ped[y,17] < cons_ped[y,20]
                                mvlr_desc := mvlr_desc + ((cons_ped[y,14] * cons_ped[y,20]) - (cons_ped[y,14] * cons_ped[y,17]))
                        ELSEIF cons_ped[y,18] < cons_ped[y,20]
                                mvlr_desc := mvlr_desc + ((cons_ped[y,14] * cons_ped[y,20]) - (cons_ped[y,14] * cons_ped[y,18]))
                        ENDIF
                NEXT

                SR_BEGINTRANSACTION()
                        ccomm := "UPDATE sacped_s SET pcgc = "+sr_cdbvalue(mcgc)
                        ccomm := ccomm + ",pcpf = "+sr_cdbvalue(mcpf)
                        ccomm := ccomm + ",pplaca = "+sr_cdbvalue(mplaca)
                        ccomm := ccomm + ",pcarro = "+sr_cdbvalue(mcarro)
                        ccomm := ccomm + ",pmodelo = "+sr_cdbvalue(mmodelo)
                        ccomm := ccomm + ",pkm = "+sr_cdbvalue(mkm)
                        ccomm := ccomm + ",pcod_cli = "+sr_cdbvalue(mcod_cli)
                        ccomm := ccomm + ",pcomi_oper = "+sr_cdbvalue(mcom_oper)
                        ccomm := ccomm + ",pcod_fin = "+sr_cdbvalue(STRZERO(mcod_fin,3))
                        ccomm := ccomm + ",pcod_tab = "+sr_cdbvalue(STRZERO(mcod_cond,3))
                        ccomm := ccomm + ",pvlr_pres = "+sr_cdbvalue(mvalor_pres)
                        ccomm := ccomm + ",pcond_veze = "+sr_cdbvalue(mcond_veze)
                        ccomm := ccomm + ",pcond_inte = "+sr_cdbvalue(IF(! EMPTY(mcond_int),mtipo_pg+STRZERO(VAL(mcond_int),3),mtipo_pg+STRZERO(m_dia[1],3)+STRZERO(m_dia[2],3)+STRZERO(m_dia[3],3)+STRZERO(m_dia[4],3)+STRZERO(m_dia[5],3)+STRZERO(m_dia[6],3)+STRZERO(m_dia[7],3)+STRZERO(m_dia[8],3)+STRZERO(m_dia[9],3)+STRZERO(m_dia[10],3)+STRZERO(m_dia[11],3)+STRZERO(m_dia[12],3)+STRZERO(m_dia[13],3)+STRZERO(m_dia[14],3)+STRZERO(m_dia[15],3)))
                        ccomm := ccomm + ",ptp_vend = "+sr_cdbvalue(mtp_venda)
                        ccomm := ccomm + ",pvlr_ent = "+sr_cdbvalue(mvlr_ent)
                        ccomm := ccomm + ",pstat_item = "+sr_cdbvalue(mtelemark)
                        ccomm := ccomm + ",pcod_vend = "+sr_cdbvalue(mcod_ven)
                        ccomm := ccomm + ",pvendedor = "+sr_cdbvalue(mnome_ven)
                        ccomm := ccomm + ",pobs1 = "+sr_cdbvalue(mobs1)
                        ccomm := ccomm + ",pobs2 = "+sr_cdbvalue(mobs2)
                        ccomm := ccomm + ",pobs3 = "+sr_cdbvalue(mobs3)
                        ccomm := ccomm + ",pobs4 = "+sr_cdbvalue(mobs4)
                        ccomm := ccomm + ",pobs5 = "+sr_cdbvalue(mobs5)
                        ccomm := ccomm + ",pobs6 = "+sr_cdbvalue(mobs6)
                        ccomm := ccomm + ",pobs7 = "+sr_cdbvalue(mobs7)
                        ccomm := ccomm + ",pobs8 = "+sr_cdbvalue(mobs8)
                        ccomm := ccomm + ",pdesc_merc = "+sr_cdbvalue(mvlr_desc)
                        ccomm := ccomm + ",pproducao = "+sr_cdbvalue(mproducao)
                        ccomm := ccomm + ",pcod_tran = "+sr_cdbvalue(mcod_tran)
                        IF ! EMPTY(mpd_entrega)
                                        ccomm := ccomm + ",pd_entrega = "+sr_cdbvalue(mpd_entrega)
                        ENDIF
                        ccomm := ccomm + ",pfecha = 'F' WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                        sr_getconnection():exec(ccomm,,.f.)
                        sr_committransaction()
                SR_ENDTRANSACTION()
        ENDIF
        **** TOTAL DO PEDIDO ************
        mped_exp:={}
        sr_getconnection():exec("SELECT sum(pquantd*pvlr_fat) FROM sacped_s WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@mped_exp)
        sr_getconnection():exec('COMMIT',,.f.)
        mt_pedido := mped_exp[1,1]
        DEVPOS(lcia+18,ccia+44);DEVOUT(TRANSFORM(mt_pedido,'999,999,999.99'))
        *********************************
        *********************************************************
/*
        IF ali='orcam' .AND. ver_serie() = '141235'
                mopcao := op_simnao('N','Deseja colocar este ORCAMENTO para PRODUCAO: ')
                IF mopcao = 'S';mppag:='P';ENDIF
        ENDIF
*/
        IF m_indiv[1,26] = 'P'
                mopcao := 'S'
        ELSE
                mopcao := op_simnao('S','Confirma Fechamento do Pedido [S/n]:')
        ENDIF
        IF mopcao = 'N'
                SET KEY -8 TO
                LOOP
        ELSEIF mopcao = 'S'
                SR_BEGINTRANSACTION()
                        sr_getconnection():exec("UPDATE sacped_s SET pfecha = 'F' WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                        sr_committransaction()
                SR_ENDTRANSACTION()
                mensagem('Atualizando o CLIENTE....')
                //cComm  := "UPDATE saccli SET ult_orc="+sr_cdbvalue(mdata_sis)+" WHERE  cod_cli = "+sr_cdbvalue(mcod_cli)
                //sr_getconnection():exec(ccomm,,.f.)
                IF ! EMPTY(mnum_os)
                        sr_getconnection():exec("UPDATE sacoss SET pag = 'P',baixa="+sr_cdbvalue(mdata_sis)+",num_ped="+sr_cdbvalue(STRZERO(mnum_ped,6))+" WHERE  sacoss.num_os = "+sr_cdbvalue(STRZERO(mnum_os,6)),,.f.)
                        sr_getconnection():exec('COMMIT',,.f.)
                ENDIF
                mensagem('Impressao do PEDIDO No.: '+STRZERO(mnum_ped,6))
                mcont_item := mtot_itens := 0
                cons_ped := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)

                sr_getconnection():exec("UPDATE cnnt_pedido SET status_ped = 'PEDIDO',obs_pc = "+sr_cdbvalue('PEDIDO No.: '+STRZERO(mnum_ped,6))+",importado = 1 WHERE codigo = "+sr_cdbvalue(VAL(cons_ped[1,94]))+" AND cod_funcionario = "+sr_cdbvalue(cons_ped[1,32]),,.f.)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_ped) > 0
                        mcondicao := cons_ped[1,43]
                        IF VAL(SUBSTR(mcond_veze,2,2)) = 1
                                mprazo := SUBSTR(cons_ped[1,44],3,3)
                        ELSE
                                mprazo := STRZERO(m_dia[1],3)
                        ENDIF
                        mdata := cons_ped[1,4]
                        mhora := cons_ped[1,47]
                ENDIF
                m_matriz:={}
                m_codigo:={}
                m_Cbarra:={}
                m_alt:={}
                SET KEY 28 TO menu_cons()
                //IF m_set[1,70] # 'S'
                        IF ver_serie() = '141302' .AND. SUBSTR(mvia,1,6) = '2a.via'
                                boleto()
                                mflag := 0
                        ELSE
                                IF m_indiv[1,9] = 'B'
                                        boleto()
                                        mflag := 0
                                ELSEIF m_indiv[1,9] = 'L'
                                        boleto('*')
                                        mflag := 0
                                ELSEIF m_indiv[1,9] = 'T'
                                        bole_term()
                                        mflag := 0
                                ELSEIF m_indiv[1,9] = 'F'
                                        formula(,mavaria)
                                ELSEIF m_indiv[1,9] = 'F1'
                                        formula(,mavaria)
                                //ELSEIF m_indiv[1,9] = 'P'
                                        //procomp()
                                ENDIF
                        ENDIF

                //ENDIF

                //IF VAL(mcons_ped[1,94]) > 0 .AND. m_set[1,100] = 'H' .AND. m_indiv[1,9] = 'A' .AND. m_indiv[1,52] # 'S'
                IF VAL(cons_ped[1,94]) > 0 .AND. ver_serie() = '141542'
                        formula_APP()
                ENDIF
                IF ! EMPTY(mnum_os) .AND. m_set[1,42] = 'S'
                        mopcao := op_simnao('S','Deseja Imprimir o RECIBO da O.S.:')
                        IF mopcao = 'S'
                                rec_os(mcod_cli,mnome_cli,mnum_ped,mnum_os,mmodelo,mplaca,mt_pedido)
                        ENDIF
                ENDIF
                mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := mobs7 := mobs8 := SPACE(40)
                m_matriz := {}
                m_codigo := {}
                m_alt := {}
                mt_pedido := 0
                CLEAR GETS
                **********
                SELE('merc');ORDSETFOCUS(1)
                **********
                IF ((m_set[1,83] = 'S' .OR. m_set[1,83] = 'I') .AND. msit_tip <> 'VENDA') .OR. m_indiv[1,26] = 'S' .OR. m_indiv[1,26] = 'P'
                        SET KEY -9 TO
                        IF LASTKEY() = 27
                                mensagem('Tecle <ENTER> para continuar...')
                                INKEY(0)
                        ENDIF
                        sac30(mnum_ped)
	                cons_ped := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
			WHILE EMPTY(cons_ped[1,49])
                        	IF ! aut_sen('SENHA de Liberacao para Sair o Recebimento','Sair_REC',10)
	                                mensagem('Tecle <ENTER> para continuar...')
        	                        INKEY(0)
					sac30(mnum_ped)
				ELSE
					EXIT
                        	ENDIF
                        ENDDO
                        SET KEY -9 TO fecha_pd          // neste mesmo PRG. <F10>Tecla
                        SET KEY -8 TO sac130()           // inclusao de clientes
                ENDIF
                mflag := 0
                CLEAR GETS
                SET KEY -8 TO
                /*
                conf_impressao('PD'+STRZERO(mnum_ped,6)+'.REL')
                */
                cons_cli := {}
                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_cli) > 0
                        IF AT('S',cons_cli[1,40]) > 0
                                sacbole2(mcod_cli,,,,mnum_ped)
                        ENDIF
                ENDIF
		i := 0
                FOR i = 1 TO 15
                        m_dia[i] := m_vlr[i] := 0
                NEXT
                IF ! EMPTY(cons_cli[1,27]) .AND. m_set[1,76] = 'S'
                        email_ped(mnum_ped,cons_cli[1,27])
                ENDIF
		mnum_ped := 0
                mcod_cli := 1
                m_matriz := {}
                m_codigo := {}
                m_alt := {}
                mquantd := 1
                EXIT
        ENDIF
ENDDO
SET KEY -8 TO
SET KEY 28 TO menu_cons()
wvw_lclosewindow()
RETURN NIL
*************************** F I M *******************************
FUNCTION gerar_no_ped()
***********************
WHILE .T.
        aret:={}
        //sr_getconnection():exec( "select numero from sacnoped where sr_recno = 1 for update with lock",,.t.,@aret)
        //sr_getconnection():exec( "select numero from sacnoped where sr_recno = 1 for update with lock",,.t.,@aret)
        //sr_getconnection():exec( "select MAX(numero) from sacnoped",,.t.,@aret)
        sr_getconnection():exec( "select COUNT(*) from sacnoped",,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF aret[1,1] = 0
                sr_getconnection():exec('INSERT INTO sacnoped (numero,data_ped,SR_DELETED)'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue('000000')+','+; //1
                                        sr_cdbvalue(mdata_sis)+','+; //2
                                        sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
        aret:={}
        sr_getconnection():exec( "select numero from sacnoped where sr_recno = 1",,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        mnum_ped = VAL(aret[1,1])+1
        sr_getconnection():exec("update sacnoped set numero = " + sr_cdbvalue(strzero(mnum_ped,6)) + ", data_ped = " + sr_cdbvalue( mdata_sis)+' where sr_recno = 1' ,,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        EXIT
END
RETURN NIL
