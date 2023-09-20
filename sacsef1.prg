********************
* Relatorio do SEF
********************
MEMVAR mcgc_firm,minsc_firm,getlist

FUNCTION sacsef1
****************
LOCAL MPRG:='SACSEF1',mtitulo:='EMISSAO DO ARQUIVO SEF',;
      lba,cba,opcao,mdata1,mdata2,mponto,mdoc,ment_sai,mitem,mcgc_c,;
      mseq_88:=0,m_cliente:={},m_cod:={},mpt,mop_nota,memi_doc,;
      micm,mdocumento,mcod_cli,mvl_nota,mvl_base,mvl_icm,mvl_ipi,;
      mcont_10:=0,mcont_11:=0,mcont_50:=0,mcont_51:=0,mcont_53:=0,mcont_54:=0,;
      mcont_70:=0,mcont_74,mcont_75:=0,mcont_88,mcont_90:=0,mcont_ger:=0,mcgc_cons,mtot_nota:=0,;
      mtot_base := 0,mtot_icm  := 0,mtot_ipi  := 0,mponto_nt:=0,mcod_nat,mbase:=0,;
      mso_prod:='N',y:=0,minventa:='N',mdata_inve:=CTOD('  /  /  '),mso_inve:='N',;
      prod_del:={},mov_cod:={},mcont_obs:=0,m_contador:={}

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcliente,mcgc,mcpf,mtcor,;
        m_totnt:={},m_movnt:={},m_mov:={},nt:=0,t:=0,mv:=0,m_merc:={},cons_nat := {},;
        m_codmerc:={},m_mercad:={}

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)
lba := 16
cba := 67
*----------------------------------------------------------------------------
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacmovnt','movnt');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacop','op');RETURN NIL;ENDIF
IF ! AbriArq('sacinve','inve');RETURN NIL;ENDIF
IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
IF ! AbriArq('sacmovcn','movcn');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
SET CENTURY ON
op_tela(05,05,23,78,mtitulo)
WHILE .T.
        exibi_prg(mprg)
        sr_getconnection():exec("DELETE FROM sacmovcn",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        ASIZE(m_cliente,0)
        ASIZE(m_cod,0)
        ASIZE(prod_del,0)
        mcont_10:=0;mcont_11:=0;mcont_50:=0;mcont_51:=0;mcont_53:=0;mcont_54:=0
        mcont_70:=0;mcont_74:=0;mcont_75:=0;mcont_90:=0;mcont_88:=0;mcont_ger:=0
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
*       mdata1 := mdata_sis - 30
*       mdata2 := mdata_sis
        mso_inve := mso_prod := minventa := 'N'
        mdata_inve:=mdata1 := mdata2 := CTOD('  /  /  ')
        mop_nota := ' '
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ 7,1 TO 7,cba-1
        DEVPOS(1,2);DEVOUT('Data Inicial...:')
        DEVPOS(2,2);DEVOUT('Data Final.....:')
        DEVPOS(3,2);DEVOUT('[E]ntrada [S]aida [G]eral:')
        DEVPOS(4,2);DEVOUT('Gerar so os PRODUTO [S/N]:')
        DEVPOS(5,2);DEVOUT('Gerar o INVENTARIO  [S/N]:')
        DEVPOS(6,2);DEVOUT('Data do INVENTARIO.......:')
        DEVPOS(6,43);DEVOUT('So o INVENTARIO [S/N]:')
        setcor(3)
        DEVPOS(8,2);DEVOUT('Registro 50..............:')
        DEVPOS(9,2);DEVOUT('Registro 51..............:')
        DEVPOS(10,2);DEVOUT('Registro 53..............:')
        DEVPOS(11,2);DEVOUT('Registro 54..............:')
        DEVPOS(12,2);DEVOUT('Registro 70..............:')
        DEVPOS(13,2);DEVOUT('Registro 74..............:')
        DEVPOS(14,2);DEVOUT('Registro 75..............:')
        DEVPOS(15,2);DEVOUT('Registro 88..............:')
        setcor(1)

        @ 1,19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        READ
        IF LASTKEY() = 27
                SET CENTURY OFF
                EXIT
        ENDIF
        mdata2 := CTOD('31'+SUBSTR(DTOC(mdata1),3))
        mop_nota:='G'
        @ 2,19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 3,29 GET mop_nota PICT '@!' VALID mop_nota $ 'S,E,G'
        @ 4,29 GET mso_prod PICT '@!' VALID mso_prod $ 'S,N'
        @ 5,29 GET minventa PICT '@!' VALID minventa $ 'S,N'
        @ 6,29 GET mdata_inve PICT '@!'WHEN minventa = 'S'
        @ 6,65 GET mso_inve PICT '@!'WHEN minventa = 'S'
        READ
        IF LASTKEY() = 27
                SET CENTURY OFF
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma o Periodo do SEF:')
        IF opcao = 'N'
                LOOP
        ENDIF
        m_contador := {}
        sr_getconnection():exec("SELECT * FROM sacsef",,.t.,@m_contador)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(m_contador) = 0
                IF 'S' = op_simnao('S','O contador nao estar cadastrado para gerar o arquivo SEF, Deseja cadastrar agora: ')
                        sacsef_c()
                        LOOP
                ENDIF
        ENDIF
        IF ! imp_arq('SEF.TXT','R')
                SET CENTURY OFF
                EXIT
        ENDIF
        SETPRC(00,00)
        DEVPOS(00,00);DEVOUT('10')
        DEVPOS(00,02);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
        DEVPOS(00,16);DEVOUT(LEFT(minsc_firm,14))
        DEVPOS(00,30);DEVOUT(LEFT(m_set[1,129],35))
        DEVPOS(00,65);DEVOUT(m_set[1,133])
        DEVPOS(00,95);DEVOUT(m_set[1,19])
        DEVPOS(00,97);DEVOUT(STRZERO(VAL(mfone_firm),10))
        DEVPOS(00,107);DEVOUT(SUBSTR(DTOC(mdata1),7)+SUBSTR(DTOC(mdata1),4,2)+SUBSTR(DTOC(mdata1),1,2))
        DEVPOS(00,115);DEVOUT(SUBSTR(DTOC(mdata2),7)+SUBSTR(DTOC(mdata2),4,2)+SUBSTR(DTOC(mdata2),1,2))
        DEVPOS(00,123);DEVOUT('2')
        DEVPOS(00,124);DEVOUT('3')
        DEVPOS(00,125);DEVOUT('1')
        DEVPOS(00,126);DEVOUT('1')
        mcont_10 ++
        mcont_ger ++
        DEVPOS(01,00);DEVOUT('11')
        DEVPOS(01,02);DEVOUT(m_set[1,139])
        DEVPOS(01,36);DEVOUT(m_set[1,140])
        DEVPOS(01,41);DEVOUT(m_set[1,141])
        DEVPOS(01,63);DEVOUT(m_set[1,142])
        DEVPOS(01,78);DEVOUT(m_set[1,143])
        DEVPOS(01,86);DEVOUT(m_set[1,144])
        DEVPOS(01,114);DEVOUT(STRZERO(VAL(m_set[1,145]),12))
        mcont_11 ++
        mcont_ger ++
        IF mso_inve = 'N' .OR. minventa = 'S'
                IF mso_prod = 'N'
                        // NOTAS DE SAIDAS
                        IF mop_nota = 'S' .OR. mop_nota = 'G'
                                m_totnt := {}
                                cComm := "SELECT * FROM sactotnt WHERE emissao >= "+sr_cdbvalue(mdata1)
                                ccomm := ccomm +" AND emissao <= "+sr_cdbvalue(mdata2)
                                ccomm := ccomm +" AND ent_sai ='S' AND tip_sef IS NULL AND documento LIKE 'NF%'"
                                ccomm := ccomm + " ORDER BY emissao,documento,cod_nota,cod_nat"
                                sr_getconnection():exec(ccomm,,.t.,@m_totnt)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_totnt) > 0
                                        t := 0
                                        FOR t = 1 TO LEN(m_totnt)
                                                m_movnt:={}
                                                mcgc_cons := IF(! EMPTY(m_totnt[t,17]),m_totnt[t,17],m_totnt[t,18])
                                                cComm := "SELECT * FROM sacmovnt WHERE data_s_e = "+sr_cdbvalue(m_totnt[t,10])
                                                ccomm := ccomm +" AND conjunta = "+sr_cdbvalue(SUBSTR(m_totnt[t,5],3,6))
                                                ccomm := ccomm +" AND ent_sai = 'S' AND documento LIKE 'NF%'"
                                                ccomm := ccomm + " ORDER BY data_s_e,conjunta,ent_sai,cod_nat,icm,cod_nota,isento"
                                                sr_getconnection():exec(ccomm,,.t.,@m_movnt)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                mtot_nota := mtot_base := mtot_icm  := mtot_ipi  := 0
                                                IF LEN(m_movnt) > 0
                                                        mdocumento := m_movnt[1,4]
                                                        nt := 0
                                                        FOR nt = 1 TO LEN(m_movnt)
                                                                IF m_movnt[nt,65] = '6.109'
                                                                        mtot_nota := mtot_nota + iat(((m_movnt[nt,19]*m_movnt[nt,22])+m_movnt[nt,54])-m_movnt[nt,50],2)
                                                                ELSE
                                                                        mtot_nota := mtot_nota + iat(((m_movnt[nt,19]*m_movnt[nt,22])+m_movnt[nt,54]),2)
                                                                ENDIF
                                                                mbase := 0
                                                                IF m_movnt[nt,38] > 0
                                                                        mtot_base := mtot_base + iat((m_movnt[nt,19]*m_movnt[nt,22]),2)
                                                                        mbase := iat((m_movnt[nt,19]*m_movnt[nt,22]),2)
                                                                ENDIF
                                                                IF EMPTY(m_totnt[t,16])
                                                                        mtot_base := mtot_base + m_movnt[nt,54]
                                                                        mbase := mbase + m_movnt[nt,54]
                                                                ENDIF
                                                                mtot_icm := mtot_icm + iat(mbase*(m_movnt[nt,38]/100),2)
                                                        NEXT
                                                        nt:= 0
                                                        FOR nt = 1 TO LEN(m_movnt)
                                                                micm := m_movnt[nt,38]
                                                                mcod_cli := m_movnt[nt,31]
                                                                mvl_nota:= mvl_base:= mvl_icm := mvl_ipi := 0
                                                                mcod_nat := m_movnt[nt,65]
                                                                mok := 0
                                                                mensagem(mdocumento)                                                                                                                                                        
                                                                cons_nat := {}
                                                                cComm  := "SELECT credito FROM sacop WHERE operacao = "+sr_cdbvalue(m_totnt[t,36])
                                                                sr_getconnection():exec(ccomm,,.t.,@cons_nat)
                                                                sr_getconnection():exec('COMMIT',,.f.)
                                                                IF LEN(cons_nat) > 0 .AND. cons_nat[1,1] = 'N'
	                                                                WHILE mdocumento = m_movnt[nt,4]
        	                                                                mok := 1
                	                                                        nt := nt + 1
                        	                                                IF nt > LEN(m_movnt)
                                	                                                EXIT
                                        	                                ENDIF
                                                	                ENDDO
                                                	       	ELSE
	                                                                WHILE m_movnt[nt,65] = mcod_nat .AND. m_movnt[nt,38] = micm .AND. mdocumento = m_movnt[nt,4]
        	                                                                mok := 1
                	                                                        //IF m_movnt[nt,18] = 'E'
                        	                                                //        nt := nt + 1
                                	                                        //        LOOP
                                        	                                //ENDIF
                                                	                        mbase := 0
                                                        	                IF m_movnt[nt,65] = '6.109'
                                                                	                mvl_nota := mvl_nota + iat(((m_movnt[nt,19]*m_movnt[nt,22])+m_movnt[nt,54])-m_movnt[nt,50],2)
                                                                        	ELSE
	                                                                                mvl_nota := mvl_nota + iat(((m_movnt[nt,19]*m_movnt[nt,22])+m_movnt[nt,54]),2)
        	                                                                ENDIF
                	                                                        IF m_movnt[nt,38] > 0
                        	                                                        mvl_base := mvl_base + iat((m_movnt[nt,19]*m_movnt[nt,22]),2)
                                	                                                mbase := iat((m_movnt[nt,19]*m_movnt[nt,22]),2)
                                        	                                ENDIF
                                                	                        IF EMPTY(m_totnt[t,16])
                                                        	                        mvl_base := mvl_base + m_movnt[nt,54]
                                                                	                mbase := mbase + m_movnt[nt,54]
                                                                        	ENDIF
	                                                                        mvl_icm := mvl_icm + iat(mbase*(m_movnt[nt,38]/100),2)
        	                                                                mvl_ipi := mvl_ipi + m_movnt[nt,54]
                	                                                        nt := nt + 1
                        	                                                IF nt > LEN(m_movnt)
                                	                                                EXIT
                                        	                                ENDIF
                                                	                ENDDO
                                                	       	ENDIF
                                                                IF mok > 0
                                                                        nt := nt - 1
                                                                ENDIF
                                                        //NEXT
                                                                mpt := 0
                                                                mpt := ASCAN(m_cod,mcgc_cons)
                                                                IF mpt = 0
                                                                        AADD(m_cod,mcgc_cons)
                                                                        AADD(m_cliente,{m_totnt[t,13],m_totnt[t,17],m_totnt[t,16],m_totnt[t,15],m_totnt[t,18],'1'})
                                                                ENDIF
                                                                mcont_50 ++
                                                                mcont_ger ++
                                                                SETPOS(8,29);DISPOUT(TRANSFORM(mcont_50,'999,999,999'))
                                                                DEVPOS(PROW()+1,00);DEVOUT('50')
                                                                IF ! EMPTY(m_totnt[t,17])
                                                                        DEVPOS(PROW(),02);DEVOUT(m_totnt[t,17])
                                                                ELSE
                                                                        DEVPOS(PROW(),02);DEVOUT(STRZERO(VAL(m_totnt[t,18]),14))
                                                                ENDIF
                                                                IF EMPTY(m_totnt[t,16]) .OR. VAL(m_totnt[t,16]) = 0
                                                                        DEVPOS(PROW(),16);DEVOUT('ISENTO')
                                                                ELSE
                                                                        DEVPOS(PROW(),16);DEVOUT(m_totnt[t,16])
                                                                ENDIF
                                                                DEVPOS(PROW(),30);DEVOUT(SUBSTR(DTOC(m_totnt[t,10]),7)+SUBSTR(DTOC(m_totnt[t,10]),4,2)+SUBSTR(DTOC(m_totnt[t,10]),1,2))
                                                                DEVPOS(PROW(),38);DEVOUT(m_totnt[t,15])
                                                                DEVPOS(PROW(),40);DEVOUT(m_totnt[t,7])
                                                                DEVPOS(PROW(),42);DEVOUT(SUBSTR(m_totnt[t,6],1,3))
                                                                DEVPOS(PROW(),45);DEVOUT(STRZERO(VAL(SUBSTR(m_totnt[t,5],3)),6))
                                                                DEVPOS(PROW(),51);DEVOUT(SUBSTR(mcod_nat,1,1)+SUBSTR(mcod_nat,3))
                                                                DEVPOS(PROW(),55);DEVOUT('P')
                                                                //ver_nat(m_totnt[t,36])

                                                                IF LEN(cons_nat) > 0 .AND. cons_nat[1,1] = 'N'
                                                                        DEVPOS(PROW(),56);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),69);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),82);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),95);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),108);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),121);DEVOUT(SUBSTR(STRZERO(0,5,2),1,2)+SUBSTR(STRZERO(0,5,2),4))
                                                                        IF m_totnt[t,37] = 'C'
                                                                                DEVPOS(PROW(),125);DEVOUT('S')
                                                                        ELSE
                                                                                DEVPOS(PROW(),125);DEVOUT('N')
                                                                        ENDIF
                                                                        DEVPOS(PROW(),126);DEVOUT(STRZERO(0,8))
                                                                        DEVPOS(PROW(),134);DEVOUT(SPACE(12))
                                                                        DEVPOS(PROW(),146);DEVOUT(STRZERO(0,3))
                                                                        DEVPOS(PROW(),149);DEVOUT(SPACE(9))
                                                                        DEVPOS(PROW(),158);DEVOUT(STRZERO(0,2))
                                                                        DEVPOS(PROW(),160);DEVOUT(STRZERO(0,8))
                                                                        DEVPOS(PROW(),168);DEVOUT(STRZERO(0,8))
                                                                        DEVPOS(PROW(),176);DEVOUT(STRZERO(0,7))
                                                                        DEVPOS(PROW(),183);DEVOUT(STRZERO(0,7))
                                                                        DEVPOS(PROW(),190);DEVOUT(STRZERO(0,9))
                                                                        DEVPOS(PROW(),199);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),212);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),225);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),238);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),251);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),264);DEVOUT(STRZERO(0,5))
                                                                ELSE
                                                                        DEVPOS(PROW(),56);DEVOUT(SUBSTR(STRZERO(mvl_nota,14,2),1,11)+SUBSTR(STRZERO(mvl_nota,14,2),13))
                                                                        DEVPOS(PROW(),69);DEVOUT(SUBSTR(STRZERO(mvl_base,14,2),1,11)+SUBSTR(STRZERO(mvl_base,14,2),13))
                                                                        DEVPOS(PROW(),82);DEVOUT(SUBSTR(STRZERO(mvl_icm,14,2),1,11)+SUBSTR(STRZERO(mvl_icm,14,2),13))
                                                                        DEVPOS(PROW(),95);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),108);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),121);DEVOUT(SUBSTR(STRZERO(micm,5,2),1,2)+SUBSTR(STRZERO(micm,5,2),4))
                                                                        IF m_totnt[t,37] = 'C'
                                                                                DEVPOS(PROW(),125);DEVOUT('S')
                                                                        ELSE
                                                                                DEVPOS(PROW(),125);DEVOUT('N')
                                                                        ENDIF
                                                                        DEVPOS(PROW(),126);DEVOUT(STRZERO(0,8))
                                                                        DEVPOS(PROW(),134);DEVOUT(SPACE(12))
                                                                        DEVPOS(PROW(),146);DEVOUT(STRZERO(0,3))
                                                                        DEVPOS(PROW(),149);DEVOUT(SPACE(9))
                                                                        DEVPOS(PROW(),158);DEVOUT(STRZERO(0,2))
                                                                        DEVPOS(PROW(),160);DEVOUT(STRZERO(0,8))
                                                                        DEVPOS(PROW(),168);DEVOUT(STRZERO(0,8))
                                                                        DEVPOS(PROW(),176);DEVOUT(STRZERO(0,7))
                                                                        DEVPOS(PROW(),183);DEVOUT(STRZERO(0,7))
                                                                        DEVPOS(PROW(),190);DEVOUT(STRZERO(0,9))
                                                                        DEVPOS(PROW(),199);DEVOUT(SUBSTR(STRZERO(mtot_nota,14,2),1,11)+SUBSTR(STRZERO(mtot_nota,14,2),13))
                                                                        DEVPOS(PROW(),212);DEVOUT(SUBSTR(STRZERO(mtot_base,14,2),1,11)+SUBSTR(STRZERO(mtot_base,14,2),13))
                                                                        DEVPOS(PROW(),225);DEVOUT(SUBSTR(STRZERO(mtot_icm,14,2),1,11)+SUBSTR(STRZERO(mtot_icm,14,2),13))
                                                                        DEVPOS(PROW(),238);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),251);DEVOUT(STRZERO(0,13))
                                                                        DEVPOS(PROW(),264);DEVOUT(STRZERO(0,5))
                                                                ENDIF
                                                        NEXT
                                                ENDIF
                                        NEXT
                                ENDIF
                        ENDIF
                        IF mop_nota = 'E' .OR. mop_nota = 'G'
                                // NOTAS DE ENTRADA
                                m_totnt := {}
                                cComm  := "SELECT * FROM sactotnt WHERE emissao >= "+sr_cdbvalue(mdata1)
                                ccomm := ccomm + " AND emissao <= "+sr_cdbvalue(mdata2)
                                ccomm := ccomm + " AND ent_sai ='E' AND tip_sef IS NULL AND documento LIKE 'NF%'"
                                ccomm := ccomm + " ORDER BY emissao,documento,cod_nota,cod_nat"
                                sr_getconnection():exec(ccomm,,.t.,@m_totnt)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_totnt) > 0
                                        mdoc_aux := SPACE(8)
                                        mfor_aux := SPACE(4)
                                        t := 0
                                        FOR t = 1 TO LEN(m_totnt)
                                                IF mdoc_aux = m_totnt[t,5] .AND. mfor_aux = m_totnt[t,12]
                                                        LOOP
                                                ENDIF
                                                mdoc_aux := m_totnt[t,5]
                                                mfor_aux := m_totnt[t,12]
                                                mensagem('Nota Fiscal: '+m_totnt[t,5])
                                                IF m_totnt[t,15] <> 'EX'
                                                        mcgc_cons := IF(! EMPTY(m_totnt[t,17]),m_totnt[t,17],m_totnt[t,18])
                                                        mdocumento := m_totnt[t,5]      //+SPACE(2)
                                                        m_mov:={}
                                                        mcgc_cons := IF(! EMPTY(m_totnt[t,17]),m_totnt[t,17],m_totnt[t,18])
                                                        cComm := "SELECT * FROM sacmov WHERE documento = "+sr_cdbvalue(mdocumento)
                                                        ccomm := ccomm +" AND ent_sai = 'E' AND documento LIKE 'NF%'"    //+sr_cdbvalue(m_totnt[t,11])
                                                        ccomm := ccomm +" AND cod_forn = "+sr_cdbvalue(SUBSTR(m_totnt[t,12],1,4))
                                                        ccomm := ccomm + " ORDER BY documento,ent_sai,cod_forn,cod_nat,icm_aliq"
                                                        sr_getconnection():exec(ccomm,,.t.,@m_mov)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        mtot_nota := mtot_base := mtot_icm  := mtot_ipi  := 0
                                                        IF LEN(m_mov) > 0
                                                                mdocumento := m_mov[1,2]
                                                                mcod_cli := m_mov[1,40]
                                                                mtot_nota := mtot_base := mtot_icm  := mtot_ipi  := 0
                                                                mv := 0
                                                                FOR mv = 1 TO LEN(m_mov)
                                                                        mtot_nota := mtot_nota + iat(((m_mov[mv,19]*m_mov[mv,25])+m_mov[mv,62]),2)

                                                                        IF ! EMPTY(m_mov[mv,43])        //> 0
                                                                                mtot_base := mtot_base + iat((m_mov[mv,19]*m_mov[mv,25]),2)
                                                                        ENDIF
                                                                        mtot_icm := mtot_icm + m_mov[mv,43]
                                                                        mtot_ipi := mtot_ipi + m_mov[mv,62]
                                                                NEXT
                                                                mv := 0
                                                                mcod_cli := m_mov[1,40]
                                                                memi_doc := m_totnt[t,10]
                                                                micm := m_mov[1,42]
                                                                FOR mv = 1 TO LEN(m_mov)
                                                                        micm := m_mov[mv,42]
                                                                        mcod_cli := m_mov[mv,40]
                                                                        mvl_nota:= mvl_base:= mvl_icm := mvl_ipi := 0
                                                                        mcod_nat := m_mov[mv,73]
                                                                        mok := 0
                                                                        WHILE m_mov[mv,73] = mcod_nat .AND. m_mov[mv,42] = micm         //.AND. mdocumento = m_mov[mv,2]
                                                                                //IF m_mov[mv,16] = 'S'
                                                                                //        LOOP
                                                                                //ENDIF
                                                                                mok := 1
                                                                                mvl_nota := mvl_nota + iat(((m_mov[mv,19]*m_mov[mv,25])+m_mov[mv,62]),2)
                                                                                IF m_mov[mv,43] > 0
                                                                                        mvl_base := mvl_base + iat((m_mov[mv,19]*m_mov[mv,25]),2)
                                                                                ENDIF
                                                                                mvl_icm := mvl_icm + m_mov[mv,43]
                                                                                mvl_ipi := mvl_ipi + m_mov[mv,62]
                                                                                mv := mv + 1
                                                                                IF mv > LEN(m_mov)
                                                                                        EXIT
                                                                                ENDIF
                                                                        ENDDO
                                                                        IF mok > 0
                                                                                mv := mv - 1
                                                                        ENDIF
                                                                //NEXT
                                                                        mpt := 0
                                                                        mpt := ASCAN(m_cod,mcgc_cons)
                                                                        IF mpt = 0
                                                                                AADD(m_cod,mcgc_cons)
                                                                                AADD(m_cliente,{m_totnt[t,13],m_totnt[t,17],m_totnt[t,16],m_totnt[t,15],m_totnt[t,18],'2'})
                                                                        ENDIF
                                                                        mcont_50 ++
                                                                        mcont_ger ++
                                                                        SETPOS(8,29);DISPOUT(TRANSFORM(mcont_50,'999,999,999'))
                                                                        DEVPOS(PROW()+1,00);DEVOUT('50')
                                                                        IF ! EMPTY(m_totnt[t,17])
                                                                                DEVPOS(PROW(),02);DEVOUT(m_totnt[t,17])
                                                                        ELSE
                                                                                DEVPOS(PROW(),02);DEVOUT(STRZERO(VAL(m_totnt[t,18]),14))
                                                                        ENDIF
                                                                        IF EMPTY(m_totnt[t,16]) .OR. VAL(m_totnt[t,16]) = 0
										DEVPOS(PROW(),16);DEVOUT('ISENTO')
                                                                        ELSE
                                                                                DEVPOS(PROW(),16);DEVOUT(m_totnt[t,16])
                                                                        ENDIF
                                                                        DEVPOS(PROW(),30);DEVOUT(SUBSTR(DTOC(m_totnt[t,10]),7)+SUBSTR(DTOC(m_totnt[t,10]),4,2)+SUBSTR(DTOC(m_totnt[t,10]),1,2))
                                                                        DEVPOS(PROW(),38);DEVOUT(m_totnt[t,15])
                                                                        DEVPOS(PROW(),40);DEVOUT(m_totnt[t,7])
                                                                        DEVPOS(PROW(),42);DEVOUT(SUBSTR(m_totnt[t,6],1,3))
                                                                        DEVPOS(PROW(),45);DEVOUT(STRZERO(VAL(SUBSTR(m_totnt[t,5],3)),6))
                                                                        DEVPOS(PROW(),51);DEVOUT(SUBSTR(mcod_nat,1,1)+SUBSTR(mcod_nat,3))
