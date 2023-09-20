* RELATORIO DO RELOGIO DE PONTO
********************************
FUNCTION sacrl2()
********************
LOCAL mprg := 'SACRL2',li:=18,ci:=05,lb:=21,cb:=58,;
      opcao,i:=0,lba:=16,cba:=58,m_dados:={},m_ponto:={},mtot_horas:=0,mhoras,mhora_ant:='',mdata_ant,;
      point:=0,mhora,mdata1,mdata2,pag := 0,mtit:='RELOGIO DE PONTO',mprimeiro:=0,msegundo:=0,mhora_almoco:=0,;
      y:= 0,x:= 0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtipo,mcod_oper:=0

PUBLIC senha_acess,nivel_acess,cod_operado

IF ! ver_nivel(mprg,'RELATORIO DO RELOGIO DE PONTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*-----------------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*-----------------------------------------------------
op_tela(03,05,08,58,' RELATORIO/CONSULTA DO RELOGIO DE PONTO ',,'*')
WHILE .T.
        exibi_prg(mprg)
        limpa(00,00,30,120)
        ASIZE(m_dados,0)
        ASIZE(m_ponto,0)
        mdata1:= mdata_sis
        mdata2:= CTOD('  /  /  ')
        mensagem('Digite o Codigo do Operador e Senha')
        setcor(1)
        DEVPOS(0,1);DEVOUT('Codigo Operador:')
        DEVPOS(1,1);DEVOUT('Data Inicial...:')
        DEVPOS(2,1);DEVOUT('Data Final.....:')
        //DEVPOS(3,1);DEVOUT('Hora Almoco....:')
        //DEVPOS(4,1);DEVOUT('Operador   Data       Hora')
        @ 0,18 GET mcod_oper PICT '999' VALID IF(EMPTY(mcod_oper),.F.,ven(mcod_oper,0,22))
        @ 1,18 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,18 GET mdata2 VALID IF(EMPTY(mdata2) .OR. mdata2 < mdata1,.F.,.T.)
        //@ 3,18 GET mhora_almoco PICT '99:99:99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        q_cons := {}
        //sr_getconnection():exec("SELECT * FROM sacrl WHERE cod_oper = "+sr_cdbvalue(STRZERO(mcod_oper,3))+' AND data >= '+sr_cdbvalue(mdata1)+' AND data <= '+sr_cdbvalue(mdata2)+' ORDER BY data,hora',,.t.,@q_cons)
        sr_getconnection():exec("SELECT data FROM sacrl WHERE cod_oper = "+sr_cdbvalue(STRZERO(mcod_oper,3))+' AND data >= '+sr_cdbvalue(mdata1)+' AND data <= '+sr_cdbvalue(mdata2)+' GROUP BY data,data ORDER BY data',,.t.,@q_cons)
        IF LEN(q_cons) = 0
                atencao('Nao existe lancamento neste periodo deste operador...')
                LOOP
        ENDIF
        i:=0
        IF ! imp_arq(marq,'R')
                LOOP
        ENDIF
        i:=pag := mdia_horas:=mtot_horas:=0
        mtipo := 'OPERADOR: '+STRZERO(mcod_oper,3)+' - '+sen->snome
        FOR i=1 TO LEN(q_cons)
                IF pag=0 .OR. PROW()>=59
                        pag:=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,00);DEVOUT("Cod.Oper   Data   Hora")
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",80))
                ENDIF
                m_dados := {}
                sr_getconnection():exec("SELECT * FROM sacrl WHERE cod_oper = "+sr_cdbvalue(STRZERO(mcod_oper,3))+' AND data = '+sr_cdbvalue(q_cons[i,1])+' ORDER BY hora',,.t.,@m_dados)
                IF LEN(m_dados) = 0
                        LOOP
                ENDIF
                y:= x:=mhora_almoco:=0
                IF LEN(m_dados) <= 3
                        DEVPOS(PROW()+1,00);DEVOUT(STRZERO(mcod_oper,3))
                        FOR y = 1 TO LEN(m_dados)
                                DEVPOS(PROW()+x,10);DEVOUT(m_dados[y,2])
                                DEVPOS(PROW(),PCOL()+3);DEVOUT(m_dados[y,3])
                                x++
                                IF LEN(m_dados) >= 2 .AND. y = 2
                                        mhora_almoco := hr_seg(ELAPTIME(m_dados[1,3],m_dados[1,3]))
                                        mprimeiro := hr_seg(ELAPTIME(m_dados[1,3],m_dados[2,3]))
                			mhoras_dia := TSTRING(hr_seg(ELAPTIME(m_dados[1,3],m_dados[2,3])))
                			DEVPOS(PROW()+1,00);DEVOUT("                     --------")
                                        DEVPOS(PROW()+1,0);DEVOUT('Total PRIMEIRO Turno:'+TSTRING(mprimeiro))
                        	        DEVPOS(PROW()+1,00)
                                	mtot_horas := mtot_horas + hr_seg(ELAPTIME(TRANSFORM(mhora_almoco,'99:99:99'),mhoras_dia))
                                        //atencao("TOTAL DE HORAS DIA..: "+TRANSFORM(mtot_horas,'99:99:99'))
                                        //atencao("TOTAL DE HORAS DIA..: "+TSTRING(mtot_horas))

                                ENDIF
                        NEXT
                        mprimeiro := msegundo := 0
                ELSE
                        DEVPOS(PROW()+1,00);DEVOUT(STRZERO(mcod_oper,3))
                        DEVPOS(PROW(),10);DEVOUT(m_dados[1,2])
                        DEVPOS(PROW(),PCOL()+3);DEVOUT(m_dados[1,3])
                        DEVPOS(PROW()+1,10);DEVOUT(m_dados[2,2])
                        DEVPOS(PROW(),PCOL()+3);DEVOUT(m_dados[2,3])
                        mprimeiro := hr_seg(ELAPTIME(m_dados[1,3],m_dados[2,3]))
			DEVPOS(PROW()+1,00);DEVOUT("                     --------")
                        DEVPOS(PROW()+1,0);DEVOUT('Total PRIMEIRO Turno:'+TSTRING(mprimeiro))
                        mhora_almoco := hr_seg(ELAPTIME(m_dados[2,3],m_dados[3,3]))
                        //DEVPOS(PROW()+1,0);DEVOUT('Horas de almoco.....:'+TSTRING(mhora_almoco))
                        DEVPOS(PROW()+1,10);DEVOUT(m_dados[3,2])
                        DEVPOS(PROW(),PCOL()+3);DEVOUT(m_dados[3,3])
                        DEVPOS(PROW()+1,10);DEVOUT(m_dados[4,2])
                        DEVPOS(PROW(),PCOL()+3);DEVOUT(m_dados[4,3])
                        msegundo := hr_seg(ELAPTIME(m_dados[3,3],m_dados[4,3]))
			DEVPOS(PROW()+1,00);DEVOUT("                     --------")
                        DEVPOS(PROW()+1,0);DEVOUT('Total SEGUNDO Turno.:'+TSTRING(msegundo))
			mhoras_dia := TSTRING(hr_seg(ELAPTIME(m_dados[1,3],m_dados[LEN(m_dados),3])))
			//atencao(mhoras_dia+' - '+TRANSFORM(mhora_almoco,'99:99:99'))
	                //DEVPOS(PROW()+1,00);DEVOUT("Geral de Horas no Dia:  "+TSTRING(ELAPTIME(TRANSFORM(msegundo,'99:99:99'))+ELAPTIME(TRANSFORM(mprimeiro,'99:99:99'))))
        	        DEVPOS(PROW()+1,00);DEVOUT("Hora do Almoco no Dia:  "+TSTRING(mhora_almoco))
//              	DEVPOS(PROW()+1,00);DEVOUT("Total de Horas no Dia:  "+TSTRING(hr_seg(ELAPTIME(TRANSFORM(mhora_almoco,'99:99:99'),mhoras_dia))))
	                DEVPOS(PROW()+1,00);DEVOUT("Total de Horas no Dia"+TSTRING(mprimeiro+msegundo))
        	        DEVPOS(PROW()+1,00)
                	mtot_horas := mtot_horas + hr_seg(ELAPTIME(TRANSFORM(mhora_almoco,'99:99:99'),mhoras_dia))
                        //atencao("TOTAL DE HORAS DIA..: "+TRANSFORM(mtot_horas,'99:99:99'))
                ENDIF
        NEXT
        //DEVPOS(PROW()+2,00);DEVOUT('************************************')
        //DEVPOS(PROW()+1,00);DEVOUT("Media de Horas p/Dia: "+TSTRING(mtot_horas/(mdata2-mdata1)))
        //DEVPOS(PROW()+1,00);DEVOUT("TOTAL GERAL DE HORAS: "+TSTRING(mtot_horas))
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
CLOSE sen
wvw_lclosewindow()
RETURN NIL
********************************** f i m **************************************
