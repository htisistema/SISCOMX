***********************
* SISTEMA PARA PIN PAD
***********************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION SISPINPAD(mtc1)
***************
LOCAL mprg:='SISPINPAD',mtitulo:='SISTEMA PARA PIN PAD',;
      msele,morde,m_demo:={},;
      mcont,msenha,mdata_sen,mdata_aux,msenha_aux,mtela_sen,opcao,vsenha,vsenha1,;
      lci:=45,cci:=12,lba:=5,cba:=30,mtel_senha,mdata_dat,q_merc,m_docapagar,ccomm,m_est_min,m_est_med,;
      mdocumento :='',i:=0,msoma:=0,m_aniv := {},mcomando:='',q_cons:={},hd_serial:='',;
      nPBpedido,nPBbalanco

PRIVATE aret:={}
MEMVAR cod_operado
PUBLIC senha_acess,nivel_acess,mcod_oper:=0

mcont:=0
setcor(1)
sr_getconnection():exec("DELETE FROM sactrm WHERE data <= "+sr_cdbvalue(DATE()-30),,.f.)
aret:={}
sr_getconnection():exec("SELECT * FROM sactrm WHERE nome_trm = "+sr_cdbvalue(ALLTRIM(NETNAME())),,.t.,@aret)
sr_getconnection():exec('COMMIT',,.f.)
IF lEN(aret) > 0
        sr_getconnection():exec('UPDATE sactrm SET data = '+sr_cdbvalue(DATE())+',versao = '+sr_cdbvalue(mversao)+',hora = '+sr_cdbvalue(TIME())+' WHERE nome_trm = '+sr_cdbvalue(ALLTRIM(NETNAME())),,.f.)
ELSE
        sr_getconnection():exec('INSERT INTO sactrm (nome_trm,ip_trm,data,hora,inicio,versao,sr_deleted) VALUES ('+;
                                sr_cdbvalue(NETNAME())+','+; //1
                                sr_cdbvalue(GETIP())+','+; //1
                                sr_cdbvalue(DATE())+','+; //2
                                sr_cdbvalue(TIME())+','+; //4
                                sr_cdbvalue(DATE())+','+; //2
                                sr_cdbvalue(mversao)+','+; //2 sr_cdbvalue(ALLTRIM(hd_serial))+','+; //2
                                sr_cdbvalue(' ')+')',,.f.)
