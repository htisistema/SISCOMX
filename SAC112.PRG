*************************
*EXCLUSAO PRODUTO
*************************
FUNCTION sac112(mcodigo)
***************
LOCAL MPRG:='SAC112',opcao,msele,morde,point,cons_merc:={},ccomm:='',mdata_ped
MEMVAR nivel_acess,getlist
PRIVATE mfabrica
IF ! ver_nivel(mprg,'EXCLUSAO DE PRODUTO','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcodigo,5))
cons_merc := {}
sr_getconnection():exec(ccomm,,.t.,@cons_merc)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(cons_merc) = 0
        atencao('Nao foi encontrado o PRODUTO..')
        wvw_lclosewindow()
        RETURN NIL
ENDIF
op_tela(07,00,23,79,' Exclusao do Produto ')
WHILE .T.
        point := RECNO()
        DEVPOS(00,02);DEVOUT('Grupo.......:       - Descricao:')
        DEVPOS(01,02);DEVOUT('Sub-Grupo...:       - Descricao:')
        DEVPOS(02,02);DEVOUT('Codigo......:       - Descricao:')

        DEVPOS(03,02);DEVOUT(' Codigo Fabricante:      ')
        DEVPOS(03,36);DEVOUT(' Data Cad ')
        DEVPOS(03,50);DEVOUT(' Un ')
        DEVPOS(03,68);DEVOUT(' Peso Liq ')
        DEVPOS(03,68);DEVOUT(' Peso Bruto ')
        DEVPOS(06,01);DEVOUT(' Minimo ')
        DEVPOS(06,13);DEVOUT(' Maximo ')
        DEVPOS(06,25);DEVOUT(' Lucro ')
        DEVPOS(06,36);DEVOUT(' Isen ')
        DEVPOS(06,45);DEVOUT(' Alim ')
        DEVPOS(06,54);DEVOUT(' Comiss. ')
        DEVPOS(06,66);DEVOUT(' Saldo ')
        DEVPOS(09,01);DEVOUT('Vlr.Merc.')
        DEVPOS(09,17);DEVOUT('Custo Merc.')
        DEVPOS(09,33);DEVOUT('Custo Real')
        DEVPOS(09,49);DEVOUT('Pr.Medio')
        DEVPOS(09,65);DEVOUT('Pr.Venda')

        ver_fab(VAL(cons_merc[1,30]),14,02)
        setcor(3)
        DEVPOS(00,17);DEVOUT(SUBSTR(cons_merc[1,7],1,3))
        DEVPOS(01,17);DEVOUT(SUBSTR(cons_merc[1,7],4,2))
        DEVPOS(02,17);DEVOUT(cons_merc[1,8])
        DEVPOS(02,35);DEVOUT(cons_merc[1,9])
        DEVPOS(03,20);DEVOUT(cons_merc[1,30])
        DEVPOS(04,37);DEVOUT(cons_merc[1,13])
        DEVPOS(04,51);DEVOUT(cons_merc[1,14])
        DEVPOS(04,56);DEVOUTPICT(cons_merc[1,16],'9999.999')
        DEVPOS(04,71);DEVOUTPICT(cons_merc[1,17],'9999.999')
        DEVPOS(07,02);DEVOUTPICT(cons_merc[1,28],'9,999.99')
        DEVPOS(07,14);DEVOUTPICT(cons_merc[1,29],'9,999.99')
        DEVPOS(07,26);DEVOUTPICT(cons_merc[1,22],'999.99')
        DEVPOS(07,58);DEVOUTPICT(cons_merc[1,26],'99.99')
        DEVPOS(07,68);DEVOUTPICT(cons_merc[1,56],'99,999.99')
        DEVPOS(10,01);DEVOUTPICT(cons_merc[1,43],'9,999,999.99')
        DEVPOS(10,17);DEVOUTPICT(cons_merc[1,44],'9,999,999.99')
        DEVPOS(10,33);DEVOUTPICT(cons_merc[1,45],'9,999,999.99')
        DEVPOS(10,49);DEVOUTPICT(cons_merc[1,48],'9,999,999.99')
        DEVPOS(10,65);DEVOUTPICT(cons_merc[1,46],'9,999,999.99')
        setcor(1)
	mdata_ped := CTOD('  /  /  ')
	cComm  := "SELECT pdat_ped FROM sacped_s WHERE sr_deleted = ' ' AND pcod_merc = "+sr_cdbvalue(STRZERO(mcodigo,5))+" ORDER BY pdat_ped"
	cons_ped := {}
	sr_getconnection():exec(ccomm,,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(cons_ped) > 0
		mdata_ped := cons_ped[LEN(cons_ped),1]
		mdias     := mdata_sis - cons_ped[LEN(cons_ped),1]
	ENDIF
        IF cons_merc[1,56] > 0
                opcao := op_simnao('N','Mercadoria com Saldo de: '+TRANSFORM(cons_merc[1,56],'999,999.999')+' e a Data da Ultima Movimentacao: '+DTOC(mdata_ped)+' - Deseja Excluir:')
                IF opcao = 'N'
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDIF
        opcao := op_simnao('N','Confirma a Exclusao do PRODUTO:')
        IF opcao = 'N' .OR. LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ELSE
                sr_getconnection():exec('INSERT INTO saclog (data_sis,data,hora,tipo,aut_oper,cod_oper,modulo,descri,cod_aut,terminal'+;
                        ',cod_prod,SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(DATE()       )+','+; //1
                        sr_cdbvalue(mdata_sis    )+','+; //2
                        sr_cdbvalue(TIME()       )+','+; //3
                        sr_cdbvalue('EXCL.PROD.')+','+; //4
                        sr_cdbvalue(cod_operado  )+','+; //7
                        sr_cdbvalue(cod_operado  )+','+; //8
                        sr_cdbvalue(mprg         )+','+;//9
                        sr_cdbvalue('EXCLUSAO PRODUTO COD.:'+cons_merc[1,8]+' '+SUBSTR(cons_merc[1,9],1,25))+','+;//10
                        sr_cdbvalue(cod_operado      )+','+; //11
                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                        sr_cdbvalue(cons_merc[1,8])+','+; //13
                        sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("DELETE FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcodigo,5)),,.f.)
                sr_getconnection():exec("DELETE FROM sacmov WHERE codigo = "+sr_cdbvalue(STRZERO(mcodigo,5)),,.f.)
                sr_getconnection():exec("DELETE FROM sacmovnt WHERE codigo = "+sr_cdbvalue(STRZERO(mcodigo,5)),,.f.)
                sr_getconnection():exec("UPDATE sacped_s SET sr_deleted = 'E' WHERE  pcod_merc = "+sr_cdbvalue(STRZERO(mcodigo,5)),,.f.)
                sr_getconnection():exec("DELETE FROM sacmerc WHERE SR_DELETED = 'T'",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************