*                                                                        DEVPOS(PROW(),51);DEVOUT(SUBSTR(m_totnt[t,36],1,1)+SUBSTR(m_totnt[t,36],3))
                                                                        DEVPOS(PROW(),55);DEVOUT('T')
                                                                        cons_nat := {}
                                                                        cComm  := "SELECT credito FROM sacop WHERE operacao = "+sr_cdbvalue(m_totnt[t,36])
                                                                        sr_getconnection():exec(ccomm,,.t.,@cons_nat)
                                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                                        IF LEN(cons_nat) > 0 .AND. cons_nat[1,1] = 'N'
                                                                                DEVPOS(PROW(),56);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),69);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),82);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),95);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),108);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),121);DEVOUT(STRZERO(0,4))
                                                                                IF m_totnt[t,37] = 'C'
                                                                                        DEVPOS(PROW(),125);DEVOUT('S')
                                                                                ELSE
                                                                                        DEVPOS(PROW(),125);DEVOUT('N')
                                                                                ENDIF
                                                                                DEVPOS(PROW(),126);DEVOUT(SUBSTR(DTOC(memi_doc),7)+SUBSTR(DTOC(memi_doc),4,2)+SUBSTR(DTOC(memi_doc),1,2))
                                                                                DEVPOS(PROW(),134);DEVOUT(SPACE(12))
                                                                                DEVPOS(PROW(),146);DEVOUT(STRZERO(0,3))
                                                                                DEVPOS(PROW(),149);DEVOUT(SPACE(9))
                                                                                DEVPOS(PROW(),158);DEVOUT(STRZERO(0,2))
                                                                                DEVPOS(PROW(),160);DEVOUT(STRZERO(0,8))
                                                                                DEVPOS(PROW(),168);DEVOUT(STRZERO(0,8))
                                                                                DEVPOS(PROW(),176);DEVOUT(STRZERO(0,7))
                                                                                DEVPOS(PROW(),183);DEVOUT(STRZERO(0,7))
                                                                                DEVPOS(PROW(),190);DEVOUT(STRZERO(0,9))
                                                                                DEVPOS(PROW(),199);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),212);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),225);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),238);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),251);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),264);DEVOUT(STRZERO(0,5))
                                                                        ELSE
                                                                                DEVPOS(PROW(),56);DEVOUT(SUBSTR(STRZERO(mvl_nota,14,2),1,11)+SUBSTR(STRZERO(mvl_nota,14,2),13))
                                                                                DEVPOS(PROW(),69);DEVOUT(SUBSTR(STRZERO(mvl_base,14,2),1,11)+SUBSTR(STRZERO(mvl_base,14,2),13))
                                                                                DEVPOS(PROW(),82);DEVOUT(SUBSTR(STRZERO(mvl_icm,14,2),1,11)+SUBSTR(STRZERO(mvl_icm,14,2),13))
                                                                                DEVPOS(PROW(),95);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),108);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),121);DEVOUT(SUBSTR(STRZERO(micm,5,2),1,2)+SUBSTR(STRZERO(micm,5,2),4))
                                                                                IF m_totnt[t,37] = 'C'
                                                                                        DEVPOS(PROW(),125);DEVOUT('S')
                                                                                ELSE
                                                                                        DEVPOS(PROW(),125);DEVOUT('N')
                                                                                ENDIF
                                                                                DEVPOS(PROW(),126);DEVOUT(SUBSTR(DTOC(memi_doc),7)+SUBSTR(DTOC(memi_doc),4,2)+SUBSTR(DTOC(memi_doc),1,2))
                                                                                DEVPOS(PROW(),134);DEVOUT(SPACE(12))
                                                                                DEVPOS(PROW(),146);DEVOUT(STRZERO(0,3))
                                                                                DEVPOS(PROW(),149);DEVOUT(SPACE(9))
                                                                                DEVPOS(PROW(),158);DEVOUT(STRZERO(0,2))
                                                                                DEVPOS(PROW(),160);DEVOUT(STRZERO(0,8))
                                                                                DEVPOS(PROW(),168);DEVOUT(STRZERO(0,8))
                                                                                DEVPOS(PROW(),176);DEVOUT(STRZERO(0,7))
                                                                                DEVPOS(PROW(),183);DEVOUT(STRZERO(0,7))
                                                                                DEVPOS(PROW(),190);DEVOUT(STRZERO(0,9))
                                                                                DEVPOS(PROW(),199);DEVOUT(SUBSTR(STRZERO(mvl_nota,14,2),1,11)+SUBSTR(STRZERO(mvl_nota,14,2),13))
                                                                                DEVPOS(PROW(),212);DEVOUT(SUBSTR(STRZERO(mvl_base,14,2),1,11)+SUBSTR(STRZERO(mvl_base,14,2),13))
                                                                                DEVPOS(PROW(),225);DEVOUT(SUBSTR(STRZERO(mvl_icm,14,2),1,11)+SUBSTR(STRZERO(mvl_icm,14,2),13))
                                                                                DEVPOS(PROW(),238);DEVOUT(STRZERO(0,13))
                                                                                DEVPOS(PROW(),251);DEVOUT(STRZERO(0,13))
