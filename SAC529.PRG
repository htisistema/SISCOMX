*********************************
* LISTAGEM ESTATISTICA MOVIMENTO CLIENTES P/MESES
*********************************
MEMVAR getlist,nivel_acess


FUNCTION sac529
**************
LOCAL MPRG:='SAC529',mtitulo:='RELATORIO DE ESTATISTICA CLIENTEE P/MESES',;
      lci,cci,lba,cba,i,x,opcao,mdata:={},mqtd:={},mvlr:={},;
      mgrupo,mcod_ven,mcod_for,mcod_cli,mcodigo,mcidade,muf:='  ',mtot_qtd:={},;
      mtot_vlr:={}
PRIVATE mtraco,mtit,mtipo,mpag,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli:={},cons_mov:={}

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)

lci := 00
cci := 00
lba := 11
cba := 70
*----------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
//
IF ! AbriArq('SACMOVNT','MOVNT');RETURN NIL;ENDIF
IF ! AbriArq('SACCLI','CLI');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
mtipo_imp := m_indiv[1,18]
op_tela(lci,cci,lba+2,cba,mtitulo)
WHILE .T.
        mdata:={}
        mqtd:={}
        mvlr:={}
        mtot_qtd:={}
        mtot_vlr:={}
        i = 0
        FOR i = 1 TO 4
                AADD(mdata,SPACE(5))
                AADD(mqtd,0)
                AADD(mvlr,0)
                AADD(mtot_qtd,0)
                AADD(mtot_vlr,0)
        NEXT
        mgrupo := mcod_ven := mcod_for := mcod_cli := 0
        muf := '  '
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ lci+9,cci TO lci+9,cba
        DEVPOS(lci+1,cci+2);DEVOUT('Mes 1:         Mes 2:')
        DEVPOS(lci+2,cci+2);DEVOUT('Mes 3:         Mes 4:')
        DEVPOS(lci+3,cci+2);DEVOUT('Grupo............:')
        DEVPOS(lci+4,cci+2);DEVOUT('Codigo Vendedor..:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo Fornecedor:')
        DEVPOS(lci+6,cci+2);DEVOUT('Codigo Cliente...:')
        DEVPOS(lci+7,cci+2);DEVOUT('Estado Desejada..:')
        DEVPOS(lci+8,cci+2);DEVOUT('Cidade Desejada..:')
        DEVPOS(lci+10,cci+2);DEVOUT('Cliente..........:')

        @ lci+1,cci+9  GET mdata[1] PICT '99/99' VALID IF(EMPTY(mdata[1]),.F.,.T.)
        @ lci+1,cci+24 GET mdata[2] PICT '99/99' WHEN ! EMPTY(mdata[1])
        @ lci+2,cci+9  GET mdata[3] PICT '99/99' WHEN ! EMPTY(mdata[2])
        @ lci+2,cci+24 GET mdata[4] PICT '99/99' WHEN ! EMPTY(mdata[3])
        @ lci+3,cci+21 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(@mgrupo,lci+3,cci+26,.F.))
        @ lci+4,cci+21 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,lci+4,cci+26))
        @ lci+5,cci+21 GET mcod_for PICT '9999' VALID IF(EMPTY(mcod_for),.T.,v_fornece(mcod_for,lci+5,cci+26))
        @ lci+6,cci+21 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+6,cci+27)
        @ lci+7,cci+21 GET muf PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mcod_cli)
                mcidade := saccid(,mcidade)
        ENDIF
        SETCOR(3)
        DEVPOS(lci+8,cci+21);DEVOUT(mcidade)
        SETCOR(1)
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        marq := 'MOV_MES.REL'
        IF ! imp_arq('MOV_MES.REL','R')
                LOOP
        ENDIF
        ******************************
        SELE('cli');ORDSETFOCUS(2)
        GO TOP
        ******************************
        mtit = 'Listagem de Clientes p/Meses'
        mtipo := 'Meses: '+mdata[1]+', '+mdata[2]+', '+mdata[3]+', '+mdata[4]
        IF ! EMPTY(mcidade);mtipo:=mtipo+' - Cidade:'+mcidade;ENDIF
        mpag := 0
        cons_cli:={}
        cComm  := "SELECT * FROM saccli "
        cComm  := ccomm + " WHERE cod_cli IS NOT NULL"
        IF ! EMPTY(muf)
		cComm  := ccomm + " AND uf = "+sr_cdbvalue(muf)
        ENDIF
	IF ! EMPTY(mcod_cli)
		cComm  := ccomm + " AND cod_cli = "+sr_cdbvalue(mcod_cli)
        ENDIF
	IF ! EMPTY(mcidade)
		cComm  := ccomm + " AND cidade = "+sr_cdbvalue(mcidade)
        ENDIF
	cComm  := ccomm + " ORDER BY razao"
	sr_getconnection():exec(ccomm,,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(cons_cli) = 0
	        imprt(mtipo_imp,'N')
        	EJECT
	        SETPRC(00,00)
        	SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao(marq)
                /*
        	IF mimp_tipo = 2
                	lertexto(marq)
                ELSEIF mtipo_imp = 'D'
                        
                ELSE
                        MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
	        ENDIF
	        */
        	LOOP
	ENDIF
	FOR ncli = 1 TO LEN(cons_cli)
                IF mpag = 0 .OR. PROW() >= 59
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('Meses:')
                        DEVPOS(PROW(),54);DEVOUT(mdata[1])
                        DEVPOS(PROW(),72);DEVOUT(mdata[2])
                        DEVPOS(PROW(),90);DEVOUT(mdata[3])
                        DEVPOS(PROW(),108);DEVOUT(mdata[4])
                        DEVPOS(PROW(),127);DEVOUT('Total')
                        DEVPOS(PROW()+1,00);DEVOUT('Clientes')
                        DEVPOS(PROW(),50);DEVOUT('Qtd.')
                        DEVPOS(PROW(),59);DEVOUT('Valor')
                        DEVPOS(PROW(),68);DEVOUT('Qtd.')
                        DEVPOS(PROW(),77);DEVOUT('Valor')
                        DEVPOS(PROW(),86);DEVOUT('Qtd.')
                        DEVPOS(PROW(),95);DEVOUT('Valor')
                        DEVPOS(PROW(),104);DEVOUT('Qtd.')
                        DEVPOS(PROW(),113);DEVOUT('Valor')
                        DEVPOS(PROW(),123);DEVOUT('Qtd.')
                        DEVPOS(PROW(),132);DEVOUT('Vlr.')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                ***************************
                mcodigo := cons_cli[ncli,2]
                i := 0
                FOR i = 1 TO 4
                        cons_mov:={}
                        cComm  := "SELECT SUM(quantd),SUM(vl_fatura) FROM sacmov "
                        cComm  := ccomm + " WHERE cod_cli = "+sr_cdbvalue(mcodigo)
                        cComm  := ccomm + " AND cancel IS NULL"
                        cComm  := ccomm + " AND NOT tipo = '01'"
                        cComm  := ccomm + " AND ent_sai = 'S'"
                        cComm  := ccomm + " AND documento NOT LIKE 'BL%'"
                        ccomm := ccomm + " AND data_s_e >= "+sr_cdbvalue('20'+SUBSTR(mdata[i],4,2)+'/'+SUBSTR(mdata[i],1,2)+'/01')
                        mdia := ''
                        IF SUBSTR(mdata[i],1,2) = '01' .OR. SUBSTR(mdata[i],1,2) = '03' .OR. SUBSTR(mdata[i],1,2) = '05' .OR. SUBSTR(mdata[i],1,2)='07' .OR. SUBSTR(mdata[i],1,2)='08' .OR. SUBSTR(mdata[i],1,2) = '10' .OR. SUBSTR(mdata[i],1,2) = '12'
                                mdia := '30'
                        ELSEIF SUBSTR(mdata[i],1,2) = '02'
                                mdia := '28'
                        ELSE
                                mdia := '30'
                        ENDIF
                        ccomm := ccomm + " AND data_s_e <= "+sr_cdbvalue('20'+SUBSTR(mdata[i],4,2)+'/'+SUBSTR(mdata[i],1,2)+'/'+mdia)
                        IF ! EMPTY(mgrupo)
	                        cComm  := ccomm + " AND gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
        		ENDIF
			IF ! EMPTY(mcod_for)
	                        cComm  := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_for,4))
        		ENDIF
			IF ! EMPTY(mcod_ven)
	                        cComm  := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_ven,3))
        		ENDIF
	                sr_getconnection():exec(ccomm,,.t.,@cons_mov)
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(cons_mov) = 0
				LOOP
			ELSE
                        	SETPOS(lci+10,cci+21);DISPOUT(cons_cli[ncli,2]+'-'+cons_cli[ncli,3])
                                mqtd[i]:=mqtd[i] + cons_mov[1,1]
                                mvlr[i]:=mvlr[i] + cons_mov[1,2]
                                mtot_qtd[i]:=mtot_qtd[i] + cons_mov[1,1]
                                mtot_vlr[i]:=mtot_vlr[i] + cons_mov[1,2]

			ENDIF
                NEXT
                IF mqtd[1]+mqtd[2]+mqtd[3]+mqtd[4] > 0
                        DEVPOS(PROW()+1,00);DEVOUT(cons_cli[ncli,2])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_cli[ncli,3])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mqtd[1],'9999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mvlr[1],'999999.99'))
                        IF ! EMPTY(mdata[2])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mqtd[2],'9999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mvlr[2],'999999.99'))
                        ELSE
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('       ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('         ')
                        ENDIF
                        IF ! EMPTY(mdata[3])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mqtd[3],'9999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mvlr[3],'999999.99'))
                        ELSE
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('       ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('         ')
                        ENDIF
                        IF ! EMPTY(mdata[4])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mqtd[4],'9999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mvlr[4],'999999.99'))
                        ELSE
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('       ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('         ')
                        ENDIF
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mqtd[1]+mqtd[2]+mqtd[3]+mqtd[4],'99999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mvlr[1]+mvlr[2]+mvlr[3]+mvlr[4],'999999.99'))
                ENDIF
                x := 0
                FOR x = 1 TO 4
                        mqtd[x] := 0
                        mvlr[x] := 0
                NEXT
        NEXT
        DEVPOS(PROW()+1,00);DEVOUT(SPACE(46))
        DEVPOS(PROW(),PCOL()+1);DEVOUT('-------')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('---------')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('-------')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('---------')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('-------')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('---------')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('-------')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('---------')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('--------')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('---------')
        DEVPOS(PROW()+1,00);DEVOUT(SPACE(46))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_qtd[1],'9999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vlr[1],'999999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_qtd[2],'9999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vlr[2],'999999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_qtd[3],'9999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vlr[3],'999999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_qtd[4],'9999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vlr[4],'999999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_qtd[1]+mtot_qtd[2]+mtot_qtd[3]+mtot_qtd[4],'99999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vlr[1]+mtot_vlr[2]+mtot_vlr[3]+mtot_vlr[4],'999999.99'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        imprt(mtipo_imp,'N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
        /*
        IF mimp_tipo = 2
                lertexto(marq)
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ************************

