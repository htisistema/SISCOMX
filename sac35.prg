*** SAC35.PRG: ALTERAR O LANCAMENTO DO CAIXA
********************************************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION sac35()
****************
LOCAL mprg:='SAC35',mdata1,mdata2,i:=0,point:=0,m_recno :={}

PRIVATE mtipo_imp,mimp_tipo:=0,mcons_caixa:={},m_caixa :={},m_pos :={}

mtipo_imp := m_indiv[1,18]
mdata1 := DATE()
mdata2 := DATE()+90
IF ! ver_nivel(mprg,'ALTERAR O(S) LANCAMENTO(S) DO CAIXA','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(05,10,40,100,'ALTERAR O(S) LANCAMENTO(S) DO CAIXA',,'*')
WHILE .T.
	exibi_prg(mprg)
        setcor(1)
        @ 02,00 TO 02,120
        DEVPOS(3,0);DEVOUT('   Data   Tp Nota     Documento       Venc.      Valor Tp  Ven.  Cli. Oper')
        @ 4,0 TO 4,92
        mensagem('Digite o periodo que deseja Alterar - <ESC> p/retornar')
        DEVPOS(00,00);DEVOUT('Data Inicial..:')
        DEVPOS(01,00);DEVOUT('Data Final....:')
        @ 00,16 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 01,16 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        READ
        IF LASTKEY() = 27 .OR. 'N' = op_simnao('S','Confirma o periodo [S/n]:')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('Aguarde um momento processando a consulta')
        m_caixa :={}
        mcons_caixa :={}
        m_pos :={}
        m_recno :={}
        sr_getconnection():exec("SELECT * FROM saccaixa WHERE  data <= "+sr_cdbvalue(mdata2)+" AND  data >= "+sr_cdbvalue(mdata1)+" ORDER BY data",,.t.,mcons_caixa)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_caixa) = 0
                atencao('Nao existe documento neste Periodo...')
                LOOP
        ENDIF
        i:=0
        FOR i = 1 TO LEN(mcons_caixa)
                prog_imp(i,DTOC(mcons_caixa[i,3]))
                AADD(m_recno,mcons_caixa[i,33])
                AADD(m_pos,i)
                AADD(m_caixa,' '+DTOC(mcons_caixa[i,3])+' '+mcons_caixa[i,2]+' '+mcons_caixa[i,4]+' '+mcons_caixa[i,8]+' '+DTOC(mcons_caixa[i,9])+' '+TRANSFORM(mcons_caixa[i,10],'999,999.99')+' '+mcons_caixa[i,11]+'  '+mcons_caixa[i,15]+'  '+STR(mcons_caixa[i,16],5)+'  '+mcons_caixa[i,17])
        NEXT
        *** RESUMO DA CONSULTA ***
        setcor(1)
        CLEAR TYPEAHEAD
        mensagem("<ESC> Retorna  -  <ENTER> p/Resumo" )
        setcor(10);point := ACHOICE(5,0,39,90,m_caixa,,,point);setcor(1)
        DO CASE
                CASE LASTKEY()=27
                        LOOP
                CASE LASTKEY() = 13
                        op_tela(10,10,20,40,' Registro a ser Alterado')
                        DEVPOS(00,01);DEVOUT('Data........:')
                        DEVPOS(01,01);DEVOUT('Tipo........:')
                        DEVPOS(02,01);DEVOUT('Nota........:')
                        DEVPOS(03,01);DEVOUT('Documento...:')
                        DEVPOS(04,01);DEVOUT('Vencimento..:')
                        DEVPOS(05,01);DEVOUT('Valor.......:')
                        DEVPOS(06,01);DEVOUT('Tipo Venda..:')
                        DEVPOS(07,01);DEVOUT('Cliente.....:')
                        DEVPOS(08,01);DEVOUT('Vendedor....:')
                        DEVPOS(09,01);DEVOUT('Operador....:')
                        setcor(1)
                        @ 00,15 GET mcons_caixa[m_pos[point],3]
                        @ 01,15 GET mcons_caixa[m_pos[point],2]
                        @ 02,15 GET mcons_caixa[m_pos[point],4]
                        @ 03,15 GET mcons_caixa[m_pos[point],8]
                        @ 04,15 GET mcons_caixa[m_pos[point],9]
                        @ 05,15 GET mcons_caixa[m_pos[point],10] PICT '999,999.99'
                        @ 06,15 GET mcons_caixa[m_pos[point],11]
                        @ 07,15 GET mcons_caixa[m_pos[point],16]
                        @ 08,15 GET mcons_caixa[m_pos[point],15]
                        @ 09,15 GET mcons_caixa[m_pos[point],17]
                        READ
                        IF LASTKEY() = 27 .OR. 'N' = op_simnao('S','Confirma a Alteracao [S/n]:')
                                wvw_lclosewindow()
                        ENDIF
                        sr_getconnection():exec("UPDATE saccaixa SET data = "+ sr_cdbvalue(mcons_caixa[m_pos[point],3])+',tipo = '+sr_cdbvalue(mcons_caixa[m_pos[point],2])+',nota='+ sr_cdbvalue(mcons_caixa[m_pos[point],4])+',documento='+ sr_cdbvalue(mcons_caixa[m_pos[point],8])+',venci='+ sr_cdbvalue(mcons_caixa[m_pos[point],9])+',valor='+ sr_cdbvalue(mcons_caixa[m_pos[point],10])+',tipo_comp='+ sr_cdbvalue(mcons_caixa[m_pos[point],11])+',cod_cli='+ sr_cdbvalue(mcons_caixa[m_pos[point],16])+',cod_vend='+ sr_cdbvalue(mcons_caixa[m_pos[point],15])+',cod_opera='+ sr_cdbvalue(mcons_caixa[m_pos[point],17])+' WHERE sr_recno = '+sr_cdbvalue(m_recno[m_pos[point]]),,.f.)
                        sr_getconnection():exec('COMMIT',,.f.)
                        wvw_lclosewindow()
        ENDCASE
ENDDO
RETURN NIL
******************************* FIM **************************************8