*                                                                               DEVPOS(PROW(),251);DEVOUT(SUBSTR(STRZERO(mvl_ipi,14,2),1,11)+SUBSTR(STRZERO(mvl_ipi,14,2),13))
                                                                                DEVPOS(PROW(),264);DEVOUT(STRZERO(0,5))
                                                                        ENDIF
                                                                        IF mv > LEN(m_mov)
                                                                                EXIT
                                                                        ENDIF
                                                                NEXT

                                                        ENDIF
                                                ELSE
                                                        mcgc_cons := IF(! EMPTY(m_totnt[t,17]),m_totnt[t,17],m_totnt[t,18])
                                                        mpt := 0
                                                        mpt := ASCAN(m_cod,mcgc_cons)
                                                        IF mpt = 0
                                                                AADD(m_cod,mcgc_cons)
                                                                AADD(m_cliente,{m_totnt[t,13],m_totnt[t,17],m_totnt[t,16],m_totnt[t,15],m_totnt[t,18],'2'})
                                                        ENDIF
                                                        mcont_50 ++
                                                        mcont_ger ++
                                                        SETPOS(8,29);DISPOUT(TRANSFORM(mcont_50,'999,999,999'))
                                                        DEVPOS(PROW()+1,00);DEVOUT('50')
                                                        DEVPOS(PROW(),02);DEVOUT(STRZERO(0,14))
                                                        DEVPOS(PROW(),16);DEVOUT('ISENTO')
                                                        DEVPOS(PROW(),30);DEVOUT(SUBSTR(DTOC(m_totnt[t,10]),7)+SUBSTR(DTOC(m_totnt[t,10]),4,2)+SUBSTR(DTOC(m_totnt[t,10]),1,2))
                                                        DEVPOS(PROW(),38);DEVOUT(m_totnt[t,15])
                                                        DEVPOS(PROW(),40);DEVOUT(m_totnt[t,7])
                                                        DEVPOS(PROW(),42);DEVOUT(SUBSTR(m_totnt[t,6],1,3))
                                                        DEVPOS(PROW(),45);DEVOUT(STRZERO(VAL(SUBSTR(m_totnt[t,5],3)),6))
                                                        DEVPOS(PROW(),51);DEVOUT(SUBSTR(m_totnt[t,36],1,1)+SUBSTR(m_totnt[t,36],3))
                                                        DEVPOS(PROW(),55);DEVOUT('P')
                                                        cons_nat := {}
                                                        cComm  := "SELECT credito FROM sacop WHERE operacao = "+sr_cdbvalue(m_totnt[t,36])
                                                        sr_getconnection():exec(ccomm,,.t.,@cons_nat)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        IF LEN(cons_nat) > 0 .AND. cons_nat[1,1] = 'N'
                                                                DEVPOS(PROW(),56);DEVOUT(SUBSTR(STRZERO(0,14,2),1,11)+SUBSTR(STRZERO(0,14,2),13))
                                                                DEVPOS(PROW(),69);DEVOUT(SUBSTR(STRZERO(0,14,2),1,11)+SUBSTR(STRZERO(0,14,2),13))
                                                                DEVPOS(PROW(),82);DEVOUT(SUBSTR(STRZERO(0,14,2),1,11)+SUBSTR(STRZERO(0,14,2),13))
                                                                DEVPOS(PROW(),95);DEVOUT(STRZERO(0,13))
                                                                DEVPOS(PROW(),108);DEVOUT(STRZERO(0,13))
                                                                DEVPOS(PROW(),121);DEVOUT(STRZERO(0,4))
                                                                IF m_totnt[t,37] = 'C'
                                                                        DEVPOS(PROW(),125);DEVOUT('S')
                                                                ELSE
                                                                        DEVPOS(PROW(),125);DEVOUT('N')
                                                                ENDIF
                                                                DEVPOS(PROW(),126);DEVOUT(SUBSTR(DTOC(m_totnt[t,10]),7)+SUBSTR(DTOC(m_totnt[t,10]),4,2)+SUBSTR(DTOC(m_totnt[t,10]),1,2))
                                                                DEVPOS(PROW(),134);DEVOUT(SPACE(12))
                                                                DEVPOS(PROW(),146);DEVOUT(STRZERO(0,3))
                                                                DEVPOS(PROW(),149);DEVOUT(SPACE(9))
                                                                DEVPOS(PROW(),158);DEVOUT(STRZERO(0,2))
                                                                DEVPOS(PROW(),160);DEVOUT(STRZERO(0,8))
                                                                DEVPOS(PROW(),168);DEVOUT(STRZERO(0,8))
                                                                DEVPOS(PROW(),176);DEVOUT(STRZERO(0,7))
                                                                DEVPOS(PROW(),183);DEVOUT(STRZERO(0,7))
                                                                DEVPOS(PROW(),190);DEVOUT(STRZERO(0,9))
                                                                DEVPOS(PROW(),199);DEVOUT(SUBSTR(STRZERO(0,14,2),1,11)+SUBSTR(STRZERO(0,14,2),13))
                                                                DEVPOS(PROW(),212);DEVOUT(SUBSTR(STRZERO(0,14,2),1,11)+SUBSTR(STRZERO(0,14,2),13))
                                                                DEVPOS(PROW(),225);DEVOUT(SUBSTR(STRZERO(0,14,2),1,11)+SUBSTR(STRZERO(0,14,2),13))
                                                                DEVPOS(PROW(),238);DEVOUT(STRZERO(0,13))
                                                                DEVPOS(PROW(),251);DEVOUT(STRZERO(0,13))
                                                                DEVPOS(PROW(),264);DEVOUT(STRZERO(0,5))
                                                        ELSE
                                                                DEVPOS(PROW(),56);DEVOUT(SUBSTR(STRZERO(m_totnt[t,27],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,27],14,2),13))
                                                                DEVPOS(PROW(),69);DEVOUT(SUBSTR(STRZERO(m_totnt[t,20],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,20],14,2),13))
                                                                DEVPOS(PROW(),82);DEVOUT(SUBSTR(STRZERO(m_totnt[t,21],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,21],14,2),13))
                                                                DEVPOS(PROW(),95);DEVOUT(STRZERO(0,13))
                                                                DEVPOS(PROW(),108);DEVOUT(STRZERO(0,13))
                                                                DEVPOS(PROW(),121);DEVOUT(SUBSTR(STRZERO(m_totnt[t,26],5,2),1,2)+SUBSTR(STRZERO(m_totnt[t,26],5,2),4))
