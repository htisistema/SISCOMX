MEMVAR getlist,nivel_acess,mdata_sis
* LISTAGEM MOVIMENTO P/CLIENTE
******************************
FUNCTION sac525(mcod)
*********************
LOCAL MPRG:='SAC525',mtitulo:='RELATORIO MOVIMENTO P/CLIENTE',;
      opcao,mquantd,i,mtecla,mdata1,mdata2,mcod_op,;
      mtot_sai,mtot_dif,mvlr_sai,mtot_cust,mop,mtot_aux,;
      mtot_prven,mdesc,msai_bal,mtipo_cons,;
      mcodcli,mnome,msele,morde,malias,;
      mprod_sai,mprod_cust,mprod_prv,mprod_vlr,mtipo_doc,mtot_peso:=0,mtot_liq:=0,;
      mlucro := 'S'

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,mcodigo,mcod_cli,mcgc,mcpf,mcliente,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli:={}

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)
IF mcod <> NIL
        msele := SELE()
        morde := INDEXORD()
ENDIF
*----------------------------------------------------------------------------
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
set_key('merc')
op_tela(0,0,12,77,mtitulo)
WHILE .T.
        exibi_prg(mprg)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        IF mcod <> NIL
                mcod_cli := mcod
        ELSE
                mcod_cli := 0
        ENDIF
        mcodigo := mquantd := 0
        mdata1 := CTOD('  /  /  ')
        mdata2 := mdata_sis
        mcod_op := '04'
        mtipo_cons := 'V'
        mtipo_doc := '  '
        mlucro := 'S'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(1,2);DEVOUT('Cod.Cliente.........:')
        DEVPOS(2,2);DEVOUT('Cod.Produto.........:')
        DEVPOS(3,2);DEVOUT('Data Inicial........:')
        DEVPOS(4,2);DEVOUT('Data Final..........:')
        DEVPOS(5,2);DEVOUT('Tipo de Documento...:')
        DEVPOS(6,2);DEVOUT('Cod.Operacao........:')
        DEVPOS(7,2);DEVOUT('Tipo [V]enda [C]usto:')
        DEVPOS(8,2);DEVOUT('Imprimir Lucro [S/n]:')
        DEVPOS(9,2);DEVOUT('Processando Cliente.:')

        @ 1,24 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,1,30)
        IF LASTKEY() = 27
                IF mcod <> NIL
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                ENDIF
                fimset()
                EXIT
        ENDIF
        @ 2,24 GET mcodigo PICT '99999' VALID ver_cod(mcodigo,2,30,,0)
        IF LASTKEY() = 27
                IF mcod <> NIL
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                ENDIF
                fimset()
                EXIT
        ENDIF
        @ 3,24 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 4,24 GET mdata2 VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 5,24 GET mtipo_doc PICT '@!'
        @ 6,24 GET mcod_op PICT '99' VALID mcod_op $ '01,02,03,04'
        @ 7,24 GET mtipo_cons PICT '@!' VALID mtipo_cons $ 'V,C'
        @ 8,24 GET mlucro PICT '@!' VALID mlucro $ 'S,N'
        READ
        IF LASTKEY() = 27
                IF mcod <> NIL
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                ENDIF
                fimset()
                EXIT
        ENDIF
        IF mcod_op = '01'
                ****************
                SELE('movnt');ORDSETFOCUS(1)
                ****************
                movnt->(DBSEEK(DTOS(mdata1),.T.))
                malias := 'movnt'
        ELSE
                ****************
                SELE('mov');ORDSETFOCUS(1)
                ****************
                mov->(DBSEEK(DTOS(mdata1),.T.))
                malias := 'mov'
        ENDIF

        IF EOF()
                //SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        IF ! imp_arq('TAB_MOV.REL','R')
                LOOP
        ENDIF
        mtot_prven := mtot_cust := mtot_aux := mtot_sai := mtot_dif := ;
        mvlr_sai := msai_bal := mtot_peso := mtot_liq := 0
