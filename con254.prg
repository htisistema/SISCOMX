* BAIXAR DUPLICATA ARQUIVO DE RETORNO
************************************************
FUNCTION con254()
*****************
LOCAL m_aux1:={},m_demo:={},mmotivo:=SPACE(20),mcaminho:='',mnota_xml :='',m_achou:={},m_naoachou:={},;
      cons_dupr := {}

PRIVATE mtraco := REPLI('=',80),mtit,mtipo,mpag,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),total_dup:=0

op_tela(0,10,50,85,'BAIXAR DUPLICATA ARQUIVO DE RETORNO',,1)
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        ***INICIA O ACBRMONITOR***
        IF ! inicia_acbr()
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        limpa(00,00,50,100)
        DEVPOS(2,01);DEVOUT('Caminho Arquivos de Retorno:')
        @ 04,00 TO 04,100
        setcor(3)
        DEVPOS(05,00);DEVOUT('   Data      Arquivo RETORNO')
        setcor(1)
        @ 06,00 TO 06,110
        SET CENTURY ON
        mcaminho := m_indiv[1,42]
        @ 02,31 GET mcaminho
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        m_aux1:={}
        m_demo:={}
        m_achou:={}
        m_naoachou:={}
        cons_dupr := {}
        total_dup:=0
        CLEAR GETS
        mensagem('Coletanto os Arquivos de Retorno....')
        m_aux1 := DIRECTORY(ALLTRIM(mcaminho)+'*.RET','D')
        m_aux1 := ASORT(m_aux1,,, { |x, y| x[3] > y[3] })
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        AADD(m_demo,' '+DTOC(m_aux1[i,3])+'  '+ALLTRIM(m_aux1[i,1]))
                NEXT
        ELSE
                atencao('Nao existe nenhuma ARQUIVO neste Caminho: '+ALLTRIM(mcaminho))
                LOOP
        ENDIF
        IF LEN(m_demo) = 0
                atencao('Nao existe nenhuma ARQUIVO....')
                LOOP
        ENDIF
        //m_demosort := ASORT(m_demo,,, { |x, y| x[2] < y[2] })
        m_demosort := m_demo
	point := 0
        mensagem('<CTRL + Page Down> p/Ultimo ARQUIVO - Escolha o arquivo e pressione <ENTER>')
        @ 46,00 TO 46,110
        DEVPOS(47,01);DEVOUT('TOTAL DE ARQUIVOS RETORNO:')
        DEVPOS(47,COL()+2);DEVOUT(ALLTRIM(TRANSFORM(LEN(m_demo),'999,999,999')))
        @ 48,00 TO 48,110
        setcor(3)
        setcor(10);point := ACHOICE(7,0,45,69,m_demosort,,,point);setcor(1)
        setcor(1)
        DO CASE
                CASE LASTKEY()=27
                        LOOP
                CASE LASTKEY() = 13
			mnota_xml := ALLTRIM(SUBSTR(m_demosort[point],12,30))
                        //ATENCAO(ALLTRIM(mcaminho)+mnota_xml)
                        //mnota_xml := ALLTRIM(SUBSTR(m_demosort[point],10))
                        //BOLETO.LerRetorno("c:\retorno\","c:\retorno\00001.ret" )
                        mretorno := IBR_COMANDO('BOLETO.LerRetorno('+ALLTRIM(mcaminho)+','+mnota_xml+',0,0)',,3)
                        mret := ALLTRIM(mcaminho)+'RETORNO.INI'
                        m_retorno:={}
                        linhas := 0
                        lin1 := ' '
                        linhas := MLCOUNT(MEMOREAD(mret),210)
                        i := 0
                        FOR i = 1 TO  linhas
                                lin1 := MEMOLINE(MEMOREAD(mret),100,i,,)
                                prog_imp(i,lin1)
                                IF SUBSTR(lin1,1,6) = 'Sacado'
                                        lin1 := SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin2 := SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin3 := SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin4 := SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin5 := SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin6 := SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin7 := SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin8 := SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin9 := SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin10:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin11:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin12:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin13:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin14:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin15:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin16:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin17:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin18:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin19:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin20:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin21:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin22:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin23:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin24:= SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        i++
                                        lin25 := SUBSTR(MEMOLINE(MEMOREAD(mret),100,i,,),AT('=',MEMOLINE(MEMOREAD(mret),100,i,,))+1)
                                        lin21 := STRTRAN(lin21,',','.')
                                        lin9 := STRTRAN(lin9,',','.')
                                        //atencao(lin21)
                                        AADD(m_retorno,{lin1,lin2,CTOD(lin3),lin4,lin5,lin6,lin7,lin8,lin9,lin10,lin11,lin12,lin13,lin14,lin15,lin16,lin17,lin18,lin19,lin20,lin21,lin22,lin23,lin24,lin25})
                                ENDIF
                        NEXT
                        fclose(mret)
                        m_retorno := ASORT(m_retorno,,, { |x, y| x[3] < y[3] })
                        //atencao(m_retorno[1,3])
                        i := total_dup:= 0
                        FOR i = 1 TO LEN(m_retorno)
                                prog_imp(i,ALLTRIM(m_retorno[i,5]))
                                IF SUBSTR(m_retorno[i,24],1,2) # '06'
                                        m_retorno[i,5] := '        '
                                        LOOP
                                ENDIF
                                cons_dupr := {}
                                sr_getconnection():exec("SELECT * FROM sacdupr WHERE duplicata  = "+sr_cdbvalue(ALLTRIM(m_retorno[i,5]))+" AND tipo = 'DU'",,.t.,@cons_dupr)
                                IF LEN(cons_dupr) > 0 .AND. EMPTY(cons_dupr[1,13])
                                        sr_getconnection():exec("UPDATE sacdupr SET datpag = " + sr_cdbvalue(CTOD(ALLTRIM(m_retorno[i,11])))  +;
                                                        ",vlpago = " + sr_cdbvalue(ROUND(VAL(m_retorno[i,21]),2))+;
                                                        ",pago   = " + sr_cdbvalue('B')  +;
                                                        ",banco   = " + sr_cdbvalue('B')  +;
                                                        ",mov_cx   = " + sr_cdbvalue('M')  +;
                                                        ",operador = " + sr_cdbvalue(cod_operado)+;
                                                        ",obs1 =  "+ sr_cdbvalue('ARQUIVO DE RETORNO:'+mnota_xml) +;
                                                        ",datproc = " + sr_cdbvalue(mdata_sis)+;
                                                        " WHERE  duplicata  = "+sr_cdbvalue(ALLTRIM(m_retorno[i,5]))+" AND tipo = 'DU'",,.f.)
                                        //AADD(m_achou,' '+ALLTRIM(m_retorno[i,5])+'  '+ALLTRIM(m_retorno[i,3])+' '+TRANSFORM(VAL(m_retorno[i,9]),'999,999,999.99')+' '+ALLTRIM(m_retorno[i,11])+' '+TRANSFORM(VAL(m_retorno[i,21]),'999,999,999.99'))
                                        AADD(m_achou,' '+ALLTRIM(m_retorno[i,5])+'  '+DTOC(m_retorno[i,3])+' '+TRANSFORM(VAL(m_retorno[i,9]),'999,999,999.99')+' '+ALLTRIM(m_retorno[i,11])+' '+TRANSFORM(VAL(m_retorno[i,21]),'999,999,999.99'))
                                        total_dup:=total_dup + VAL(m_retorno[i,21])
                                ELSEIF LEN(cons_dupr) > 0 .AND. ! EMPTY(cons_dupr[1,13])
                                        LOOP
                                ELSE
                                        AADD(m_naoachou,' '+ALLTRIM(m_retorno[i,5])+'  '+DTOC(m_retorno[i,3])+' '+TRANSFORM(VAL(m_retorno[i,9]),'999,999,999.99'))
                                        LOOP
                                ENDIF
                                sr_getconnection():exec('INSERT INTO saccaixa ('+;
                                        'empresa,'+;  //1
                                        'tipo,'+;     //2
                                        'nota,'+;     //3
                                        'num_dup,'+;  //4
                                        'num_ban,'+;  //5
                                        'documento,'+; //6
                                        'data,'+;      //7
                                        'descri1,'+;   //8
                                        'descri2,'+;   //9
                                        'venci,'+;     //10
                                        'valor,'+;     //11
                                        'cod_cli,'+;   //12
                                        'cod_vend,'+;  //13
                                        'cod_opera,'+; //14
                                        'pg,'+;        //15
                                        'op_pg,'+;     //16
                                        'valor_com,'+; //17
                                        'comissao,'+;  //18
                                        'hora,'+;      //19
                                        'tp_mov,SR_DELETED )'+; //20
                                        ' VALUES ('+;
                                        sr_cdbvalue('001')+','+; //1
                                        sr_cdbvalue('DU')+','+; //2
                                        sr_cdbvalue('DOC.PG  '    )+','+; //3
                                        sr_cdbvalue(cons_dupr[1,4] )+','+; //4
                                        sr_cdbvalue(cons_dupr[1,3] )+','+; //5
                                        sr_cdbvalue(cons_dupr[1,4] )+','+; //6
                                        sr_cdbvalue(mdata_sis)+','+; //7
                                        sr_cdbvalue(SUBSTR('DU'+ALLTRIM(m_retorno[i,5])+'-'+mnota_xml,1,40))+','+; //8
                                        sr_cdbvalue(' Data Recebimento: '+ALLTRIM(m_retorno[i,11]) )+','+; //9
                                        sr_cdbvalue(cons_dupr[1,11])+','+; //10
                                        sr_cdbvalue(ROUND(VAL(m_retorno[i,21]),2))+','+; //11
                                        sr_cdbvalue(cons_dupr[1,7] )+','+; //12
                                        sr_cdbvalue(cons_dupr[1,30])+','+; //13
                                        sr_cdbvalue(cod_operado   )+','+; //14
                                        sr_cdbvalue('*'           )+','+; //15
                                        sr_cdbvalue('P'           )+','+; //16
                                        sr_cdbvalue(ROUND(VAL(m_retorno[1,21]),2))+','+; //17
                                        sr_cdbvalue(iat(cons_dupr[1,32],5))+','+; //18
                                        sr_cdbvalue(TIME()        )+','+; //19
                                        sr_cdbvalue('B'           )+','+; //20
                                        sr_cdbvalue(' ')+')',,.f.)
                        NEXT
                        sr_getconnection():exec("COMMIT",,.f.)

                        //atencao( sr_ShowVector( m_retorno ))
                        //atencao( 'ACHOU'+m_qp+sr_ShowVector( m_achou))
                        //atencao( 'NAO ACHOU'+m_qp+sr_ShowVector( m_naoachou ))
                        //atencao(mretorno)
        ENDCASE
        IF LASTKEY() = 27 .OR. ! imp_arq('RETORNO.REL','R')
                LOOP
        ENDIF
        mpag = 1
        mtit := 'Arquivo de Retorno: '+mnota_xml
        mtipo := 'Documentos BAIXADOS'
        cabecalho(mpag,mtit,mtipo)
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,1);DEVOUT('Docmento')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Vencimento')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('   Valor Doc.')
        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Credito')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('    Valor Pago')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        i := 0
        FOR i = 1 TO LEN(m_achou)
                DEVPOS(PROW()+1,00);DEVOUT(m_achou[i])
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        DEVPOS(PROW()+1,1);DEVOUT('Docmento')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Vencimento')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('   Valor Doc.')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Credito')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('    Valor Pago')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
        NEXT
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,1);DEVOUT('Quantidade Documento........: '+TRANSFORM(LEN(m_achou),'999,999,999'))
        DEVPOS(PROW()+1,1);DEVOUT('Valor Total dos Documento R$: '+TRANSFORM(total_dup,'999,999,999.99'))
        EJECT
        mpag = 1
        mtit := 'Arquivo de Retorno: '+mnota_xml
        mtipo := 'Documentos NAO BAIXADOS'
        cabecalho(mpag,mtit,mtipo)
        DEVPOS(PROW()+1,1);DEVOUT('Docmento')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Vencimento')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('   Valor Doc.')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        i := 0
        FOR i = 1 TO LEN(m_naoachou)
                DEVPOS(PROW()+1,00);DEVOUT(m_naoachou[i])
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        DEVPOS(PROW()+1,1);DEVOUT('Docmento')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Vencimento')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('   Valor Doc.')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
        NEXT
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,1);DEVOUT('Quantidade Documento........: '+TRANSFORM(LEN(m_naoachou),'999,999,999'))
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('RETORNO.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
