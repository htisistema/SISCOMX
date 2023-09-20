* RELATORIO DE PRODUTO VENDIDO COM E SEM ICMS
*********************************************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION sac591
***************
LOCAL MPRG:='SAC591',;
      opcao,mcod_op,mtraco,mcom_sem_sub := ' ',;
      mdata1,mdata2,m_matriz:={},;
      nxls:={},cons_mov:={},mcont_prod:={}

PRIVATE mtipo_imp,mimp_tipo:=0
IF ! ver_nivel(mprg,'RELATORIO DE PRODUTO VENDIDO COM E SEM ICMS','1456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)
op_tela(10,10,13,87,'RELATORIO DE PRODUTO VENDIDO COM E SEM ICMS')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mdata1 := mdata_sis - 31
        mdata2 := mdata_sis
        mcom_sem_sub := ' '
        ASIZE(m_matriz,0)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(1,2 );DEVOUT('Data Inicial...............:')
        DEVPOS(2,2 );DEVOUT('Data Final.................:')
        DEVPOS(3,2 );DEVOUT('ICM [C]com [S]sem ou branco:')

        @ 1,30 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,30 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 3,30 GET mcom_sem_sub PICT '@!' VALID mcom_sem_sub $ 'C,S, '
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        setcor(1)
        IF mcom_sem_sub = 'C'
                mtit := 'RELATORIO DE PRODUTO VENDIDO COM ICMS'
                mcom_sem_sub := 'icm > 0'
        ELSEIF mcom_sem_sub = 'S'
                mtit := 'RELATORIO DE PRODUTO VENDIDO SEM ICMS'
                mcom_sem_sub := 'icm = 0'
        ELSE
                mtit := 'RELATORIO DE PRODUTO VENDIDO COM E SEM ICMS'
                mcom_sem_sub := ''
        ENDIF
        mcont_prod := {}
        sr_getconnection():exec("SELECT * FROM sacmerc ORDER BY cod_merc",,.t.,@mcont_prod)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcont_prod) = 0
                atencao('Nao existe produtos para gerar este Relatorio...')
                LOOP
        ENDIF
        i:=0
        FOR i = 1 TO LEN(mcont_prod)
                mensagem('Produto: '+mcont_prod[i,8]+' - '+mcont_prod[i,9])
                cons_mov:={}
                sr_getconnection():exec("SELECT * FROM sacmovnt WHERE data_s_e >= "+sr_cdbvalue(mdata1)+" AND  data_s_e <= "+sr_cdbvalue(mdata2)+" AND cancel is NULL AND ent_sai='S' AND "+mcom_sem_sub+" AND codigo = "+sr_cdbvalue(mcont_prod[i,8]),,.t.,@cons_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_mov) = 0
                        LOOP
                ELSE
                        AADD(m_matriz,{mcont_prod[i,8],mcont_prod[i,70],mcont_prod[i,9],cons_mov[1,38]})
                ENDIF
        NEXT
        IF LEN(m_matriz) = 0
                atencao('Nao existe movimento neste Periodo')
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK !!!')
        marq := 'SUB_CS.REL'
        IF ! imp_arq(marq,'R',,,,,,'E')
                LOOP
        ENDIF
        mtipo := 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        IF mimp_tipo = 4
                nxls := {}
                f:=1
                MYRUN('DEL '+marq)
                nXls := xlsOpen(marq)
                xlsWrite( nXls, f, 1,mtit)
                f++
                xlsWrite( nXls, f, 1,mtipo)
                f++
                xlsWrite( nXls, f, 1, 'Codigo' )
                xlsWrite( nXls, f, 2, 'NCM' )
                xlsWrite( nXls, f, 3, 'Descricao' )
                f++
                i:=0
                FOR i = 1 TO LEN(m_matriz)
                        mensagem('IMPRIMINDO PARA EXCEL o Vendedor: '+m_matriz[i,1]+' - '+m_matriz[i,3]+'  Aguarde um momento ...')
                        xlsWrite( nXls, f, 1,m_matriz[i,1])
                        xlsWrite( nXls, f, 2,m_matriz[i,2])
                        xlsWrite( nXls, f, 3,m_matriz[i,3])
                        f++
                NEXT
                xlsWrite( nXls, f, 1,'T O T A L   G E R A L:')
                xlsWrite( nXls, f, 2,ALLTRIM(TRANSFORM(LEN(m_matriz),'999999')))
        	xlsClose( nXls )
                IF mimp_tipo = 4
                       MYRUN('EXCEL.EXE '+marq)
                ENDIF
        ELSE
                mpag := 1
                cabecalho(mpag,mtit,mtipo)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Codigo')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' NCM')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('   Descricao')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                i := 0
                FOR i = 1 TO LEN(m_matriz)
                        DEVPOS(PROW()+1,00);DEVOUT(m_matriz[i,1])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_matriz[i,2])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_matriz[i,3])
                NEXT
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT('T O T A L   G E R A L:')
                DEVPOS(PROW(),31);DEVOUT(TRANSFORM(LEN(m_matriz),'999999'))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao(marq)
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **********************************************

