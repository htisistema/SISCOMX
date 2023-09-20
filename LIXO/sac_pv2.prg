*************************************
* FUNCAO DE CANCELAR DE PV
*************************************
FUNCTION sac_pv2
****************
LOCAL mprg := 'SAC_PV2',cons_tot := {},cons_ped := {},m_aux:={}
PRIVATE mnum_ped
IF ! ver_nivel(mprg,"CANCELAMENTO DE PRE-VENDAS (PV)",'135',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(12,10,17,80,'CANCELAMENTO DE PRE-VENDAS (PV)')
WHILE .T.
        mensagem('Digite o Numero da PRE-VENDA ou [ESC] p/Abandonar')
        DEVPOS(0,0);DEVOUT('Numero do Pedido..:                ')
        DEVPOS(1,0);DEVOUT('Codigo do Cliente.:                ')
        DEVPOS(2,0);DEVOUT('Codigo do Vendedor:                ')
        DEVPOS(3,0);DEVOUT('Valor do Pedido R$:                ')
        mnum_ped := 0
        @ 0,20 GET mnum_ped PICT '999999' VALID IF(EMPTY(mnum_ped),.F.,.T.)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_ped := {}
        sr_getconnection():exec("SELECT * FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('Pedido nao encontrado no Arquivo')
                LOOP
        ELSEIF cons_ped[1,49] = 'C'
                atencao('Este Pedido foi CANCELADO !!!')
                LOOP
        ELSEIF ! EMPTY(cons_ped[1,49])
                atencao('Este Pedido ja foi  P A G O !!!')
                LOOP
        ENDIF
        cons_tot := {}
        sr_getconnection():exec("SELECT ppag,sum(pvlr_fat*pquantd),sum(pquantd) FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" GROUP BY ppag",,.t.,@cons_tot)
        sr_getconnection():exec('COMMIT',,.f.)
        setcor(3)
        DEVPOS(1,20);DEVOUT(cons_ped[1,23])
        DEVPOS(2,20);DEVOUT(cons_ped[1,32])
        DEVPOS(3,20);DEVOUT(TRANSFORM(cons_tot[1,2],'999,999,999.99'))
        setcor(1)
        IF op_simnao('N','Confirma o CANCELAMENTO da PRE-VENDA:') = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        AADD(m_aux,{cons_ped[1,2],cons_ped[1,6]})
        cancelar_pv(m_aux)
        sr_getconnection():exec("UPDATE sacpv SET ppag = 'C',pdatapag = " + sr_cdbvalue(mdata_sis)+" WHERE pnum_ped = "+sr_cdbvalue(cons_ped[1,2]),,.f.)
        sr_getconnection():exec("COMMIT",,.f.)

ENDDO
RETURN NIL        