//        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        mpag = 0
        IF ! EMPTY(mcod_cli)
                mtit = 'Movimento do Cliente:'+STR(mcod_cli,5)+'-'+mcliente
                mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                marq := 'TAB_MOV.REL'
                WHILE (malias)->data_s_e <= mdata2 .AND. ! EOF()
                        prog_imp(RECNO(),DTOC((malias)->data_s_e))
                        IF mpag = 0 .OR. PROW() >=59
                                mpag ++
                                IF mpag > 1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                                DEVPOS(PROW(),10);DEVOUT('Cod. ')
                                DEVPOS(PROW(),16);DEVOUT('Descricao')
                                DEVPOS(PROW(),58);DEVOUT('Doc.(NF)  ')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Quantd.')
                                IF mtipo_cons = 'V'
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Tot.Pr.Vd')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Tt.Vendido')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Desconto')
                                        IF mlucro = 'S'
                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Lucro R$')
                                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Lucro %')
                                        ENDIF
                                ELSE
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Valor Unit.')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Total Custo')
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        IF (! EMPTY(mcodigo) .AND. STRZERO(mcodigo,5) <> (malias)->codigo);
                           .OR. (mcod_cli <> (malias)->cod_cli .OR. (malias)->ent_sai <> 'S');
                           .OR. (mcod_op = '01' .AND. (malias)->tipo = '02');
                           .OR. (mcod_op = '02' .AND. ((malias)->tipo = '01' .OR. (malias)->tipo = '03'));
                           .OR. (mcod_op = '03' .AND. ((malias)->tipo = '01' .OR. (malias)->tipo = '02'));
                           .OR. (mcod_op = '04' .AND. (malias)->tipo = '03');
                           .OR. (! EMPTY(mtipo_doc) .AND. mtipo_doc <> SUBSTR(mov->documento,1,2))
                                SKIP;LOOP
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT((malias)->data_s_e)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT((malias)->codigo)
                        DEVPOS(PROW(),PCOL()+1);DEVOUT((malias)->produto)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT((malias)->documento)
                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT((malias)->quantd,'99999.99')
                        IF mcod_op = '04' .OR. mcod_op = '02'
                                IF mtipo_cons = 'V'
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT((malias)->quantd * (malias)->pr_venda,'99,999.99')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT((malias)->quantd * (malias)->vl_vend,'99,999.99')
                                        IF SUBSTR((malias)->documento,1,2) = 'BL'
                                                msai_bal := msai_bal + (malias)->quantd
                                        ELSE
                                                IF (malias)->pr_venda > (malias)->vl_vend
                                                        mtot_aux := mtot_aux + ((malias)->quantd * (malias)->vl_vend - (malias)->quantd * (malias)->pr_venda)
                                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(((malias)->quantd * (malias)->vl_vend)-((malias)->quantd*(malias)->pr_venda),'99,999.99')
                                                ELSE
                                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(0,'99,999.99')
                                                ENDIF
                                                mtot_prven := mtot_prven + ((malias)->pr_venda * (malias)->quantd)
                                                mtot_sai = mtot_sai + (malias)->quantd
                                                mtot_cust := mtot_cust + ((malias)->pr_unit * (malias)->quantd)
                                                mvlr_sai = mvlr_sai + (malias)->vl_vend * (malias)->quantd
                                        ENDIF
                                        IF mlucro = 'S'
                                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(((malias)->quantd * (malias)->vl_vend) - ((malias)->quantd * (malias)->pr_unit),'99,999.99')
                                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(((((malias)->quantd * (malias)->vl_vend) - ((malias)->quantd * (malias)->pr_unit))/((malias)->quantd * (malias)->pr_unit))*100,'9999.99')
                                        ENDIF
                                ELSE
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT((malias)->pr_unit,'99,999.99')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT((malias)->quantd * (malias)->pr_unit,'99,999.99')
                                        mtot_sai = mtot_sai + (malias)->quantd
                                        mtot_cust := mtot_cust + ((malias)->pr_unit * (malias)->quantd)
                                ENDIF
                        ELSE
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT((malias)->vl_fatura,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT((malias)->quantd * (malias)->vl_fatura,'9,999,999.99')
                                IF SUBSTR((malias)->documento,1,2) = 'BL'
                                        msai_bal := msai_bal + (malias)->quantd
                                ELSE
                                        IF (malias)->pr_venda > (malias)->vl_vend
                                                mtot_aux := mtot_aux + ((malias)->quantd * (malias)->vl_fatura - (malias)->quantd * (malias)->pr_venda)
                                        ENDIF
                                        mtot_prven := mtot_prven + ((malias)->pr_venda * (malias)->quantd)
                                        mtot_sai = mtot_sai + (malias)->quantd
                                        mtot_cust := mtot_cust + ((malias)->pr_unit * (malias)->quantd)
                                        mvlr_sai = mvlr_sai + (malias)->vl_fatura * (malias)->quantd
                                ENDIF
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(((malias)->quantd * (malias)->vl_fatura) - ((malias)->quantd * (malias)->pr_unit),'999,999.99')
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(((((malias)->quantd * (malias)->vl_fatura) - ((malias)->quantd * (malias)->pr_unit))/((malias)->quantd * (malias)->pr_unit))*100,'9,999.99')
                        ENDIF
                        mtot_peso := mtot_peso + (malias)->peso
                        mtot_liq  := mtot_liq  + (malias)->peso_liq
                        SKIP
                ENDDO
                IF PROW() >= 43
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF mtipo_cons = 'C'
                        DEVPOS(PROW()+2,00);DEVOUT('Total de SAIDAS....:')
                        DEVPOS(PROW(),21);DEVOUT('('+LTRIM(TRANSFORM(mtot_sai,'999999.99'))+')')
                        DEVPOS(PROW(),PCOL());DEVOUT(' -  Total PRECO CUSTO R$..:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_cust,'99,999,999.99')
                ENDIF
                DEVPOS(PROW()+2,00);DEVOUT('Total de SAIDAS....:')
                DEVPOS(PROW(),21);DEVOUT('('+LTRIM(TRANSFORM(mtot_sai,'999999.99'))+')')
                DEVPOS(PROW(),PCOL());DEVOUT(' -  Total PRECO VENDA R$..:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_prven,'99,999,999.99')

                DEVPOS(PROW(),PCOL());DEVOUT(' -  Total PRECO VENDIDO R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_sai,'99,999,999.99')

                DEVPOS(PROW()+1,00);DEVOUT('Total de DESCONTO..R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_aux,'99,999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Desconto MEDIO (%):')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(((mtot_aux*-1)/mvlr_sai)*100,'999.9999')
                IF mlucro = 'S'
                        DEVPOS(PROW()+1,00);DEVOUT('Lucro Medio  R$.....:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_sai - mtot_cust,'999,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('em (%):')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((mvlr_sai - mtot_cust) / mtot_cust * 100,'9999.99')
                ENDIF

                DEVPOS(PROW()+1,00);DEVOUT('Peso Liquido.........:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_liq,'999,999,999.999')
                DEVPOS(PROW()+1,00);DEVOUT('Peso Bruto...........:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_peso,'999,999,999.999')
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
        ELSE
                IF ! EMPTY(mcodigo)
                        mtit = 'Movimento de Cliente do Prod.: '+merc->cod_merc+'-'+merc->merc
                ELSE
                        mtit = 'Movimento de Cliente'
                ENDIF
                mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                marq := 'TAB_MOV.REL'
                **************************
                SELE('cli');ORDSETFOCUS(2)
                GO TOP
                **************************
                mpag := 0
                WHILE ! EOF()
                        prog_imp(RECNO(),DTOC((malias)->data_s_e))
                        SETPOS(9,24);DISPOUT(STR(cons_cli[1,2],5)+'-'+cons_cli[1,3])
                        IF mpag = 0 .OR. PROW() >=59
                                mpag ++
                                IF mpag > 1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('Cod. ')
                                DEVPOS(PROW(),07);DEVOUT('Cliente                                 ')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Quantd.')
                                IF mtipo_cons = 'V'
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Tot.Venda')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Tot.Vendido')
                                ELSE
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Total Custo')
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        IF mcod_op = '01'
                                ****************
                                SELE('movnt');ORDSETFOCUS(1)
                                GO TOP
                                ****************
                                movnt->(DBSEEK(DTOS(mdata1),.T.))
                                malias := 'movnt'
                        ELSE
                                ****************
                                SELE('mov');ORDSETFOCUS(1)
                                GO TOP
                                ****************
                                mov->(DBSEEK(DTOS(mdata1),.T.))
                                malias := 'mov'
                        ENDIF
                        mprod_sai := mprod_cust:= mprod_prv := mprod_vlr := ;
                        mtot_peso := mtot_liq := 0
                        mcodcli := cons_cli[1,2]
                        mnome   := cons_cli[1,3]
                        WHILE (malias)->data_s_e <= mdata2 .AND. ! EOF()
                                IF (! EMPTY(mcodigo) .AND. STRZERO(mcodigo,5) <> (malias)->codigo);
                                   .OR. (mcodcli <> (malias)->cod_cli .OR. (malias)->ent_sai <> 'S');
                                   .OR. (mcod_op = '01' .AND. (malias)->tipo = '02');
                                   .OR. (mcod_op = '02' .AND. ((malias)->tipo = '01' .OR. (malias)->tipo = '03'));
                                   .OR. (mcod_op = '03' .AND. ((malias)->tipo = '01' .OR. (malias)->tipo = '02'));
                                   .OR. (mcod_op = '04' .AND. (malias)->tipo = '03');
                                   .OR. (! EMPTY(mtipo_doc) .AND. mtipo_doc <> SUBSTR(mov->documento,1,2))
                                        SKIP;LOOP
                                ENDIF
                                IF mcod_op = '04' .OR. mcod_op = '02'
                                        IF SUBSTR((malias)->documento,1,2) = 'BL'
                                                msai_bal := msai_bal + (malias)->quantd
                                        ELSE
                                                IF (malias)->pr_venda > (malias)->vl_vend
                                                        mtot_aux := mtot_aux + ((malias)->quantd * (malias)->vl_vend - (malias)->quantd * (malias)->pr_venda)
                                                ENDIF
                                                mtot_prven := mtot_prven + ((malias)->pr_venda * (malias)->quantd)
                                                mtot_sai = mtot_sai + (malias)->quantd
                                                mtot_cust := mtot_cust + ((malias)->pr_unit * (malias)->quantd)
                                                mvlr_sai = mvlr_sai + (malias)->vl_vend * (malias)->quantd

                                                mprod_prv := mprod_prv + ((malias)->pr_venda * (malias)->quantd)
                                                mprod_sai = mprod_sai + (malias)->quantd
                                                mprod_cust := mprod_cust + ((malias)->pr_unit * (malias)->quantd)
                                                mprod_vlr := mprod_vlr + (malias)->vl_vend * (malias)->quantd
                                        ENDIF
                                ELSE
                                        IF SUBSTR((malias)->documento,1,2) = 'BL'
                                                msai_bal := msai_bal + (malias)->quantd
                                        ELSE
                                                IF (malias)->pr_venda > (malias)->vl_vend
                                                        mtot_aux := mtot_aux + ((malias)->quantd * (malias)->vl_fatura - (malias)->quantd * (malias)->pr_venda)
                                                ENDIF
                                                mtot_prven := mtot_prven + ((malias)->pr_venda * (malias)->quantd)
                                                mtot_sai = mtot_sai + (malias)->quantd
                                                mtot_cust := mtot_cust + ((malias)->pr_unit * (malias)->quantd)
                                                mvlr_sai = mvlr_sai + (malias)->vl_fatura * (malias)->quantd
                                        ENDIF
                                ENDIF
                                mtot_peso := mtot_peso + (malias)->peso
                                mtot_liq  := mtot_liq  + (malias)->peso_liq
                                SKIP
                        ENDDO
                        IF ! EMPTY(mprod_sai)
                                DEVPOS(PROW()+1,00);DEVOUT(mcodcli+' '+mnome)
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(mprod_sai,'99999.99')
                                IF mtipo_cons = 'V'
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(mprod_prv,'999,999.99')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(mprod_vlr,'999,999.99')
                                ELSE
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(mprod_cust,'999,999.99')
                                ENDIF
                        ENDIF
                        SELE('cli');ORDSETFOCUS(2)
                        SKIP
                ENDDO
                IF PROW() >= 43
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF mtipo_cons = 'C'
                        DEVPOS(PROW()+2,00);DEVOUT('Total de SAIDAS....:')
                        DEVPOS(PROW(),21);DEVOUT('('+LTRIM(TRANSFORM(mtot_sai,'999999.99'))+')')
                        DEVPOS(PROW(),PCOL());DEVOUT(' -  Total PRECO CUSTO R$..:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_cust,'99,999,999.99')
                ENDIF
                DEVPOS(PROW()+2,00);DEVOUT('Total de SAIDAS....:')
                DEVPOS(PROW(),21);DEVOUT('('+LTRIM(TRANSFORM(mtot_sai,'999999.99'))+')')
                DEVPOS(PROW(),PCOL());DEVOUT(' -  Total PRECO VENDA R$..:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_prven,'99,999,999.99')

                DEVPOS(PROW(),PCOL());DEVOUT(' -  Total PRECO VENDIDO R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_sai,'99,999,999.99')

                DEVPOS(PROW()+1,00);DEVOUT('Total de DESCONTO..R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_aux,'99,999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Desconto MEDIO (%):')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(((mtot_aux*-1)/mvlr_sai)*100,'999.9999')

                DEVPOS(PROW()+1,00);DEVOUT('Lucro Medio  R$.....:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_sai - mtot_cust,'999,999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('em (%):')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((mvlr_sai - mtot_cust) / mtot_cust * 100,'9999.99')

                DEVPOS(PROW()+1,00);DEVOUT('Peso Liquido.........:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_liq,'999,999,999.999')
                DEVPOS(PROW()+1,00);DEVOUT('Peso Bruto...........:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_peso,'999,999,999.999')
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
        ENDIF
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
wvw_lclosewindow()
RETURN NIL
