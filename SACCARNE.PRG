* FUNCAO P/EMISSAO DE CARNES
****************************
FUNCTION emi_carne(mn)
**********************
LOCAL mprg:='HTIFUN-EMI_CARNE',opcao,i,mtp_carne:='F',mdocumento := SPACE(12),mcliente,cons_c:={},;
      mpromi:='S'

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mnum_ped,cons_dupr:={}

IF mn = NIL
        mnum_ped := 0
ELSE
        mnum_ped := mn
ENDIF
//IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
op_tela(10,10,15,65,' Emissao de Carnes ')
WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,21]
        mtp_carne := m_indiv[1,51]
        mdocumento := SPACE(12)
        DEVPOS(1,1);DEVOUT('Digite No.do Pedido.............:')
        DEVPOS(2,1);DEVOUT('Digite No.Documento(Parcela)....:')
        DEVPOS(3,1);DEVOUT('Tipo Carne [F]ormulario [B]obina:')
        @ 1,35 GET mnum_ped PICT '999999' WHEN mn = NIL
        @ 2,35 GET mdocumento PICT '@!' VALID lim_get() WHEN men_get(7,7,'Digite o Documento (Parcela) que deseja ou deixe em branco para todas as Parcelas')
        @ 3,35 GET mtp_carne PICT '@!' VALID mtp_carne $ 'F,B'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
	cons_dupr := {}
	sr_getconnection():exec("SELECT * FROM sacdupr WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+' AND datpag IS NOT NULL',,.t.,@cons_dupr)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(cons_dupr) = 0 .AND. m_set[1,70] # 'S'
                mpromi := op_simnao('S','Deseja imprimir a PROMISSORIA:')
        ENDIF

	cons_dupr := {}
	sr_getconnection():exec("SELECT * FROM sacdupr WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+' AND datpag IS NULL',,.t.,@cons_dupr)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(cons_dupr) = 0
                atencao('Nao foi possivel encontrar este PEDIDO ou foi PAGO')
                LOOP
        ENDIF
        IF ! imp_arq('EMI_CARNE.REL','D')
                LOOP
        ENDIF
	cons_c := {}
	sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(cons_dupr[1,7]),,.t.,@cons_c)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(cons_c) = 0
		mcliente := SPACE(40)
	ELSE
		mcliente := cons_c[1,3]
	ENDIF
        y := i := 0
        FOR i = 1 TO LEN(cons_dupr)
                IF (! EMPTY(mdocumento) .AND. mdocumento <> cons_dupr[i,4])
                        LOOP
                ENDIF
                IF mtp_carne = 'F'
                        imprt(mtipo_imp,'N')
                        //imprt(mtipo_imp,'N+')
                        IF mmult_emp = 'N'
                                DEVPOS(PROW(),07);DEVOUT(memp_resa)
                                DEVPOS(PROW(),35);DEVOUT(memp_resa)
                        ELSE
                                cons_emp:={}
                                sr_getconnection():exec("SELECT * FROM sacemp WHERE codemp = "+sr_cdbvalue(cons_dupr[i,1]),,.t.,@cons_emp)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_emp) > 0
                                        DEVPOS(PROW(),07);DEVOUT(ALLTRIM(IF(cons_emp[1,9] = 'F',cons_emp[1,8],cons_emp[1,7])))
                                        DEVPOS(PROW(),35);DEVOUT(ALLTRIM(IF(cons_emp[1,9] = 'F',cons_emp[1,8],cons_emp[1,7])))
                                ELSE
                                        DEVPOS(PROW(),07);DEVOUT(memp_resa)
                                        DEVPOS(PROW(),35);DEVOUT(memp_resa)
                                ENDIF
                        ENDIF
                        //imprt(mtipo_imp,'N-')
                        //imprt(mtipo_imp,'N')
                        //mtraco:=REPLI(CHR(238),80)
                        DEVPOS(PROW()+1,05);DEVOUT(REPLI(CHR(238),28))
                        DEVPOS(PROW(),33);DEVOUT(REPLI(CHR(238),28))
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,09);DEVOUT(STR(cons_dupr[i,7],5)+'-'+mcliente)
                        DEVPOS(PROW(),57);DEVOUT(STR(cons_dupr[i,7],5)+'-'+mcliente)
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,05);DEVOUT('Documento.: '+cons_dupr[i,2]+cons_dupr[i,4])
                        DEVPOS(PROW(),30);DEVOUT('|')
                        DEVPOS(PROW(),33);DEVOUT('Documento.: '+cons_dupr[i,2]+cons_dupr[i,4])
                        DEVPOS(PROW()+1,05);DEVOUT('Emissao...: '+DTOC(cons_dupr[i,10]))
                        DEVPOS(PROW(),30);DEVOUT('|')
                        DEVPOS(PROW(),33);DEVOUT('Emissao...: '+DTOC(cons_dupr[i,10]))
                        DEVPOS(PROW()+1,05);DEVOUT('Vencimento: '+DTOC(cons_dupr[i,11]))
                        DEVPOS(PROW(),30);DEVOUT('|')
                        DEVPOS(PROW(),33);DEVOUT('Vencimento: '+DTOC(cons_dupr[i,11]))
                        DEVPOS(PROW()+1,05);DEVOUT('Valor R$..: '+TRANSFORM(cons_dupr[i,19],'999,999.99'))
                        DEVPOS(PROW(),30);DEVOUT('|')
                        DEVPOS(PROW(),33);DEVOUT('Valor R$..: '+TRANSFORM(cons_dupr[i,19],'999,999.99'))
                        //DEVPOS(PROW()+1,33);DEVOUT('|')
                        DEVPOS(PROW()+1,05);DEVOUT(IF(ver_serie() = '141599','Data Pag..: ___________','Multa R$..: ___________'))
                        DEVPOS(PROW(),30);DEVOUT('|')
                        DEVPOS(PROW(),33);DEVOUT(IF(ver_serie() = '141599','Data Pag..: ___________','Multa R$..: ___________'))
                        DEVPOS(PROW()+1,05);DEVOUT('Juros R$..: ___________')
                        DEVPOS(PROW(),30);DEVOUT('|')
                        DEVPOS(PROW(),33);DEVOUT('Juros R$..: ___________')
                        DEVPOS(PROW()+1,05);DEVOUT('PAGO R$...: ___________')
                        DEVPOS(PROW(),30);DEVOUT('|')
                        DEVPOS(PROW(),33);DEVOUT(  'PAGO R$...: ___________')
                        DEVPOS(PROW()+1,05);DEVOUT('No.Pedido.: '+cons_dupr[i,31])
                        DEVPOS(PROW(),30);DEVOUT('|')
                        DEVPOS(PROW(),33);DEVOUT('No.Pedido.: '+cons_dupr[i,31])
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,9);DEVOUT('* Multa de '+ALLTRIM(TRANSFORM(m_set[1,50],'999.99'))+'% e Juros de '+ALLTRIM(TRANSFORM(m_set[1,51],'999.99'))+'% ao dia')
                        DEVPOS(PROW(),57);DEVOUT('* Multa de '+ALLTRIM(TRANSFORM(m_set[1,50],'999.99'))+'% e Juros de '+ALLTRIM(TRANSFORM(m_set[1,51],'999.99'))+'% ao dia')
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+2,05);DEVOUT(REPLI('-',60))
                        DEVPOS(PROW()+2,00);DEVOUT(' ')
                        y ++
                        IF y = IF(m_indiv[1,48]='A4',4,3)
                                EJECT
                                y := 0
                        ENDIF
                ELSE
                        IF m_indiv[1,7] = '4200'
                                imprt('M','W1')
                        ELSEIF ALLTRIM(m_indiv[1,7]) = 'LX'
                                imprt('M','N')
                        ELSE
                                imprt('J','N')
                        ENDIF

                        //imprt(mtipo_imp,'N')

                        IF mmult_emp = 'N'
                                DEVPOS(PROW()+5,00);DEVOUT(memp_resa)
                        ELSE
                                cons_emp:={}
                                sr_getconnection():exec("SELECT * FROM sacemp WHERE codemp = "+sr_cdbvalue(cons_dupr[i,1]),,.t.,@cons_emp)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_emp) > 0
                                        DEVPOS(PROW()+5,00);DEVOUT(ALLTRIM(IF(cons_emp[1,9] = 'F',cons_emp[1,8],cons_emp[1,7])))
                                ELSE
                                        DEVPOS(PROW()+5,00);DEVOUT(memp_resa)
                                ENDIF
                        ENDIF
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI(CHR(238),50))
                        DEVPOS(PROW()+1,00);DEVOUT('Cliente: '+STR(cons_dupr[i,7],5)+'-'+mcliente)
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,02);DEVOUT('No.Documento.: '+cons_dupr[i,2]+cons_dupr[i,4])
                        DEVPOS(PROW()+1,02);DEVOUT('Data Emissao.: '+DTOC(cons_dupr[i,10]))
                        DEVPOS(PROW()+1,02);DEVOUT('Vencimento...: '+DTOC(cons_dupr[i,11]))
                        DEVPOS(PROW()+1,02);DEVOUT('Valor R$.....: '+TRANSFORM(cons_dupr[i,19],'999,999.99'))
                        DEVPOS(PROW()+1,02);DEVOUT('Multa R$.....: ...........')
                        DEVPOS(PROW()+1,02);DEVOUT('Juros R$.....: ...........')
                        DEVPOS(PROW()+1,02);DEVOUT('Total Pago R$: ...........')
                        DEVPOS(PROW()+1,02);DEVOUT('No.Pedido...: '+cons_dupr[i,31])
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI(CHR(238),50))
                        DEVPOS(PROW()+1,00);DEVOUT('OBS.: Multa de '+ALLTRIM(TRANSFORM(m_set[1,50],'999.99'))+'% e Juros de '+ALLTRIM(TRANSFORM(m_set[1,51],'999.99'))+'% ao dia')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI(CHR(238),50))
                        DEVPOS(PROW()+3,00);DEVOUT('------------------- Corte aqui -------------------')
                        // 2a. parte
                        imprt(mtipo_imp,'N')
                        //IF mmult_emp = 'N'
                                DEVPOS(PROW()+5,00);DEVOUT(memp_resa)
                        /*
                        ELSE
                                ver_emp(cons_dupr[i,1])
                                DEVPOS(PROW()+5,00);DEVOUT(ALLTRIM(IF(emp->nome_cab = 'F',emp->fantasia,emp->razao)))
                        ENDIF
                        */
                        //DEVPOS(PROW()+5,00);DEVOUT(LEFT(ALLTRIM(m_set[1,125])+' '+ALLTRIM(m_set[1,126]),15))
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI(CHR(238),50))
                        DEVPOS(PROW()+1,00);DEVOUT('Cliente: '+STR(cons_dupr[i,7],5)+'-'+mcliente)
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,02);DEVOUT('No.Documento.: '+cons_dupr[i,2]+cons_dupr[i,4])
                        DEVPOS(PROW()+1,02);DEVOUT('Data Emissao.: '+DTOC(cons_dupr[i,10]))
                        DEVPOS(PROW()+1,02);DEVOUT('Vencimento...: '+DTOC(cons_dupr[i,11]))
                        DEVPOS(PROW()+1,02);DEVOUT('Valor R$.....: '+TRANSFORM(cons_dupr[i,19],'999,999.99'))
                        DEVPOS(PROW()+1,02);DEVOUT('Multa R$.....: ...........')
                        DEVPOS(PROW()+1,02);DEVOUT('Juros R$.....: ...........')
                        DEVPOS(PROW()+1,02);DEVOUT('Total Pago R$: ...........')
                        DEVPOS(PROW()+1,02);DEVOUT('No.Pedido...: '+cons_dupr[i,31])
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI(CHR(238),50))
                        DEVPOS(PROW()+1,00);DEVOUT('OBS.: Multa de '+ALLTRIM(TRANSFORM(m_set[1,50],'999.99'))+'% e Juros de '+ALLTRIM(TRANSFORM(m_set[1,51],'999.99'))+'% ao dia')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI(CHR(238),50))
                        DEVPOS(PROW()+3,00);DEVOUT('------------------- Corte aqui -------------------')
                ENDIF
        NEXT
        IF mtp_carne = 'F'
                IF PROW() > 0;EJECT;ENDIF
        ELSE
                DEVPOS(PROW()+11,00);DEVOUT('')
        ENDIF
        IF mpromi = 'S'
                sacpromi(mtp_carne)
        ENDIF
        IF m_indiv[1,7] = '4200'
                imprt('M','W0')
        ENDIF
        imprt(mtipo_imp,'N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('EMI_CARNE.REL')
        IF mn <> NIL
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************** F I M ************************************88
