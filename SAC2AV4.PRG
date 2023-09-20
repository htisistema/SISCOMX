MEMVAR mdata_sis,getlist,nivel_acess
*********************
* ALTERACAO DE PRODUTO DO ESTOQUE A.V.
***********************

FUNCTION sac2av4
***************
LOCAL MPRG:='SAC2AV4'
LOCAL opcao,tela,lci,cci,lba,cba,li,ci,lb,cb,mquantd,mqtd:=0,mpt:=0,i,tela1

PRIVATE mcod_merc,m_produto:={},mcod_cli,mdata,mnum_ped,mmarca,mcliente,mcpf,mcgc,;
        mvisual:={},mponto:={},mnumero:=0,point:=0,mtot_qtd:=0,mtotqtd:=0

IF ! ver_nivel(mprg,'ALTERACAO DE PRODUTO NO ESTOQUE HAVER','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
IF ! AbriArq('sacsetup','set');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacav','av');RETURN NIL;ENDIF

lci = 03
cci = 02
lba = 22
cba = 70
tela = SAVESCREEN(01,00,24,79)
SET KEY -9 TO est_av
WHILE .T.
        exibi_prg(mprg)
        *************************
        SELE('av');ORDSETFOCUS(1)
        GO TOP
        *************************
        SET INTEN ON
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mdata := mdata_sis
        opcao = 'S'
        mcod_cli := SPACE(5)
        mcliente := SPACE(40)
        mcpf := SPACE(11)
        mcgc := SPACE(14)
        mnum_ped := SPACE(6)
        mmarca := SPACE(1)
        mnumero := mtot_qtd := mtotqtd := mqtd := 0

        botao(lci,cci,lba,cba,,' Dados do Comprador ')
        @ lci+4,cci+1 TO lci+4,cba-1
        @ lba-2,cci+1 TO lba-2,cba-1
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('No.Haver...:')
        DEVPOS(lci+2,cci+2);DEVOUT('Cod.Cliente:')
        DEVPOS(lci+3,cci+2);DEVOUT('No.Pedido..:')
        DEVPOS(lci+3,cci+25);DEVOUT('Data:')
        @ lci+1,cci+15 GET mnumero PICT '999999'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,tela)
                UNLOCK
                SET KEY -9 TO
                RELEASE mcod_merc,m_produto:={},mcod_cli,mdata,mnum_ped,mmarca,mcliente,mcpf,mcgc,;
                        mcodigo:={}
                RETURN NIL
        ENDIF
        IF ! av->(DBSEEK(STRZERO(mnumero,6)))
                atencao('Nao foi possivel encontrar este DOCUMENTO')
                LOOP
        ENDIF
        mpt := RECNO()
        ver_cli(VAL(av->cod_cli))
        mcod_cli := av->cod_cli
        mnum_ped := av->num_ped
        mdata    := av->data
        DEVPOS(lci+2,cci+15);DEVOUT(av->cod_cli)
        DEVPOS(lci+3,cci+15);DEVOUT(av->num_ped)
        DEVPOS(lci+3,cci+30);DEVOUT(av->data)
        i := 0
        WHILE .T.
                CLEAR TYPEAHEAD
                ASIZE(m_produto,0)
                ASIZE(mponto,0)
                ASIZE(mvisual,0)
                GO mpt
                WHILE STRZERO(mnumero,6) = av->numero .AND. ! EOF()
                        IF av->baixa = '*'
                                SKIP
                                LOOP
                        ENDIF
                        ver_cod(VAL(av->cod_merc))
                        AADD(m_produto,{av->cod_merc,av->quantd,merc->merc,av->preco})
                        AADD(mponto,RECNO())
                        AADD(mvisual,av->cod_merc+'-'+merc->merc+' '+TRANSFORM(av->quantd,'999,999.99'))
                        mtotqtd := mtotqtd + av->quantd
                        mtot_qtd := mtot_qtd + av->quantd
                        SKIP
                ENDDO
                IF LEN(mvisual) = 0
                        atencao('Nao existe nenhum produto no estoque haver')
                        EXIT
                ENDIF
                limpa(lci+5,cci+1,lba-3,cba-1)
                mensagem("< ou > Consulta  -  <ESC> Retorna  -  <ENTER> p/Resumo" )
                setcor(10);point := ACHOICE(lci+5,cci+1,lba-3,cba-1,mvisual,,,point);setcor(1)

                DO CASE
                        CASE LASTKEY()=27
                                EXIT
                        CASE LASTKEY() = 13
                                IF mponto[point] = 0
                                        LOOP
                                ENDIF
                                GO mponto[point]
                                mquantd := av->quantd
                                tela1 := SAVESCREEN(00,00,24,79)
                                DEVPOS(lba-1,cci+1);DEVOUT('Quantdidade:')
                                @ lba-1,cci+14 GET mquantd PICT '999,999.999'
                                READ
                                IF LASTKEY() = 27 .OR. mquantd = av->quantd
                                        RESTSCREEN(00,00,24,79,tela1)
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma a Alteracao:')
                                IF pcao = 'N'
                                        RESTSCREEN(00,00,24,79,tela1)
                                        LOOP
                                ENDIF
                                ver_cod(VAL(av->cod_merc))
                                m_produto[point,2] := mquantd
                                mvisual[point] := av->cod_merc+'-'+merc->merc+' '+TRANSFORM(mquantd,'999,999.99')
                                BLOQREG()
                                IF mquantd = 0
                                        av->data_bai := mdata_sis
                                        av->baixa := '*'
                                        mtot_qtd := mtot_qtd - (mqtd - mquantd)
                                ELSE
                                        mqtd := av->quantd
                                        mtot_qtd := mtot_qtd - (mqtd - mquantd)
                                        av->quantd := mquantd
                                ENDIF
                                DBCOMMIT()
                                DBUNLOCK()
                                ***************************
                                SELE('merc');ORDSETFOCUS(1)
                                GO TOP
                                merc->(DBSEEK(av->cod_merc))
                                ***************************
                                BLOQREG()
                                merc->saldo_av := merc->saldo_av - (mqtd - mquantd)
                                DBCOMMIT()
                                DBUNLOCK()
                                *************************
                                SELE('av');ORDSETFOCUS(1)
                                *************************
                                RESTSCREEN(00,00,24,79,tela1)
                                LOOP
                ENDCASE
        ENDDO
        IF mtot_qtd <> mtotqtd
                imp_av()
        ELSE
                opcao := mensagem1('Deseja imprimir o Relatorio Est.Haver','S','S,N')
                IF opcao = 'S'
                        imp_av()
                ENDIF
        ENDIF
