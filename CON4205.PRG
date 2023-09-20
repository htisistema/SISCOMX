MEMVAR getlist,nivel_acess,mdata_sis
***************************************************************
**** CON4204.PRG: Relatorio -> CLIENTES COM LIMITE ESTOURADO
***************************************************************
FUNCTION con4205
***************
LOCAL MPRG:='CON4205',;
      tela,tela1,pag,mtit,mtipo,opcao,mquantd,mcidade,marea:=SPACE(15),;
      mtipo_cli:=' ',mtot_cli:=0,mbairro,cons_cli:={}

PRIVATE mnome_vend,mcom_vend,mcliente,mcgc,mcpf,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_vend,mq_dias:=0,mq_doc:=0

IF ! ver_nivel(mprg,'CONTA A RECEBER (CLIENTES COM LIMITE ESTOURADO)','156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*---------------------------------------------------------------------
//
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*---------------------------------------------------------------------
op_tela(05,02,10,79,' Clientes sem DEBITO ')
@ 00,00 SAY "Tipo de Cliente.................:"
@ 01,00 SAY "Codigo do Vendedor..............:"
@ 02,00 SAY "Digite o nome da Cidade.........:"
@ 03,00 SAY "Digite a Area Desejada..........:"
@ 04,00 SAY "Digite o nome do Bairro.........:"
mtipo_imp := m_indiv[1,18]
WHILE .T.
        pag := mcod_vend := mtot_cli := 0
        mcliente := SPACE(30)
        mcidade := mbairro := SPACE(20)
        marea := SPACE(15)
        @ 00,34 GET mtipo_cli PICT "@!"
        @ 01,34 GET mcod_vend PICT "999" VALID ven(mcod_vend,01,48)
        @ 02,34 GET mcidade PICT '@!'
        @ 03,34 GET marea PICT '@!'
        @ 04,34 GET mbairro PICT '@!'
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma os Dados para o Relatorio:')
        IF opcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        mensagem('Aguarde um momento coletando dados para o relatorio')
        cons_cli := {}
        ccomm := "SELECT * FROM saccli WHERE NOT tipo = 'E'"
        IF ! EMPTY(mbairro)
                ccomm := ccomm + " AND bairro = "+sr_cdbvalue(mbairro)
        ENDIF
        IF ! EMPTY(mtipo_cli)
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_cli)
        ENDIF
        IF ! EMPTY(mcod_vend)
                ccomm := ccomm + " AND codvend = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF ! EMPTY(marea)
                ccomm := ccomm + " AND area = "+sr_cdbvalue(marea)
        ENDIF
        IF mtipo_cli = 'J'
                ccomm := ccomm + " AND cgc IS NOT NULL"
        ENDIF
        IF mtipo_cli = 'F'
                ccomm := ccomm + " AND (cgc IS NULL OR cgc = ' ')"
        ENDIF
        IF ! EMPTY(mcidade)
                ccomm := ccomm + " AND cidade = "+sr_cdbvalue(mcidade)
        ENDIF
        ccomm := ccomm + " AND limite > "+sr_cdbvalue(0)
        ccomm := ccomm + " ORDER BY razao"
        sr_getconnection():exec(ccomm,,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_cli) = 0
                atencao('Nao existe nenhum Cliente com essas caracteristica')
                LOOP
        ENDIF
        mtit := "DUPLICATAS A RECEBER (Contas a Receber)"
        mtipo := 'CLIENTES COM LIMITE ESTOURADO (Ordem Alfabetica)'
        IF ! imp_arq('CLI_DEBI.REL','R')
                LOOP
        ENDIF
        FOR i = 1 TO LEN(cons_cli)
                prog_imp(i,cons_cli[i,2]+' - '+cons_cli[i,3])
                cons_dupr := {}
                //ccomm := "SELECT SUM(valor) FROM sacdupr WHERE fornec = "+sr_cdbvalue(cons_cli[i,2])+" AND (datpag IS NULL OR datpag = "+sr_cdbvalue(CTOD('  /  /  '))+")"
                ccomm := "SELECT SUM(valor) FROM sacdupr WHERE fornec = "+sr_cdbvalue(cons_cli[i,2])+" AND datpag IS NULL"
                sr_getconnection():exec(ccomm,,.t.,@cons_dupr)
                sr_getconnection():exec('COMMIT',,.f.)
/*
                IF LEN(cons_dupr) = 0
                        LOOP
                ENDIF
*/
                IF cons_cli[i,44] >= cons_dupr[1,1]
                        LOOP
                ENDIF
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'N')
                        IF ! EMPTY(mcod_vend)
                                DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Razao                                         Limite  Saldo Dev.")
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",80))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(cons_cli[i,2])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_cli[i,3])
*               DEVPOS(PROW(),PCOL()+1);DEVOUT(cli->nome)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(cons_cli[i,44],'999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(cons_dupr[1,1],'999,999.99'))
                mtot_cli ++
        NEXT
        IF PROW() >= 55
                EJECT
                pag=pag+1
                cabecalho(pag,mtit,mtipo,mprg)
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT("*** RESUMO FINAL ***")
        DEVPOS(PROW()+1,00);DEVOUT('Total Clientes....: '+TRANSFORM(mtot_cli,"@E 99,999"))
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