*                                                               DEVPOS(PROW(),121);DEVOUT(STRZERO(0,4))
                                                                IF m_totnt[t,37] = 'C'
                                                                        DEVPOS(PROW(),125);DEVOUT('S')
                                                                ELSE
                                                                        DEVPOS(PROW(),125);DEVOUT('N')
                                                                ENDIF
                                                                DEVPOS(PROW(),126);DEVOUT(SUBSTR(DTOC(m_totnt[t,10]),7)+SUBSTR(DTOC(m_totnt[t,10]),4,2)+SUBSTR(DTOC(m_totnt[t,10]),1,2))
                                                                DEVPOS(PROW(),134);DEVOUT(SPACE(12))
                                                                DEVPOS(PROW(),146);DEVOUT(STRZERO(0,3))
                                                                DEVPOS(PROW(),149);DEVOUT(SPACE(9))
                                                                DEVPOS(PROW(),158);DEVOUT(STRZERO(0,2))
                                                                DEVPOS(PROW(),160);DEVOUT(STRZERO(0,8))
                                                                DEVPOS(PROW(),168);DEVOUT(STRZERO(0,8))
                                                                DEVPOS(PROW(),176);DEVOUT(STRZERO(0,7))
                                                                DEVPOS(PROW(),183);DEVOUT(STRZERO(0,7))
                                                                DEVPOS(PROW(),190);DEVOUT(STRZERO(0,9))
                                                                DEVPOS(PROW(),199);DEVOUT(SUBSTR(STRZERO(m_totnt[t,27],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,27],14,2),13))
                                                                DEVPOS(PROW(),212);DEVOUT(SUBSTR(STRZERO(m_totnt[t,20],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,20],14,2),13))
                                                                DEVPOS(PROW(),225);DEVOUT(SUBSTR(STRZERO(m_totnt[t,21],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,21],14,2),13))
                                                                DEVPOS(PROW(),238);DEVOUT(STRZERO(0,13))
                                                                DEVPOS(PROW(),251);DEVOUT(STRZERO(0,13))
                                                                DEVPOS(PROW(),264);DEVOUT(STRZERO(0,5))
                                                        ENDIF
                                                ENDIF
                                        NEXT
                                ENDIF
                        ENDIF
                        m_totnt := {}
                        cComm  := "SELECT * FROM sactotnt WHERE "
                        ccomm := ccomm + "emissao >= "+sr_cdbvalue(mdata1)
                        ccomm := ccomm +" AND emissao <= "+sr_cdbvalue(mdata2)
                        IF mop_nota = 'S'
                                ccomm := ccomm + " AND ent_sai ='S'"
                        ELSEIF mop_nota = 'E'
                                ccomm := ccomm + " AND ent_sai ='E'"
                        ENDIF
                        ccomm := ccomm + " AND ipi > "+sr_cdbvalue(0)
                        ccomm := ccomm + " AND tip_sef IS NULL AND documento LIKE 'NF%'"
                        ccomm := ccomm + " ORDER BY emissao,documento,cod_nota,cod_nat"
                        sr_getconnection():exec(ccomm,,.t.,@m_totnt)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(m_totnt) > 0
                                t := 0
                                FOR t = 1 TO LEN(m_totnt)
                                        mcont_51 ++
                                        mcont_ger ++
                                        SETPOS(9,29);DISPOUT(TRANSFORM(mcont_51,'999,999,999'))
                                        DEVPOS(PROW()+1,00);DEVOUT('51')
                                        IF m_totnt[t,15] <> 'EX'
                                                IF ! EMPTY(m_totnt[t,17])
                                                        DEVPOS(PROW(),02);DEVOUT(m_totnt[t,17])
                                                ELSE
                                                        DEVPOS(PROW(),02);DEVOUT(STRZERO(VAL(m_totnt[t,18]),14))
                                                ENDIF
                                                IF EMPTY(m_totnt[t,16]) .OR. VAL(m_totnt[t,16]) = 0
                                                        DEVPOS(PROW(),16);DEVOUT('ISENTO')
                                                ELSE
                                                        DEVPOS(PROW(),16);DEVOUT(m_totnt[t,16])
                                                ENDIF
                                        ELSE
                                                DEVPOS(PROW(),02);DEVOUT(STRZERO(0,14))
                                                DEVPOS(PROW(),16);DEVOUT('ISENTO')
                                        ENDIF
                                        DEVPOS(PROW(),30);DEVOUT(SUBSTR(DTOC(m_totnt[t,10]),7)+SUBSTR(DTOC(m_totnt[t,10]),4,2)+SUBSTR(DTOC(m_totnt[t,10]),1,2))
                                        DEVPOS(PROW(),38);DEVOUT(m_totnt[t,15])
                                        DEVPOS(PROW(),40);DEVOUT(SUBSTR(m_totnt[t,6],1,3))
                                        DEVPOS(PROW(),43);DEVOUT(STRZERO(VAL(SUBSTR(m_totnt[t,5],3)),6))
                                        DEVPOS(PROW(),49);DEVOUT(SUBSTR(m_totnt[t,36],1,1)+SUBSTR(m_totnt[t,36],3))
                                        cons_nat := {}
                                        cComm  := "SELECT credito FROM sacop WHERE operacao = "+sr_cdbvalue(m_totnt[t,36])
                                        sr_getconnection():exec(ccomm,,.t.,@cons_nat)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_nat) > 0 .AND. cons_nat[1,1] = 'N'
                                                DEVPOS(PROW(),53);DEVOUT(STRZERO(0,13))
                                                DEVPOS(PROW(),66);DEVOUT(STRZERO(0,13))
                                                DEVPOS(PROW(),79);DEVOUT(STRZERO(0,13))
                                                DEVPOS(PROW(),92);DEVOUT(STRZERO(0,13))
                                                DEVPOS(PROW(),105);DEVOUT(SPACE(20))
                                                IF m_totnt[t,37] = 'C'
                                                        DEVPOS(PROW(),125);DEVOUT('S')
                                                ELSE
                                                        DEVPOS(PROW(),125);DEVOUT('N')
                                                ENDIF
                                                DEVPOS(PROW(),126);DEVOUT(STRZERO(0,13))
                                        ELSE
                                                DEVPOS(PROW(),53);DEVOUT(SUBSTR(STRZERO(m_totnt[t,27],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,27],14,2),13))
                                                DEVPOS(PROW(),66);DEVOUT(SUBSTR(STRZERO(m_totnt[t,35],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,35],14,2),13))
                                                IF (m_totnt[t,27] - m_totnt[t,20]) > 0
                                                        DEVPOS(PROW(),79);DEVOUT(SUBSTR(STRZERO(m_totnt[t,27]-m_totnt[t,20],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,27]-m_totnt[t,20],14,2),13))
                                                ELSE
                                                        DEVPOS(PROW(),79);DEVOUT(STRZERO(0,13))
                                                ENDIF
                                                DEVPOS(PROW(),92);DEVOUT(STRZERO(0,13))
                                                DEVPOS(PROW(),105);DEVOUT(SPACE(20))
                                                IF m_totnt[t,37] = 'C'
                                                        DEVPOS(PROW(),125);DEVOUT('S')
                                                ELSE
                                                        DEVPOS(PROW(),125);DEVOUT('N')
                                                ENDIF
                                                IF (EMPTY(m_totnt[t,20])) .OR. m_totnt[t,15] = 'EX'
                                                        DEVPOS(PROW(),126);DEVOUT(STRZERO(0,13))
                                                ELSE
                                                        DEVPOS(PROW(),126);DEVOUT(SUBSTR(STRZERO(m_totnt[t,27]-m_totnt[t,35],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,27]-m_totnt[t,35],14,2),13))
                                                ENDIF
                                        ENDIF
                                NEXT
                        ENDIF
                        m_totnt := {}
                        cComm  := "SELECT * FROM sactotnt WHERE "
                        ccomm := ccomm + "emissao >= "+sr_cdbvalue(mdata1)
                        ccomm := ccomm + " AND emissao <= "+sr_cdbvalue(mdata2)
                        IF mop_nota = 'S'
                                ccomm := ccomm + " AND ent_sai ='S'"
                        ELSEIF mop_nota = 'E'
                                ccomm := ccomm + " AND ent_sai ='E'"
                        ENDIF
                        ccomm := ccomm + " AND vlr_icmsub > "+sr_cdbvalue(0)
                        ccomm := ccomm + " AND tip_sef IS NULL AND documento LIKE 'NF%'"
                        ccomm := ccomm + " ORDER BY emissao,documento,cod_nota,cod_nat"
                        sr_getconnection():exec(ccomm,,.t.,@m_totnt)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(m_totnt) > 0
                                t := 0
                                FOR t = 1 TO LEN(m_totnt)
                                        mcont_53 ++
                                        mcont_ger ++
                                        SETPOS(10,29);DISPOUT(TRANSFORM(mcont_53,'999,999,999'))
                                        DEVPOS(PROW()+1,00);DEVOUT('53')
                                        IF ! EMPTY(m_totnt[t,17])
                                                DEVPOS(PROW(),02);DEVOUT(m_totnt[t,17])
                                        ELSE
                                                DEVPOS(PROW(),02);DEVOUT(STRZERO(VAL(m_totnt[t,18]),14))
                                        ENDIF
                                        IF EMPTY(m_totnt[t,16]) .OR. VAL(m_totnt[t,16]) = 0
                                                DEVPOS(PROW(),16);DEVOUT('ISENTO')
                                        ELSE
                                                DEVPOS(PROW(),16);DEVOUT(m_totnt[t,16])
                                        ENDIF
                                        DEVPOS(PROW(),30);DEVOUT(SUBSTR(DTOC(m_totnt[t,10]),7)+SUBSTR(DTOC(m_totnt[t,10]),4,2)+SUBSTR(DTOC(m_totnt[t,10]),1,2))
                                        DEVPOS(PROW(),38);DEVOUT(m_totnt[t,15])
                                        DEVPOS(PROW(),40);DEVOUT(m_totnt[t,7])
                                        DEVPOS(PROW(),42);DEVOUT(SUBSTR(m_totnt[t,6],1,3))
                                        DEVPOS(PROW(),45);DEVOUT(STRZERO(VAL(SUBSTR(m_totnt[t,5],3)),6))
                                        DEVPOS(PROW(),51);DEVOUT(SUBSTR(m_totnt[t,36],1,1)+SUBSTR(m_totnt[t,36],3))
                                        IF m_totnt[t,11] = 'S'
                                                DEVPOS(PROW(),55);DEVOUT('P')
                                        ELSE
                                                DEVPOS(PROW(),55);DEVOUT('T')
                                        ENDIF
                                        cons_nat := {}
                                        cComm  := "SELECT credito FROM sacop WHERE operacao = "+sr_cdbvalue(m_totnt[t,36])
                                        sr_getconnection():exec(ccomm,,.t.,@cons_nat)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_nat) > 0 .AND. cons_nat[1,1] = 'N'
                                                DEVPOS(PROW(),56);DEVOUT(STRZERO(0,13))
                                                DEVPOS(PROW(),69);DEVOUT(STRZERO(0,13))
                                                DEVPOS(PROW(),82);DEVOUT(STRZERO(0,13))
                                        ELSE
                                                DEVPOS(PROW(),56);DEVOUT(SUBSTR(STRZERO(m_totnt[t,24],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,24],14,2),13))
                                                DEVPOS(PROW(),69);DEVOUT(SUBSTR(STRZERO(m_totnt[t,23],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,23],14,2),13))
                                                DEVPOS(PROW(),82);DEVOUT(STRZERO(0,13))
                                        ENDIF
                                        IF m_totnt[t,37] = 'C'
                                                DEVPOS(PROW(),95);DEVOUT('S')
                                        ELSE
                                                DEVPOS(PROW(),95);DEVOUT('N')
                                        ENDIF
                                        DEVPOS(PROW(),96);DEVOUT(SPACE(30))
                                NEXT
                        ENDIF
                ENDIF
                IF mop_nota = 'S' .OR. mop_nota = 'G'
                        m_movnt:={}
                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND documento LIKE 'NF%'"+ " ORDER BY data_s_e,conjunta,ent_sai,cod_nat,icm,cod_nota,isento",,.t.,@m_movnt)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mitem := 0
                        IF LEN(m_movnt) > 0
                                mdoc := m_movnt[1,4]
                                ment_sai := m_movnt[1,18]
                                nt := 0
                                FOR nt = 1 TO LEN(m_movnt)
                                        IF ! doc_codcli1(m_movnt[nt,3],m_movnt[nt,31]) //verifica o fornecedor no arquivo sactotnt.dbf
                                                AADD(prod_del,{m_movnt[nt,3],m_movnt[nt,18]})
                                                mdoc := m_movnt[nt,4]
                                                ment_sai := m_movnt[nt,18]
                                                LOOP
                                        ENDIF
                                        IF mdoc = m_movnt[nt,4]
                                                mitem ++
                                        ELSE
