********************************
* FUNCAO P/CONSULTAR KM
********************************
#include "inkey.ch"              // constantes de codigos das teclas

FUNCTION sactran1()
*****************

LOCAL mprg:='SACTRAN1',mopcao,mdata,mkm,mquantd,mvalor,mrecno:=0,;
      mmotorista:=SPACE(30),point:=0,m_mov:={},m_tela:={},mdata_ini,mdata_fim,;
      mtot_km,mtot_quantd,mtot_valor

local nErr, nPos,;
        vEmp := {},;
        nCnn,oSql,;
        cComm, apCode,owindows

PRIVATE mcod_forn:=0,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

MEMVAR mdata_sis,nivel_acess
op_tela(10,10,17,80,memp_resa+SPACE(40)+'TRANSPORTADORA')
exibi_prg('SACTRAN1')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        point := 0
        ASIZE(m_mov,0)
        ASIZE(m_tela,0)
        IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
        IF ! AbriArq('sacmovtra','movtra');RETURN NIL;ENDIF
        limpa(00,00,06,80)
        DEVPOS(01,01);DEVOUT('Fornecedor:')
        DEVPOS(02,01);DEVOUT('Data......:')
        DEVPOS(03,01);DEVOUT('KM........:')
        DEVPOS(04,01);DEVOUT('Quantidade:')
        DEVPOS(05,01);DEVOUT('Valor R$..:')
        DEVPOS(06,01);DEVOUT('Motorista.:')
        mensagem('<I>nclusao - <A>lteracao - <E>xclusao - <C>onsulta/Relatorio - <ESC> Retornar')
        nkey := INKEY(0)
        IF nkey == K_ESC
                EXIT
        ENDIF
        IF nkey = 97 .OR. nkey = 65 .OR. nkey = 69 .OR. nkey = 101
                mdata           := CTOD('  /  /  ')
                mcod_forn       := 0
                mensagem('Digite o Cod. do Fornecedor - <F1>Consultar ou <ESC> Retorna')
                @ 01,14 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,v_fornece(mcod_forn,01,19))
                READ
                IF LASTKEY() = 27
                        //wvw_lclosewindow()
                        LOOP
                ENDIF
                v_fornece(mcod_forn,01,19)
                mensagem('Digite a DATA que deseja ou em BRANCO p/Todos ou <ESC> Retorna')
                @ 02,14 GET mdata
                READ
                mforn := forn->razao
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                m_mov:={}
                IF ! EMPTY(mdata)
                        sr_getconnection():exec("SELECT * FROM sacmovtra WHERE cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4))+" AND data = "+sr_cdbvalue(mdata)+" ORDER BY data",,.t.,@m_mov)
                ELSE
                        sr_getconnection():exec("SELECT * FROM sacmovtra WHERE cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4))+" ORDER BY data",,.t.,@m_mov)
                ENDIF
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(m_mov) = 0
                        atencao('Nao existe movimento neste periodo...')
                        LOOP
                ENDIF
                FOR i = 1 TO LEN(m_mov)
                        AADD(m_tela,' '+DTOC(m_mov[i,1])+'-'+SUBSTR(datseman(m_mov[i,1]),1,3)+' '+TRANSFORM(m_mov[i,4],'999,999')+' '+TRANSFORM(m_mov[i,5],'999,999.99')+' '+TRANSFORM(m_mov[i,6],'999,999.99')+' '+m_mov[i,7]+' '+LEFT(m_mov[i,8],20))
                NEXT
                op_tela(05,10,25,80,'Lancamentos')
                mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                setcor(1)
                DEVPOS(01,01);DEVOUT('  Data   ')
                DEVPOS(01,COL()+1);DEVOUT('         KM')
                DEVPOS(01,COL()+1);DEVOUT('Quantidade')
                DEVPOS(01,COL()+1);DEVOUT('     Valor')
                DEVPOS(01,COL()+1);DEVOUT('Ope')
                DEVPOS(01,COL()+1);DEVOUT('Motorista')
                @ 02,00 TO 02,80
                setcor(10);point := ACHOICE(03,01,20,79,m_tela,,,point);setcor(1)
                wvw_lclosewindow()

                DO CASE
                        CASE LASTKEY()=27
                                LOOP
                        CASE LASTKEY() = 13
                                mrecno          := m_mov[point,9]
                                mdata           := m_mov[point,1]
                                mkm             := m_mov[point,4]
                                mquantd         := m_mov[point,5]
                                mvalor          := m_mov[point,6]
                                mmotorista      := m_mov[point,8]
                                @ 02,14 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
                                @ 03,14 GET mkm PICT '999999' VALID IF(EMPTY(mkm),.F.,.T.)
                                @ 04,14 GET mquantd PICT '99,999.99'
                                @ 05,14 GET mvalor PICT '999,999.99'
                                @ 06,14 GET mmotorista
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF EMPTY(mquantd)
                                        IF op_simnao('N','QUANTIDADE estar com valor ZERO deseja incluir mesmo assim:') = 'N'
                                                LOOP
                                        ENDIF
                                ENDIF
                                SR_GoPhantom()
                                SKIP -1
                                IF mdata < movtra->data
                                        atencao('Nao pode ser feita pois a data estar menor que a ultima data incluida...')
                                        LOOP
                                ELSEIF mkm < movtra->km
                                        atencao('Nao pode ser feita pois a KM estar menor que a ultima KILOMETRAGEM incluida...')
                                        LOOP
                                ENDIF
                                IF nkey = 69 .OR. nkey = 101
                                        mopcao := op_simnao('N','Confirma a EXCLUSAO:')
                                        IF mopcao = 'S'
                                                sr_getconnection():exec('DELETE FROM sacmovtra  WHERE sr_recno = '+sr_cdbvalue(mrecno),,.f.)
                                                sr_getconnection():exec('COMMIT')
                                        ENDIF
                                ELSEIF nkey = 97 .OR. nkey = 65
                                        mopcao := op_simnao('S','Confirma a ALTERACAO:')
                                        IF mopcao = 'S'
                                                sr_getconnection():exec('UPDATE sacmovtra SET data = '+sr_cdbvalue(mdata)+',km = '+sr_cdbvalue(mkm)+',quantd = '+sr_cdbvalue(mquantd)+',valor = '+sr_cdbvalue(mvalor)+',motorista = '+sr_cdbvalue(mmotorista)+' WHERE sr_recno = '+sr_cdbvalue(mrecno),,.f.)
                                                sr_getconnection():exec('COMMIT')
                                        ENDIF
                                ENDIF
                ENDCASE
        ELSEIF nkey = 73 .OR. nkey = 105
                *************
                SELE('movtra')
                *************
                mdata   := mdata_sis
                mkm     := mquantd := mvalor  := mcod_forn := 0
                mmotorista := SPACE(30)
                @ 01,14 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,v_fornece(mcod_forn,01,19))
                READ
                v_fornece(mcod_forn,01,19)
                mforn := forn->razao
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                @ 02,14 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
                @ 03,14 GET mkm PICT '999999' VALID IF(EMPTY(mkm),.F.,.T.)
                @ 04,14 GET mquantd PICT '99,999.99'
                @ 05,14 GET mvalor PICT '999,999.99'
                @ 06,14 GET mmotorista
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF EMPTY(mquantd)
                        IF op_simnao('N','QUANTIDADE estar com valor ZERO deseja incluir mesmo assim:') = 'N'
                                LOOP
                        ENDIF
                ENDIF
                SR_GoPhantom()
                SKIP -1
                IF mdata < movtra->data
                        atencao('Nao pode ser feita pois a DATA estar menor que a ultima DATA incluida...')
                        LOOP
                ELSEIF mkm < movtra->km
                        atencao('Nao pode ser feita pois a KM estar menor que a ultima KILOMETRAGEM incluida...')
                        LOOP
                ENDIF
                mopcao := op_simnao('S','Confirma a Inclusao:')
                IF mopcao = 'S'
                        SR_GETCONNECTION():EXEC("INSERT INTO sacmovtra (data,cod_forn,forn,km,quantd,valor,cod_oper,motorista,sr_deleted) VALUES ("+sr_cdbvalue(mdata)+","+sr_cdbvalue(STRZERO(mcod_forn,4))+","+sr_cdbvalue(mforn)+","+sr_cdbvalue(mkm)+","+sr_cdbvalue(mquantd)+","+sr_cdbvalue(mvalor)+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(mmotorista)+",' ')",,.f.)
                        SR_GETCONNECTION():EXEC('COMMIT')
                ENDIF
        ELSEIF nkey = 99 .OR. nkey = 67
                op_tela(15,10,18,80,'CONSULTA/RELATORIO')
                mcod_forn := mkm_0 := 0
                mdata_ini := mdata_fim := mdata_sis
                mmotorista := SPACE(30)
                DEVPOS(00,01);DEVOUT('Fornecedor..:')
                DEVPOS(01,01);DEVOUT('Data Inicial:')
                DEVPOS(02,01);DEVOUT('Data Final..:')
                @ 00,14 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,v_fornece(mcod_forn,00,19))
                READ
                IF LASTKEY() = 27
                        //wvw_lclosewindow()
                        LOOP
                ENDIF
                v_fornece(mcod_forn,00,19)
                @ 01,14 GET mdata_ini VALID IF(EMPTY(mdata_ini),.F.,.T.)
                @ 02,14 GET mdata_fim VALID IF(EMPTY(mdata_fim) .AND. mdata_fim < mdata_ini,.F.,.T.)
                READ
                wvw_lclosewindow()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                m_mov:={}
                sr_getconnection():exec("SELECT * FROM sacmovtra WHERE cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4))+" AND data >= "+sr_cdbvalue(mdata_ini)+" AND data <= "+sr_cdbvalue(mdata_fim),,.t.,@m_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(m_mov) = 0
                        atencao('Nao existe movimento neste periodo...')
                ENDIF
                IF ! imp_arq('LANCTRAN.REL','R',,,'N')
                        LOOP
                ENDIF
                mtit := 'LANCAMENTOS de Kilometragem do Tranportador:'+STRZERO(mcod_forn,4)+'-'+forn
                mtipo:= DTOC(mdata_ini)+' a '+DTOC(mdata_fim)
                pag := i := mkm := mkm_ini := mkm_fim := mtot_quantd := ;
                mtot_valor := mtot_km := mkm_0 := 0
                mquantd := 0
                FOR i = 1 TO LEN(m_mov)
                        prog_imp(i,DTOC(m_mov[i,1]))
                        IF pag=0 .OR. PROW()>=59
                                pag=pag+1
                                IF pag>1
                                        EJECT
                                ENDIF
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                    Data          KM  Quantidade       Valor      KM Rod.  Op.  Motorista")
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                        ENDIF
                        //DEVPOS(PROW()+1,00);DEVOUT(m_mov[i,2]+'-'+m_mov[i,3]+'  '+DTOC(m_mov[i,1])+'  '+TRANSFORM(m_mov[i,4],'999,999')+'  '+TRANSFORM(m_mov[i,5],'999,999.99')+'  '+TRANSFORM(m_mov[i,6],'999,999.99')+'  '+IF(mkm=0,TRANSFORM(mkm,'999,999'),TRANSFORM(m_mov[i,4]-mkm,'999,999'))+'  '+IF(mkm=0,TRANSFORM(mkm,'999,999.99'),TRANSFORM((m_mov[i,4]-mkm)/mquantd,'999,999.99'))+'  '+m_mov[i,7]+'  '+LEFT(m_mov[i,8],20))
                        DEVPOS(PROW()+1,00);DEVOUT(m_mov[i,2]+'-'+m_mov[i,3]+'  '+DTOC(m_mov[i,1])+'-'+SUBSTR(datseman(m_mov[i,1]),1,3)+'  '+TRANSFORM(m_mov[i,4],'999,999')+'  '+TRANSFORM(m_mov[i,5],'999,999.99')+'  '+TRANSFORM(m_mov[i,6],'999,999.99')+'  '+IF(mkm=0,TRANSFORM(mkm,'999,999.999'),TRANSFORM(m_mov[i,4]-mkm,'999,999.999'))+'  '+m_mov[i,7]+'  '+LEFT(m_mov[i,8],20))
                        IF EMPTY(m_mov[i,6]) .AND. m_mov[i,5]=0
                                mkm_0 := mkm_0 + IF(mkm=0,0,(m_mov[i,4]-mkm))
                        ELSE
                                mtot_km := mtot_km + IF(mkm=0,0,(m_mov[i,4]-mkm))
                                mtot_quantd := mtot_quantd + mquantd
                                mquantd := m_mov[i,5]
                        ENDIF
                        mtot_valor := mtot_valor + m_mov[i,6]
                        mkm := m_mov[i,4]
                NEXT
                DEVPOS(PROW()+2,00);DEVOUT('***************** RESUMO ******************')
                DEVPOS(PROW()+1,00);DEVOUT('Total KM Rodado:'+TRANSFORM(mtot_km,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Total KM 0.....:'+TRANSFORM(mkm_0,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Total KM GERAL.:'+TRANSFORM(mtot_km + mkm_0,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Total de LITRO.:'+TRANSFORM(mtot_quantd,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Total em Valor.:'+TRANSFORM(mtot_valor,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('***************** MEDIAS ******************')
                DEVPOS(PROW()+1,00);DEVOUT('Media Geral KM/LITRO.:'+TRANSFORM((mtot_km + mkm_0)/mtot_quantd,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Media Geral VLR/LITRO:'+TRANSFORM(mtot_valor/mtot_quantd,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Media Geral VLR/KM...:'+TRANSFORM(mtot_valor/(mtot_km + mkm_0),'9,999,999.99'))
                DEVPOS(PROW()+2,00);DEVOUT(time())
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('LANCTRAN.REL')
        ENDIF
END
movtra->(DBCLOSEAREA())
wvw_lclosewindow()
RETURN .F.













