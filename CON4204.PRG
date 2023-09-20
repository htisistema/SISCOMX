MEMVAR getlist,nivel_acess,mdata_sis
***************************************************************
**** CON4204.PRG: Relatorio -> CLIENTES MEDIA DE DIAS EM ATRASO
***************************************************************
FUNCTION con4204
***************
LOCAL MPRG:='CON4204',;
      tela,tela1,pag,mtit,mtipo,opcao,mquantd,mcidade,marea:=SPACE(15),;
      mtipo_cli:=' ',mtot_cli:=0,mtolera:=0,mbairro

PRIVATE mnome_vend,mcom_vend,mcliente,mcgc,mcpf,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_vend,mq_dias:=0,mq_doc:=0

IF ! ver_nivel(mprg,'CONTA A RECEBER (CLIENTES MEDIA DE DIAS EM ATRASO)','156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*---------------------------------------------------------------------
//
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*---------------------------------------------------------------------
op_tela(03,02,10,79,' Clientes sem DEBITO ')
@ 00,00 SAY "Tipo de Cliente.................:"
@ 01,00 SAY "Codigo do Vendedor..............:"
@ 02,00 SAY "Digite o nome da Cidade.........:"
@ 03,00 SAY "Digite a Area Desejada..........:"
@ 04,00 SAY "Digite o nome do Bairro.........:"
@ 05,00 SAY "Tolerancia de Dias em Atraso....:"
mtipo_imp := m_indiv[1,18]
WHILE .T.
        pag := mcod_vend := mtolera := 0
        mcliente := SPACE(30)
        mcidade := mbairro := SPACE(20)
        marea := SPACE(15)
        @ 00,34 GET mtipo_cli PICT "@!" 
        @ 01,34 GET mcod_vend PICT "999" VALID ven(mcod_vend,01,48)
        @ 02,34 GET mcidade PICT '@!'
        @ 03,34 GET marea PICT '@!'
        @ 04,34 GET mbairro PICT '@!'
        @ 05,34 GET mtolera PICT "999"
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF
        mtit := "DUPLICATAS A RECEBER (Contas a Receber)"
        mtipo := 'MEDIA DE DIAS EM ATRASO (Ordem Alfabetica)'
        IF ! imp_arq('CLI_DEBI.REL','R')
                LOOP
        ENDIF
        SET PRINT ON
        SET DATE brit
        **************
        SELE('cli');ORDSETFOCUS(2)
        GO TOP
        **************
        WHILE ! EOF()
                prog_imp(RECNO())
                IF (! EMPTY(mcidade) .AND. cli->cidade <> mcidade);
                   .OR. (! EMPTY(mbairro) .AND. cli->bairro <> mbairro);
                   .OR. (! EMPTY(marea) .AND. cli->area <> marea);
                   .OR. (! EMPTY(mtipo_cli) .AND. mtipo_cli <> cli->tipo);
                   .OR. (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> cli->codvend)
                        SKIP
                        LOOP
                ENDIF
                dias_atras(cli->cod_cli,'*')
                IF mq_dias/mq_doc > mtolera
                        SKIP
                        LOOP
                ENDIF
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        IF ! EMPTY(mcod_vend)
                                DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Razao                                    Ult.Comp  No.Ped  Vlr.Pedido Total Acum.  Qtd.Docum.  Qtd.Dias Med.Dias")
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                ENDIF
                ***************** CONDICOES ************************
                DEVPOS(PROW()+1,00);DEVOUT(STR(cli->cod_cli,5))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cli->razao)
*               DEVPOS(PROW(),PCOL()+1);DEVOUT(cli->nome)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(cli->ult_comp))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(cli->num_ped)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(cli->vlr_comp,'999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(cli->tot_comp,'999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mq_doc,'999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mq_dias,'9,999'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mq_dias/mq_doc,'9,999.99'))
                mtot_cli ++
                SKIP
        ENDDO
        IF PROW() >= 55
                EJECT
                pag=pag+1
                cabecalho(pag,mtit,mtipo,mprg)
        ENDIF
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+2,00);DEVOUT("*** RESUMO FINAL ***")
        DEVPOS(PROW()+1,00);DEVOUT('Total Clientes....: '+TRANSFORM(mtot_cli,"@E 999,999"))
        DEVPOS(PROW()+2,00);DEVOUT(time())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('CLI_DEBI.REL')
        /*
        IF mimp_tipo = 2
                lertexto('CLI_DEBI.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M *******************************