*                                               mdoc := m_movnt[nt,3]
                                                mdoc := m_movnt[nt,4]
                                                ment_sai := m_movnt[nt,18]
                                                mitem := 1
                                        ENDIF

                                        m_merc:={}
                                        cComm  := "SELECT cod_barr,prodepe FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_movnt[nt,11])
                                        sr_getconnection():exec(ccomm,,.t.,@m_merc)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(m_merc) = 0
                                                atencao('Este produto foi excluido: '+m_movnt[nt,11])
                                                LOOP
                                        ENDIF

                                        IF minventa = 'N'

                                        mcont_54 ++
                                        mcont_ger ++

                                        SETPOS(11,29);DISPOUT(TRANSFORM(mcont_54,'999,999,999'))
                                        DEVPOS(PROW()+1,00);DEVOUT('54')
                                        IF ! EMPTY(m_totnt[1,17])
                                                DEVPOS(PROW(),02);DEVOUT(m_totnt[1,17])
                                        ELSE
                                                DEVPOS(PROW(),02);DEVOUT(STRZERO(VAL(m_totnt[1,18]),14))
                                        ENDIF
                                        DEVPOS(PROW(),16);DEVOUT(m_totnt[1,7])
                                        DEVPOS(PROW(),18);DEVOUT(SUBSTR(m_movnt[nt,5],1,3))
                                        DEVPOS(PROW(),21);DEVOUT(STRZERO(VAL(SUBSTR(m_movnt[nt,3],3)),6))
                                        DEVPOS(PROW(),27);DEVOUT(SUBSTR(m_movnt[nt,65],1,1)+SUBSTR(m_movnt[nt,65],3))
                                        DEVPOS(PROW(),31);DEVOUT(STRZERO(VAL(m_movnt[nt,61]),3))
                                        DEVPOS(PROW(),34);DEVOUT(STRZERO(mitem,3))
                                        IF m_set[1,173] = 'C'
                                                DEVPOS(PROW(),37);DEVOUT(STRZERO(VAL(m_movnt[nt,11]),14))
                                        ELSE
                                                //ver_cod(VAL(m_movnt[nt,11]),,,,0,'*')
                                                DEVPOS(PROW(),37);DEVOUT(STRZERO(VAL(m_merc[1,1]),14))
                                        ENDIF
                                        cons_nat := {}
                                        cComm  := "SELECT credito FROM sacop WHERE operacao = "+sr_cdbvalue(m_totnt[1,36])
                                        sr_getconnection():exec(ccomm,,.t.,@cons_nat)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_nat) > 0 .AND. cons_nat[1,1] = 'N'
                                                DEVPOS(PROW(),51);DEVOUT(SUBSTR(STRZERO(m_movnt[nt,19],12,3),1,8)+SUBSTR(STRZERO(m_movnt[nt,19],12,3),10))
                                                DEVPOS(PROW(),62);DEVOUT(STRZERO(0,12))
                                                DEVPOS(PROW(),74);DEVOUT(STRZERO(0,12))
                                                DEVPOS(PROW(),86);DEVOUT(STRZERO(0,12))
                                                DEVPOS(PROW(),98);DEVOUT(STRZERO(0,12))
                                                DEVPOS(PROW(),110);DEVOUT(STRZERO(0,12))
                                                DEVPOS(PROW(),122);DEVOUT(STRZERO(0,4))
                                        ELSE
                                                DEVPOS(PROW(),51);DEVOUT(SUBSTR(STRZERO(m_movnt[nt,19],12,3),1,8)+SUBSTR(STRZERO(m_movnt[nt,19],12,3),10))
                                                IF m_movnt[nt,65] = '6.109'
                                                        DEVPOS(PROW(),62);DEVOUT(SUBSTR(STRZERO((m_movnt[nt,19]*m_movnt[nt,22])-m_movnt[nt,50],13,2),1,10)+SUBSTR(STRZERO((m_movnt[nt,19]*m_movnt[nt,22])-m_movnt[nt,50],13,2),12))
                                                ELSE
                                                        DEVPOS(PROW(),62);DEVOUT(SUBSTR(STRZERO(m_movnt[nt,19]*m_movnt[nt,22],13,2),1,10)+SUBSTR(STRZERO(m_movnt[nt,19]*m_movnt[nt,22],13,2),12))
                                                ENDIF
                                                DEVPOS(PROW(),74);DEVOUT(SUBSTR(STRZERO(0,13,2),1,10)+SUBSTR(STRZERO(0,13,2),12))
                                                IF m_movnt[nt,38] > 0
                                                        IF EMPTY(m_movnt[nt,35])
                                                                DEVPOS(PROW(),86);DEVOUT(SUBSTR(STRZERO(m_movnt[nt,19]*m_movnt[nt,22]+m_movnt[nt,54],13,2),1,10)+SUBSTR(STRZERO(m_movnt[nt,19]*m_movnt[nt,22]+m_movnt[nt,54],13,2),12))
                                                        ELSE
                                                                DEVPOS(PROW(),86);DEVOUT(SUBSTR(STRZERO(m_movnt[nt,19]*m_movnt[nt,22],13,2),1,10)+SUBSTR(STRZERO(m_movnt[nt,19]*m_movnt[nt,22],13,2),12))
                                                        ENDIF
                                                ELSE
                                                        DEVPOS(PROW(),86);DEVOUT(SUBSTR(STRZERO(0,13,2),1,10)+SUBSTR(STRZERO(0,13,2),12))
                                                ENDIF
                                                DEVPOS(PROW(),98);DEVOUT(SUBSTR(STRZERO(m_movnt[nt,42],13,2),1,10)+SUBSTR(STRZERO(m_movnt[nt,42],13,2),12))
                                                DEVPOS(PROW(),110);DEVOUT(SUBSTR(STRZERO(m_movnt[nt,54],13,2),1,10)+SUBSTR(STRZERO(m_movnt[nt,54],13,2),12))
                                                DEVPOS(PROW(),122);DEVOUT(SUBSTR(STRZERO(m_movnt[nt,38],5,2),1,2)+SUBSTR(STRZERO(m_movnt[nt,38],5,2),4))
                                        ENDIF
                                        IF  EMPTY(m_totnt[1,16]) .OR. VAL(m_totnt[1,16]) = 0
                                                DEVPOS(PROW(),126);DEVOUT('ISENTO')
                                        ELSE
                                                DEVPOS(PROW(),126);DEVOUT(m_totnt[1,16])
                                        ENDIF
                                        DEVPOS(PROW(),140);DEVOUT(SUBSTR(DTOC(m_movnt[nt,17]),7)+SUBSTR(DTOC(m_movnt[nt,17]),4,2)+SUBSTR(DTOC(m_movnt[nt,17]),1,2))
                                        DEVPOS(PROW(),148);DEVOUT(m_totnt[1,15])
                                        IF m_set[1,148] = 'S'
                                                //ver_cod(VAL(movcn->codigo),,,,,'*')
                                                DEVPOS(PROW(),150);DEVOUT(m_merc[1,2])
                                        ELSE
                                                DEVPOS(PROW(),150);DEVOUT('00')
                                        ENDIF
                                        DEVPOS(PROW(),152);DEVOUT('00')


                                        ENDIF
                                        mpt := 0
                                        mpt := ASCAN(m_codmerc,m_movnt[nt,11])
                                        IF mpt = 0
                                                AADD(m_codmerc,m_movnt[nt,11])
                                                AADD(m_mercad,{m_movnt[nt,11],m_movnt[nt,65],STRZERO(VAL(m_movnt[nt,61]),3),m_movnt[nt,54],m_movnt[nt,38]})
                                        ENDIF

                                        //sef_cod1(m_movnt[nt,11],'movnt')
                                NEXT
                        ENDIF
                ENDIF
                IF mop_nota = 'E' .OR. mop_nota = 'G'
                        m_mov:={}
                        cComm  := "SELECT * FROM sacmov WHERE data_s_e >= "+sr_cdbvalue(mdata1)
                        ccomm  := ccomm +" AND data_s_e <= "+sr_cdbvalue(mdata2)
                        ccomm  := ccomm +" AND ent_sai = 'E' AND documento LIKE 'NF%'"
                        ccomm := ccomm + " ORDER BY data_s_e,documento,ent_sai,cod_nat,icm,cod_nota,isento"
                        sr_getconnection():exec(ccomm,,.t.,@m_mov)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mitem := 0
                        IF LEN(m_mov) > 0
                                mdoc := m_mov[1,2]
                                ment_sai := m_mov[1,17]
                                mv := 0
                                FOR mv = 1 TO LEN(m_mov)
                                        //mdoc := m_mov[mv,2]
                                        IF ! doc_codcli1(m_mov[mv,2],m_mov[mv,40]+' ') //verifica o fornecedor no arquivo sactotnt.dbf
                                                mdoc := m_mov[mv,2]
                                                ment_sai := m_mov[mv,16]
                                                mitem := 0
                                                LOOP
                                        ENDIF
                                        IF minventa = 'N'

                                        IF mdoc <> m_mov[mv,2]
