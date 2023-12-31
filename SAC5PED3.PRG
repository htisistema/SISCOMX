************************************
* LISTAGEM MOVIMENTO PELO PRODUTO (PEDIDO)
************************************
MEMVAR getlist,nivel_acess,mdata_sis

FUNCTION sac5ped3(mcod)
**************
LOCAL MPRG:='SAC5PED3',;
      lba,cba,opcao,mdata1,mdata2,mtot_geral,mproducao:=' ',;
      mdat_ped,msit,mcod_merc,mmerc,mtot_dia,mvlr_dia,mtot_quan,muf,mped_peso:=0,ccomm,m_ped := {}

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,mcliente,mcgc,mcpf,mdata_dia,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcodemp:=SPACE(3),mcod_cli:=0,cons_cli:={}

IF ! ver_nivel(mprg,'RELATORIO MOVIMENTO PEDIDO P/PRODUTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)
lba := 08
cba := 78
*----------------------------------------------------------------------------
//
//IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
//IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
//IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(0,0,lba+2,cba,'RELATORIO MOVIMENTO PEDIDO P/PRODUTO')
WHILE .T.
        IF mcod <> NIL
                mcod_merc := mcod
        ELSE
                mcod_merc := 0
        ENDIF
        mtipo_imp := m_indiv[1,18]
        mdata1 := mdata2 := mdata_sis
        muf := SPACE(2)
        mcodemp := SPACE(3)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(1,2);DEVOUT('Cod.Empresa.:')
        DEVPOS(2,2);DEVOUT('Cod.Produto.:')
        DEVPOS(3,2);DEVOUT('Cod.Cliente.:')
        DEVPOS(4,2);DEVOUT('Sigla Estado:')
        DEVPOS(5,2);DEVOUT('Data Inicial:')
        DEVPOS(6,2);DEVOUT('Data Final..:')
        IF ver_serie() = '141287'
                DEVPOS(7,2);DEVOUT('[P]roducao [N]ao Produto ou Branco..:')
        ENDIF

        @ 1,15 GET mcodemp PICT "999" VALID ver_emp(mcodemp,1,19,,'*') WHEN mmult_emp ='S'
        @ 2,15 GET mcod_merc PICT '99999' WHEN men_get(3,15,'Informe o Codigo do Produto que deseja consultar')  VALID lim_get() .AND. ver_cod(mcod_merc,2,21,.F.,1)
        @ 3,15 GET mcod_cli pict "99999" VALID lim_get() .AND. ver_cli(mcod_cli,3,21) WHEN men_get(4,23,'Informe o cliente que deseja ou nao informe p/imprimir todos')
        @ 4,15 GET muf PICT '@!' VALID  lim_get() .AND. v_uf(muf) WHEN men_get(5,15,'Digite a Sigla do Estado que desja ou deixe em BRANCO para imprimir todos')
        @ 5,15 GET mdata1 PICT '99/99/99' WHEN men_get(6,15,'Digite a data de INICIO DO MOVIMENTO')  VALID lim_get() .AND. IF(EMPTY(mdata1),.F.,.T.)
        @ 6,15 GET mdata2 PICT '99/99/99' WHEN men_get(7,15,'Digite a data do FINAL DO MOVIMENTO')  VALID lim_get() .AND. IF(mdata2 < mdata1 ,.F.,.T.)
        @ 7,40 GET mproducao PICT '@!' VALID mproducao $ 'P,N, ' WHEN ver_serie() = '141287'
        READ
        IF LASTKEY() = 27
                RELEASE mtraco,telaprint,mtit,mtipo,mpag,mcliente,mcgc,mcpf
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cComm  := "SELECT pcod_merc,pmerc,pdat_ped,pcod_cli,ppag,pdatapag,pvlr_fat,pquantd,pnum_ped,ppeso,pentreg FROM sacped_s WHERE sr_deleted = ' ' AND pdat_ped  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND (NOT ppag = 'C' OR ppag IS NULL) AND pcod_merc = "+sr_cdbvalue(mcod_merc)
        IF ! EMPTY(mproducao)
                ccomm := ccomm + " AND pproducao = "+sr_cdbvalue(mproducao)
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND pempresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND pcod_cli = "+sr_cdbvalue(mcod_cli)
        ENDIF
        ccomm := ccomm + " ORDER BY pdat_ped,pnum_ped"
        m_ped := {}
        sr_getconnection():exec(ccomm,,.t.,@m_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(m_ped) = 0
                atencao('Nao existe documento neste Periodo...')
                LOOP
        ENDIF
        marq := 'PROD_PED.REL'
        IF ! imp_arq('PROD_PED.REL','R')
                LOOP
        ENDIF
        mvlr_dia := mtot_dia := mtot_quan := mtot_geral := ;
        mped_peso := 0
        mdata_dia := m_ped[1,3]
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        mpag = 1
        mtit = 'Movimento do Produto: '+m_ped[1,1]+' - '+m_ped[1,2]
        mtipo = DTOC(mdata1)+' a '+DTOC(mdata2)+' (Movimento de PEDIDO)'
        IF ! EMPTY(mcodemp)
                mtipo := mtipo + ' - Empresa:'+mcodemp
        ENDIF
        cabecalho(mpag,mtit,mtipo)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,03);DEVOUT('Data')
        DEVPOS(PROW(),11);DEVOUT('Pedido')
        DEVPOS(PROW(),23);DEVOUT('Quantd.')
        DEVPOS(PROW(),34);DEVOUT('Preco Unit.')
        DEVPOS(PROW(),52);DEVOUT('T o t a l')
        DEVPOS(PROW(),66);DEVOUT('Cliente')
        DEVPOS(PROW(),110);DEVOUT('Situacao')
        DEVPOS(PROW(),120);DEVOUT('Entregue')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        FOR i = 1 TO LEN(m_ped)
                prog_imp(RECNO(),DTOC(m_ped[i,3]))
                IF ! EMPTY(muf)
                        IF ! ver_cli(VAL(m_ped[i,4]),,,1);
                           .OR. muf <> cons_cli[1,25]
                                SKIP
                                mdata_dia := m_ped[i,3]
                                LOOP
                        ENDIF
                ENDIF
                IF mdata_dia <> m_ped[i,3] .AND. mtot_dia > 0
                        DEVPOS(PROW()+1,20);DEVOUT('---------')
                        DEVPOS(PROW(),46);DEVOUT('--------------')
                        DEVPOS(PROW()+1,05);DEVOUT('Total Quantd.:')
                        DEVPOS(PROW(),20);DEVOUTPICT(mtot_dia,'999999.99')
                        DEVPOS(PROW(),32);DEVOUT('Sub-total R$:')
                        DEVPOS(PROW(),46);DEVOUTPICT(mvlr_dia,'999,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                        mdata_dia := m_ped[i,3]
                        mtot_dia := mvlr_dia := 0
                ENDIF
                IF m_ped[i,5] = '*'
                        msit := DTOC(m_ped[i,6])
                ELSE
                        msit := '  Aberto'
                ENDIF
                mvlr_dia := mvlr_dia + m_ped[i,7] * m_ped[i,8]
                mtot_dia := mtot_dia + m_ped[i,8]
                mtot_quan := mtot_quan + m_ped[i,8]
                mtot_geral := mtot_geral + m_ped[i,7] * m_ped[i,8]
                mped_peso := mped_peso + (m_ped[i,10]*m_ped[i,8])
                DEVPOS(PROW()+1,00);DEVOUT(m_ped[i,3])
                DEVPOS(PROW(),10);DEVOUT(m_ped[i,9])
                DEVPOS(PROW(),20);DEVOUTPICT(m_ped[i,8],'999999.99')
                DEVPOS(PROW(),32);DEVOUTPICT(m_ped[i,7],'9,999,999.99')
                DEVPOS(PROW(),48);DEVOUTPICT(m_ped[i,7] * m_ped[i,8],'9,999,999.99')
                DEVPOS(PROW(),65);DEVOUT(STR(m_ped[i,4],5)+' - ')
                ver_cli(m_ped[i,4],PROW(),PCOL(),1)
                DEVPOS(PROW(),PCOL()+1);DEVOUT(msit)
                IF m_ped[i,11] = '*'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('SIM')
                ELSE
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('NAO')
                ENDIF
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        DEVPOS(PROW()+1,00);DEVOUT('Mercadoria:')
                        DEVPOS(PROW(),12);DEVOUT(m_ped[1,1]+' - '+m_ped[1,2])
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,03);DEVOUT('Data')
                        DEVPOS(PROW(),11);DEVOUT('Pedido')
                        DEVPOS(PROW(),23);DEVOUT('Quantd.')
                        DEVPOS(PROW(),34);DEVOUT('Preco Unit.')
                        DEVPOS(PROW(),52);DEVOUT('T o t a l')
                        DEVPOS(PROW(),66);DEVOUT('Cliente')
                        DEVPOS(PROW(),110);DEVOUT('Situacao')
                        DEVPOS(PROW(),120);DEVOUT('Entregue')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
        NEXT
        DEVPOS(PROW()+1,20);DEVOUT('---------')
        DEVPOS(PROW(),46);DEVOUT('--------------')
        DEVPOS(PROW()+1,05);DEVOUT('Total Quantd.:')
        DEVPOS(PROW(),20);DEVOUTPICT(mtot_dia,'999999.99')
        DEVPOS(PROW(),32);DEVOUT('Sub-total R$:')
        DEVPOS(PROW(),46);DEVOUTPICT(mvlr_dia,'999,999,999.99')
        mtot_dia := 0
        IF PROW() >= 55
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT('Total de Produto :')
        DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_quan,'99999.99')))
        DEVPOS(PROW()+1,00);DEVOUT('Total GERAL em R$:')
        DEVPOS(PROW(),18);DEVOUT(TRANSFORM(mtot_geral,'99,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT('Total de PESO....:')
        DEVPOS(PROW(),18);DEVOUT(TRANSFORM(mped_peso,'999,999.999'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        imprt(mtipo_imp,'N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
wvw_lclosewindow()
RETURN NIL
