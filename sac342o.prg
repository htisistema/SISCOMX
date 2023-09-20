***************************************
* CANCELAMENTO DE ORCAMENTOS PEDENTES
***************************************

FUNCTION sac342o(tp_ali)
*****************
LOCAL mprg:='SAC342o'
LOCAL opcao,tela,tecla,lci,cci,lba,cba,mtot_ped,mtempo,m_cod:={},point,;
      mmotivo,mimp,msaldo_ant:=0,i,cons_ped:={}

local nErr, nPos,;
        vEmp := {},;
        nCnn,oSql,;
        cComm, apCode,aret:={}

MEMVAR mdias,mhoras
PRIVATE mnum_ped,ali

IF ! ver_nivel(mprg,'CANCELAMENTO DE ORCAMENTO (EM ABERTO)','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba = 11
cba = 70
opcao = 0
//SET KEY 281 TO sac341
ali := tp_ali
op_tela(10,05,21,75,'CANCELAMENTO DE ORCAMENTO PEDENTE')
WHILE .T.
        limpa(00,00,24,80)
        mensagem('Digite o No.do orcamento que deseja cancelar - <ESC>Sair')
        mtot_ped := mnum_ped := 0
        mmotivo := SPACE(40)
        mimp := SPACE(1)
        ASIZE(aret,0)
        @ lci+9,cci TO lci+9,cba
        DEVPOS(lci+1,cci+1);DEVOUT('No.do Orcamento:')
        DEVPOS(lci+2,cci+1);DEVOUT('Valor R$....:')
        DEVPOS(lci+3,cci+1);DEVOUT('Data orcamento.:')
        DEVPOS(lci+4,cci+1);DEVOUT('Cod.vendedor:')
        DEVPOS(lci+5,cci+1);DEVOUT('Hora Emissao:')
        DEVPOS(lci+6,cci+1);DEVOUT('Hora Atual..:')
        DEVPOS(lci+7,cci+1);DEVOUT('Intervalo...:')
        DEVPOS(lci+8,cci+1);DEVOUT('Motivo......:')
        DEVPOS(lci+10,cci+1);DEVOUT('Produto.....:')
        @ lci+1,cci+15 GET mnum_orc PICT '999999' VALID IF(EMPTY(mnum_ped),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF

        cons_ped:={}
        cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" ORDER BY pnum_ped,pcod_merc"
        sr_getconnection():exec( cComm,,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('ORCAMENTO nao existe em nossos arquivos')
                LOOP
        ELSEIF cons_ped[1,49] = '*'
                atencao('Este ORCAMENTO ja foi PAGO')
                LOOP
        ENDIF
        IF cons_ped[1,49] = 'C'
                atencao('Este orcamento foi CANCELADO do dia: '+DTOC(cons_ped[1,50])+' Hrs.: '+cons_ped[1,59]+' Por: '+cons_ped[1,60]+' Motivo:'+cons_ped[1,91])
                ccomm :="UPDATE sacorcam SET ppag = 'C',pdatapag = "+sr_cdbvalue(mdata_sis)+",pautoriz = "+sr_cdbvalue(cod_operado)+",pent_por = "+sr_cdbvalue(cod_operado)+",pent_dat = "+sr_cdbvalue(mdata_sis)+",pmotivo = "+sr_cdbvalue(IF(EMPTY(cons_ped[1,91]),'erro operacao',cons_ped[1,91]))+",phora_pg = "+sr_cdbvalue(TIME())+" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                sr_getconnection():exec(ccomm,,.f.)
                sr_getconnection():exec('COMMIT',,.f.)
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(lci+3,cci+15);DEVOUT(cons_ped[1,4])
        DEVPOS(lci+4,cci+15);DEVOUT(cons_ped[1,32])
        DEVPOS(lci+5,cci+15);DEVOUT(cons_ped[1,47])
        DEVPOS(lci+6,cci+15);DEVOUT(TIME())
        mdias := mdata_sis - cons_ped[1,4]
        mhoras := ELAPTIME(cons_ped[1,47],TIME())

        IF mdias > 0
                mtempo := STRZERO(mdias,3)+' dias'
        ELSE
                mtempo := mhoras
        ENDIF
        DEVPOS(lci+7,cci+15);DEVOUT(mtempo)
        setcor(1)
        i := 0
        FOR i = 1 TO LEN(cons_ped)
                AADD(m_cod,{cons_ped[i,6],cons_ped[i,14],cons_ped[i,80],cons_ped[i,4],cons_ped[i,47],cons_ped[i,32]})
                mtot_ped := mtot_ped + (cons_ped[i,18] * cons_ped[i,14])
        NEXT
        setcor(3)
        DEVPOS(lci+2,cci+15);DEVOUT(TRANSFORM(mtot_ped,'999,999,999.99'))
        setcor(1)
        @ lci+8,cci+15 GET mmotivo VALID IF(EMPTY(mmotivo),.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('N','Confirma Cancelamento do Orcamento:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        mensagem('Cancelando o ORCAMENTO... Aguarde')
        ccomm :="UPDATE sacorcam SET ppag = 'C',pdatapag = "+sr_cdbvalue(mdata_sis)+",pautoriz = "+sr_cdbvalue(cod_operado)+",pent_por = "+sr_cdbvalue(cod_operado)+",pent_dat = "+sr_cdbvalue(mdata_sis)+",pmotivo = "+sr_cdbvalue(mmotivo)+",phora_pg = "+sr_cdbvalue(TIME())+" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        sr_getconnection():exec(ccomm,,.f.)
        sr_getconnection():exec('COMMIT',,.f.)
ENDDO
wvw_lclosewindow()
RETURN NIL
************************* F I M ******************************************