/*
                                                IF ! EMPTY(m_totnt[1,34])
                                                        mitem ++
                                                        mcont_54 ++
                                                        mcont_ger ++
                                                        SETPOS(11,29);DISPOUT(TRANSFORM(mcont_54,'999,999,999'))
                                                        DEVPOS(PROW()+1,00);DEVOUT('54')
                                                        IF m_totnt[1,15] = 'EX'
                                                                DEVPOS(PROW(),02);DEVOUT(STRZERO(0,14))
                                                        ELSEIF ! EMPTY(m_totnt[1,17]) .OR. m_totnt[1,15] = 'EX'
                                                                DEVPOS(PROW(),02);DEVOUT(m_totnt[1,17])
                                                        ELSE
                                                                DEVPOS(PROW(),02);DEVOUT(STRZERO(VAL(m_totnt[1,18]),14))
                                                        ENDIF
                                                        DEVPOS(PROW(),16);DEVOUT(m_totnt[1,7])
                                                        DEVPOS(PROW(),18);DEVOUT(SUBSTR(m_totnt[1,6],1,3))
                                                        DEVPOS(PROW(),21);DEVOUT(STRZERO(VAL(SUBSTR(m_totnt[1,5],3)),6))
                                                        DEVPOS(PROW(),27);DEVOUT('0000')
                                                        DEVPOS(PROW(),31);DEVOUT('000')
                                                        DEVPOS(PROW(),34);DEVOUT('999')
                                                        DEVPOS(PROW(),37);DEVOUT(SPACE(14))
                                                        DEVPOS(PROW(),51);DEVOUT(SUBSTR(STRZERO(1,12,3),1,8)+SUBSTR(STRZERO(1,12,3),10))
                                                        DEVPOS(PROW(),62);DEVOUT(SUBSTR(STRZERO(0,13,2),1,10)+SUBSTR(STRZERO(0,13,2),12))
                                                        DEVPOS(PROW(),74);DEVOUT(SUBSTR(STRZERO(m_totnt[1,34],13,2),1,10)+SUBSTR(STRZERO(m_totnt[1,34],13,2),12))
                                                        DEVPOS(PROW(),86);DEVOUT(SUBSTR(STRZERO(0,13,2),1,10)+SUBSTR(STRZERO(0,13,2),12))
                                                        DEVPOS(PROW(),98);DEVOUT(SUBSTR(STRZERO(0,13,2),1,10)+SUBSTR(STRZERO(0,13,2),12))
                                                        DEVPOS(PROW(),110);DEVOUT(SUBSTR(STRZERO(0,13,2),1,10)+SUBSTR(STRZERO(0,13,2),12))
                                                        DEVPOS(PROW(),122);DEVOUT(SUBSTR(STRZERO(0,5,2),1,2)+SUBSTR(STRZERO(0,5,2),4))
                                                        IF  EMPTY(m_totnt[1,16]) .OR. VAL(m_totnt[1,16]) = 0
                                                                DEVPOS(PROW(),126);DEVOUT('ISENTO')
                                                        ELSE
                                                                DEVPOS(PROW(),126);DEVOUT(m_totnt[1,16])
                                                        ENDIF
                                                        DEVPOS(PROW(),140);DEVOUT(SUBSTR(DTOC(m_totnt[1,10]),7)+SUBSTR(DTOC(m_totnt[1,10]),4,2)+SUBSTR(DTOC(m_totnt[1,10]),1,2))
                                                        DEVPOS(PROW(),148);DEVOUT(m_totnt[1,15])
                                                        DEVPOS(PROW(),150);DEVOUT('00')
                                                        DEVPOS(PROW(),152);DEVOUT('00')
                                                ENDIF
*/
                                                mdoc := m_mov[mv,2]
                                                ment_sai := m_mov[mv,17]
                                                mitem := 0
                                        ENDIF
					*/
                                        mitem ++
                                        mcont_54 ++
                                        mcont_ger ++
                                        SETPOS(11,29);DISPOUT(TRANSFORM(mcont_54,'999,999,999'))
                                        DEVPOS(PROW()+1,00);DEVOUT('54')
                                        IF m_totnt[1,15] = 'EX'
                                                DEVPOS(PROW(),02);DEVOUT(STRZERO(0,14))
                                        ELSEIF ! EMPTY(m_totnt[1,17])
                                                DEVPOS(PROW(),02);DEVOUT(m_totnt[1,17])
                                        ELSE
                                                DEVPOS(PROW(),02);DEVOUT(STRZERO(VAL(m_totnt[1,18]),14))
                                        ENDIF
                                        DEVPOS(PROW(),16);DEVOUT(m_totnt[1,7])
                                        DEVPOS(PROW(),18);DEVOUT(SUBSTR(m_mov[mv,4],1,3))
                                        DEVPOS(PROW(),21);DEVOUT(STRZERO(VAL(SUBSTR(m_mov[mv,2],3)),6))
                                        DEVPOS(PROW(),27);DEVOUT(SUBSTR(m_mov[mv,73],1,1)+SUBSTR(m_mov[mv,73],3))
                                        //ver_cod(VAL(mov->codigo),,,,,'*')
                                        DEVPOS(PROW(),31);DEVOUT(STRZERO(VAL(m_mov[mv,69]),3))
                                        DEVPOS(PROW(),34);DEVOUT(STRZERO(mitem,3))
                                        IF m_set[1,173] = 'C'
                                                DEVPOS(PROW(),37);DEVOUT(STRZERO(VAL(m_mov[mv,10]),14))
                                        ELSE
                                                m_merc:={}
                                                cComm  := "SELECT cod_barr,prodepe FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_mov[mv,10])
                                                sr_getconnection():exec(ccomm,,.t.,@m_merc)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                //ver_cod(VAL(mov->codigo),,,,0,'*')
                                                DEVPOS(PROW(),37);DEVOUT(STRZERO(VAL(m_merc[1,1]),14))
                                        ENDIF
                                        cons_nat := {}
                                        cComm  := "SELECT credito FROM sacop WHERE operacao = "+sr_cdbvalue(m_totnt[1,36])
                                        sr_getconnection():exec(ccomm,,.t.,@cons_nat)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_nat) > 0 .AND. cons_nat[1,1] = 'N'
                                                DEVPOS(PROW(),51);DEVOUT(SUBSTR(STRZERO(m_mov[mv,19],12,3),1,8)+SUBSTR(STRZERO(m_mov[mv,19],12,3),10))
                                                DEVPOS(PROW(),62);DEVOUT(STRZERO(0,12))
                                                DEVPOS(PROW(),74);DEVOUT(STRZERO(0,12))
                                                DEVPOS(PROW(),86);DEVOUT(STRZERO(0,12))
                                                DEVPOS(PROW(),98);DEVOUT(STRZERO(0,12))
                                                DEVPOS(PROW(),110);DEVOUT(STRZERO(0,12))
                                                DEVPOS(PROW(),122);DEVOUT(STRZERO(0,4))
                                        ELSE
                                                DEVPOS(PROW(),51);DEVOUT(SUBSTR(STRZERO(m_mov[mv,19],12,3),1,8)+SUBSTR(STRZERO(m_mov[mv,19],12,3),10))
                                                DEVPOS(PROW(),62);DEVOUT(SUBSTR(STRZERO(m_mov[mv,19]*m_mov[mv,25],13,2),1,10)+SUBSTR(STRZERO(m_mov[mv,19]*m_mov[mv,25],13,2),12))
                                                DEVPOS(PROW(),74);DEVOUT(SUBSTR(STRZERO(0,13,2),1,10)+SUBSTR(STRZERO(0,13,2),12))
                                                IF m_mov[mv,42] > 0 .OR. m_totnt[1,15] = 'EX'
                                                        DEVPOS(PROW(),86);DEVOUT(SUBSTR(STRZERO(m_mov[mv,19]*m_mov[mv,25],13,2),1,10)+SUBSTR(STRZERO(m_mov[mv,19]*m_mov[mv,25],13,2),12))
                                                ELSE
                                                        DEVPOS(PROW(),86);DEVOUT(SUBSTR(STRZERO(0,13,2),1,10)+SUBSTR(STRZERO(0,13,2),12))
                                                ENDIF
                                                DEVPOS(PROW(),98);DEVOUT(SUBSTR(STRZERO(0,13,2),1,10)+SUBSTR(STRZERO(0,13,2),12))
                                                DEVPOS(PROW(),110);DEVOUT(SUBSTR(STRZERO(m_mov[mv,62],13,2),1,10)+SUBSTR(STRZERO(m_mov[mv,62],13,2),12))
                                                DEVPOS(PROW(),122);DEVOUT(SUBSTR(STRZERO(m_mov[mv,42],5,2),1,2)+SUBSTR(STRZERO(m_mov[mv,42],5,2),4))
                                        ENDIF
                                        IF m_totnt[1,15] = 'EX'
                                                DEVPOS(PROW(),126);DEVOUT('ISENTO')
                                        ELSEIF  EMPTY(m_totnt[1,16]) .OR. VAL(m_totnt[1,16]) = 0
                                                DEVPOS(PROW(),126);DEVOUT('ISENTO')
                                        ELSE
                                                DEVPOS(PROW(),126);DEVOUT(m_totnt[1,16])
                                        ENDIF
                                        DEVPOS(PROW(),140);DEVOUT(SUBSTR(DTOC(m_mov[mv,16]),7)+SUBSTR(DTOC(m_mov[mv,16]),4,2)+SUBSTR(DTOC(m_mov[mv,16]),1,2))
                                        DEVPOS(PROW(),148);DEVOUT(m_totnt[1,15])
                                        IF m_set[1,148] = 'S'
                                                m_merc:={}
                                                cComm  := "SELECT cod_barr,prodepe FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_mov[mv,10])
                                                sr_getconnection():exec(ccomm,,.t.,@m_merc)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                //ver_cod(VAL(movcn->codigo),,,,,'*')
                                                IF LEN(m_merc) > 1
							DEVPOS(PROW(),150);DEVOUT(m_merc[1,2])
						ELSE
	                                                DEVPOS(PROW(),150);DEVOUT('00')
						ENDIF
                                        ELSE
                                                DEVPOS(PROW(),150);DEVOUT('00')
                                        ENDIF
                                        DEVPOS(PROW(),152);DEVOUT('00')
                        ENDIF

                                        mpt := 0
                                        mpt := ASCAN(m_codmerc,m_mov[mv,10])
                                        IF mpt = 0
                                                AADD(m_codmerc,m_mov[mv,10])
                                                AADD(m_mercad,{m_mov[mv,10],m_mov[mv,73],STRZERO(VAL(m_mov[mv,69]),3),m_mov[mv,62],m_mov[mv,42]})
                                        ENDIF

                                        //sef_cod1(m_mov[mv,10],'mov')
                                NEXT
                        ENDIF
                ENDIF
                ******* TIPO 70
                IF mso_prod = 'N'
                        m_totnt := {}
                        cComm  := "SELECT * FROM sactotnt WHERE "
                        ccomm := ccomm + "emissao >= "+sr_cdbvalue(mdata1)
                        ccomm := ccomm + " AND emissao <= "+sr_cdbvalue(mdata2)
                        ccomm := ccomm + " AND ent_sai ='E'"
                        ccomm := ccomm + " AND tip_sef IS NOT NULL AND documento LIKE 'NF%'"
                        ccomm := ccomm + " ORDER BY emissao,documento,cod_nota,cod_nat"
                        sr_getconnection():exec(ccomm,,.t.,@m_totnt)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(m_totnt) > 0
                                t:=0
				FOR t = 1 TO LEN(m_totnt)
                                        mcont_70 ++
                                        mcont_ger ++
                                        SETPOS(12,29);DISPOUT(TRANSFORM(mcont_70,'999,999,999'))
                                        DEVPOS(PROW()+1,00);DEVOUT('70')
                                        DEVPOS(PROW(),02);DEVOUT(m_totnt[t,17])
                                        IF EMPTY(m_totnt[t,16]) .OR. VAL(m_totnt[t,16]) = 0
                                                DEVPOS(PROW(),16);DEVOUT('ISENTO')
                                        ELSE
                                                DEVPOS(PROW(),16);DEVOUT(m_totnt[t,16])
                                        ENDIF
                                        DEVPOS(PROW(),30);DEVOUT(SUBSTR(DTOC(m_totnt[t,10]),7)+SUBSTR(DTOC(m_totnt[t,10]),4,2)+SUBSTR(DTOC(m_totnt[t,10]),1,2))
                                        DEVPOS(PROW(),38);DEVOUT(m_totnt[t,15])
                                        DEVPOS(PROW(),40);DEVOUT(m_totnt[t,7])
                                        DEVPOS(PROW(),42);DEVOUT(SUBSTR(m_totnt[t,6],1,3))
                                        DEVPOS(PROW(),45);DEVOUT(STRZERO(VAL(SUBSTR(m_totnt[t,5],3)),6))
                                        DEVPOS(PROW(),51);DEVOUT(SUBSTR(m_totnt[t,36],1,1)+SUBSTR(m_totnt[t,36],3))
                                        cons_nat := {}
                                        cComm  := "SELECT credito FROM sacop WHERE operacao = "+sr_cdbvalue(m_totnt[t,36])
                                        sr_getconnection():exec(ccomm,,.t.,@cons_nat)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_nat) > 0 .AND. cons_nat[1,1] = 'N'
                                                DEVPOS(PROW(),55);DEVOUT(STRZERO(0,13))
                                                DEVPOS(PROW(),68);DEVOUT(STRZERO(0,14))
                                                DEVPOS(PROW(),82);DEVOUT(STRZERO(0,14))
                                                DEVPOS(PROW(),96);DEVOUT(STRZERO(0,14))
                                                DEVPOS(PROW(),110);DEVOUT(STRZERO(0,14))
                                                DEVPOS(PROW(),124);DEVOUT(m_totnt[t,31])
                                                DEVPOS(PROW(),125);DEVOUT('N')
                                                DEVPOS(PROW(),126);DEVOUT(SUBSTR(DTOC(m_totnt[t,10]),7)+SUBSTR(DTOC(m_totnt[t,10]),4,2)+SUBSTR(DTOC(m_totnt[t,10]),1,2))
                                                DEVPOS(PROW(),134);DEVOUT(m_totnt[t,44])
                                                DEVPOS(PROW(),146);DEVOUT(STRZERO(0,4))
                                                DEVPOS(PROW(),150);DEVOUT(STRZERO(0,5))
                                        ELSE
                                                DEVPOS(PROW(),55);DEVOUT(SUBSTR(STRZERO(m_totnt[t,27],14,2),1,11)+SUBSTR(STRZERO(m_totnt[t,27],14,2),13))
                                                DEVPOS(PROW(),68);DEVOUT(SUBSTR(STRZERO(m_totnt[t,20],15,2),1,12)+SUBSTR(STRZERO(m_totnt[t,20],15,2),14))
                                                DEVPOS(PROW(),82);DEVOUT(SUBSTR(STRZERO(m_totnt[t,21],15,2),1,12)+SUBSTR(STRZERO(m_totnt[t,21],15,2),14))
                                                DEVPOS(PROW(),96);DEVOUT(STRZERO(0,14))
                                                DEVPOS(PROW(),110);DEVOUT(STRZERO(0,14))
                                                DEVPOS(PROW(),124);DEVOUT(m_totnt[t,31])
                                                DEVPOS(PROW(),125);DEVOUT('N')
                                                DEVPOS(PROW(),126);DEVOUT(SUBSTR(DTOC(m_totnt[t,10]),7)+SUBSTR(DTOC(m_totnt[t,10]),4,2)+SUBSTR(DTOC(m_totnt[t,10]),1,2))
                                                DEVPOS(PROW(),134);DEVOUT(m_totnt[t,44])
                                                DEVPOS(PROW(),146);DEVOUT(SUBSTR(STRZERO(m_totnt[t,26],5,2),1,2)+SUBSTR(STRZERO(m_totnt[t,26],5,2),4))
                                                DEVPOS(PROW(),150);DEVOUT(STRZERO(0,5))
                                        ENDIF
                                        mpt := 0
                                        mpt := ASCAN(m_cod,m_totnt[t,17])
                                        IF mpt = 0
                                                AADD(m_cod,m_totnt[t,17])
                                                AADD(m_cliente,{m_totnt[t,13],m_totnt[t,17],m_totnt[t,16],m_totnt[t,15],m_totnt[t,18],'1'})
                                        ENDIF
                                NEXT
                        ENDIF
                ENDIF
        ENDIF
        IF mso_inve = 'N' .AND. minventa = 'S'
                ****** TIPO 74
                m_tipo74:={}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE NOT merc = 'IMPOSTO' AND NOT saldo_mer = 0 AND cod_merc IS NOT NULL",,.t.,@m_tipo74)
                sr_getconnection():exec('COMMIT',,.f.)
                mitem := 0
                y := 0
                FOR y =1 TO LEN(m_tipo74)
                        mcont_74 ++
                        mcont_ger ++
                        SETPOS(13,29);DISPOUT(TRANSFORM(mcont_74,'999,999,999'))
                        DEVPOS(PROW()+1,00);DEVOUT('74')
                        DEVPOS(PROW(),02);DEVOUT(SUBSTR(DTOC(mdata_inve),7)+SUBSTR(DTOC(mdata_inve),4,2)+SUBSTR(DTOC(mdata_inve),1,2))
                        IF m_set[1,173] = 'C'
                                DEVPOS(PROW(),10);DEVOUT(STRZERO(VAL(m_tipo74[y,8]),14))
                        ELSE
                                DEVPOS(PROW(),10);DEVOUT(STRZERO(VAL(m_tipo74[y,2]),14))
                        ENDIF
                        DEVPOS(PROW(),24);DEVOUT(SUBSTR(STRZERO(m_tipo74[y,56],14,3),1,10)+SUBSTR(STRZERO(m_tipo74[y,56],14,3),12))
                        DEVPOS(PROW(),37);DEVOUT(SUBSTR(STRZERO(m_tipo74[y,44]*m_tipo74[y,56],14,2),1,11)+SUBSTR(STRZERO(m_tipo74[y,44]*m_tipo74[y,56],14,2),13))
                        DEVPOS(PROW(),50);DEVOUT('1')
                        DEVPOS(PROW(),51);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                        DEVPOS(PROW(),65);DEVOUT(LEFT(minsc_firm,14))
                        DEVPOS(PROW(),79);DEVOUT(m_set[1,19])
                        DEVPOS(PROW(),81);DEVOUT(SPACE(45))
                        DEVPOS(PROW(),126);DEVOUT(m_tipo74[y,10])
                        DEVPOS(PROW(),127);DEVOUT(SUBSTR(STRZERO(m_tipo74[y,44],15,2),1,12)+SUBSTR(STRZERO(m_tipo74[y,44],15,2),14))
                        DEVPOS(PROW(),141);DEVOUT(STRZERO(0,5))
                        //y:=1
                        //SKIP
                NEXT
                //ENDDO
        ENDIF
        IF mso_inve = 'N' .OR. minventa = 'S'
                //atencao('ok')
                m_movnt:={}
                sr_getconnection():exec("SELECT * FROM sacmovnt WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND documento LIKE 'NF%'"+ " ORDER BY data_s_e,conjunta,ent_sai,cod_nat,icm,cod_nota,isento",,.t.,@m_movnt)
                sr_getconnection():exec('COMMIT',,.f.)
                mitem := 0
                IF LEN(m_movnt) > 0
                        mdoc := m_movnt[1,4]
                        ment_sai := m_movnt[1,18]
                        nt := 0
                        FOR nt = 1 TO LEN(m_movnt)
                                IF ! doc_codcli1(m_movnt[nt,3],m_movnt[nt,31]) //verifica o fornecedor no arquivo sactotnt.dbf
                                        mdoc := m_movnt[nt,4]
                                        ment_sai := m_movnt[nt,18]
                                        LOOP
                                ENDIF
                                IF mdoc = m_movnt[nt,4]
                                        mitem ++
                                ELSE
