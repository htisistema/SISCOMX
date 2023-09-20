******************************
* TABELA DE LISTA DE PRESENTE
******************************
MEMVAR getlist,nivel_acess,mcaminho,mend_firm,mcid_firm,mfone_firm,minsc_firm,;
       mcgc_firm

FUNCTION saclistpre
**************
LOCAL tela,lci,cci,lba,cba,opcao,i,pag:=0,mtipo:='',cons_merc:={},mtipo_ordem:=0,m_imprimir:={},;
      mop_acres,mop_excl,mop_saldo,mtot_item:=0,msaldo_mer,cons_mov:={}

PRIVATE mprg:='SACLISTPRE',mtraco,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_prese:={},;
        cons_cli:={},mcod_cli:=0

IF ! ver_nivel(mprg,'RELATORIO LISTA DE PRESENTES','156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',137)
lci := cci := 00
lba := 22
cba := 70
*-------------------------------------------------------------------------
op_tela(05,10,10,80,'LISTA DE PRESENTE')
*-------------------------------------------------------------------------
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        limpa(00,00,33,100)
        mcod_cli := mtipo_ordem := 0
        mtot_item:=0
        mop_acres := mop_excl := 'N' 
        mop_saldo := msaldo_mer :=' '
        mensagem('Digite o Codigo do Cliente - <ESC>p/Sair')
        DEVPOS(lci+0,cci+2);DEVOUT('Codigo Cliente................:')
        DEVPOS(lci+1,cci+2);DEVOUT('Tipo de Ordem.................:')
        DEVPOS(lci+2,cci+2);DEVOUT('So Produtos Excluido [S/N]....:')
        DEVPOS(lci+3,cci+2);DEVOUT('So Prod.[C]om [S]em SALDO List:')
        DEVPOS(lci+4,cci+2);DEVOUT('So Prod.[C]om [S]em SALDO Esto:')
        //DEVPOS(lci+4,cci+2);DEVOUT('So Produtos Acrescentado [S/N]:')
        @ lci+0,cci+34 GET mcod_cli PICT "99999"
        READ
        IF LASTKEY() = 27
                RELEASE mprg
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! EMPTY(mcod_cli)
                cons_cli:={}
                ccomm := "SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5))
                sr_getconnection():exec(ccomm,,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_cli) = 0
                        atencao('Nao foi possivel encontrar o Cliente...')
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(lci,cci+40);DEVOUT(' - '+cons_cli[1,3])
                setcor(1)
        ENDIF
        setcor(10)
	@ lci+1,34 PROMPT ' ALFABETICA '
	@ lci+1,COL()+2 PROMPT '  PRECO DE VENDA  '
	SET INTEN ON
	MENU TO mtipo_ordem
        setcor(1)
        @ lci+2,cci+34 GET mop_excl PICT "@!" VALID mop_excl $ 'S,N'
        @ lci+3,cci+34 GET mop_saldo PICT "@!" VALID mop_saldo $ 'C,S, '
        @ lci+4,cci+34 GET msaldo_mer PICT "@!" VALID msaldo_mer $ 'C,S, '
        //@ lci+4,cci+34 GET mop_acres PICT "@!" VALID mop_acres $ 'S,N'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma o Cliente:')
        IF opcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        mtit := 'LISTA DE PRESENTE'
        mensagem('Aguarde um momento coletando dados para impressao do Relatorio')
        cons_prese:={}
        ccomm := "SELECT * FROM sacpresen WHERE codcli IS NOT NULL"
        IF mop_saldo = 'C'
                ccomm := ccomm + " AND qtd > '0'"
        ELSEIF mop_saldo = 'S'
                ccomm := ccomm + " AND qtd <= '0'"
        ENDIF
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND codcli = "+sr_cdbvalue(STRZERO(mcod_cli,5))
        ENDIF

        IF mop_excl = 'S'
                mtit := mtit + ' PRODUTOS EXCLUIDOS'
                ccomm := ccomm + " AND excluido IS NOT NULL"
        ENDIF
        sr_getconnection():exec(ccomm,,.t.,@cons_prese)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_prese) = 0
                atencao('Nao existe nenhum Produto para este CLIENTE...')
                LOOP
        ENDIF
        IF mop_saldo = 'C'
                mtit := mtit + ' PRODUTOS COM SALDO'
        ELSEIF mop_saldo = 'S'
                mtit := mtit + ' PRODUTOS SEM SALDO'
        ENDIF
        IF ! imp_arq('LIST_PRE.REL','R')
                LOOP
        ENDIF
        m_imprimir:={}
        pag := i := 0
        FOR i = 1 TO LEN(cons_prese)
                cons_merc:={}
                ccomm := "SELECT pr_venda,saldo_mer FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_prese[i,4])
                sr_getconnection():exec(ccomm,,.t.,@cons_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_merc) = 0
                        LOOP
                ENDIF
                IF msaldo_mer = 'C' .AND. cons_merc[1,2] <= 0
                        LOOP
                ELSEIF msaldo_mer = 'S' .AND. cons_merc[1,2] > 0
                        LOOP
                ENDIF
                cons_mov := {}
                cComm  := "SELECT SUM(quantd) FROM sacmov WHERE sacmov.tipo = '02' AND sacmov.cancel IS NULL AND sacmov.ent_sai = 'S' AND sacmov.devolucao IS NULL"
	        cComm  := ccomm +" AND sacmov.vl_vend > 0 AND NOT sacmov.num_ped = 'CUPOME' AND ( sacmov.documento like 'PD%' OR  sacmov.documento like 'CP%')"
                cComm  := ccomm +" AND sacmov.cod_vend IS NOT NULL AND sacmov.documento NOT LIKE 'TR%'"
                cComm  := ccomm + " AND sacmov.vl_vend > "+sr_cdbvalue(0)
                cComm  := ccomm + " AND sacmov.codigo = "+sr_cdbvalue(cons_prese[i,4])
                cComm  := ccomm + " AND sacmov.cod_presente = "+sr_cdbvalue(cons_prese[i,2])
                sr_getconnection():exec(ccomm,,.t.,@cons_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                //IF LEN(cons_mov) > 0
                        //                       1              2                3              4           5                 6                  7                8              9              10
                        AADD(m_imprimir,{cons_prese[i,4],cons_prese[i,5],cons_prese[i,6],cons_merc[1,1],cons_prese[i,11],cons_prese[i,12],cons_prese[i,13],cons_prese[i,2],cons_merc[1,2],cons_mov[1,1]})
        NEXT
        IF mtipo_ordem = 1
                ASORT(m_imprimir,,, {|x,y| x[2] < y[2]})
        ELSE
                ASORT(m_imprimir,,, {|x,y| x[4] < y[4]})
        ENDIF        
        pag := i := 0
        FOR i = 1 TO LEN(m_imprimir)
                prog_imp(i,m_imprimir[i,1])
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        IF ! EMPTY(mcod_cli)
                                DEVPOS(PROW()+1,00);DEVOUT('Cliente.: '+cons_cli[1,2]+' - '+cons_cli[1,3])
                                DEVPOS(PROW()+1,00);DEVOUT('          '+cons_cli[1,4])
                                DEVPOS(PROW()+1,00);DEVOUT('Endereco: '+cons_cli[1,21])
                                DEVPOS(PROW()+1,00);DEVOUT('Bairro..: '+cons_cli[1,22]+' - Cidade: '+cons_cli[1,24]+' - UF: '+cons_cli[1,25])
                                DEVPOS(PROW()+1,00);DEVOUT('Data Casamento: '+DTOC(m_imprimir[1,5]))
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",132))
                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Produto                                     Sld.List       Valor  Sld.Estoq.   Qtd.Vendida")
                        IF EMPTY(mcod_cli)
                                DEVPOS(PROW(),PCOL()+3);DEVOUT("Cliente")
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",132))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_imprimir[i,1]+' '+m_imprimir[i,2]+'  '+TRANSFORM(m_imprimir[i,3],'999,999.99')+'  '+TRANSFORM(m_imprimir[i,4],'999,999.99')+'  '+TRANSFORM(m_imprimir[i,9],'999,999.99')+' '+IF(m_imprimir[i,9] <= 0,'*',' ')+'  '+TRANSFORM(m_imprimir[i,10],'999,999.99'))
                IF EMPTY(mcod_cli)
                        DEVPOS(PROW(),PCOL()+3);DEVOUT(m_imprimir[i,8])
                ENDIF
                mtot_item ++
        NEXT
        IF PROW() >= 55
                EJECT
                pag=pag+1
                cabecalho(pag,mtit,mtipo,mprg)
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT("*** RESUMO FINAL ***")
        DEVPOS(PROW()+2,00);DEVOUT("Total de Items: "+transform(mtot_item,"999,999"))
        DEVPOS(PROW()+2,00);DEVOUT(time())
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('LIST_PRE.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
***************************** F I M **************************************
