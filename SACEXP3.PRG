********************************
* ESTORNO DA EXPEDICAO DE PEDIDOS
********************************

FUNCTION sacexp3()
*****************
LOCAL mprg:='SACEXP3',mtitulo:='ESTORNO DA EXPEDICAO DE PEDIDOS',;
      tela,tela1,lci,cci,lba,cba,opcao

PRIVATE mcod_cli,mnum_ped:=0,point,mtot_ped:=0,cons_cli := {}

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 13
cba := 77

*---------------------------------------------------------------
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacped_c','ped_c');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*---------------------------------------------------------------
CLEAR GETS
point := 0
op_tela(06,08,13,77,mtitulo)
WHILE .T.
        limpa(00,00,24,100)
        exibi_prg(mprg)
        mcodemp := '   '
        mtot_ped := mnum_ped := 0
        setcor(1)
        DEVPOS(lci+1,cci+1);DEVOUT('No.Pedido.....:')
        DEVPOS(lci+2,cci+1);DEVOUT('Cliente.......:')
        DEVPOS(lci+3,cci+1);DEVOUT('Expedido por..:')
        DEVPOS(lci+4,cci+1);DEVOUT('Data Expedicao:')
        DEVPOS(lci+5,cci+1);DEVOUT('Valor.........:')
        @ lci+1,cci+17 GET mnum_ped PICT '999999'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        *************
        SELE('ped_s');ORDSETFOCUS(1)
        GO TOP
        *************
        IF ! ped_s->(DBSEEK(STRZERO(mnum_ped,6)))
                atencao('Nao foi possivel encontrar este Pedido !!!')
                LOOP
        ENDIF
        IF EMPTY(ped_s->pexp_por) .AND. EMPTY(ped_s->pexp_dat)
                atencao('Este pedido nao foi Expedido...')
                LOOP
        ENDIF
        ver_cli(VAL(ped_s->pcod_cli))
        setcor(3)
        DEVPOS(lci+2,cci+17);DEVOUT(ped_s->pcod_cli+'-'+cli->razao)
        DEVPOS(lci+3,cci+17);DEVOUT(ped_s->pexp_por)
        DEVPOS(lci+4,cci+17);DEVOUT(ped_s->pexp_dat)
        setcor(1)
        mensagem('Aguarde um momento OK !!!')
        point := RECNO()
        WHILE STRZERO(mnum_ped,6) = pnum_ped .AND. ! EOF()
                mtot_ped := mtot_ped + (ped_s->pquantd * ped_s->pvlr_fat)
                SKIP
        ENDDO
        setcor(3)
        DEVPOS(lci+5,cci+17);DEVOUT(TRANSFORM(mtot_ped,'999,999.99'))
        setcor(1)
        opcao := op_simnao('N','Confirma os ESTORNO DA EXPEDICAO ?:')
        IF opcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        sr_getconnection():exec("UPDATE sacped_s SET pexp_dat = NULL"+;
                ",pentreg = NULL"+;
                ",pexp_por = NULL"+;
                ",pexpedi  = NULL"+;
                " WHERE  pnum_ped = " + sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
/*
        GO point
        WHILE STRZERO(mnum_ped,6) = pnum_ped .AND. ! EOF()
                IF ! BLOQREG()
                        atencao('Nao foi possivel acessar o arquivo !!!')
                        LOOP
                ENDIF
                ped_s->pexpedi := ' '
                ped_s->pexp_por := '   '
                ped_s->pexp_dat := CTOD('  /  /  ')
*               ped_s->plib_por := '   '
*               ped_s->plib_dat := CTOD('  /  /  ')
                SKIP
        ENDDO
        DBUNLOCKALL()
        *************
        SELE('ped_c');ORDSETFOCUS(1)
        GO TOP
        *************
        IF ped_c->(DBSEEK(STRZERO(mnum_ped,6)))
                BLOQREG()
                ped_c->expedi := ' '
                ped_c->exp_por := '   '
                ped_c->exp_dat := CTOD('  /  /  ')
*               ped_c->lib_por := '   '
*               ped_c->lib_dat := CTOD('  /  /  ')
*               ped_c->lib_vlr := 0
                DBUNLOCK()
        ENDIF
        DBCOMMITALL()
*/
ENDDO
wvw_lclosewindow()
RETURN NIL
************************* F I M ******************************************
