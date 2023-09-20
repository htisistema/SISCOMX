*************
* ESTATISTICA
*************
MEMVAR getlist

FUNCTION sacdash()
*******************
LOCAL MPRG:='SACDASH',;
      m_mes_1 := {},m_mes_2 := {},m_mes_3 := {},mcons_vend := {},mcons_prod := {},i:=0,point:=0,;
      mmes1 := 0,mmes2 := 0,mmes3 := 0,mtotal := 0,mp_mes1 := 0,mp_mes2 := 0,mp_mes3 := 0,mp_total := 0,;
      m_posicao := {}

IF ! ver_nivel(mprg,'VISUALIZACAO DO ESTATISTICA','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)
op_tela(0,0,49,120,' VISUALIZACAO DO ESTATISTICA ',,1)
WHILE .T.
        //mdata := DATE()
        m_posicao := {}

        m_mes_1 := {}
        sr_getconnection():exec("select cast(substring(current_date from 1 for 8) || '01' as date),dateadd(month, 1,cast(substring(current_date from 1 for 8) || '01' as date)) - 1 from rdb$database",,.t.,@m_mes_1)
        //sr_getconnection():exec("select cast(substring(current_date from 1 for 8) || '01' as date),dateadd(year, 1,cast(substring(current_date from 1 for 8) || '01' as date)) - 1 from rdb$database",,.t.,@m_mes_1)
        sr_getconnection():exec('COMMIT',,.f.)

        m_mes_2 := {}
        sr_getconnection():exec("select dateadd(month, -1, cast("+sr_cdbvalue(m_mes_1[1,1])+" as date)), cast("+sr_cdbvalue(m_mes_1[1,1])+" as date) - 1  from rdb$database",,.t.,@m_mes_2)
        //sr_getconnection():exec("select dateadd(year, -1, cast("+sr_cdbvalue(m_mes_1[1,1])+" as date)), cast("+sr_cdbvalue(m_mes_1[1,1])+" as date) - 1  from rdb$database",,.t.,@m_mes_2)
        sr_getconnection():exec('COMMIT',,.f.)

        m_mes_3 := {}
        sr_getconnection():exec("select dateadd(month, -2, cast("+sr_cdbvalue(m_mes_1[1,1])+"as date)), cast("+sr_cdbvalue(m_mes_2[1,1])+" as date) - 1 from rdb$database",,.t.,@m_mes_3)
        //sr_getconnection():exec("select dateadd(year, -2, cast("+sr_cdbvalue(m_mes_1[1,1])+"as date)), cast("+sr_cdbvalue(m_mes_2[1,1])+" as date) - 1 from rdb$database",,.t.,@m_mes_3)
        sr_getconnection():exec('COMMIT',,.f.)

        //atencao( sr_ShowVector( m_mes_1 ))
        //atencao( sr_ShowVector( m_mes_2 ))
        //atencao( sr_ShowVector( m_mes_3 ))

        cComm  :=         "SELECT mov.cod_vend,sen.snome,sen.scota"
        cComm  := ccomm + ",sum(iif(mov.data_s_e between "+sr_cdbvalue(m_mes_1[1,1])+" and "+sr_cdbvalue(m_mes_1[1,2])+", (mov.vl_vend * mov.quantd),0))"
        cComm  := ccomm + ",sum(iif(mov.data_s_e between "+sr_cdbvalue(m_mes_2[1,1])+" and "+sr_cdbvalue(m_mes_2[1,2])+", (mov.vl_vend * mov.quantd),0))"
        cComm  := ccomm + ",sum(iif(mov.data_s_e between "+sr_cdbvalue(m_mes_3[1,1])+" and "+sr_cdbvalue(m_mes_3[1,2])+", (mov.vl_vend * mov.quantd),0))"
        cComm  := ccomm + ",sum(iif(mov.data_s_e between "+sr_cdbvalue(m_mes_3[1,1])+" and "+sr_cdbvalue(m_mes_1[1,2])+", (mov.vl_vend * mov.quantd),0))"
        cComm  := ccomm + " FROM sacmov mov JOIN insopera sen ON sen.scod_op = mov.cod_vend WHERE tipo = '02' AND cancel IS NULL AND ent_sai = 'S' AND devolucao IS NULL"
        cComm  := ccomm + " AND NOT num_ped = 'CUPOME' AND ( documento like 'PD%' OR  documento like 'CP%')"
        cComm  := ccomm + " AND cod_vend IS NOT NULL AND documento NOT LIKE 'TR%'"
        cComm  := ccomm + " AND documento NOT LIKE 'BL%' GROUP BY mov.cod_vend,sen.snome,sen.scota ORDER BY 7 DESC"


        /*
        cComm  :=         "SELECT ped.pcod_vend,ped.pvendedor,sen.scota"
        cComm  := ccomm + ",sum(iif(ped.pdat_ped between "+sr_cdbvalue(m_mes_1[1,1])+" and "+sr_cdbvalue(m_mes_1[1,2])+", (ped.pvlr_fat * ped.pquantd),0))"
        cComm  := ccomm + ",sum(iif(ped.pdat_ped between "+sr_cdbvalue(m_mes_2[1,1])+" and "+sr_cdbvalue(m_mes_2[1,2])+", (ped.pvlr_fat * ped.pquantd),0))"
        cComm  := ccomm + ",sum(iif(ped.pdat_ped between "+sr_cdbvalue(m_mes_3[1,1])+" and "+sr_cdbvalue(m_mes_3[1,2])+", (ped.pvlr_fat * ped.pquantd),0))"
        cComm  := ccomm + ",sum(iif(ped.pdat_ped between "+sr_cdbvalue(m_mes_3[1,1])+" and "+sr_cdbvalue(m_mes_1[1,2])+", (ped.pvlr_fat * ped.pquantd),0))"
        cComm  := ccomm + " FROM sacped_s ped JOIN insopera sen ON sen.scod_op = ped.pcod_vend WHERE ped.ppag = '*' GROUP BY ped.pcod_vend,ped.pvendedor,sen.scota ORDER BY 7 DESC"
        */
        m_mes_4 := {}
        sr_getconnection():exec(ccomm,,.t.,@m_mes_4)
        sr_getconnection():exec('COMMIT',,.f.)
        //atencao( sr_ShowVector( m_mes_4 ))
        //IF LEN(m_mes_4) = 0
        //        atencao('Nao existe movimento de VENDEDORES.....')
        //        EXIT
        //ENDIF
        mcons_vend := {}
        i := mmes1 := mmes2 := mmes3 := mtotal := 0
        FOR i = 1 TO LEN(m_mes_4)
                AADD(mcons_vend,' '+m_mes_4[i,1]+' '+SUBSTR(m_mes_4[i,2],1,10)+' '+TRANSFORM(m_mes_4[i,3],'9,999,999.99')+' '+TRANSFORM(m_mes_4[i,4],'9,999,999.99')+' '+TRANSFORM(m_mes_4[i,4] - m_mes_4[i,3],'9,999,999.99')+' '+TRANSFORM(m_mes_4[i,5],'9,999,999.99')+' '+TRANSFORM(m_mes_4[i,5] - m_mes_4[i,3],'9,999,999.99')+' '+TRANSFORM(m_mes_4[i,6],'9,999,999.99')+' '+TRANSFORM(m_mes_4[i,6] - m_mes_4[i,3],'9,999,999.99')+' '+TRANSFORM(m_mes_4[i,7],'9,999,999.99'))
                //AADD(m_posicao,{mcons_vend,
                mmes1 := mmes1 + m_mes_4[i,4]
                mmes2 := mmes2 + m_mes_4[i,5]
                mmes3 := mmes3 + m_mes_4[i,6]
                mtotal := mtotal + m_mes_4[i,7]

        NEXT
        AADD(mcons_vend,' '+SPACE(27)+' ------------              ------------              ------------              ------------')
        AADD(mcons_vend,' TOTAIS'+SPACE(21)+' '+TRANSFORM(mmes1,'9,999,999.99')+'              '+TRANSFORM(mmes2,'9,999,999.99')+'              '+TRANSFORM(mmes3,'9,999,999.99')+'              '+TRANSFORM(mtotal,'9,999,999.99'))

        mcons_prod := {}
        cComm  :=         "SELECT mov.codigo,mov.produto"
        cComm  := ccomm + ",sum(iif(mov.data_s_e between "+sr_cdbvalue(m_mes_1[1,1])+" and "+sr_cdbvalue(m_mes_1[1,2])+", (mov.vl_vend * mov.quantd),0))"
        cComm  := ccomm + ",sum(iif(mov.data_s_e between "+sr_cdbvalue(m_mes_2[1,1])+" and "+sr_cdbvalue(m_mes_2[1,2])+", (mov.vl_vend * mov.quantd),0))"
        cComm  := ccomm + ",sum(iif(mov.data_s_e between "+sr_cdbvalue(m_mes_3[1,1])+" and "+sr_cdbvalue(m_mes_3[1,2])+", (mov.vl_vend * mov.quantd),0))"
        cComm  := ccomm + ",sum(iif(mov.data_s_e between "+sr_cdbvalue(m_mes_3[1,1])+" and "+sr_cdbvalue(m_mes_1[1,2])+", (mov.vl_vend * mov.quantd),0))"
        cComm  := ccomm + " FROM sacmov mov WHERE tipo = '02' AND cancel IS NULL AND ent_sai = 'S' AND devolucao IS NULL"
        cComm  := ccomm + " AND NOT num_ped = 'CUPOME' AND ( documento like 'PD%' OR  documento like 'CP%')"
        cComm  := ccomm + " AND cod_vend IS NOT NULL AND documento NOT LIKE 'TR%'"
        cComm  := ccomm + " AND documento NOT LIKE 'BL%' GROUP BY mov.codigo,mov.produto ORDER BY 6 DESC"

        
        /*
        cComm  :=         "SELECT ped.pcod_merc,ped.pmerc"
        cComm  := ccomm + ",sum(iif(ped.pdat_ped between "+sr_cdbvalue(m_mes_1[1,1])+" and "+sr_cdbvalue(m_mes_1[1,2])+", (ped.pvlr_fat * ped.pquantd),0))"
        cComm  := ccomm + ",sum(iif(ped.pdat_ped between "+sr_cdbvalue(m_mes_2[1,1])+" and "+sr_cdbvalue(m_mes_2[1,2])+", (ped.pvlr_fat * ped.pquantd),0))"
        cComm  := ccomm + ",sum(iif(ped.pdat_ped between "+sr_cdbvalue(m_mes_3[1,1])+" and "+sr_cdbvalue(m_mes_3[1,2])+", (ped.pvlr_fat * ped.pquantd),0))"
        cComm  := ccomm + ",sum(iif(ped.pdat_ped between "+sr_cdbvalue(m_mes_3[1,1])+" and "+sr_cdbvalue(m_mes_1[1,2])+", (ped.pvlr_fat * ped.pquantd),0))"
        cComm  := ccomm + " FROM sacped_s ped WHERE ppag = '*' GROUP BY ped.pcod_merc,ped.pmerc ORDER BY 6 DESC"
        */


        sr_getconnection():exec(ccomm,,.t.,@mcons_prod)
        sr_getconnection():exec('COMMIT',,.f.)
        AADD(mcons_vend,REPLI('=',120))
        AADD(mcons_vend,'                                ESTATISTICA DOS PRODUTOS')
        AADD(mcons_vend,' PRODUTO                                               '+SUBSTR(DTOC(m_mes_1[1,1]),4)+'        '+SUBSTR(DTOC(m_mes_2[1,1]),4)+'        '+SUBSTR(DTOC(m_mes_3[1,1]),4)+'        Total')
        AADD(mcons_vend,REPLI('=',120))

        mp_mes1 := mp_mes2 := mp_mes3 := mp_total := i := 0
        FOR i = 1 TO LEN(mcons_prod)
                AADD(mcons_vend,' '+mcons_prod[i,1]+' '+mcons_prod[i,2]+' '+TRANSFORM(mcons_prod[i,3],'9,999,999.99')+' '+TRANSFORM(mcons_prod[i,4],'9,999,999.99')+' '+TRANSFORM(mcons_prod[i,5],'9,999,999.99')+' '+TRANSFORM(mcons_prod[i,6],'9,999,999.99'))
                mp_mes1 := mp_mes1 + mcons_prod[i,3]
                mp_mes2 := mp_mes2 + mcons_prod[i,4]
                mp_mes3 := mp_mes3 + mcons_prod[i,5]
                mp_total := mp_total + mcons_prod[i,6]

        NEXT
        AADD(mcons_vend,'                                                ------------ ------------ ------------ ------------')
        AADD(mcons_vend,'  TOTAIS                                        '+TRANSFORM(mp_mes1,'9,999,999.99')+' '+TRANSFORM(mp_mes2,'9,999,999.99')+' '+TRANSFORM(mp_mes3,'9,999,999.99')+' '+TRANSFORM(mp_total,'9,999,999.99'))
        WHILE .T.
                DEVPOS(1,1);DEVOUT('Vendedor            Cota R$        '+SUBSTR(DTOC(m_mes_1[1,1]),4)+'     Dif.Cota        '+SUBSTR(DTOC(m_mes_2[1,1]),4)+'     Dif.Cota        '+SUBSTR(DTOC(m_mes_3[1,1]),4)+'     Dif.Cota        Total')
                @ 2,0 TO 2,120
                setcor(1)
                setcor(10);point := ACHOICE(3,0,47,120,mcons_vend,,,point);setcor(1)
                DO CASE
                        CASE LASTKEY()=27
                                EXIT
                        CASE LASTKEY() = 13
                                EXIT
                ENDCASE
        ENDDO
        IF LASTKEY() = 27
                EXIT
        ENDIF
ENDDO
fecha_tela()
RETURN NIL