*                                       mdoc := m_movnt[nt,3]
                                        mdoc := m_movnt[nt,4]
                                        ment_sai := m_movnt[nt,18]
                                        mitem := 1
                                ENDIF
                                m_merc:={}
                                cComm  := "SELECT cod_barr,prodepe FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_movnt[nt,11])
                                sr_getconnection():exec(ccomm,,.t.,@m_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_merc) = 0
                                        LOOP
                                ENDIF

                                mpt := 0
                                mpt := ASCAN(m_codmerc,m_movnt[nt,11])
                                IF mpt = 0
                                        AADD(m_codmerc,m_movnt[nt,11])
                                        AADD(m_mercad,{m_movnt[nt,11],m_movnt[nt,65],STRZERO(VAL(m_movnt[nt,61]),3),m_movnt[nt,54],m_movnt[nt,38]})
                                ENDIF
                        NEXT
                ENDIF
                y := 0
                FOR y = 1 TO LEN(m_mercad)
                        mcont_75 ++
                        mcont_ger ++
                        SETPOS(14,29);DISPOUT(TRANSFORM(mcont_75,'999,999,999'))
                        DEVPOS(PROW()+1,00);DEVOUT('75')
                        DEVPOS(PROW(),02);DEVOUT(SUBSTR(DTOC(mdata1),7)+SUBSTR(DTOC(mdata1),4,2)+SUBSTR(DTOC(mdata1),1,2))
                        DEVPOS(PROW(),10);DEVOUT(SUBSTR(DTOC(mdata2),7)+SUBSTR(DTOC(mdata2),4,2)+SUBSTR(DTOC(mdata2),1,2))
                        IF m_set[1,173] = 'C'
                                DEVPOS(PROW(),18);DEVOUT(STRZERO(VAL(m_mercad[y,1]),14))
                        ELSE
                                ver_cod(VAL(m_mercad[y,1]),,,,0,'*')
                                DEVPOS(PROW(),18);DEVOUT(STRZERO(VAL(merc->cod_barr),14))
                        ENDIF
			mov_cod := {}
			cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_mercad[y,1])
			sr_getconnection():exec(ccomm,,.t.,@mov_cod)
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(mov_cod) > 0
                        	//IF ver_cod(VAL(m_mercad[y,1]),,,,,'*')
                                IF EMPTY(mov_cod[1,70])
                                        DEVPOS(PROW(),32);DEVOUT('00000000')
                                ELSE
                                        DEVPOS(PROW(),32);DEVOUT(mov_cod[1,70])
                                ENDIF
                                DEVPOS(PROW(),40);DEVOUT(mov_cod[1,9])
                                DEVPOS(PROW(),93);DEVOUT(mov_cod[1,14])
                                DEVPOS(PROW(),99);DEVOUT(STRZERO(VAL(mov_cod[1,68]),3))
                                DEVPOS(PROW(),102);DEVOUT(SUBSTR(STRZERO(mov_cod[1,65],5,2),1,2)+SUBSTR(STRZERO(mov_cod[1,65],5,2),4))
                                DEVPOS(PROW(),106);DEVOUT(SUBSTR(STRZERO(m_mercad[y,5],5,2),1,2)+SUBSTR(STRZERO(m_mercad[y,5],5,2),4))
                        ELSE
                                //cod_mov1(VAL(m_mercad[y,1]),,,,,'*')
				mov_cod := {}
				cComm  := "SELECT * FROM sacmovnt WHERE codigo = "+sr_cdbvalue(m_mercad[y,1])
				sr_getconnection():exec(ccomm,,.t.,@mov_cod)
                                sr_getconnection():exec('COMMIT',,.f.)
				IF LEN(mov_cod) = 0
					LOOP
				ENDIF
                                DEVPOS(PROW(),32);DEVOUT('00000000')
                                DEVPOS(PROW(),40);DEVOUT(mov_cod[1,12])
                                DEVPOS(PROW(),93);DEVOUT(mov_cod[1,16])
                                DEVPOS(PROW(),99);DEVOUT(STRZERO(VAL(mov_cod[1,61]),3))
                                DEVPOS(PROW(),102);DEVOUT(SUBSTR(STRZERO(mov_cod[1,54],5,2),1,2)+SUBSTR(STRZERO(mov_cod[1,54],5,2),4))
                                DEVPOS(PROW(),106);DEVOUT(SUBSTR(STRZERO(mov_cod[1,38],5,2),1,2)+SUBSTR(STRZERO(mov_cod[1,38],5,2),4))
                        ENDIF
                        DEVPOS(PROW(),110);DEVOUT(STRZERO(0,4))
                        DEVPOS(PROW(),114);DEVOUT(STRZERO(0,12))
                        DEVPOS(PROW(),126);DEVOUT(SPACE(14))
                        DEVPOS(PROW(),140);DEVOUT(STRZERO(0,6))
                NEXT

                //IF mso_prod = 'N'
                        ****** TIPO 88.10.00
                        mseq_88 ++
                        mcont_88 ++
                        mcont_ger ++
                        SETPOS(15,29);DISPOUT(TRANSFORM(mcont_88,'999,999,999'))
                        DEVPOS(PROW()+1,00);DEVOUT('88')
                        DEVPOS(PROW(),02);DEVOUT(STRZERO(mseq_88,9))
                        DEVPOS(PROW(),11);DEVOUT('10')
                        DEVPOS(PROW(),13);DEVOUT('00')
                        DEVPOS(PROW(),15);DEVOUT(SUBSTR(DTOC(mdata1),7)+SUBSTR(DTOC(mdata1),4,2))
                        DEVPOS(PROW(),21);DEVOUT('N')
                        IF ! EMPTY(mcont_54)
                                DEVPOS(PROW(),22);DEVOUT('S')
                        ELSE
                                DEVPOS(PROW(),22);DEVOUT('N')
                        ENDIF
                        DEVPOS(PROW(),23);DEVOUT('N')

                        ****** TIPO 88.10.10
                        mseq_88 ++
                        mcont_88 ++
                        mcont_ger ++
                        SETPOS(15,29);DISPOUT(TRANSFORM(mcont_88,'999,999,999'))
                        DEVPOS(PROW()+1,00);DEVOUT('88')
                        DEVPOS(PROW(),02);DEVOUT(STRZERO(mseq_88,9))
                        DEVPOS(PROW(),11);DEVOUT('10')
                        DEVPOS(PROW(),13);DEVOUT('10')
                        DEVPOS(PROW(),15);DEVOUT(LEFT(m_set[1,129],34))
                        //DEVPOS(PROW(),15);DEVOUT(m_set[1,129])
                        DEVPOS(PROW(),50);DEVOUT(minsc_firm)
                        mcgc_c := STRTRAN(mcgc_firm,'.','')
                        mcgc_c := STRTRAN(mcgc_c,'/','')
                        mcgc_c := STRTRAN(mcgc_c,'-','')
                        DEVPOS(PROW(),64);DEVOUT(mcgc_c)
                        DEVPOS(PROW(),78);DEVOUT(STRZERO(VAL(m_set[1,145]),12))
                        DEVPOS(PROW(),90);DEVOUT(STRZERO(VAL(mfone_firm),12))
                        DEVPOS(PROW(),102);DEVOUT(STRZERO(0,6))
                        DEVPOS(PROW(),108);DEVOUT(m_set[1,143])
                        DEVPOS(PROW(),116);DEVOUT(m_set[1,137])

                        ****** TIPO 88.10.20
                        mseq_88 ++
                        mcont_88 ++
                        mcont_ger ++
                        SETPOS(15,29);DISPOUT(TRANSFORM(mcont_88,'999,999,999'))
                        DEVPOS(PROW()+1,00);DEVOUT('88')
                        DEVPOS(PROW(),02);DEVOUT(STRZERO(mseq_88,9))
                        DEVPOS(PROW(),11);DEVOUT('10')
                        DEVPOS(PROW(),13);DEVOUT('20')
                        DEVPOS(PROW(),15);DEVOUT(m_set[1,144])
                        DEVPOS(PROW(),55);DEVOUT(m_set[1,146])
                        DEVPOS(PROW(),66);DEVOUT(STRZERO(VAL(m_set[1,145]),12))
                        DEVPOS(PROW(),78);DEVOUT(m_set[1,137])

                        ****** TIPO 88.10.30
                        mseq_88 ++
                        mcont_88 ++
                        mcont_ger ++
                        SETPOS(15,29);DISPOUT(TRANSFORM(mcont_88,'999,999,999'))
                        DEVPOS(PROW()+1,00);DEVOUT('88')
                        DEVPOS(PROW(),02);DEVOUT(STRZERO(mseq_88,9))
                        DEVPOS(PROW(),11);DEVOUT('10')
                        DEVPOS(PROW(),13);DEVOUT('30')
                        DEVPOS(PROW(),15);DEVOUT(m_contador[1,1])
                        DEVPOS(PROW(),65);DEVOUT(m_contador[1,2])
                        DEVPOS(PROW(),76);DEVOUT(m_contador[1,3])
                        DEVPOS(PROW(),86);DEVOUT(STRZERO(VAL(m_contador[1,4]),12))
                        DEVPOS(PROW(),98);DEVOUT(STRZERO(VAL(m_contador[1,5]),12))
                        DEVPOS(PROW(),110);DEVOUT(STRZERO(VAL(m_contador[1,6]),12))
                        DEVPOS(PROW(),122);DEVOUT(m_contador[1,7])
                        DEVPOS(PROW(),128);DEVOUT(m_contador[1,8])
                        ****** TIPO 88.10.40
                        i := 0
                        FOR i = 1 TO LEN(m_cod)
                                IF (EMPTY(m_cliente[i,2]) .AND. EMPTY(m_cliente[i,5])) .OR. EMPTY(m_cliente[i,1]) .OR. m_cliente[i,4] = 'EX'
                                        LOOP
                                ENDIF
                                mseq_88 ++
                                mcont_88 ++
                                mcont_ger ++
                                SETPOS(15,29);DISPOUT(TRANSFORM(mcont_88,'999,999,999'))
                                DEVPOS(PROW()+1,00);DEVOUT('88')
                                DEVPOS(PROW(),02);DEVOUT(STRZERO(mseq_88,9))
                                DEVPOS(PROW(),11);DEVOUT('10')
                                DEVPOS(PROW(),13);DEVOUT('40')
                                IF ! EMPTY(m_cliente[i,2])
                                        DEVPOS(PROW(),15);DEVOUT(m_cliente[i,2])
                                ELSE
                                        DEVPOS(PROW(),15);DEVOUT(STRZERO(VAL(m_cliente[i,5]),14))
                                ENDIF
                                IF ! EMPTY(m_cliente[i,3]) .AND. VAL(m_cliente[i,3]) > 0
                                        DEVPOS(PROW(),29);DEVOUT(LEFT(m_cliente[i,3],14))
                                ELSE
                                        DEVPOS(PROW(),29);DEVOUT('ISENTO')
                                ENDIF
                                DEVPOS(PROW(),43);DEVOUT(LEFT(m_cliente[i,4],14))
                                DEVPOS(PROW(),45);DEVOUT(LEFT(m_cliente[i,1],35))
                                DEVPOS(PROW(),80);DEVOUT(SUBSTR(DTOC(mdata1),7)+SUBSTR(DTOC(mdata1),4,2)+SUBSTR(DTOC(mdata1),1,2))
                                DEVPOS(PROW(),88);DEVOUT(SUBSTR(DTOC(mdata2),7)+SUBSTR(DTOC(mdata2),4,2)+SUBSTR(DTOC(mdata2),1,2))
                                DEVPOS(PROW(),96);DEVOUT(m_cliente[i,6])
                        NEXT
                        ****** TIPO 88.15.00
                        mseq_88 ++
                        mcont_88 ++
                        mcont_ger ++
                        SETPOS(15,29);DISPOUT(TRANSFORM(mcont_88,'999,999,999'))
                        DEVPOS(PROW()+1,00);DEVOUT('88')
                        DEVPOS(PROW(),02);DEVOUT(STRZERO(mseq_88,9))
                        DEVPOS(PROW(),11);DEVOUT('15')
                        DEVPOS(PROW(),13);DEVOUT('00')
                        DEVPOS(PROW(),23);DEVOUT(SUBSTR(DTOC(mdata2),7)+SUBSTR(DTOC(mdata2),4,2)+SUBSTR(DTOC(mdata2),1,2))
                        DEVPOS(PROW(),PCOL());DEVOUT(STRZERO(0,19))

                        ****** TIPO 88.74.00
                        m_tipo74:={}
                        sr_getconnection():exec("SELECT SUM(saldo_mer*cust_merc) FROM sacmerc WHERE NOT merc = 'IMPOSTO' AND NOT saldo_mer = 0 AND cod_merc IS NOT NULL",,.t.,@m_tipo74)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mseq_88 ++
                        mcont_88 ++
                        mcont_ger ++
                        SETPOS(15,29);DISPOUT(TRANSFORM(mcont_88,'999,999,999'))
                        DEVPOS(PROW()+1,00);DEVOUT('88')
                        DEVPOS(PROW(),02);DEVOUT(STRZERO(mseq_88,9))
                        DEVPOS(PROW(),11);DEVOUT('74')
                        DEVPOS(PROW(),13);DEVOUT('00')
                        DEVPOS(PROW(),15);DEVOUT('0')
                        DEVPOS(PROW(),25);DEVOUT('9')
                        DEVPOS(PROW(),26);DEVOUT(SUBSTR(STRZERO(m_tipo74[1,1],13,2),1,10)+SUBSTR(STRZERO(m_tipo74[1,1],13,2),12))

                        IF mcont_50 > 0
                                mcont_ger ++
                        ENDIF
                        IF mcont_51 > 0
                                mcont_ger ++
                        ENDIF
                        IF mcont_53 > 0
                                mcont_ger ++
                        ENDIF
                        IF mcont_54 > 0
                                mcont_ger ++
                        ENDIF
                        IF mcont_75 > 0
                                mcont_ger ++
                        ENDIF
                        IF mcont_74 > 0
                                mcont_ger ++
                        ENDIF
                        IF mcont_70 > 0
                                mcont_ger ++
                        ENDIF
                        IF mcont_88 > 0
                                mcont_ger ++
                        ENDIF
                        IF mcont_90 > 0
