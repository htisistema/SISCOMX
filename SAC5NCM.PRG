MEMVAR getlist,nivel_acess,mdata_sis
**** CON424.PRG: Relatorio -> Documentos PAGOS
******************************************************
FUNCTION SAC5NCM
****************
LOCAL MPRG:='SAC5NCM',;
      tela,t_ini,t_fim,f_ini,rel_ncm,pag

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

mtipo_imp := m_indiv[1,18]
mensagem('Preencha os dados que desejar')
op_tela(10,10,13,90,'RELATORIO DE NCM')
WHILE .T.
        @ 1,1 SAY "Data Inicial:"
        @ 2,1 SAY "Data Final..:"
        t_ini=mdata_sis
        t_fim=mdata_sis+30
        @ 1,14  GET t_ini VALID IF(EMPTY(t_ini),.F.,.T.)
        @ 2,14  GET t_fim VALID IF(EMPTY(t_fim),.F.,.T.)
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF
                rel_ncm := {}
                cComm  := "SELECT merc.nbm, SUM(mov.quantd * mov.vl_fatura)"
                ccomm := ccomm + " FROM sacmovnt mov "
                ccomm := ccomm + " JOIN sacmerc merc ON merc.cod_merc = mov.codigo"
                ccomm := ccomm + " where mov.data_s_e  BETWEEN "+sr_cdbvalue(t_ini)+" AND "+sr_cdbvalue(t_fim)
                ccomm := ccomm + " AND (mov.cancel IS NULL or mov.cancel = '')"
                ccomm := ccomm + " AND mov.documento NOT LIKE 'TR%'"
                ccomm := ccomm + " AND mov.documento NOT LIKE 'BL%'"
                ccomm := ccomm + " AND mov.ent_sai = 'S'"
                ccomm := ccomm + " group by merc.nbm"
                sr_getconnection():exec(ccomm,,.t.,@rel_ncm)
                sr_getconnection():exec('COMMIT',,.f.)

                IF LEN(rel_ncm) = 0
                        atencao('Nao existe MOVIMENTO neste periodo')
                        EXIT
                ENDIF
                IF ! imp_arq('DOC_PAGAS.REL','R')
                        EXIT
                ENDIF
                mtit := 'RELATORIO DE NCM'
                mtipo := 'Periodo: '+DTOC(t_ini)+' a '+ DTOC(t_fim)
                i:= mtot_ncm := pag := 0
                FOR i = 1 TO LEN(rel_ncm)
                        IF pag=0 .OR. PROW()>=57
                                pag=pag+1
                                IF pag>1
                                        EJECT
                                ENDIF
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT('NCM')
                                DEVPOS(PROW(),PCOL()+8);DEVOUT('Valor Total')
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(rel_ncm[i,1])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(rel_ncm[i,2],"@E 9,999,999.99"))
                        mtot_ncm := mtot_ncm + rel_ncm[i,2]
                NEXT
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+3,00);DEVOUT("****** RESUMO FINAL *******")
                DEVPOS(PROW()+1,00);DEVOUT("Valor Total dos NCM: "+TRANSFORM(mtot_ncm,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+2,00);DEVOUT(time())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('DOC_PAGAS.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL




