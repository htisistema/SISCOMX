*************************
* LISTAGEM DE COMISSAO DE OPERADOR
*************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sac5per2
***************
LOCAL MPRG:='SAC5PER2',;
      opcao,lci,cci,lba,cba,;
      i:=0,mdesc,mcomissao,;
      mtot_dup,mcom_dup,mcom_dia,mtot_dia

PRIVATE mcod_cli,mdoc,mtraco,mpag:=0,mtit,mtipo,;
        mcod_vend,mdata1,mnome_ven,mcli_ven,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtele:=' '

IF ! ver_nivel(mprg,'RELATORIO DE COMISSAO PAGAS (CLIENTE EM DIA)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci:=cci:=0
lba:=03
cba:=72

mtraco := REPLI('=',132)
*-----------------------------------------------------
CLOSE ALL
//
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*-----------------------------------------------------
op_tela(lci,cci,lba+2,cba,' Comissao por Vendedor/Operador ')

WHILE .T.
        exibi_prg(mprg)
        mdata1 = mdata_sis
        mcod_vend = 0
        opcao := mtele := SPACE(1)
        mtipo_imp := m_indiv[1,18]
        mensagem('Digite o Codigo do Operador a ser Consultado  - <ESC> p/Sair')
        ***********
        SELE('sen');ORDSETFOCUS(2)
        ***********
        GO TOP

        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Oper./Vendedor........:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Pagamento da Comissao:')
        @ lci+1,cci+30 GET mcod_vend PICT '999' VALID IF(EMPTY(mcod_vend),.F.,ven(mcod_vend,lci+1,cci+34))
        @ lci+2,cci+30 GET mdata1 PICT '99/99/99'
        READ
        IF LASTKEY() = 27
                RELEASE ALL
                EXIT
        ENDIF
        ****************
        SELE('dupr');ORDSETFOCUS(15)
        GO TOP
        ***************
        IF ! dupr->(DBSEEK(DTOS(mdata1)+STRZERO(mcod_vend,3)))
                atencao('Nao existe Comissao Baixada neste DATA')
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma os Dados:')
        IF opcao = 'N'
                LOOP
        ENDIF
        marq := 'COM_PG.REL'
        IF ! imp_arq('COM_PG.REL','R')
                LOOP
        ENDIF
        mpag := 1
        mtit := IF(ver_serie() = '141302','REPRESENTANTE: ','VENDEDOR: ')+STRZERO(mcod_vend,3)       //+' - '+RTRIM(mnome_ven)
        mtipo := 'Comissao Paga nesta DATA: '+DTOC(mdata1)
        cabecalho(mpag,mtit,mtipo)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('Cliente                        Doc.(NF)    Vlr.Docum.   IPI (R$)   Vlr.S/IPI    Vlr.Pago   Vlr.Comi  (%)Comi  Vencim.  Dat.Pag Oper')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        mtot_dup := mcom_dup := mcom_dia := mtot_dia := 0
        WHILE dupr->pg_comi = mdata1 .AND. STRZERO(mcod_vend,3) = dupr->vendedor .AND. ! EOF()
                mcodcli := dupr->fornec
                mvlr_cobra := 0
                WHILE mcodcli = dupr->fornec .AND. ! EOF()
                        prog_imp(RECNO(),DTOC(dupr->pg_comi))
                        mcomi_aux := dupr->comissao
                        mcom_dia := mcom_dia + iat(((dupr->vlpago-dupr->vl_ipi) * mcomi_aux),2)
                        mtot_dia := mtot_dia + (dupr->vlpago-dupr->vl_ipi)
                        mtele:=' '
                        IF ! EMPTY(dupr->num_ped)
                                IF ver_ped(dupr->num_ped,,,,'*')
                                        mtele := ped_s->pstat_item
                                ENDIF
                        ENDIF
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(dupr->fornec+'-'+LEFT(dupr->cliente,23)+'  '+dupr->tipo+LEFT(dupr->duplicata,8)+'  '+TRANSFORM(dupr->valor,'999,999.99')+'  '+TRANSFORM(dupr->vl_ipi,'99,999.99')+'  '+TRANSFORM(dupr->valor - dupr->vl_ipi,'999,999.99')+'  '+TRANSFORM(dupr->vlpago,'999,999.99')+'  '+TRANSFORM((dupr->vlpago-dupr->vl_ipi) * mcomi_aux,'99,999.99')+' '+TRANSFORM(mcomi_aux*100,'999.9999');
                                                   +' '+DTOC(dupr->venc)+' '+DTOC(dupr->datpag)+' '+dupr->operador+' '+mtele)
                        IF PROW() >= 59
                                EJECT
                                mpag ++
                                cabecalho(mpag,mtit,mtipo)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('Cliente                        Doc.(NF)    Vlr.Docum.   IPI (R$)   Vlr.S/IPI    Vlr.Pago   Vlr.Comi  (%)Comi  Vencim.  Dat.Pag Oper')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        SKIP
                ENDDO
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
                DEVPOS(PROW()+1,00);DEVOUT('Valor Pago: '+TRANSFORM(mtot_dia,'9,999,999.99')+' - Vlr.Comissao: '+TRANSFORM(mcom_dia,'999,999.99')+' - Vlr. A Cobrar: '+TRANSFORM(mvlr_cobra,'999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
                mcom_dia := mtot_dia := mvlr_cobra := 0
                IF PROW() >= 59
                        EJECT
                        mpag ++
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('Cliente                        Doc.(NF)    Vlr.Docum.   IPI (R$)   Vlr.S/IPI    Vlr.Pago   Vlr.Comi  (%)Comi  Vencim.  Dat.Pag Oper')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
        ENDDO
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT('************ TOTAL GERAL ***************************************************')
        DEVPOS(PROW()+1,00);DEVOUT('Total R$......: '+TRANSFORM(mtot_dup,'999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT('Total Comissao: '+TRANSFORM(mcom_dup,'999,999.99')+' - Medio de Comissao (%) : '+TRANSFORM((mcom_dup/mtot_dup)*100,'999.99'))
        DEVPOS(PROW()+1,00);DEVOUT('****************************************************************************')
        DEVPOS(PROW()+1,00);DEVOUT(' ')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
wvw_lclosewindow()
RETURN NIL
**********************************  F I M **********************************