*                               mcont_90 ++
                        ENDIF
                        IF mcont_50 > 0
                                DEVPOS(PROW()+1,00);DEVOUT('90')
                                DEVPOS(PROW(),02);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                                DEVPOS(PROW(),16);DEVOUT(LEFT(minsc_firm,14))
                                DEVPOS(PROW(),30);DEVOUT('50')
                                DEVPOS(PROW(),32);DEVOUT(STRZERO(mcont_50,8))
                                DEVPOS(PROW(),125);DEVOUT(STRZERO(++mcont_90,1))
                        ENDIF
                        IF mcont_51 > 0
                                DEVPOS(PROW()+1,00);DEVOUT('90')
                                DEVPOS(PROW(),02);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                                DEVPOS(PROW(),16);DEVOUT(LEFT(minsc_firm,14))
                                DEVPOS(PROW(),30);DEVOUT('51')
                                DEVPOS(PROW(),32);DEVOUT(STRZERO(mcont_51,8))
                                DEVPOS(PROW(),125);DEVOUT(STRZERO(++mcont_90,1))
                        ENDIF
                        IF mcont_53 > 0
                                DEVPOS(PROW()+1,00);DEVOUT('90')
                                DEVPOS(PROW(),02);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                                DEVPOS(PROW(),16);DEVOUT(LEFT(minsc_firm,14))
                                DEVPOS(PROW(),30);DEVOUT('53')
                                DEVPOS(PROW(),32);DEVOUT(STRZERO(mcont_53,8))
                                DEVPOS(PROW(),125);DEVOUT(STRZERO(++mcont_90,1))
                        ENDIF
                        IF mcont_54 > 0
                                DEVPOS(PROW()+1,00);DEVOUT('90')
                                DEVPOS(PROW(),02);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                                DEVPOS(PROW(),16);DEVOUT(LEFT(minsc_firm,14))
                                DEVPOS(PROW(),30);DEVOUT('54')
                                DEVPOS(PROW(),32);DEVOUT(STRZERO(mcont_54,8))
                                DEVPOS(PROW(),125);DEVOUT(STRZERO(++mcont_90,1))
                        ENDIF
                        IF mcont_70 > 0
                                DEVPOS(PROW()+1,00);DEVOUT('90')
                                DEVPOS(PROW(),02);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                                DEVPOS(PROW(),16);DEVOUT(LEFT(minsc_firm,14))
                                DEVPOS(PROW(),30);DEVOUT('70')
                                DEVPOS(PROW(),32);DEVOUT(STRZERO(mcont_70,8))
                                DEVPOS(PROW(),125);DEVOUT(STRZERO(++mcont_90,1))
                        ENDIF
                        IF mcont_75 > 0
                                DEVPOS(PROW()+1,00);DEVOUT('90')
                                DEVPOS(PROW(),02);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                                DEVPOS(PROW(),16);DEVOUT(LEFT(minsc_firm,14))
                                DEVPOS(PROW(),30);DEVOUT('75')
                                DEVPOS(PROW(),32);DEVOUT(STRZERO(mcont_75,8))
                                DEVPOS(PROW(),125);DEVOUT(STRZERO(++mcont_90,1))
                        ENDIF
                        IF mcont_88 > 0
                                DEVPOS(PROW()+1,00);DEVOUT('90')
                                DEVPOS(PROW(),02);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                                DEVPOS(PROW(),16);DEVOUT(LEFT(minsc_firm,14))
                                DEVPOS(PROW(),30);DEVOUT('88')
                                DEVPOS(PROW(),32);DEVOUT(STRZERO(mcont_88,8))
                                DEVPOS(PROW(),125);DEVOUT(STRZERO(++mcont_90,1))
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT('90')
                        DEVPOS(PROW(),02);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                        DEVPOS(PROW(),16);DEVOUT(LEFT(minsc_firm,14))
                        DEVPOS(PROW(),30);DEVOUT('99')
                        DEVPOS(PROW(),32);DEVOUT(STRZERO(mcont_50+mcont_51+mcont_53+mcont_54+mcont_75+mcont_88+2+(++mcont_90),8))
                        DEVPOS(PROW(),125);DEVOUT(STRZERO(mcont_90,1))
                /*
                ELSE
                        IF mcont_74 > 0
                                DEVPOS(PROW()+1,00);DEVOUT('90')
                                DEVPOS(PROW(),02);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                                DEVPOS(PROW(),16);DEVOUT(LEFT(minsc_firm,14))
                                DEVPOS(PROW(),30);DEVOUT('74')
                                DEVPOS(PROW(),32);DEVOUT(STRZERO(mcont_74,8))
                                DEVPOS(PROW(),125);DEVOUT(STRZERO(++mcont_90,1))
                        ENDIF
                ENDIF
                */
        ENDIF
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT OFF;SET PRINT TO
        movcn->(DBCLOSEAREA())
        IF LEN(prod_del)>0
                atencao('Esta operacao tem NOTAS que nao se encontra no arquivo')
                IF 'S' = mensagem1('Deseja imprimir as notas que nao se encontra:','S','S,N')
                        IF imp_arq('PROD_DEL.TXT','R')
                                FOR i = 1 TO LEN(prod_del)
                                        DEVPOS(PROW()+1,00);DEVOUT('No.da NOTA: '+prod_del[i,1])
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('ENTRADA ou SAIDA: '+prod_del[i,2])
                                NEXT
                                SETPRC(00,00)
                                SET DEVI TO SCREEN;SET PRINT OFF;SET PRINT TO
                                conf_impressao('PROD_DEL.TXT')
                        ENDIF
                ENDIF
        ENDIF
        conf_impressao('SEF.TXT')
        SET CENTURY OFF
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
*******************************************************************************
FUNCTION sef_cod1(mcod,malias)
******************************
LOCAL cons_sef,mcom

cons_sef := {}
cComm  := "SELECT * FROM sacmovcn WHERE "
ccomm := ccomm + "codigo = "+sr_cdbvalue(mcod)
sr_getconnection():exec(ccomm,,.t.,@cons_sef)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(cons_sef) = 0
        RETURN .T.
ENDIF
mcom := 'INSERT INTO sacmovcn (codigo,'+;
        'cod_nat,'+;
        'sittrib,'+;
        'ipi,'+;
        'icm,'+;
        'SR_DELETED )'
        IF malias = 'movnt'
                mcom := mcom +' VALUES ('+sr_cdbvalue(mcod)+','+; //1
                sr_cdbvalue(m_movnt[nt,65]      )+','+; //2
                sr_cdbvalue(m_movnt[nt,61]      )+','+; //3
                sr_cdbvalue(m_movnt[nt,54]      )+','+; //4
                sr_cdbvalue(m_movnt[nt,38]      )+',' //5
        ELSE
                mcom := mcom + ' VALUES ('+sr_cdbvalue(mcod)+','+; //1
                sr_cdbvalue(m_mov[mv,68]      )+','+; //2
                sr_cdbvalue(m_mov[mv,64]      )+','+; //3
                sr_cdbvalue(m_mov[mv,57]      )+','+; //4
                sr_cdbvalue(m_mov[mv,40]      )+',' //5
        ENDIF
        mcom := mcom + sr_cdbvalue(' ')+')'
sr_getconnection():exec(mcom,,.f.)
sr_getconnection():exec("COMMIT",,.f.)
RETURN .T.
****************************  F I M *******************************
FUNCTION doc_codcli1(mdoc,mcodcli)
**********************************
m_totnt := {}
sr_getconnection():exec("SELECT * FROM sactotnt WHERE documento = "+sr_cdbvalue(SUBSTR(mdoc,1,8))+" AND cod_cli = "+sr_cdbvalue(mcodcli),,.t.,@m_totnt)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(m_totnt) = 0
        RETURN .F.
ENDIF
RETURN .T.
********************** F I M ********************************
* VERIFICA CODIGO
******************
FUNCTION cod_mov1(vcod,li,ci,t,mzero,p)
***************************************
LOCAL cons_mov:={}

IF (mzero <> NIL .OR. mzero = 0) .AND. mzero <> 1
        IF EMPTY(vgru)
                RETURN .T.
        ENDIF
ENDIF
cons_mov := {}
cComm  := "SELECT produto FROM sacmovnt WHERE codigo = "+sr_cdbvalue(STRZERO(vcod,5))
sr_getconnection():exec(ccomm,,.t.,@cons_mov)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(cons_mov) = 0
        vcod := 0
        IF p = NIL
                atencao('Codigo nao Cadastrado !!!')
        ENDIF
        RETURN .F.
ENDIF
IF li <> NIL
        setcor(3)
        DEVPOS(li,ci);DEVOUT(cons_mov[1,1])
        setcor(1)
ENDIF
RETURN .T.
********************** F I M ********************************
FUNCTION sef_cod(mcod,malias)
*****************************
LOCAL vsele,vorde,vpoint:=0

vsele := SELE()
vorde := INDEXORD()
vpoint := RECNO()
***************
SELE('movcn');ORDSETFOCUS(1)
GO TOP
***************
IF ! movcn->(DBSEEK(mcod))
        ADIREG()
        movcn->codigo := mcod
        movcn->cod_nat:= (malias)->cod_nat
        movcn->sittrib:= (malias)->sittrib
        movcn->ipi:= (malias)->ipi
        IF malias = 'mov'
                movcn->icm:= mov->icm_aliq
        ELSE
                movcn->icm:= (malias)->icm
        ENDIF
        DBCOMMIT()
        DBUNLOCK()
ENDIF
SELE(vsele);ORDSETFOCUS(vorde)
GO vpoint
RETURN .T.
****************************  F I M *******************************
FUNCTION doc_codcli(mdoc,mcodcli)
*********************************
LOCAL dsele,dorde,mpt:=0

mdoc   := SUBSTR(mdoc,1,8)
cons_doc := {}
sr_getconnection():exec("SELECT * FROM sactotnt WHERE documento = "+sr_cdbvalue(mdoc)+" AND cod_forn = "+sr_cdbvalue(mcodcli),,.t.,@cons_doc)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(cons_doc) = 0
        RETURN .F.
ENDIF
RETURN .T.
********************** F I M ********************************
* VERIFICA CODIGO
******************
FUNCTION cod_mov(vcod,li,ci,t,mzero,p)
**************************************
LOCAL msele,morde

IF (mzero <> NIL .OR. mzero = 0) .AND. mzero <> 1
        IF EMPTY(vgru)
                RETURN .T.
        ENDIF
ENDIF
msele := SELE()
morde := INDEXORD()
WHILE .T.
        **************
        SELE('movnt');ORDSETFOCUS(6)
        GO TOP
        **************

        SEEK STRZERO(vcod,5)
        IF ! FOUND()
                vcod := 0
                IF p = NIL
                        atencao('Codigo nao Cadastrado !!!')
                ENDIF
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ENDIF
        IF li = NIL
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .T.
        ENDIF
        setcor(3)
        DEVPOS(li,ci);DEVOUT(merc->merc)
        setcor(1)
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDDO
RETURN NIL
********************** F I M ********************************
* CADASTRO DO CONTADOR
**********************
FUNCTION sacsef_c
*****************
LOCAL MPRG:='SACSEF_C',;
      lba,cba,opcao,;
      mnome,mcpf,mcrc,mtel1,mtel2,mfax,mcaixa_p,memail,mendereco,mnumero,mComplemento,mbairro,mCidade,muf,mcep

IF ! ver_nivel(mprg,'CADASTRO DO CONTADOR','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lba := 17
cba := 75
*----------------------------------------------------------------------------
IF ! AbriArq('sacsef','sef');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(0,0,16,85,' CADASTRO DO CONTADOR ',,1)
WHILE .T.
        exibi_prg(mprg)
        ****************
        SELE('sef')
        GO TOP
        ****************
        mnome    :=  sef->nome
        mcpf     :=  sef->cpf
        mcrc     :=  sef->crc
        mtel1    :=  sef->tel1
        mtel2    :=  sef->tel2
        mfax     :=  sef->fax
        mcaixa_p :=  sef->caixa_p
        memail   :=  sef->email
        mendereco     := sef->endereco
        mnumero       := sef->numero
        mComplemento  := sef->Complemento
        mbairro       := sef->bairro
        mCidade       := sef->Cidade
        muf           := sef->uf
        mcep          := sef->cep
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(1,1);DEVOUT('Nome...........:')
        DEVPOS(2,1);DEVOUT('CPF/MF.........:')
        DEVPOS(3,1);DEVOUT('CRC............:')
        DEVPOS(4,1);DEVOUT('Endereco.......:')
        DEVPOS(5,1);DEVOUT('Numero.........:')
        DEVPOS(6,1);DEVOUT('Complemento....:')
        DEVPOS(7,1);DEVOUT('Bairro.........:')
        DEVPOS(8,1);DEVOUT('Cidade.........:')
        DEVPOS(9,1);DEVOUT('Estado.........:')
        DEVPOS(10,1);DEVOUT('CEP............:')
        DEVPOS(11,1);DEVOUT('Telefone 01....:')
        DEVPOS(12,1);DEVOUT('Telefone 02....:')
        DEVPOS(13,1);DEVOUT('Fax............:')
        DEVPOS(14,1);DEVOUT('Caixa Postal...:')
        DEVPOS(15,1);DEVOUT('E-mail.........:')
        @ 1,19 GET mnome PICT '@!'
        @ 2,19 GET mcpf PICT '@!'
        @ 3,19 GET mcrc PICT '@!'
        @ 4,19 GET mendereco    PICT '@!'
        @ 5,19 GET mnumero      PICT '@!'
        @ 6,19 GET mComplemento PICT '@!'
        @ 7,19 GET mbairro      PICT '@!'
        @ 8,19 GET mCidade      PICT '@!'
        @ 9,19 GET muf          PICT '@!'
        @ 10,19 GET mcep         PICT '@!'
        @ 11,19 GET mtel1 PICT '999999999999'
        @ 12,19 GET mtel2 PICT '999999999999'
        @ 13,19 GET mfax PICT '999999999999'
        @ 14,19 GET mcaixa_p PICT '@!'
        @ 15,19 GET memail
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                SET CENTURY OFF
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma o Cadastro [S/n]:')
        IF opcao = 'N'
                LOOP
        ENDIF
        IF LASTREC() = 0
                ADIREG()
        ELSE
                BLOQREG()
        ENDIF
        sef->nome       := mnome
        sef->cpf        := mcpf
        sef->crc        := mcrc
        sef->tel1       := mtel1
        sef->tel2       := mtel2
        sef->fax        := mfax
        sef->caixa_p    := mcaixa_p
        sef->email      := memail
        sef->endereco   := mendereco
        sef->numero     := mnumero
        sef->Complemento:= mComplemento
        sef->bairro     := mbairro
        sef->Cidade     := mCidade
        sef->uf         := muf
        sef->cep        := mcep
        DBCOMMITALL()
        DBUNLOCKALL()
ENDDO
wvw_lclosewindow()
RETURN NIL