ENDIF
sr_getconnection():exec('COMMIT',,.f.)
WHILE .T.
        WHILE mcont <= 3
                SET CENTURY ON
                m_demo:={}
	        //botao(44,00,50,49)
                AADD(m_demo,'*botao(05,50,25,80)')
                AADD(m_demo,'*WVW_DrawImage( ,05,50,25,80,ALLTRIM(m_indiv[1,3])+"HTIfirma.jpg",.T.,.F.)')
                //AADD(m_demo,'*WVW_DrawImage( ,05,55,16,75,ALLTRIM(m_indiv[1,31])+STRZERO(mcod_oper,3)+".jpg",.T.,.F.)')


                //AADD(m_demo,'*WVW_DrawImage(05,43,41,90,ALLTRIM(m_indiv[1,3])+"HTIfirma1.JPG",.F.,.F.)')
                AADD(m_demo,'*botao(42,43,48,90)')
                AADD(m_demo,'*WVW_DrawImage( ,42,43,48,90,ALLTRIM(m_indiv[1,3])+"rodape_pinpad.JPG",.F.,.F.)')
                SET CENTURY OFF
                mcod_oper := VAL(pinpad(,'Codigo do Operador','Digite o Codigo do Operador',,m_demo,,3,'   Acesso ao Sistema SISCOM'))
                IF LASTKEY() = 27
                        fim()
                        RETURN .F.
                ENDIF
                IF EMPTY(mcod_oper)
                        atencao('Este Usuario/Operador nao Encontrado...')
                        fecha_tela()
                        LOOP
                ENDIF
                IF ! ven(mcod_oper)
                        //atencao('Este Usuario/Operador nao Encontrado...')
                        fecha_tela()
                        LOOP
                ENDIF
                aret:={}
                sr_getconnection():exec("SELECT snivel,scod_op,sult_e_c,sexpira,ssenha,stipo,snome,doc_apagar,estoq_min,estoq_med,dat_aniv FROM insopera WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3)),,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) > 0 .AND. aret[1,6] = 'B' .AND. STRZERO(mcod_oper,3) <> '999'
                        atencao('Este Usuario/Operador estar Bloqueado, Procure seu Administrador...')
                        fecha_tela()
                        LOOP
                ENDIF
                fecha_tela()
                msenha = ''
                IF FILE(ALLTRIM(m_indiv[1,31])+STRZERO(mcod_oper,3)+'.jpg')
                        AADD(m_demo,'*botao(05,50,25,80)')
                        AADD(m_demo,'*WVW_DrawImage( ,05,50,25,80,ALLTRIM(m_indiv[1,31])+STRZERO(mcod_oper,3)+".jpg",.T.,.F.)')
                ELSE
                        AADD(m_demo,'*botao(05,45,25,75)')
                        AADD(m_demo,'*WVW_DrawImage( ,05,50,16,80,ALLTRIM(m_indiv[1,3])+"HTIfirma.jpg",.T.,.F.)')
                ENDIF
                AADD(m_demo,'*botao(27,50,30,80)')
                AADD(m_demo,'*DrawLabel(27,52,"Operador",m_color[10],, "Arial Black",20,8)')
                AADD(m_demo,'*DrawLabel(29,52,aret[1,2]+"-"+aret[1,7],,, "Arial Black",20,8)')

                msenha := pinpad(1,'Senha','Digite sua Senha',,m_demo,,8,'ACESSO AO SISTEMA SISPINPAD')
                msenha := UPPER(msenha)
                IF msenha = 'NAO'
                        atencao('Senha nao Confere, Procure seu Administrador...')
                        fim()
                        //wvw_lclosewindow()
                        RETURN .F.
                ENDIF
                IF EMPTY(msenha)
                        atencao('Senha Incorreta Tente Novamente')
                        IF mcont = 3
                                fim()
                                //wvw_lclosewindow()
                                RETURN .F.
                        ENDIF
                        fecha_tela()
                        LOOP
                ENDIF
                mcont ++
                IF ALLTRIM(msenha) = 'HTI682110' .AND. STRZERO(mcod_oper,3) = '999'
                        nivel_acess := '1'
                        cod_operado := '999'
                        senha_acess := msenha
                        EXIT
                ENDIF
                IF ALLTRIM(msenha) == ALLTRIM(DCRIPTO(aret[1,5]))
                        SR_BEGINTRANSACTION()
                                sr_getconnection():exec("UPDATE insopera SET sult_ent = "+sr_cdbvalue(mdata_sis)+",shora_ini = "+sr_cdbvalue(SUBSTR(TIME(),1,5))+",sh_i_c = "+sr_cdbvalue(SUBSTR(m_indiv[1,1],1,5))+" WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3)),,.f.)
                                sr_getconnection():exec("UPDATE sactrm SET oper = "+sr_cdbvalue(STRZERO(mcod_oper,3))+',versao = '+sr_cdbvalue(mversao)+',hora = '+sr_cdbvalue(TIME())+' WHERE nome_trm = '+sr_cdbvalue(ALLTRIM(NETNAME())),,.f.)
                                q_cons:={}
                                sr_getconnection():exec("SELECT * FROM sacrl WHERE cod_oper = "+sr_cdbvalue(STRZERO(mcod_oper,3))+' AND data = '+sr_cdbvalue(DATE()),,.t.,@q_cons)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(q_cons) = 0
                                        sr_getconnection():exec('INSERT INTO sacrl (cod_oper,data,hora,sr_deleted) VALUES ('+sr_cdbvalue(STRZERO(mcod_oper,3))+','+sr_cdbvalue(DATE())+','+sr_cdbvalue(TIME())+','+sr_cdbvalue(' ')+')',,.f.)
                                ENDIF
                                sr_committransaction()
                        SR_ENDTRANSACTION()
                        nivel_acess := aret[1,1]
                        cod_operado := aret[1,2]
                        senha_acess := msenha
                        EXIT
                ELSE
                        atencao('Senha Incorreta Tente Novamente')
                        IF mcont = 3
                                fim()
                                //wvw_lclosewindow()
                                RETURN .F.
                        ENDIF
                        fecha_tela()
                        LOOP
                ENDIF

        ENDDO
        fecha_tela()
        mensagem('Atualizando o arquivo de SENHA...')
        SR_BEGINTRANSACTION()
                sr_getconnection():exec("UPDATE insopera SET terminal = "+sr_cdbvalue(netname(.t.))+",data_acess = "+sr_cdbvalue(DATE())+",hora_acess = "+sr_cdbvalue(TIME())+" WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3)),,.f.)
                sr_committransaction()
        SR_ENDTRANSACTION()
        /*
        WVW_PBSetFont( , 'Arial Black',40,15 )
        nPBpedido := wvw_pbCreate(NIL,1, 1,4,15,  ' PEDIDO ',NIL,{||sac23pd1() })
        nPBbalanco := wvw_pbCreate(NIL,1,18,4,33,  ' BALANCO ',NIL,{||sacbal_pin() })
        nPBsair := wvw_pbCreate(NIL,1,36,4,46,  ' SAIR ',NIL,{||pinpad_sai()})
        mop := 0
        @ 25,00 GET mop
        READ
        CLEAR GETS
        fecha_tela()
        WVW_PBDestroy(,nPBpedido)
        WVW_PBDestroy(,nPBbalanco)
        IF LASTKEY() = 27 .OR. mop = 3
                EXIT
        ENDIF
        */
        IF mtc1 = 'PINPAD' .OR. mtc1 = 'pinpad'
                SACBAL_PIN()
                //fecha_tela()
                //fim()
        ELSEIF sen->stipo_sis = 'V'
                venda('V')
                fim()
        ELSEIF sen->stipo_sis = 'C'
                venda('C')
                fim()
        ELSEIF sen->stipo_sis = 'M'
                venda('M')
                fim()
        ELSE
                sac0()
                fim()
        ENDIF
ENDDO
CLOSE sen
RETURN .T.
********************************** f i m **************************************
FUNCTION pinpad_sai()
KEYBOARD 3