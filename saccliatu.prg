* ATUALIZAR O ULTIMO PEDIDO
****************************
FUNCTION saccliatu
**************
LOCAL MPRG:='SACCLIATU',mtitulo:='ATUALIZACAO DO CLIENTES ULTIMO PEDIDO',;
      lci,cci,lba,cba,opcao,cons_cli:={},cons_ped:={},soma_ped:={},cons_c:={}

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 21
cba := 90
*----------------------------------------------------------------------------
op_tela(03,02,13,90,mtitulo,,'1')
WHILE .T.
        exibi_prg(mprg)
        mcont_01:=0;mcont_02:=0;mcont_03:=0;mcont_04:=0;mcont_07:=0
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(1,1);DEVOUT('Cliente........:')
        DEVPOS(2,1);DEVOUT('Ultimo Pedido..:')
        DEVPOS(3,1);DEVOUT('Data Pedido....:')
        DEVPOS(4,1);DEVOUT('Vlr.Pedido.....:')
        opcao := op_simnao('N','Confirma a Atualizacao dos Clientes:')
        IF opcao = 'N' .OR. LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
	cons_cli:={}
        cComm  := "SELECT * FROM saccli"
        sr_getconnection():exec(ccomm,,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(cons_cli) > 0
	        mcont:=	i:=0
	        FOR i = 1 TO LEN(cons_cli)
                        limpa(1,18,lba,cba)
	                DEVPOS(1,18);DEVOUT(cons_cli[i,2]+'-'+cons_cli[i,3])
			cons_num:={}
			sr_getconnection():exec("SELECT pnum_ped,pdat_ped FROM sacped_s WHERE sr_deleted = ' ' AND pcod_cli = "+sr_cdbvalue(cons_cli[i,2])+" AND ppag = '*' ORDER BY pdat_ped DESC,pnum_ped DESC",,.t.,@cons_num)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_num) > 0
                                DEVPOS(2,18);DEVOUT(cons_num[1,1])
                                DEVPOS(3,18);DEVOUT(cons_num[1,2])
                                cons_ped:={}
		      	        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(cons_num[1,1]),,.t.,@cons_ped)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ELSE
                                LOOP
                        ENDIF
                        mcont := soma_ped := 0
                        FOR mcont = 1 TO LEN(cons_ped)
                                //IF cons_ped[mcont,57] > 0
	              		//       soma_ped := soma_ped + ((cons_ped[mcont,14] * cons_ped[mcont,18]) * ((cons_ped[mcont,57] / 100)+1))
	              	        //ELSE
	              		       soma_ped:= soma_ped + cons_ped[mcont,14] * cons_ped[mcont,18]
	              	        //ENDIF
                                DEVPOS(4,18);DEVOUT(TRANSFORM(soma_ped,'999,999,999.99'))
                        NEXT
                        sr_getconnection():exec("UPDATE saccli SET num_ped = "+sr_cdbvalue(cons_ped[1,2])+",ult_comp = "+sr_cdbvalue(cons_ped[1,4])+",vlr_comp = "+sr_cdbvalue(soma_ped)+" WHERE cod_cli = "+sr_cdbvalue(cons_cli[i,2]),,.f.)

			cons_c:={}
			sr_getconnection():exec("SELECT cod_cli,razao FROM saccli WHERE cod_cli = "+sr_cdbvalue(cons_cli[i,2]),,.t.,@cons_c)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_c) > 1
                                atencao(cons_c[1,1]+' - '+cons_c[1,2]+m_qp+cons_c[2,1]+' - '+cons_c[2,2])
                        ENDIF

		NEXT
		sr_getconnection():exec("COMMIT",,.f.)
	ENDIF
ENDDO
