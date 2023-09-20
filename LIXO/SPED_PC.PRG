*******************************
* Relatorio do SPED PIS CONFIS
*******************************
FUNCTION sped_pc
****************
LOCAL MPRG:='SPED_PC',mtitulo:='EMISSAO DO ARQUIVO DO SPED-PIS CONFIS',;
      tela,lci,cci,lba,cba,opcao,mdata1,mdata2,;
      mcont_10:=0,mcont_11:=0,mcont_50:=0,mcont_51:=0,mcont_53:=0,mcont_54:=0,;
      mcont_90:=0,mcont_ger:=0,mcont_75:=0,mcont_60 :=0,;
      mponto,mdoc,ment_sai,mitem := 0,mop_nota:='G',m_produto:={},m_prodaux:={},m_cst:={},d_cst:={},;
      mqtd_c:=0,mqtd_200:=0,mqtd_c100:=0,mqtd_c170:=0,mqtd_c190:=0,mapuracao := 0,mqtd_c370 := 0,mqtd_c390 := 0,;
      mqtd_c405 := 0,mqtd_c420 := 0,mqtd_c470 := 0,mqtd_c490 := 0,mcons_emi := {},mcod_cid_emit

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)
lci := cci := 0
lba := 3
cba := 45
op_tela(10,05,17,95,mtitulo)
SET CENTURY ON
WHILE .T.
        exibi_prg(mprg)
        mcont_10:=0;mcont_11:=0;mcont_50:=0;mcont_51:=0;mcont_53:=0;mcont_54:=0
        mcont_90:=0;mcont_ger:=0;mcont_75:=0
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        m_produto := {}
        m_prodaux := {}
        mqtd_c := mqtd_200 := mqtd_c100 := mqtd_c170 := mapuracao := mqtd_c370 := mqtd_c390 := mqtd_c405 := 0
        mqtd_c420 := mqtd_c470 := mqtd_c490 := 0
        mensagem('Preencha os Campos - <ESC>p/Abandonar')
        DEVPOS(lci  ,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Final.....:')
        @ lci+2,cci TO lci+2,100
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo indicador da incidencia tributaria no periodo................................:')
        DEVPOS(lci+4,cci+2);DEVOUT('Codigo indicador de metodo de apropriacao de creditos comuns........................:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo indicador do Tipo de Contribuicao Apurada no Periodo.........................:')
        DEVPOS(lci+6,cci+2);DEVOUT('Codigo indicador do criterio de escrituracao e apuracao adotado.....................:')
        DEVPOS(lci+7,cci+2);DEVOUT('Indicador apuração contribuições e créditos, escrituração por NF-e e ECF, no período:')
        setcor(1)
        @ lci  ,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+1,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                SET CENTURY OFF
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mciitp  := ciitp_0110(lci+4,cci+2)
        setcor(3)
        DEVPOS(lci+3,cci+90);DEVOUT(STRZERO(mciitp,1))
        setcor(1)
        mcimacc := cimacc_0110(lci+5,cci+2)
        setcor(3)
        DEVPOS(lci+4,cci+90);DEVOUT(STRZERO(mcimacc,1))
        setcor(1)
        mcitcap := citcap_0110(lci+6,cci+2)
        setcor(3)
        DEVPOS(lci+5,cci+90);DEVOUT(STRZERO(mcitcap,1))
        setcor(1)
        mciceaa := ciceaa_0110(lci+7,cci+2)
        setcor(3)
        DEVPOS(lci+6,cci+90);DEVOUT(STRZERO(mciceaa,1))
        setcor(1)
        miacc := iacc_0110(lci+8,cci+2)
        setcor(3)
        DEVPOS(lci+7,cci+90);DEVOUT(STRZERO(miacc,1))
        setcor(1)
        opcao := op_simnao('S','Confirma o periodo:')
        IF ! imp_arq('SPED.TXT','R')
                LOOP
        ENDIF
        SETPRC(00,00)
        DEVPOS(PROW(),00);DEVOUT('|0000|105|001||')
        DEVPOS(PROW(),PCOL());DEVOUT(STRTRAN(DTOS(mdata1),'/','')+'|'+STRTRAN(DTOS(mdata2),'/','')+'|')
        DEVPOS(PROW(),PCOL());DEVOUT(m_set[1,129]+'|')
        DEVPOS(PROW(),PCOL());DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+'|')
        DEVPOS(PROW(),PCOL());DEVOUT(m_set[1,19]+'|')
        DEVPOS(PROW(),PCOL());DEVOUT(vercod_cid(m_set[1,134],m_set[1,19])+'|')
        DEVPOS(PROW(),PCOL());DEVOUT('|')
        DEVPOS(PROW(),PCOL());DEVOUT('00|')
        DEVPOS(PROW(),PCOL());DEVOUT('2|')

        DEVPOS(PROW()+1,0);DEVOUT('|0001|0|')

        mcons_cont := {}
        sr_getconnection():exec("SELECT * FROM sacsef ",,.t.,@mcons_cont)
        IF LEN(mcons_cont) = 0
                atencao('Nao existe nenhum contador cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        DEVPOS(PROW()+1,0);DEVOUT('|0100|'+ALLTRIM(mcons_cont[1,1])+'|'+ALLTRIM(mcons_cont[1,2])+'|'+ALLTRIM(mcons_cont[1,3])+'||'+ALLTRIM(mcons_cont[1,15])+'|'+ALLTRIM(mcons_cont[1,9])+'|'+ALLTRIM(mcons_cont[1,10])+'|'+ALLTRIM(mcons_cont[1,11])+'|'+ALLTRIM(mcons_cont[1,12])+'|'+ALLTRIM(mcons_cont[1,4])+'|'+ALLTRIM(mcons_cont[1,5])+'|'+ALLTRIM(mcons_cont[1,8])+'|'+vercod_cid(mcons_cont[1,13],mcons_cont[1,14])+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|0110|'+STRZERO(mciitp,1)+'|'+STRZERO(mcimacc,1)+'|'+STRZERO(mcitcap,1)+'|'+STRZERO(mciceaa,1))
        mreda_bruta := 0
        mcons_emi := {}
        sr_getconnection():exec("SELECT SUM(vl_nota) FROM sactotnt WHERE ent_sai = 'S' AND emissao  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2),,.t.,@mcons_emi)
        IF LEN(mcons_emi) > 0
                mreda_bruta := mcons_emi[1,1]
        ENDIF
        mcons_emi := {}
        sr_getconnection():exec("SELECT SUM(quantd * vl_fatura) FROM sacmovnt WHERE ent_sai = 'S' AND documento LIKE 'CP%' AND data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2),,.t.,@mcons_emi)
        IF LEN(mcons_emi) > 0
                mreda_bruta := mreda_bruta + mcons_emi[1,1]
        ENDIF

        DEVPOS(PROW()+1,0);DEVOUT('|0111||||'+TRANSFORM(mreda_bruta,'@E 999,999,999.99')+'|'+TRANSFORM(mreda_bruta,'@E 999,999,999.99'))
        //DEVPOS(PROW()+1,0);DEVOUT('|0140||'+mrazao_HTI+'|01058|'+mcnpj_HTI+'|||2611606||'+mend_HTI+'|'+mnum_HTI+'|'+mcomp_HTI+'|'+mbairro_HTI+'|')
        mcons_emi := {}
        sr_getconnection():exec("SELECT * FROM sactotnt WHERE ent_sai = 'S' AND emissao  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2),,.t.,@mcons_emi)
        IF LEN(mcons_emi) > 0
                i := 0
                mcli := {}
                FOR i = 1 TO LEN(mcons_emi)
                        IF ASCAN(mcli,mcons_emi[i,12])=0
                                AADD(mcli,mcons_emi[i,12])
                                mcons_cont := {}
                                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcons_emi[i,12]),,.t.,@mcons_cont)
                                IF LEN(mcons_cont) = 0
                                        atencao('Este cliente nao estar cadastrado...')
                                        LOOP
                                ENDIF
                                vercod_cid(mcons_cont[1,24],mcons_cont[1,25])
                                DEVPOS(PROW()+1,0);DEVOUT('|0150|'+mcons_emi[i,12]+'|'+mcons_emi[i,13]+'|01058|'+ALLTRIM(mcons_cont[1,32])+'|'+ALLTRIM(mcons_cont[1,34])+'|'+ALLTRIM(mcons_cont[1,33])+'|'+vercod_cid(mcons_cont[1,24],mcons_cont[1,25])+'||'+ALLTRIM(mcons_cont[1,21])+'|'+ALLTRIM(mcons_cont[1,136])+'|'+ALLTRIM(mcons_cont[1,137])+'|'+ALLTRIM(mcons_cont[1,22]))
                        ENDIF
                NEXT
        ENDIF

        DEVPOS(PROW()+1,0);DEVOUT('|0190|KG|KILO|')
        DEVPOS(PROW()+1,0);DEVOUT('|0190|UN|UNIDADE|')
        DEVPOS(PROW()+1,0);DEVOUT('|0190|PC|PACOTE|')
        DEVPOS(PROW()+1,0);DEVOUT('|0190|LT|LATA|')
        DEVPOS(PROW()+1,0);DEVOUT('|0190|MT|METRO|')
        DEVPOS(PROW()+1,0);DEVOUT('|0190|FD|FRADO|')
        DEVPOS(PROW()+1,0);DEVOUT('|0190|CX|CAIXA|')

        mcons_cid := {}
        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE ent_sai = 'S' AND data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2),,.t.,@mcons_cid)
        IF LEN(mcons_cid) > 0
                i := 0
                mprod := {}
                FOR i = 1 TO LEN(mcons_cid)
                        IF ASCAN(mprod,mcons_cid[i,11])=0
                                AADD(mprod,mcons_cid[i,11])
                                mcons_cont := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_cid[i,11]),,.t.,@mcons_cont)
                                IF LEN(mcons_cont) = 0
                                        atencao('Este Produto nao estar cadastrado...')
                                        LOOP
                                ENDIF
                                DEVPOS(PROW()+1,0);DEVOUT('|0200|')
                                DEVPOS(PROW(),PCOL());DEVOUT(mcons_cont[1,8]+'|')
                                DEVPOS(PROW(),PCOL());DEVOUT(mcons_cont[1,9]+'|')
                                DEVPOS(PROW(),PCOL());DEVOUT(mcons_cont[1,2]+'|')
                                DEVPOS(PROW(),PCOL());DEVOUT('||')
                                DEVPOS(PROW(),PCOL());DEVOUT(mcons_cont[1,14]+'|')
                                DEVPOS(PROW(),PCOL());DEVOUT('00'+'|')
                                DEVPOS(PROW(),PCOL());DEVOUT(mcons_cont[1,70]+'|')
                                DEVPOS(PROW(),PCOL());DEVOUT('||')
                                DEVPOS(PROW(),PCOL());DEVOUT(mcons_cont[1,68]+'|')
                                DEVPOS(PROW(),PCOL());DEVOUT(TRANSFORM(mcons_cont[1,62],'@E 99.99')+'|')
                                mqtd_200 ++
                        ENDIF
                NEXT
        ENDIF
        mcons_emi := {}
        sr_getconnection():exec("SELECT * FROM sacop WHERE sai_ent = 'S'",,.t.,@mcons_emi)
        IF LEN(mcons_emi) = 0 .OR. EMPTY(mcons_emi[1,1])
                atencao('Nao existe nenhum CFOP cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ELSE
                i:=0
                FOR i = 1 TO LEN(mcons_emi)
                        DEVPOS(PROW()+1,0);DEVOUT('|0400|'+ALLTRIM(mcons_emi[i,1])+'|'+mcons_emi[i,2]+'|')
                NEXT
        ENDIF

        DEVPOS(PROW()+1,0);DEVOUT('|0990|'+ALLTRIM(TRANSFORM(PROW(),'9999'+'|')))       //QTD DE LINHAS DO BLOCO 0

        DEVPOS(PROW()+1,0);DEVOUT('|C001|0|')
        DEVPOS(PROW()+1,0);DEVOUT('|C010|'+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+'|'+STRZERO(miacc,1))
        mqtd_c := 1
        mcons_r4 := {}
        sr_getconnection():exec("SELECT * FROM sactotnt WHERE ent_sai = 'S' AND emissao  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2),,.t.,@mcons_r4)
        IF LEN(mcons_r4) > 0
                i := 0
                mqtd_c100 := LEN(mcons_r4)
                FOR i = 1 TO LEN(mcons_r4)
                        mensagem('Modulo: C100')
                        mqtd_c ++
                        DEVPOS(PROW()+1,0);DEVOUT('|C100|1|0')
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+mcons_r4[i,12])
                        DEVPOS(PROW(),PCOL());DEVOUT('|55')
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+IF(mcons_r4[i,37]='C','02','00'))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+mcons_r4[i,6])
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(SUBSTR(mcons_r4[i,5],2)))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_r4[i,45]))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+SUBSTR(mcons_r4[i,10],1,2)+SUBSTR(mcons_r4[i,10],4,2)+SUBSTR(mcons_r4[i,10],7,2))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+SUBSTR(mcons_r4[i,10],1,2)+SUBSTR(mcons_r4[i,10],4,2)+SUBSTR(mcons_r4[i,10],7,2))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_r4[i,27],'@E 99999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|0')
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_r4[i,28],'@E 99999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|0')
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))

                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_r4[i,20],'@E 99999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_r4[i,21],'@E 99999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_r4[i,24],'@E 99999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_r4[i,23],'@E 99999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_r4[i,35],'@E 99999999.99')))

                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_r4[i,27] * (m_set[1,2] / 100),'@E 99999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_r4[i,27] * (m_set[1,3] / 100),'@E 99999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99'))+'|')
                        m_cst:={}
                        d_cst:={}
                        mcons_r5 := {}
                        sr_getconnection():exec("SELECT * FROM sactotnt WHERE ent_sai = 'S' AND emissao  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+' ORDER BY documento',,.t.,@mcons_r5)
                        IF LEN(mcons_r5) > 0
                                y := 0
                                mqtd_c170 := LEN(mcons_r5)
                                FOR y = 1 TO LEN(mcons_r5)
                                        mcons_prod := {}
                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue(mcons_r5[y,5])+"cod_cli = "+sr_cdbvalue(mcons_r5[y,12])+" AND ent_sai = 'S' AND data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2),,.t.,@mcons_prod)
                                        IF LEN(mcons_prod) = 0
                                                LOOP
                                        ENDIF
                                        p:=0
                                        FOR p = 1 TO LEN(mcons_prod)
                                                mqtd_c ++
                                                DEVPOS(PROW()+1,0);DEVOUT('|C170')
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+STRZERO(p,3))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+mcons_prod[p,11])
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_prod[p,12]))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_prod[p,19],'@E 999999.999')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_prod[p,16]))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_prod[p,22],'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|0')
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_prod[p,61]))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(STRTRAN(mcons_prod[p,65],'.','')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_prod[p,81],'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_prod[p,38],'@E 9999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_prod[p,80],'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|0')
                                                DEVPOS(PROW(),PCOL());DEVOUT('||')
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))

                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_r5[y,7])/1000,'@E 999999.99999')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_r5[y,11]))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_r5[y,12])/100,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_r5[y,13])/100,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|0')
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_prod[1,10]))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|5102')
                                                DEVPOS(PROW(),PCOL());DEVOUT('|5102')
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                                                DEVPOS(PROW(),PCOL());DEVOUT('|0')
                                                DEVPOS(PROW(),PCOL());DEVOUT('|53|0|0,00|0,00|01||||||01||||||1|')
                                                mpt := ASCAN(m_cst,mcons_prod[1,10])
                                                IF mpt = 0
                                                        AADD(d_cst,{mcons_prod[1,10],'|5102|0,00|',VAL(mcons_r5[y,13])/100,'|0,00|0,00|0,00|0,00|0,00|0,00||'})
                                                ELSE
                                                        d_cst[mpt,3] := d_cst[mpt,3] + VAL(mcons_r5[y,13])/100
                                                ENDIF
                                        NEXT
                                NEXT
                                y := 0
                                mqtd_c190 := LEN(d_cst)
                                FOR y = 1 TO LEN(d_cst)
                                        mqtd_c ++
                                        DEVPOS(PROW()+1,0);DEVOUT('|C190')
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+d_cst[Y,1])
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+d_cst[Y,2])
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(d_cst[Y,3],'@E 999999.99')))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+d_cst[Y,4]+'|')
                                NEXT

                        ENDIF
                NEXT
        ENDIF
        mcons_d1 := {}
        sr_getconnection():exec("SELECT * FROM d1 WHERE data_doc >= "+sr_cdbvalue(mdata1)+" AND data_doc <= "+sr_cdbvalue(mdata2),,.t.,@mcons_d1)
        IF LEN(mcons_d1) > 0
                mqtd_c ++
                DEVPOS(PROW()+1,0);DEVOUT('|C350')
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_d1[1,2]))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_d1[1,3]))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_d1[1,4]))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(STRTRAN(DTOC(mcons_d1[1,1]),'/','')))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_d1[1,5]))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_d1[1,13]*100,'9999999999999')))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_d1[1,14]*100,'9999999999999')))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_d1[1,15]*100,'9999999999999')))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_d1[1,16]*100,'9999999999999')))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_d1[1,17]*100,'9999999999999')))
                DEVPOS(PROW(),PCOL());DEVOUT('|1|')
                i := 0
                d_cst := {}
                m_cst := {}
                mqtd_c370 := LEN(mcons_d1)
                FOR i = 1 TO LEN(mcons_d1)
                        mqtd_c ++
                        DEVPOS(PROW()+1,0);DEVOUT('|C370')
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_d1[i,6]),'999')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+mcons_d1[i,7])
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_d1[i,8])*1000,'99999999999')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_d1[i,9]))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_d1[i,12])*100,'99999999999')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_d1[i,11])*100,'99999999999')))
                        mpt := ASCAN(m_cst,mcons_d1[i,18])
                        IF mpt = 0
                                AADD(d_cst,{mcons_d1[i,18],mcons_d1[i,8] * mcons_d1[i,12],mcons_d1[i,19],mcons_d1[i,20]})
                        ELSE
                                d_cst[mpt,3] := d_cst[mpt,2] + (mcons_d1[i,8] * mcons_d1[i,12])
                        ENDIF
                NEXT
                y := 0
                mqtd_c390 := LEN(d_cst)
                FOR y = 1 TO LEN(d_cst)
                        mqtd_c ++
                        DEVPOS(PROW()+1,0);DEVOUT('|C390')
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+d_cst[Y,1])
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+d_cst[Y,3])
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+d_cst[Y,4])
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(d_cst[Y,2],'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|1|')
                NEXT

        ENDIF
        IF LEN(mcons_r4) > 0
                mqtd_c ++
                DEVPOS(PROW()+1,0);DEVOUT('|C400')
                DEVPOS(PROW(),PCOL());DEVOUT('|2D')
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_r4[1,3]))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_r4[1,1]))
                DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_r4[1,4])+'|')
        ENDIF
        mcons_r2 := {}
        sr_getconnection():exec("SELECT * FROM r2 WHERE data_mov >= "+sr_cdbvalue(mdata1)+" AND data_mov <= "+sr_cdbvalue(mdata2),,.t.,@mcons_r2)
        IF LEN(mcons_r2) > 0
                i := 0
                mqtd_c405 := LEN(mcons_r2)
                FOR i = 1 TO LEN(mcons_r2)
                        mqtd_c ++
                        DEVPOS(PROW()+1,0);DEVOUT('|C405')
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(STRTRAN(DTOC(mcons_r2[i,15]),'/','')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+mcons_r2[i,7])
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+mcons_r2[i,5])
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+mcons_r2[i,6])
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_r2[i,14])/100,'@E 9999999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_r2[i,10])/100,'@E 9999999999.99'))+'|')
                        DEVPOS(PROW()+1,0);DEVOUT('|C410|0,00|0,00|')
                        mcons_r3 := {}
                        sr_getconnection():exec("SELECT * FROM r3 WHERE crz = "+sr_cdbvalue(mcons_r2[i,5]),,.t.,@mcons_r3)
                        IF LEN(mcons_r3) > 0
                                mqtd_c420 := LEN(mcons_r3)
                                y := 0
                                FOR y = 1 TO LEN(mcons_r3)
                                        mqtd_c ++
                                        DEVPOS(PROW()+1,0);DEVOUT('|C420')
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_r3[y,6]))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_r3[y,7])/100,'@E 9999999999.99')))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|||')
                                NEXT
                        ENDIF
                NEXT
        ENDIF
        IF LEN(mcons_r4) > 0
                        mapuracao := 0
                        mqtd_c ++
                        DEVPOS(PROW()+1,0);DEVOUT('|C460|2D|00')
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+mcons_r4[1,6])
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(STRTRAN(DTOC(mcons_r4[1,19]),'/','')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_r4[1,13])/100,'@E 999,999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(0,'@E 999999.99')))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_r4[1,18]))
                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_r4[1,18])+'|')
                        m_cst:={}
                        d_cst:={}
                        mcons_r5 := {}
                        sr_getconnection():exec("SELECT * FROM r5 WHERE coo = "+sr_cdbvalue(mcons_r4[1,6]),,.t.,@mcons_r5)
                        IF LEN(mcons_r5) > 0
                                mqtd_c470 := LEN(mcons_r5)
                                y := 0
                                FOR y = 1 TO LEN(mcons_r5)
                                        mcons_prod := {}
                                        sr_getconnection():exec("SELECT * FROM produto WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mcons_r5[y,8]),5)),,.t.,@mcons_prod)
                                        IF LEN(mcons_prod) = 0
                                                LOOP
                                        ENDIF
                                        mqtd_c ++
                                        DEVPOS(PROW()+1,0);DEVOUT('|C470')
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+mcons_r5[y,8])
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_r5[y,9]))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_r5[y,10])/1000,'@E 999999.999')))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_r5[y,18])/1000,'@E 999999.999')))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(mcons_r5[y,11]))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(VAL(mcons_r5[y,15])/100,'@E 999999.99')))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+mcons_prod[1,10])
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM('5102'))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mcons_prod[1,13]/100,'@E 999999.99')))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|||')
                                        mpt := ASCAN(m_cst,mcons_prod[1,10])
                                        IF mpt = 0
                                                AADD(d_cst,{mcons_prod[1,10],'5102',mcons_prod[1,13],(VAL(mcons_r5[y,10]) * VAL(mcons_r5[y,15]))})
                                        ELSE
                                                d_cst[mpt,3] := d_cst[mpt,4] + (VAL(mcons_r5[y,10]) * VAL(mcons_r5[y,15]))
                                        ENDIF
                                NEXT
                                mqtd_c490 := LEN(d_cst)
                                y := 0
                                FOR y = 1 TO LEN(d_cst)
                                        mqtd_c ++
                                        DEVPOS(PROW()+1,0);DEVOUT('|C490')
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+d_cst[y,1])
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+d_cst[y,2])
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(d_cst[y,3],'@E 999999.99')))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(d_cst[y,4]/100,'@E 999999.99')))
                                        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(d_cst[y,4]*(d_cst[y,3]/100),'@E 999999.99'))+'||')
                                        mapuracao := mapuracao + (d_cst[Y,4]*(d_cst[Y,3]/100))
                                NEXT

                        ENDIF
        ENDIF
        mqtd_c ++
        DEVPOS(PROW()+1,0);DEVOUT('|C990')
        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mqtd_c,'@E 99999999'))+'|')

        DEVPOS(PROW()+1,0);DEVOUT('|D001|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|D990|2|')

        DEVPOS(PROW()+1,0);DEVOUT('|E001|0|')
        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(TRANSFORM(mqtd_c,'@E 99999999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|E100')
        DEVPOS(PROW(),PCOL());DEVOUT('|'+ALLTRIM(STRTRAN(DTOC(mdata1),'/',''))+'|'+ALLTRIM(STRTRAN(DTOC(mdata2),'/',''))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|E110')
        DEVPOS(PROW(),PCOL());DEVOUT('|E110|'+ALLTRIM(TRANSFORM(mapuracao,'@E 999999.99'))+'|0|0|0|0|0|0|0|0|'+ALLTRIM(TRANSFORM(mapuracao,'@E 999999.99'))+'|0|'+ALLTRIM(TRANSFORM(mapuracao,'@E 999999.99'))+'|0|0|')

        DEVPOS(PROW()+1,0);DEVOUT('|E990|4|')

        DEVPOS(PROW()+1,0);DEVOUT('|1001|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|1990|2|')

        DEVPOS(PROW()+1,0);DEVOUT('|9001|0|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|0000|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|0001|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|0005|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|0100|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|0150|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|0190|5|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|0200|'+ALLTRIM(TRANSFORM(mqtd_200,'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|0400|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|0990|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C001|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C100|'+ALLTRIM(TRANSFORM(mqtd_c100,'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C170|'+ALLTRIM(TRANSFORM(mqtd_c170,'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C190|'+ALLTRIM(TRANSFORM(mqtd_c190,'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C350|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C370|'+ALLTRIM(TRANSFORM(mqtd_c370,'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C390|'+ALLTRIM(TRANSFORM(mqtd_c390,'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C400|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C405|'+ALLTRIM(TRANSFORM(mqtd_c405,'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C420|'+ALLTRIM(TRANSFORM(mqtd_c420,'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C470|'+ALLTRIM(TRANSFORM(mqtd_c470,'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C490|'+ALLTRIM(TRANSFORM(mqtd_c490,'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|C990|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|D001|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|D990|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|E001|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|E100|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|E990|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|1001|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|1990|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|9001|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|9900|33|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|9990|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9900|9999|1|')
        DEVPOS(PROW()+1,0);DEVOUT('|9990|36|')
        DEVPOS(PROW()+1,0);DEVOUT('|9999|'+ALLTRIM(TRANSFORM(PROW(),'99999'))+'|')
        DEVPOS(PROW()+1,0);DEVOUT('')
        SET DEVI TO SCREEN;SET PRINT OFF;SET PRINT TO
        GERA_EAD('SPED.TXT')
        conf_impressao('SPED.TXT')
ENDDO
RETURN NIL
******************************* F I M *****************************************
FUNCTION ciitp_0110(li,ci)
**************************
LOCAL mop_menu:=0
op_tela(li,ci,li+3,ci+86,'REGISTRO 0110: Codigo indicador da incidencia tributaria no periodo')
@ 0,1 PROMPT '1 - Escrituracao de operações com incidencia exclusivamente no regime nao-cumulativo '
@ 1,1 PROMPT '2 - Escrituracao de operações com incidencia exclusivamente no regime cumulativo     '
@ 2,1 PROMPT '3 - Escrituracao de operações com incidencia nos regimes nao-cumulativo e cumulativo.'
SET INTEN ON
MENU TO mop_menu
wvw_lclosewindow()
RETURN mop_menu
******************************* F I M *****************************************
FUNCTION cimacc_0110(li,ci)
***************************
LOCAL mop_menu:=0
op_tela(li,ci,li+2,ci+50,'REGISTRO 0110: Codigo indicador de metodo de apropriacao de creditos comuns')
@ 0,1 PROMPT '1 - Metodo de Apropriacao Direta                 '
@ 1,1 PROMPT '2 - Metodo de Rateio Proporcional (Receita Bruta)'
SET INTEN ON
MENU TO mop_menu
wvw_lclosewindow()
RETURN mop_menu
******************************* F I M *****************************************
FUNCTION citcap_0110(li,ci)
***************************
LOCAL mop_menu:=0
op_tela(li,ci,li+2,ci+62,'REGISTRO 0110: Codigo indicador do Tipo de Contribuicao Apurada no Periodo')
@ 0,1 PROMPT '1 - Apuracao da Contribuicao Exclusivamente a Aliquota Basica'
@ 1,1 PROMPT '2 - Apuracao da Contribuicao a Aliquotas Especificas         '
SET INTEN ON
MENU TO mop_menu
wvw_lclosewindow()
RETURN mop_menu
******************************* F I M *****************************************
FUNCTION ciceaa_0110(li,ci)
***************************
LOCAL mop_menu:=0
op_tela(li,ci,li+3,ci+97,'REGISTRO 0110: Codigo indicador do criterio de escrituracao e apuracao adotado')
@ 0,1 PROMPT '1 - Regime de Caixa – Escrituracao consolidada (Registro F500)                                  '
@ 1,1 PROMPT '2 - Regime de Competencia - Escrituracao consolidada (Registro F550)                            '
@ 2,1 PROMPT '9 - Regime de Competencia - Escrituracao detalhada, com base nos reg.Blocos: A, C, D e F        '
SET INTEN ON
MENU TO mop_menu
wvw_lclosewindow()
IF mop_menu = 3
        mop_menu := 9
ENDIF
RETURN mop_menu
******************************* F I M *****************************************
FUNCTION iacc_0110(li,ci)
***************************
LOCAL mop_menu:=0
op_tela(li,ci,li+3,ci+97,'Indicador apuração contribuições e créditos, escrituração por NF-e e ECF, no período')
@ 0,1 PROMPT '1 – Apuração com base nos registros de consolidação das operações por NF-e (C180 e C190) e por ECF (C490)'
@ 1,1 PROMPT '2 – Apuração com base no registro individualizado de NF-e (C100 e C170) e de ECF (C400)                  '
SET INTEN ON
MENU TO mop_menu
wvw_lclosewindow()
RETURN mop_menu
