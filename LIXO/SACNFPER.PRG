*********************************************
* IMPRIMI NOTA FISCAL DO "PERFILPAST"
********************************************
*icmsub

FUNCTION sacnfper(m_nota,via,texto)
*********************
LOCAL mprg:='PERFIL',mcont_nota,lci,cci,lba,cba,mobs1,mobs2,mobs3,mobs4,mobs5,micm,mdoc,maux,;
      mdoc_aux,mpeso_liq:=0,mpeso:=0,mbase_aux,;
      f:=0,i:=0,mvlr_icmsub:=0,mbase_icmsub:=0
local nErr, nPos,;
        vEmp := {},;
        nCnn,oSql,;
        cComm, apCode,aret

MEMVAR mseguro,mencargo,mtipo_nota,mpis,mconfis,micms_desc
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)
IF marca = '*'
        mdocumento := STRZERO(VAL(mdocumento)+1,6)
ENDIF
IF mtipo_nota = 'N'
        mtot_quantd := 1
        mtot_icm := mtot_ipi :=mtot_nota:=mtot_icmf:=mtot_peso:=mtot_liq := ;
        mbase_icm:=0
ENDIF
marca := '*'
lci := 17
cci := 01
lba := 22
cba := 70
mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := SPACE(55)
mpeso := mpeso_liq:=0
CLEAR GETS
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        mtot_quantd := mensagem2('Quantidade de item:',mtot_quantd,'999,999.99',,'N')
        mpis := mconfis := micms_desc := mvlr_icmsub := mbase_icmsub := 0
        IF (mcod_nat = '6.109' .OR. mcod_nat = '6.110') .AND. mtipo_nota = 'N'
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        IF mcod_fat = '02'
                                mpis :=iat(mpis + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.0165,2)
                                mconfis :=iat(mconfis + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.076,2)
                                micms_desc :=iat(micms_desc+((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,2)
*                               mtot_desc :=iat(mtot_desc + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,2)
                        ELSE
                                mpis :=iat(mpis + (m_nota[i,7] * m_nota[i,5])*.0165,2)
                                mconfis :=iat(mconfis + (m_nota[i,7] * m_nota[i,5])*.076,2)
                                micms_desc :=iat(micms_desc+(m_nota[i,7] * m_nota[i,5])*.12,2)
*                               mtot_desc :=iat(mtot_desc + (m_nota[i,7] * m_nota[i,5])*.12,2)
                        ENDIF
                NEXT
*               mobs1 := 'OBS.: INSC. SUFRAMA             (R$:'+ALLTRIM(TRANSFORM(mtot_desc,'999,999.99'))+') " DESCONTO REFERENTE'
                mobs1 := 'OBS.: INSC. SUFRAMA             (R$:'+ALLTRIM(TRANSFORM(mpis+mconfis+micms_desc,'999,999.99'))+') " DESCONTO REFERENTE'
                mobs2 := '      ICMS DE ACORDO COM PARAGRAFO 4o. ART.690 DO DECRETO 14.876/91 "'
                mobs3 := '      IPI ISENTO CONF.ART.59 INCISO III DO DECRETO 2637/98'
                mobs4 := SPACE(55)
        ELSEIF mtipo_nota = 'C'
                mpis :=iat(mtot_nota*.0165,2)
                mconfis :=iat(mtot_nota*.076,2)
                micms_desc :=iat(mtot_nota*.12,2)
                mobs1 := 'OBS.: INSC. SUFRAMA             (R$:'+ALLTRIM(TRANSFORM(mpis+mconfis+micms_desc,'999,999.99'))+') " DESCONTO REFERENTE'
                mobs2 := '      ICMS DE ACORDO COM PARAGRAFO 4o. ART.690 DO DECRETO 14.876/91 "'
                mobs3 := '      IPI ISENTO CONF.ART.59 INCISO III DO DECRETO 2637/98'
                mobs4 := SPACE(55)
        ENDIF
        opcao := op_simnao('N','Deseja descrever alguma OBSERVACAO na nota '+texto+':')
        IF opcao = 'S'
                botao(lci,cci,lba,cba,,' OBSERVACAO nota normal ICM ')
                @ lci+1,cci+1 GET mobs1 PICT '@!'
                @ lci+2,cci+1 GET mobs2 PICT '@!'
                @ lci+3,cci+1 GET mobs3 PICT '@!'
                @ lci+4,cci+1 GET mobs4 PICT '@!'
                READ
                opcao := op_simnao('S','Confirma as observacoes:')
                IF opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        mcont_nota := 0
        IF LEN(m_nota)/15 <= 1
                mpag := 1
        ELSEIF LEN(m_nota)/14 <= 2
                mpag := 2
        ELSEIF LEN(m_nota)/14 <= 3
                mpag := 3
        ELSEIF LEN(m_nota)/14 <= 4
                mpag := 4
        ELSEIF LEN(m_nota)/14 <= 5
                mpag := 5
        ENDIF
        IF via = '1'
                IF LEN(m_nota) = 0
                        RETURN NIL
                ENDIF
	        IF m_set[1,117] = 'S'
	                aret:={}                                                                                                                                                                                                                                                                                                                                                                                               
        	        //sr_starttrace()                                                                                                                                                                                                                                                                                                                                                                                      
                	lExit := .T.                                                                                                                                                                                                                                                                                                                                                                                           
	                while lExit                                                                                                                                                                                                                                                                                                                                                                                            
        	        sr_begintransaction()                                                                                                                                                                                                                                                                                                                                                                                  
                	try                                                                                                                                                                                                                                                                                                                                                                                                    
	                IF msai_ent = 'S'                                                                                                                                                                                                                                                                                                                                                                                      
        	                sr_getconnection():exec( "select numero from  sacnota where sr_recno = 1 for update with lock",,.t.,@aret)                                                                                                                                                                                                                                                                                     
                	        if len(aRet)  == 0                                                                                                                                                                                                                                                                                                                                                                             
                        	        sr_getconnection():exec("insert into sacnota (numero,sr_deleted,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ',1)",,.f.)                                                                                                                                                                                                                                                   
                                	mdocumento = STRZERO(1,6)                                                                                                                                                                                                                                                                                                                                                              
	                        else                                                                                                                                                                                                                                                                                                                                                                                           
        	                        mdocumento = STRZERO(VAL(aret[1,1])+1,6)                                                                                                                                                                                                                                                                                                                                               
                	                mnum = strzero(VAL(aret[1,1])+1,6)                                                                                                                                                                                                                                                                                                                                                     
                        	        sr_getconnection():exec("update sacnota set numero = " + sr_cdbvalue(mnum) + " where sr_recno = 1 ",,.f.)                                                                                                                                                                                                                                                                              
	                        endif                                                                                                                                                                                                                                                                                                                                                                                          
        	        ELSE                                                                                                                                                                                                                                                                                                                                                                                                   
                	        sr_getconnection():exec( "select numeroe from  sacnotae where sr_recno = 1 for update with lock",,.t.,@aret)                                                                                                                                                                                                                                                                                   
                        	if len(aRet)  == 0                                                                                                                                                                                                                                                                                                                                                                             
                                	sr_getconnection():exec("insert into sacnotae (numeroe,sr_deleted,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ',1)",,.f.)                                                                                                                                                                                                                                                 
	                                mdocumento = STRZERO(1,6)                                                                                                                                                                                                                                                                                                                                                              
        	                else                                                                                                                                                                                                                                                                                                                                                                                           
                	                mdocumento = STRZERO(VAL(aret[1,1])+1,6)                                                                                                                                                                                                                                                                                                                                               
                        	        mnum = strzero(VAL(aret[1,1])+1,6)                                                                                                                                                                                                                                                                                                                                                     
                                	sr_getconnection():exec("update sacnotae set numeroe = " + sr_cdbvalue(mnum) + " where sr_recno = 1 ",,.f.)
	                        endif                                                                                                                                                                                                                                                                                                                                                                                          
        	                                                                                                                                                                                                                                                                                                                                                                                                               
	                ENDIF                                                                                                                                                                                                                                                                                                                                                                                                  
        	        sr_committransaction()                                                                                                                                                                                                                                                                                                                                                                                 
                	lExit:=.F.                                                                                                                                                                                                                                                                                                                                                                                             
	                catch e 	                                                                                                                                                                                                                                                                                                                                                                                               
        	        tracelog(valtoprg())                                                                                                                                                                                                                                                                                                                                                                                   
                	sr_COMMITtransaction()                                                                                                                                                                                                                                                                                                                                                                               
	                end                                                                                                                                                                                                                                                                                                                                                                                                    
        	        sr_endtransaction()                                                                                                                                                                                                                                                                                                                                                                                    
                	end                                                                                                                                                                                                                                                                                                                                                                                                    
		ELSE
	                IF msai_ent = 'S'                                                                                                                                                                                                                                                                                                                                                                                      
                                sr_getconnection():exec("update sacnota set numero = " + sr_cdbvalue(mdocumento) + " where sr_recno = 1 ",,.f.)
	                ELSE                                                                                                                                                                                                                                                                                                                                                                                                   
                                sr_getconnection():exec("update sacnotae set numeroe = " + sr_cdbvalue(mdocumento) + " where sr_recno = 1 ",,.f.)
        	        ENDIF                                                                                                                                                                                                                                                                                                                                                                                                  
		ENDIF	       
                sr_getconnection():exec("COMMIT",,.f.)
                setcor(1)                                                                                                                                                                                                                                                                                                                                                                                              
		atencao('Foi Gerada a Nota Fiscal No.: '+mdocumento)
/*
                IF msai_ent = 'S'
                        ***************
                        SELE('nota');ORDSETFOCUS(1)
                        ***************
                        IF ADIREG()
                                nota->data_nt := mdata
                                nota->numero := mdocumento
                                DBUNLOCK()
                                DBCOMMIT()
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo (SACNOTA)!!!')
                                LOOP
                        ENDIF
                ELSE
                        ***************
                        SELE('notae');ORDSETFOCUS(1)
                        ***************
                        IF ADIREG()
                                notae->data_nte := mdata
                                notae->numeroe := mdocumento
                                DBUNLOCK()
                                DBCOMMIT()
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo (SACNOTA)!!!')
                                LOOP
                        ENDIF
                ENDIF
*/
                IF mtipo_nota = 'N'
                        mtot_ipi  := mtot_nota := mtot_icmf := mbase_icm := 0
                ENDIF
                mdoc := mdocumento
                mdoc_aux := mdocumento
                maux := SPACE(10)
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        f++
                        ****************
                        SELE('merc');ORDSETFOCUS(1)
                        GO TOP
                        ****************

                        SEEK m_nota[i,21]

                        IF BLOQREG()
                                IF msai_ent = 'S'
                                        merc-> saldo_fis := merc-> saldo_fis - m_nota[i,5]
                                        IF EMPTY(cli->insc)
                                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                                        mbase_aux := iat((m_nota[i,12] * m_nota[i,5])+((m_nota[i,12] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                                ELSE
                                                        mbase_aux := iat((m_nota[i,7] * m_nota[i,5])+((m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                                ENDIF
                                        ELSE
                                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                                        mbase_aux := iat(m_nota[i,12] * m_nota[i,5],2)
                                                ELSE
                                                        mbase_aux := iat(m_nota[i,7] * m_nota[i,5],2)
                                                ENDIF
                                        ENDIF
                                        merc-> icm := icm - iat((m_nota[i,20]/100) * mbase_aux,2)
                                ELSEIF msai_ent = 'E'
                                        merc-> saldo_fis := merc-> saldo_fis + m_nota[i,5]
                                        //merc-> saldo_mer := merc-> saldo_mer + m_nota[i,5]
                                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                                merc-> icm := icm + iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                                        ELSE
                                                merc-> icm := icm + iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                                        ENDIF
                                ENDIF
                                merc->data_atu := mdata_sis
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo')
                                LOOP
                        ENDIF
                        DBUNLOCK()
                        *************
                        SELE('movnt')
                        *************
                        IF ADIREG()
                                movnt->empresa := mcodempresa
                                IF i = 16
                                        mdoc_aux := mdocumento+'/A'
                                        maux := '/A'
                                ELSEIF i = 30
                                        mdoc_aux := mdocumento+'/B'
                                        maux := ALLTRIM(maux)+'B'
                                ELSEIF i = 44
                                        mdoc_aux := mdocumento+'/C'
                                        maux := ALLTRIM(maux)+'C'
                                ELSEIF i = 58
                                        mdoc_aux := mdocumento+'/D'
                                        maux := ALLTRIM(maux)+'D'
                                ELSEIF i = 72
                                        mdoc_aux := mdocumento+'/E'
                                        maux := ALLTRIM(maux)+'E'
                                ENDIF
                                movnt-> modelo  := mmodelo
                                movnt-> num_ped := STRZERO(mnum_ped,6)
                                movnt-> tipo_nota := mtipo_nota
                                movnt-> documento := 'NF'+mdoc_aux
                                movnt-> serie     := mserie_not
                                movnt-> codigo := m_nota[i,21]
                                movnt-> produto := m_nota[i,2]
                                movnt-> cod_fab := m_nota[i,3]
                                movnt-> fabrica := m_nota[i,4]
                                movnt-> unidade := m_nota[i,8]
                                movnt-> data_s_e := mdata
                                IF msai_ent = 'S'
                                        movnt-> ent_sai := 'S'
                                ELSEIF msai_ent = 'E'
                                        movnt-> ent_sai := 'E'
                                ENDIF
                                movnt-> quantd := m_nota[i,5]
                                movnt-> pr_venda := m_nota[i,6]
                                movnt-> vl_vend := m_nota[i,7]          // - (m_nota[i,7]*(m_nota[i,11]/100))
                                movnt-> cod_vend := STRZERO(mcod_vend,3)
                                movnt-> cod_cli := STRZERO(mcod_cli,5)
                                movnt-> cliente := mcliente
                                movnt-> uf_cli := muf_cli
                                movnt-> cgc_cli := cli->cgc
                                movnt-> cpf_cli := cli->cpf
                                movnt-> insc_cli := cli->insc
                                movnt-> icm := m_nota[i,20]
                                movnt-> ipi_aliq := m_nota[i,24]
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        movnt-> ipi := ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
                                        movnt-> vl_fatura := m_nota[i,12]
                                        IF mtipo_nota = 'N'
                                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * mbase_aux,2)
                                                movnt-> vlr_icm := iat((m_nota[i,20]/100) * mbase_aux,2)
                                                mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) - (mpis+mconfis+micms_desc)
                                                mtot_ipi  := mtot_ipi + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
                                                mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                                movnt-> desc1 := ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12
                                                IF  m_nota[i,20] > 0
                                                        mbase_icm = mbase_icm + mbase_aux
                                                ENDIF
                                        ENDIF
                                        IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                                mbase_icmsub := mbase_icmsub + (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                                                                               // 2.35
                                                mvlr_icmsub := mvlr_icmsub + (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                                movnt->base_icmsu := (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                movnt->vlr_icmsub := (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                        ENDIF
                                ELSE
                                        movnt-> ipi := (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                        movnt-> vl_fatura := m_nota[i,7]
                                        IF mtipo_nota = 'N'
                                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * mbase_aux,2)
                                                movnt-> vlr_icm := iat((m_nota[i,20]/100) * mbase_aux,2)

*                                               mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5]) - IF(mcod_nat = '6.109',(m_nota[i,7] * m_nota[i,5])*.12,0)
                                                mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5])
                                                mtot_ipi  := mtot_ipi + (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                                mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
                                                movnt-> desc1 := (m_nota[i,7] * m_nota[i,5])*.12
                                                IF m_nota[i,20] > 0
                                                        mbase_icm = mbase_icm + mbase_aux
                                                ENDIF
                                        ENDIF
                                        IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                                mbase_icmsub := mbase_icmsub + ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                                                                               // 2.35
                                                mvlr_icmsub := mvlr_icmsub + ((m_nota[i,7]  * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                                movnt->base_icmsu := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                movnt->vlr_icmsub := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                        ENDIF
                                ENDIF
                                movnt-> base_icm := mbase_aux
                                movnt-> icm_f := m_nota[i,13]
                                movnt-> icm_sub := m_nota[i,22]
                                movnt-> pr_unit := m_nota[i,12]
                                movnt-> cust_mer := m_nota[i,33]
                                movnt-> frete := mfrete
                                movnt-> encargo_f := mencargo
                                movnt-> disp_asse := mseguro
                                movnt-> tipo := '03'
                                movnt-> isento := m_nota[i,14]
                                movnt-> sittrib:= m_nota[i,35]
                                movnt-> peso := m_nota[i,9]
                                movnt-> peso_liq := m_nota[i,18]
                                movnt-> alimento := m_nota[i,10]
                                movnt-> bebida := m_nota[i,17]
                                movnt-> tp_venda := mtp_vend
                                movnt-> cond_vezes := mcond_vezes
                                movnt-> cond_intev := STRZERO(mintev,3)
                                movnt-> cod_nat := mcod_nat
                                movnt-> conjunta := mdocumento
                                movnt-> obs1 := mobs1
                                movnt-> obs2 := mobs2
                                movnt-> obs3 := mobs3
                                movnt-> obs4 := mobs4
                                movnt-> obs5 := mobs5
                                movnt-> obs6 := mobs6
                                movnt-> cod_nota := mcod_nota
                                IF mtipo_nota = 'N'
                                        mtot_peso := mtot_peso + (m_nota[i,9]*m_nota[i,5])
                                        mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                                ENDIF
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo')
                        ENDIF
                NEXT
                DBCOMMITALL()
                sr_getconnection():exec('COMMIT',,.f.)
                mtot_nota := mtot_nota - (mpis+mconfis+micms_desc)
                IF mtipo_nota = 'N'
                       mbase_icm := mbase_icm + mseguro + mencargo
                       mtot_icm := iat(mtot_icm,2)
                ENDIF
                mdoc_aux := mdocumento
                IF mcredito = 'S'
                        ****************
                        SELE('icm')
                        GO TOP
                        ****************
                        IF BLOQREG()
                                icm-> documento := mdocumento
                                icm-> data := mdata
                                IF msai_ent = 'S'
                                        icm-> deb_cred := icm->deb_cred - mtot_icm
                                ELSE
                                        icm-> deb_cred := icm->deb_cred + mtot_icm
                                ENDIF
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo (SACICM)')
                                LOOP
                        ENDIF
                        GO 2
                        IF BLOQREG()
                                icm-> documento := mdocumento
                                icm-> data := mdata
                                IF msai_ent = 'S'
                                        icm-> deb_cred := icm->deb_cred - mtot_ipi
                                ELSE
                                        icm-> deb_cred := icm->deb_cred + mtot_ipi
                                ENDIF
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo (SACICM)')
                                LOOP
                        ENDIF
                        DBCOMMITALL()
                ENDIF
                *************
                SELE('totnt')
                *************
                IF ADIREG()
                        totnt->empresa  := mcodempresa
                        totnt-> modelo  := mmodelo
                        totnt-> tipo_nota := mtipo_nota
                        totnt-> cod_nota := mcod_nota
                        totnt-> num_ped := STRZERO(mnum_ped,6)
                        totnt-> documento := 'NF'+mdoc
                        totnt-> serie     := mserie_not
                        totnt-> auxiliar := maux
                        totnt-> emissao := mdata
                        IF msai_ent = 'S'
                                totnt-> ent_sai := 'S'
                        ELSEIF msai_ent = 'E'
                                totnt-> ent_sai := 'E'
                        ENDIF
                        totnt-> cod_cli := STRZERO(mcod_cli,5)
                        totnt-> cliente := mcliente
                        totnt-> uf_cli := muf_cli
                        totnt-> cid_cli := mcid_cli
                        totnt-> insc_cli := cli->insc
                        totnt-> cgc_cli := cli->cgc
                        totnt-> cpf_cli := cli->cpf
                        totnt-> cod_vend := STRZERO(mcod_vend,3)
                        totnt-> vl_base := mbase_icm
                        totnt-> vl_icm  := mtot_icm
                        totnt-> vl_icmsu:= mtot_icmf
                        IF mtipo_nota = 'C'
                                totnt-> vl_base     := cbase_icm
                                totnt-> vl_icm      := ctot_icm
                                totnt-> vl_icmsu    := ctot_icmf
                                totnt-> vl_nota     := ctot_nota
                                totnt-> vlr_icmsub  := ctot_icmf
                                totnt-> base_icmsu  := cbase_icmf
                                totnt-> ipi         := ctot_ipi
                                totnt-> peso        := ctot_peso
                                totnt-> peso_liq    := ctot_liq
                                totnt-> vl_prod     := mtot_prod
                                totnt-> vl_nota     := mtot_nota
                        ELSE
                                totnt-> vl_base := mbase_icm
                                totnt-> vl_icm  := mtot_icm
                                totnt-> vl_icmsu:= mtot_icmf
                                totnt-> vl_nota := mtot_nota + mtot_ipi
                                totnt-> vlr_icmsub := mvlr_icmsub
                                totnt-> base_icmsu := mbase_icmsub
                                totnt-> ipi     := mtot_ipi
	                        totnt-> peso := mtot_peso
        	                totnt-> peso_liq := mtot_liq
	                        IF mtipo_nota = 'N'
        	                        totnt-> vl_prod := mtot_nota
                	                totnt-> vl_nota := (mtot_nota + mtot_ipi + mvlr_icmsub)       //- (mpis+mconfis+micms_desc)
                        	ELSE
	                                totnt-> vl_prod := mtot_prod
        	                        totnt-> vl_nota := (mtot_nota + mtot_ipi + mvlr_icmsub)       //- (mpis+mconfis+micms_desc)
                	        ENDIF
                        ENDIF
                        totnt-> frete := mfrete
                        totnt-> encargo_f := mencargo
                        totnt-> disp_asse := mseguro
                        totnt-> cod_nat := mcod_nat
                        totnt-> obs1 := mobs1
                        totnt-> obs2 := mobs2
                        totnt-> obs3 := mobs3
                        totnt-> obs4 := mobs4
                        totnt-> obs5 := mobs5
                        totnt-> obs6 := mobs6
                        DBUNLOCK()
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo (SACMOV)')
                        LOOP
                ENDIF
                DBCOMMITALL()
                IF mtipo_nota = 'N'
                        mtot_nota := mtot_icmf := 0
                ENDIF
        ELSE
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        IF m_nota[i,21] = SPACE(5)
                                LOOP
                        ENDIF
                        IF mtipo_nota = 'N'
                                IF EMPTY(cli->insc)
                                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                                mbase_icm := mbase_icm + iat((m_nota[i,12] * m_nota[i,5])+((m_nota[i,12] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                        ELSE
                                                mbase_icm := mbase_icm + iat((m_nota[i,7] * m_nota[i,5])+((m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                        ENDIF
                                ELSE
                                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                                mbase_icm := mbase_icm + iat(m_nota[i,12] * m_nota[i,5],2)
                                        ELSE
                                                mbase_icm := mbase_icm + iat(m_nota[i,7] * m_nota[i,5],2)
                                        ENDIF
                                ENDIF
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                                ELSE
                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                                ENDIF
                        ENDIF
                NEXT
                mtot_icm := iat(mtot_icm,2)
        ENDIF
        IF mnota = 'S'
                mcont_nota := 0
                ****************
                SELE('cli');ORDSETFOCUS(1)
                GO TOP
                ****************
                SEEK STRZERO(mcod_cli,5)
                IF ! BLOQREG()
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        RETURN NIL
                ELSE
                        WHILE .T.
                                IF ! imp_arq(mprg+'.REL','N')
                                        atencao('Foi Gerada a NOTA FISCAL de No.:'+mdocumento)
                                        LOOP
                                ELSE
                                        EXIT
                                ENDIF
                        ENDDO
                        cli->ult_comp := mdata
                        DBUNLOCK()
                        DBCOMMIT()
                        mdoc_aux := mdocumento
                        imprt('M','C')
                        imprt('M','P8')
                        DEVPOS(PROW()+2,115);DEVOUT(mdocumento)
                        imprt('M','N')
                        DEVPOS(PROW()+1,49);DEVOUT('X')
                        imprt('M','C')
                        DEVPOS(PROW()+3,90);DEVOUT(' ')
                        DEVPOS(PROW()+1,131);DEVOUT(mdocumento)
                        DEVPOS(PROW()+1,00);DEVOUT(mnatureza)
                        DEVPOS(PROW(),55);DEVOUT(mcod_nat)
                        DEVPOS(PROW(),90);DEVOUT(' ')
                        imprt('M','C')
                        pitalico(.T.)
                        DEVPOS(PROW()+3,00);DEVOUT(cod_cli+'-'+razao)
                        pitalico(.F.)
                        IF ! EMPTY(cgc)
                                DEVPOS(PROW(),90);DEVOUTPICT(cgc,'@@R 99.999.999/9999-99')
                        ELSE
                                DEVPOS(PROW(),90);DEVOUTPICT(cpf,'@@R 999.999.999-99')
                        ENDIF
                        DEVPOS(PROW(),118);DEVOUT(mdata)
                        DEVPOS(PROW()+2,00);DEVOUT(endereco)
                        DEVPOS(PROW(),72);DEVOUT(bairro)
                        DEVPOS(PROW(),96);DEVOUT(cep)
                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                        DEVPOS(PROW(),58);DEVOUT(tel1)
                        DEVPOS(PROW(),80);DEVOUT(uf)
                        DEVPOS(PROW(),88);DEVOUT(insc)

                        IF EMPTY(mnum_dup)
                                DEVPOS(PROW()+3,00);DEVOUT(' ')
                        ELSE
                                IF mpag = 1
                                        DEVPOS(PROW()+3,00);DEVOUT(mnum_dup)
                                        DEVPOS(PROW(),13);DEVOUT(mvenci)
                                        DEVPOS(PROW(),25);DEVOUT(TRANSFORM(mvlr_dup,'999,999,999.99'))
                                        DEVPOS(PROW(),44);DEVOUT(mnum_dup1)
                                        DEVPOS(PROW(),57);DEVOUT(mvenci1)
                                        DEVPOS(PROW(),69);DEVOUT(TRANSFORM(mvlr_dup1,'999,999,999.99'))
                                        DEVPOS(PROW(),86);DEVOUT(mnum_dup2)
                                        DEVPOS(PROW(),99);DEVOUT(mvenci2)
                                        DEVPOS(PROW(),111);DEVOUT(TRANSFORM(mvlr_dup2,'999,999,999.99'))

                                        DEVPOS(PROW()+1,00);DEVOUT(mnum_dup3)
                                        DEVPOS(PROW(),13);DEVOUT(mvenci3)
                                        DEVPOS(PROW(),25);DEVOUT(TRANSFORM(mvlr_dup3,'999,999,999.99'))
                                        DEVPOS(PROW(),44);DEVOUT(mnum_dup4)
                                        DEVPOS(PROW(),57);DEVOUT(mvenci4)
                                        DEVPOS(PROW(),69);DEVOUT(TRANSFORM(mvlr_dup4,'999,999,999.99'))
                                        DEVPOS(PROW(),86);DEVOUT(mnum_dup5)
                                        DEVPOS(PROW(),99);DEVOUT(mvenci5)
                                        DEVPOS(PROW(),111);DEVOUT(TRANSFORM(mvlr_dup5,'999,999,999.99'))
                                ELSE
                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                ENDIF
                        ENDIF
                        IF mtipo_nota = 'N'
                                mtot_nota := mtot_desc := mtot_peso := ;
                                mtot_liq := mtot_icmf := mtot_ipi := 0
                        ENDIF
                        i := f := 0
                        DEVPOS(PROW()+4,00);DEVOUT(' ')
                        FOR i = 1 TO LEN(m_nota)
                                f++
                                IF f > 16
                                        mdoc_aux := mdocumento
                                        mcont_nota++
                                        mpag --
                                        pitalico(.T.)
                                        IF mcont_nota = 1
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/A')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 2
                                                mdoc_aux := mdocumento+'/A'
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/B')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 3
                                                mdoc_aux := mdocumento+'/B'
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/C')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 4
                                                mdoc_aux := mdocumento+'/C'
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/D')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 5
                                                mdoc_aux := mdocumento+'/D'
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/E')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 6
                                                mdoc_aux := mdocumento+'/E'
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/F')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ENDIF
                                        pitalico(.F.)
                                        DEVPOS(61,24);DEVOUT(STRZERO(mnum_ped,6))
                                        IF via <> '1'
                                                DEVPOS(PROW()+1,82);DEVOUT(mserie+' '+mnum_sel)
                                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                                        ELSE
		                                cons_sel := {}
                		                sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                		DEVPOS(PROW()+1,82);DEVOUT(mserie+' '+cons_sel[1,1])
		                                sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                		                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        ****************
                                        SELE('cli');ORDSETFOCUS(1)
                                        ****************
                                        imprt('M','C')
                                        DEVPOS(PROW()+4,0);DEVOUT(' ')
                                        imprt('M','P6')
                                        EJECT
                                        imprt('M','C')
                                        imprt('M','P8')
                                        IF mcont_nota = 1
                                                imprt('M','C')
                                                DEVPOS(PROW()+2,115);DEVOUT(mdocumento+'/A')
                                                imprt('M','N')
                                                DEVPOS(PROW()+1,49);DEVOUT('X')
                                                imprt('M','C')
                                                DEVPOS(PROW()+3,90);DEVOUT(mcgc_firm)
                                                DEVPOS(PROW()+1,131);DEVOUT(mdocumento+'/A')
                                        ELSEIF mcont_nota = 2
                                                imprt('M','C')
                                                DEVPOS(PROW()+2,115);DEVOUT(mdocumento+'/B')
                                                imprt('M','N')
                                                DEVPOS(PROW()+1,49);DEVOUT('X')
                                                imprt('M','C')
                                                DEVPOS(PROW()+3,90);DEVOUT(mcgc_firm)
                                                DEVPOS(PROW()+1,131);DEVOUT(mdocumento+'/B')
                                        ELSEIF mcont_nota = 3
                                                imprt('M','C')
                                                DEVPOS(PROW()+2,115);DEVOUT(mdocumento+'/C')
                                                imprt('M','N')
                                                DEVPOS(PROW()+1,49);DEVOUT('X')
                                                imprt('M','C')
                                                DEVPOS(PROW()+3,90);DEVOUT(mcgc_firm)
                                                DEVPOS(PROW()+1,131);DEVOUT(mdocumento+'/C')
                                        ELSEIF mcont_nota = 4
                                                imprt('M','C')
                                                DEVPOS(PROW()+2,115);DEVOUT(mdocumento+'/D')
                                                imprt('M','N')
                                                DEVPOS(PROW()+1,49);DEVOUT('X')
                                                imprt('M','C')
                                                DEVPOS(PROW()+3,90);DEVOUT(mcgc_firm)
                                                DEVPOS(PROW()+1,131);DEVOUT(mdocumento+'/D')
                                        ELSEIF mcont_nota = 5
                                                imprt('M','C')
                                                DEVPOS(PROW()+2,115);DEVOUT(mdocumento+'/E')
                                                imprt('M','N')
                                                DEVPOS(PROW()+1,49);DEVOUT('X')
                                                imprt('M','C')
                                                DEVPOS(PROW()+3,90);DEVOUT(mcgc_firm)
                                                DEVPOS(PROW()+1,131);DEVOUT(mdocumento+'/E')
                                        ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT(mnatureza)
                                        DEVPOS(PROW(),55);DEVOUT(mcod_nat)
                                        DEVPOS(PROW(),90);DEVOUT(minsc_firm)
                                        pitalico(.T.)
                                        DEVPOS(PROW()+3,00);DEVOUT(cod_cli+'-'+razao)
                                        pitalico(.F.)
                                        imprt('M','C')
                                        IF ! EMPTY(cgc)
                                                DEVPOS(PROW(),90);DEVOUTPICT(cgc,'@@R 99.999.999/9999-99')
                                        ELSE
                                                DEVPOS(PROW(),90);DEVOUTPICT(cpf,'@@R 999.999.999-99')
                                        ENDIF
                                        DEVPOS(PROW(),118);DEVOUT(mdata)
                                        DEVPOS(PROW()+2,00);DEVOUT(endereco)
                                        DEVPOS(PROW(),72);DEVOUT(bairro)
                                        DEVPOS(PROW(),96);DEVOUT(cep)
                                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                                        DEVPOS(PROW(),58);DEVOUT(tel1)
                                        DEVPOS(PROW(),80);DEVOUT(uf)
                                        DEVPOS(PROW(),88);DEVOUT(insc)
                                        IF EMPTY(mnum_dup)
                                                DEVPOS(PROW()+2,00);DEVOUT(' ')
                                        ELSE
                                                IF mpag = 1
                                                        DEVPOS(PROW()+2,00);DEVOUT(mnum_dup)
                                                        DEVPOS(PROW(),13);DEVOUT(mvenci)
                                                        DEVPOS(PROW(),25);DEVOUT(TRANSFORM(mtot_aux+mfrete+mseguro+mencargo,'999,999,999.99'))
                                                ELSE
                                                        DEVPOS(PROW()+2,00);DEVOUT(' ')
                                                ENDIF
                                        ENDIF
                                        DEVPOS(PROW()+4,02);DEVOUT(' ')
                                        pitalico(.T.)
                                        DEVPOS(PROW()+1,13);DEVOUT('VALOR TRANSPORTADO DA NOTA No.: '+ mdoc_aux)
                                        DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        pitalico(.F.)
                                        f := 2
                                ENDIF
                                imprt('M','C')
                                IF SUBSTR(m_nota[i,2],1,4) <> 'ICMS'
                                        DEVPOS(PROW()+1,00);DEVOUT(m_nota[i,21])
                                        DEVPOS(PROW(),09);DEVOUT(RTRIM(m_nota[i,2]))
                                        DEVPOS(PROW(),60);DEVOUT(m_nota[i,23])
                                        DEVPOS(PROW(),63);DEVOUT(m_nota[i,35])
                                        DEVPOS(PROW(),68);DEVOUT(m_nota[i,8])
                                        DEVPOS(PROW(),72);DEVOUTPICT(m_nota[i,5],'99999.99')
                                        IF mcod_fat = '02'
                                                DEVPOS(PROW(),80);DEVOUTPICT((m_nota[i,12]*(m_set[1,6]/100+1)),ALLTRIM(m_set[1,98]))
                                                DEVPOS(PROW(),97);DEVOUTPICT((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5],'999,999.99')
                                                DEVPOS(PROW(),109);DEVOUTPICT(m_nota[i,20],'99.9')
                                                DEVPOS(PROW(),112);DEVOUTPICT(m_nota[i,24],'99')
                                                DEVPOS(PROW(),117);DEVOUTPICT(((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*(m_nota[i,24]/100),'99,999.99')
                                                IF mtipo_nota = 'N'
*                                                       mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) - IF(mcod_nat = '6.109',((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,0)
                                                        mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                                        mtot_desc :=iat(mtot_desc + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,2)
                                                        mtot_ipi  := mtot_ipi + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
                                                ENDIF
                                        ELSE
                                                DEVPOS(PROW(),80);DEVOUTPICT(m_nota[i,7],ALLTRIM(m_set[1,98]))
                                                DEVPOS(PROW(),97);DEVOUTPICT(m_nota[i,7] * m_nota[i,5],'999,999.99')
                                                DEVPOS(PROW(),109);DEVOUTPICT(m_nota[i,20],'99')
                                                DEVPOS(PROW(),112);DEVOUTPICT(m_nota[i,24],'99')
                                                DEVPOS(PROW(),117);DEVOUTPICT((m_nota[i,7] * m_nota[i,5])*(m_nota[i,24]/100),'99,999.99')
                                                IF mtipo_nota = 'N'
*                                                       mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5]) - IF(mcod_nat = '6.109',(m_nota[i,7] * m_nota[i,5])*.12,0)
                                                        mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5])
                                                        mtot_desc :=iat(mtot_desc + (m_nota[i,7] * m_nota[i,5])*.12,2)
                                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
                                                        mtot_ipi  := mtot_ipi + (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                                ENDIF
                                        ENDIF
                                        IF mtipo_nota = 'N'
                                                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
                                                mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                                        ENDIF
                                ELSE
                                        IF mtipo_nota = 'N'
                                                IF mcod_fat = '02'
                                                        mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
*                                                       mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) - IF(mcod_nat = '6.109',((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,0)
                                                        mtot_Icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                                        mtot_desc :=iat(mtot_desc + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,2)
                                                        mtot_ipi  := mtot_ipi + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
                                                ELSE
                                                        mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5])
*                                                       mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5]) - IF(mcod_nat = '6.109',(m_nota[i,7] * m_nota[i,5])*.12,0)
                                                        mtot_desc :=iat(mtot_desc + (m_nota[i,7] * m_nota[i,5])*.12,2)
                                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
                                                        mtot_ipi  := mtot_ipi + (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                                ENDIF
                                        ENDIF
                                ENDIF
                        NEXT
                        IF (mcod_nat = '6.109' .OR. mcod_nat = '6.110')
                                DEVPOS(PROW()+2,09);DEVOUT('******** DESCONTOS **********')
                                DEVPOS(PROW()+1,09);DEVOUT('VALOR DO ICMS....: '+TRANSFORM(micms_desc,'999,999.99'))
                                DEVPOS(PROW()+1,09);DEVOUT('VALOR DO PIS.....: '+TRANSFORM(mpis,'999,999.99'))
                                DEVPOS(PROW()+1,09);DEVOUT('VALOR DO CONFIS..: '+TRANSFORM(mconfis,'999,999.99'))
                                DEVPOS(PROW()+1,09);DEVOUT('                   ----------')
                                DEVPOS(PROW()+1,09);DEVOUT('TOTAL DESCONTOS..: '+TRANSFORM(mpis+mconfis+micms_desc,'999,999.99'))
                        ENDIF
                        DEVPOS(37,00);DEVOUT(mobs1)
                        DEVPOS(38,00);DEVOUT(mobs2)
                        DEVPOS(39,00);DEVOUT(mobs3)
                        DEVPOS(40,00);DEVOUT(mobs4)
                        IF mtipo_nota = 'N'
                                mtot_nota := mtot_nota  - (mpis+mconfis+micms_desc)
                        ENDIF
                        IF mtipo_nota = 'C'
                                DEVPOS(43,05);DEVOUTPICT(cbase_icm,'9,999,999.99')
                                DEVPOS(43,33);DEVOUTPICT(ctot_icm,'9,999,999.99')
                                DEVPOS(43,59);DEVOUTPICT(cbase_icmf,'9,999,999.99')
                                DEVPOS(43,80);DEVOUTPICT(ctot_icmf,'9,999,999.99')
                                DEVPOS(43,108);DEVOUTPICT(ctot_prod,'999,999,999.99')
                                DEVPOS(45,05);DEVOUTPICT(mfrete,'9,999,999.99')
                                DEVPOS(45,33);DEVOUTPICT(mseguro,'9,999,999.99')
                                DEVPOS(45,59);DEVOUTPICT(mencargo,'9,999,999.99')
                                DEVPOS(45,80);DEVOUTPICT(ctot_ipi,'9,999,999.99')
                                DEVPOS(45,108);DEVOUTPICT(ctot_nota,'999,999,999.99')
                        ELSE
	                        DEVPOS(43,05);DEVOUTPICT(mbase_icm,'99,999,999.99')
        	                DEVPOS(43,33);DEVOUTPICT(mtot_icm,'9,999,999.99')
                                DEVPOS(43,59);DEVOUTPICT(mbase_icmsub,'9,999,999.99')
                                DEVPOS(43,80);DEVOUTPICT(mvlr_icmsub,'9,999,999.99')
                	        //DEVPOS(43,59);DEVOUTPICT(mbase_icmf,'9,999,999.99')
                        	//DEVPOS(43,80);DEVOUTPICT(mtot_icmf,'9,999,999.99')
                       	        DEVPOS(43,108);DEVOUTPICT(mtot_nota,'99,999,999.99')
        	                DEVPOS(45,05);DEVOUTPICT(mfrete,'9,999,999.99')
                	        DEVPOS(45,33);DEVOUTPICT(mseguro,'9,999,999.99')
                        	DEVPOS(45,59);DEVOUTPICT(mencargo,'9,999,999.99')
	                        IF SUBSTR(m_nota[1,2],1,4) <> 'ICMS'
        	                        DEVPOS(45,80);DEVOUTPICT(mtot_ipi,'9,999,999.99')
                	        ENDIF
                                DEVPOS(45,108);DEVOUTPICT(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi + mvlr_icmsub,'999,999,999.99')
                        ENDIF
                        DEVPOS(48,00);DEVOUT(mnome_trans)
                        DEVPOS(48,84);DEVOUT(mfrete_trans)
                        DEVPOS(48,88);DEVOUTPICT(mplaca_trans,'@@R XXX-9999')
                        DEVPOS(48,100);DEVOUT(mpluf_trans)
                        IF mcgccpf = 'CGC'
                                DEVPOS(48,106);DEVOUTPICT(mcgc_trans,'@@R 99.999.999/9999-99')
                        ELSEIF mcgccpf = 'CPF'
                                DEVPOS(48,106);DEVOUTPICT(mcgc_trans,'@@R 999.999.999-99')
                        ENDIF
                        DEVPOS(50,00);DEVOUT(mend_trans)
                        DEVPOS(50,72);DEVOUT(mmun_trans)
                        DEVPOS(50,100);DEVOUT(muf_trans)
                        DEVPOS(50,108);DEVOUT(minsc_trans)

                        DEVPOS(52,00);DEVOUTPICT(mtot_quantd,'999,999.99')
                        DEVPOS(52,21);DEVOUT(mesp_trans)
                        DEVPOS(52,43);DEVOUT(mmarca_trans)
                        DEVPOS(52,58);DEVOUT(mnum_trans)
                        DEVPOS(52,82);DEVOUTPICT(mtot_peso,'99,999.999')
                        DEVPOS(52,103);DEVOUTPICT(mtot_liq,'99,999.999')
*                       DEVPOS(56,00);DEVOUT('A-3916200200')
                        DEVPOS(56,00);DEVOUT('A-39162000')
                        DEVPOS(57,00);DEVOUT('B-39252000')
                        DEVPOS(61,24);DEVOUT(STRZERO(mnum_ped,6))
                        DEVPOS(61,PCOL()+5);DEVOUT(cod_operado)
                        IF via <> '1'
                                DEVPOS(PROW()+1,82);DEVOUT(mserie+' '+mnum_sel)
                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                        ELSE
                                cons_sel := {}
                                sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                DEVPOS(PROW()+1,82);DEVOUT(mserie+' '+cons_sel[1,1])
                                sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                        ENDIF
                        ****************
                        SELE('cli');ORDSETFOCUS(1)
                        ****************
                        EJECT
                        imprt('M','N')
                        imprt('M','P6')
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        IF mimp_tipo = 2
                                lertexto(mprg+'.REL')
                        ELSEIF mtipo_imp = 'D'
                                
                        ENDIF
                        ASIZE(m_nota,0)
                        CLEAR GETS
                        RETURN NIL
                ENDIF
        ELSE
                ASIZE(m_nota,0)
                CLEAR GETS
                RETURN NIL
        ENDIF
ENDDO
RETURN NIL
*********************** F I M **********************************

