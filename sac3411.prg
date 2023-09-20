********************************
* T.P's PEDENTES
********************************
FUNCTION sac3411(mab_pg,mtp_orc,tipo_ali)
*****************
LOCAL mprg:='SAC3411',;
      lba,cba,point,opcao,mtempo,m_codigo:={},m_posicao:={},mposicao,mtot_ger,cons_arq:={},i:=0

PRIVATE mnum_ped := 0
MEMVAR mnum_orc,mnum_orcp,ali
IF ! ver_nivel(mprg,'CONSULTA ORCAMENTOS PEDENTES (EM ABERTO)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lba := 42
cba := 120
op_tela(00,00,44,120,' CONSULTA DE ORCAMENTO '+IF(mab_pg<>NIL,'PAGOS','EM ABERTOS'),,'*')
mped_orc := 1
mnum_orcido := SPACE(6)
CLEAR GETS
WHILE .T.
        exibi_prg(mprg)
        mcodemp := '   '
        mtot_ped := 0
        setcor(3)
        @ 2,0 TO 2,cba
        @ lba,0 TO lba,cba
        DEVPOS(1,1);DEVOUT(' No.Ped ')
        DEVPOS(1,13);DEVOUT('Cd.Cli ')
        DEVPOS(1,20);DEVOUT('Vend ')
        DEVPOS(1,24);DEVOUT('   Data   ')
        DEVPOS(1,35);DEVOUT('Hr.Orcamento ')
        DEVPOS(1,49);DEVOUT('      Valor')
        DEVPOS(1,62);DEVOUT('Tp')
        DEVPOS(1,65);DEVOUT('Oper')
        DEVPOS(1,72);DEVOUT('Emp')
        DEVPOS(1,COL()+1);DEVOUT('Lib')
        DEVPOS(1,COL()+1);DEVOUT('Exp')
        DEVPOS(1,85);DEVOUT('APP/No')
        DEVPOS(1,97);DEVOUT('Data APP')
        DEVPOS(1,COL()+1);DEVOUT('Flg')
        //DEVPOS(1,COL()+1);DEVOUT('Terminal')
        IF mmult_emp = 'S'
                mcodemp := mcodempresa
                setcor(1)
                DEVPOS(0,2);DEVOUT('Empresa:')
                @ 0,10 GET mcodemp PICT '999' VALID ver_emp(mcodemp,,,,'*')
                READ
        ENDIF
        limpa(3,1,lba-1,cba-1)
        mensagem('Aguarde um momento coletando informacoes para a consulta OK !!!')
        cons_arq := {}
                                //          1         2        3         4        5      6      7         8       9        10       11    12    13          14
        sr_getconnection():exec("SELECT pnum_ped,pcod_vend,pcod_oper,pdat_ped,data_app,phora,ptp_vend,pcod_cli,pempresa,pexp_por,plib_por,pos,pfecha,sum(pquantd * pvlr_fat) FROM sacorcam WHERE sr_deleted = ' ' AND (ppag IS NULL OR ppag = ' ') AND pos IS NOT NULL AND NOT pos = '000000' AND NOT pos = '      ' GROUP BY pnum_ped,pcod_vend,pcod_oper,pdat_ped,data_app,phora,ptp_vend,pcod_cli,pempresa,pexp_por,plib_por,pos,pfecha ORDER BY pnum_ped",,.t.,@cons_arq)
        sr_getconnection():exec('COMMIT',,.f.)
        m_codigo := {}
        m_posicao:= {}
        mquantd_ped := mtot_ger := i := 0
        FOR i = 1 TO LEN(cons_arq)
                prog_imp(i,cons_arq[i,1])
                mtot_ger := mtot_ger + cons_arq[i,14]
                               //      1                  2              3             4                  5                   6                                7                                8                    9                  10                 11                  12              13                 14
                AADD(m_codigo,' '+cons_arq[i,1]+'  '+STR(cons_arq[i,8],5)+'  '+cons_arq[i,2]+'  '+DTOC(cons_arq[i,4])+'  '+cons_arq[i,6]+'  '+TRANSFORM(cons_arq[i,14],'9,999,999.99')+'  '+cons_arq[i,7]+'  '+cons_arq[i,3]+'   '+cons_arq[i,9]+'  '+cons_arq[i,11]+' '+cons_arq[i,10]+' '+cons_arq[i,12]+'  '+DTOC(cons_arq[i,5])+'   '+cons_arq[i,13])
                //AADD(m_codigo,' '+mnum_orcido+'  '+mcod_cli+'  '+mcod_vend+'  '+DTOC(mdata_ped)+'  '+mhora+'  '+TRANSFORM(mtot_ped,'9,999,999.99')+'  '+mtipo_venda+'  '+mcod_op+'   '+mcod_emp+'  '+mlib_por+' '+mexp_por+' '+mnum_os+'   '+cons_arq[1,100])
                //AADD(m_posicao,mnum_orcido)
                AADD(m_posicao,cons_arq[i,1])
        NEXT
        IF LEN(m_codigo) = 0
                atencao('Nenhum ORCAMENTO Pedente !!!')
                wvw_lclosewindow()
                ali := tipo_ali
                RETURN NIL
        ENDIF
        WHILE .T.
                point := 0
                DEVPOS(lba+1,00);DEVOUT('Quantidade de Orcamentos em Aberto:'+TRANSFORM(mquantd_ped,'999,999')+' R$:'+TRANSFORM(mtot_ger,'99,999,999.99'))
                mensagem("<ESC> Retorna - <ENTER>p/Confirma")
                setcor(10);point := ACHOICE(3,1,lba-1,cba-1,m_codigo);setcor(1)
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        ali := tipo_ali
                        RETURN NIL
                ENDIF
                IF LASTKEY() = 13
                        sac23pd1(m_posicao[point])
                        EXIT
                ENDIF
        ENDDO
ENDDO
setcor(1)
ali := tipo_ali
wvw_lclosewindow()
RETURN NIL
************************* F I M ******************************************