ENDDO
RESTSCREEN(00,00,24,79,tela1)
SET KEY -9 TO
RETURN NIL
*********************** FIM ***************************
**********************************
* FINALIZA A ENTRADA DO ESTOQUE A.V.
**********************************

FUNCTION imp_av
***************

LOCAL mtraco,opcao,i,y,msele,morde,mqtd:=1

MEMVAR mtot_qtd,mtotqtd,mmarca,m_produto,mvia,mnumero,mcod_cli,mcliente,;
       mnum_ped,cod_operado

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

msele := SELE()
morde := INDEXORD()
mtraco := REPLI('-',80)
CLEAR GETS
IF ver_serie() = '141277'
        mqtd := 1
ELSE
        mqtd := 2
ENDIF
mtipo_imp := m_indiv[1,18]
IF mtot_qtd = mtotqtd
        opcao := op_simnao('S','Confirma a Entrada do Estoque A.V.:')
        IF opcao = 'N'
                RETURN NIL
        ENDIF
ENDIF
mmarca := '*'
mvia := 'Via do cliente'
mensagem('Espere o final da impressao OK !!!')
IF ! imp_arq('EST_HAVE.REL','R')
        RETURN NIL
ENDIF
i := 0
FOR i = 1 TO mqtd
        DEVPOS(PROW()+1,00);DEVOUT('Documento Numero:')
        DEVPOS(PROW(),18);DEVOUT(STRZERO(mnumero,6))
        DEVPOS(PROW(),18);DEVOUT(STRZERO(mnumero,6))
        DEVPOS(PROW(),PCOL()+5);DEVOUT('Haver Alterado')
        DEVPOS(PROW()+1,00);DEVOUT('Cliente:')
        DEVPOS(PROW(),09);DEVOUT(mcod_cli+'-'+mcliente)
        DEVPOS(PROW(),09);DEVOUT(mcod_cli+'-'+mcliente)
        imprt('M','C')
        DEVPOS(PROW()+1,00);DEVOUT('Endereco:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),''))
        DEVPOS(PROW(),00);DEVOUT(PADL('Data de Emissao: '+DTOC(mdata_sis),130))
        DEVPOS(PROW()+1,00);DEVOUT('Bairro: '+cli->bairro+' - Cidade:'+cli->cidade+' - Cep.:'+cli->cep+' - Fone:'+cli->tel1)
        DEVPOS(PROW(),00);DEVOUT(PADL('Hora:'+TIME(),130))
        imprt('M','N')
        DEVPOS(PROW()+1,00);DEVOUT('No.do Pedido:'+ RTRIM(mnum_ped))
        DEVPOS(PROW(),13);DEVOUT(RTRIM(mnum_ped),80)
        DEVPOS(PROW(),00);DEVOUT(PADC('Mercadorias  A Receber',80))
        DEVPOS(PROW(),00);DEVOUT(PADC('Mercadorias  A Receber',80))
        DEVPOS(PROW(),00);DEVOUT(PADL('Cod.Oper.: '+cod_operado,80))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('Cod.')
        DEVPOS(PROW(),05);DEVOUT('Descricao')
        DEVPOS(PROW(),64);DEVOUT('Quantd.')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        FOR y = 1 TO LEN(m_produto)
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[y,1])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_produto[y,3])
                DEVPOS(PROW(),62);DEVOUT(TRANSFORM(m_produto[y,2],'99999.99'))
        NEXT
        DEVPOS(PROW()+ (24 - PROW()),00);DEVOUT(PADC('____________________          ____________________',80))
        DEVPOS(PROW()+1,00);DEVOUT(PADC('      Cliente                      Responsavel    ',80))
        DEVPOS(PROW()+1,00);DEVOUT('OBS.:So recebera mercadoria mencionada mediante a apresentacao desse Documento.')
        DEVPOS(PROW()+2,00);DEVOUT(mvia)
        mvia := 'Via Processamento'
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+3,00);DEVOUT(' ')
        SETPRC(00,00)
NEXT
EJECT
SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
conf_impressao('EST_HAVE.REL')
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN NIL

