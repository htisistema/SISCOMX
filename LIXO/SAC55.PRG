*********************************
* LISTAGEM MOVIMENTO GERAL RESUMO ENTRADA/SAIDAS
*********************************
MEMVAR getlist,nivel_acess,mdata_sis,mcaminho

FUNCTION sac55
**************
LOCAL MPRG:='SAC55',mtitulo:='RELATORIO DE MOVIMENTO PRODUTO PRODUCAO',;
      lci,cci,lba,cba,opcao,i,mtecla,mdata1,mdata2,;
      mcod_ven,mgrupo,msub_grupo,mcod_cli,mcod_ope,mcod_vend,;
      cons_mov:={},mcodemp:=SPACE(3),mtot_ent:=0,mtot_sai:=0
      
PRIVATE mtraco,mtit,mtipo,mpag,mposicao,mcod_merc:=0,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli:={}

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',137)

lci := cci := 0
lba := 20
cba := 70
*----------------------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacespe','espe');RETURN NIL;ENDIF
//
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
mtipo_imp := m_indiv[1,18]
op_tela(10,10,16,80,mtitulo)
WHILE .T.
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcod_vend := mcod_ope := mcod_cli := mcod_merc := mtot_ent := mtot_sai := 0
        mcodemp:=SPACE(3)
        limpa(lci,cci,lba+2,cba)
        mensagem('Preencha os Campos - <ESC>p/Abandonar')
        DEVPOS(lci  ,cci+2);DEVOUT('Codigo da Empresa:')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial.....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo Produto...:')
        DEVPOS(lci+4,cci+2);DEVOUT('Codigo Vendedor..:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo Operador..:')
        DEVPOS(lci+6,cci+2);DEVOUT('Codigo Cliente...:')
        @ lci,cci+21 GET mcodemp PICT "999" VALID ver_emp(mcodemp,lci,cci+25,,'*') WHEN mmult_emp ='S'
        @ lci+1,cci+21 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+21 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+3,cci+21 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,lci+3,cci+27,,0)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        ver_cod(mcod_merc,lci+3,cci+27,,0)
        @ lci+4,cci+21 GET mcod_vend PICT '999' VALID IF(EMPTY(mcod_vend),.T.,ven(mcod_vend,lci+4,cci+26))
        @ lci+5,cci+21 GET mcod_ope PICT '999' VALID IF(EMPTY(mcod_ope),.T.,ven(mcod_ope,lci+5,cci+26))
        @ lci+6,cci+21 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+6,cci+27)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mensagem('Aguarde um momento coletando dados p/o relatorio')
        cons_produ := {}
        cComm  := "SELECT * FROM sacentprod WHERE data  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
        IF ! EMPTY(mcodemp)
                cComm  := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF ! EMPTY(mcod_merc)
                cComm  := ccomm + " AND cod_merc = "+sr_cdbvalue(mcod_merc)
        ENDIF
        IF ! EMPTY(mcod_cli)           
                cComm  := ccomm + " AND cod_cli = "+sr_cdbvalue(mcod_cli)
        ENDIF
        IF ! EMPTY(mcod_ope)           
                cComm  := ccomm + " AND cod_oper = "+sr_cdbvalue(STRZERO(mcod_ope,3))
        ENDIF
        IF ! EMPTY(mcod_vend)          
                cComm  := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        ccomm := ccomm + " ORDER BY data"
        sr_getconnection():exec(ccomm,,.t.,@cons_produ)

        cons_ped := {}
        cComm  := "SELECT pempresa,pdat_ped,pnum_ped,pcod_cli,pcod_vend,pcod_oper,pcod_merc,pmerc,pquantd,ppag "
        ccomm  := ccomm + " FROM sacped_s WHERE sr_deleted = ' ' AND pdat_ped  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
        IF ! EMPTY(mcodemp)
                cComm  := ccomm + " AND pempresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF ! EMPTY(mcod_merc)
                cComm  := ccomm + " AND pcod_merc = "+sr_cdbvalue(mcod_merc)
        ENDIF
        IF ! EMPTY(mcod_cli)
                cComm  := ccomm + " AND pcod_cli = "+sr_cdbvalue(mcod_cli)
        ENDIF
        IF ! EMPTY(mcod_ope)            //.AND. STRZERO(mcod_ope,3) <> mov->cod_oper);
                cComm  := ccomm + " AND pcod_oper = "+sr_cdbvalue(STRZERO(mcod_ope,3))
        ENDIF
        IF ! EMPTY(mcod_vend)
                cComm  := ccomm + " AND pcod_vend = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        ccomm := ccomm + " ORDER BY pdat_ped"
        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
        i:=0
        cons_mov := {}
        FOR i = 1 TO LEN(cons_produ)
                AADD(cons_mov,{cons_produ[i,1],cons_produ[i,2],cons_produ[i,3],cons_produ[i,4],cons_produ[i,5],cons_produ[i,6],cons_produ[i,7],cons_produ[i,8],cons_produ[i,9],cons_produ[i,10]})
        NEXT
        i:=0
        FOR i = 1 TO LEN(cons_ped)
                AADD(cons_mov,{cons_ped[i,1],cons_ped[i,2],cons_ped[i,3],cons_ped[i,4],cons_ped[i,5],cons_ped[i,6],cons_ped[i,7],cons_ped[i,8],cons_ped[i,9],cons_ped[i,10]})
        NEXT
        IF LEN(cons_mov) = 0
                atencao('Nao existe nenhum produto neste Periodo...')
                LOOP
        ENDIF
        ASORT(cons_mov,,, {|x,y| x[2] < y[2]})

        IF ! imp_arq('RES_MOV.REL','R');LOOP;ENDIF
        marq := 'RES_MOV.REL'
        mpag := mtot_ent := 0
        mtit = 'Listagem de Movimento PRODUCAO'
        IF ! EMPTY(mcod_vend)
                mtit = mtit+' - Vendedor:'+STRZERO(mcod_vend,3)
        ENDIF
        IF ! EMPTY(mcod_ope)
                mtit = mtit+' - Operador:'+STRZERO(mcod_ope,3)
        ENDIF
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        i:=0
        FOR i = 1 TO LEN(cons_mov)
                prog_imp(i,DTOC(cons_mov[i,2]))
                IF mpag = 0 .OR. PROW() >= 59
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Cod.')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Descricao'+SPACE(31))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vnd')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Ope')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Cli.')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('No.Ped')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(cons_mov[i,2])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[i,7])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[i,8])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_mov[i,9],'99,999.999'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[i,5])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[i,6])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[i,4])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[i,3])
                IF cons_mov[i,10] = 'E'
                        mtot_ent := mtot_ent + cons_mov[i,9]
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('ENTRADA')
                ELSE
                        mtot_sai := mtot_sai + cons_mov[i,9]
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('SAIDA')
                ENDIF
        NEXT
        IF PROW() > 53
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+2,00);DEVOUT('R E S U M O   G E R A L')
        DEVPOS(PROW()+1,00);DEVOUT('Total de ENTRADAS: '+TRANSFORM(mtot_ent,'9,999,999.999'))
        DEVPOS(PROW()+1,00);DEVOUT('Total de SAIDAS..: '+TRANSFORM(mtot_sai,'9,999,999.999'))
        DEVPOS(PROW()+1,00);DEVOUT('                   -------------')
        DEVPOS(PROW()+1,00);DEVOUT('Saldo no Periodo.: '+TRANSFORM(mtot_ent - mtot_sai,'9,999,999.999'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('RES_MOV.REL')
        /*
        IF mimp_tipo = 2
                lertexto('RES_MOV.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ************************
