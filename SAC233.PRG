*****************************
* 2a VIA DO PEDIDO DE COMPRA
* SAC233.PRG
*****************************
MEMVAR nivel_acess,mdata_sis,getlist
FUNCTION sac233
**************
LOCAL MPRG:='SAC233',mnum_ped,cons_pede:={}

IF ! ver_nivel(mprg,'2a VIA DO PEDIDO DE COMPRA','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

op_tela(01,05,32,95,'2a VIA DO PEDIDO DE COMPRA')
set_key('forn','merc')
WHILE .T.
        limpa(00,00,33,100)
        mnum_ped := 0
        mensagem('Digite o No.do Pedido p/2a Via - <ESC> Retornar')

        setcor(1)
        DEVPOS(01,01);DEVOUT('No. PEDIDO..:')

        DEVPOS(02,01);DEVOUT('Cod.Fornece.:')
        DEVPOS(03,01);DEVOUT('No.Pedido...:')
        DEVPOS(04,01);DEVOUT('Data........:')

        @ 05,00 TO 05,100
        DEVPOS(6,01);DEVOUT('Cod.')
        DEVPOS(6,08);DEVOUT('Produto')
        DEVPOS(6,36);DEVOUT('Quantd.')

        DEVPOS(6,46);DEVOUT('Cod.')
        DEVPOS(6,53);DEVOUT('Produto')
        DEVPOS(6,81);DEVOUT('Quantd.')
        @ 7,00 TO 7,100

        @ 01,15 GET mnum_ped PICT '999999' VALID IF(mnum_ped = 0,.F.,.T.)
        READ
        IF LASTKEY() = 27
                SET KEY -9 TO
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_pede := {}
        sr_getconnection():exec("SELECT * FROM sacped_e WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_pede)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_pede) = 0
                atencao('No.do Pedido ainda nao foi Solicitado !!!')
                LOOP
        ENDIF
        //point := RECNO()
        IF cons_pede[1,42] = 'E'
                atencao('No.do Pedido foi EXCLUIDO !!!')
                LOOP
        ENDIF

        setcor(3)
        DEVPOS(01,15);DEVOUT(STRZERO(mnum_ped,6))
        DEVPOS(02,15);DEVOUT(cons_pede[1,15])
        DEVPOS(03,15);DEVOUT(cons_pede[1,2])
        DEVPOS(04,15);DEVOUT(cons_pede[1,4])
        setcor(1)

        ent_forn(VAL(cons_pede[1,15]),02,20)
        //ver_uf(muf)
        mensagem('<ENTER>Impressao  -  <ESC> Retorna')
        f := 0
        m_contem := {}
        m_codigo := {}
        setcor(3)
        FOR f=1 TO LEN(cons_pede)
                IF f < 21
                        DEVPOS(8+f,01);DEVOUT(cons_pede[f,6])
                        DEVPOS(8+f,08);DEVOUT(LEFT(cons_pede[f,7],24))
                        DEVPOS(8+f,35);DEVOUTPICT(cons_pede[f,10],'99999.99')
                ELSEIF f > 21
                        DEVPOS(8+f-21,46);DEVOUT(cons_pede[f,6])
                        DEVPOS(8+f-21,53);DEVOUT(LEFT(cons_pede[f,7],24))
                        DEVPOS(8+f-21,80);DEVOUTPICT(cons_pede[f,10],'99999.99')
                ENDIF
                AADD(m_codigo,cons_pede[f,6])
        *                             1               2           3             4                    5              6               7               8               9              10              11              12            13            14
                AADD(m_contem,{cons_pede[f,5],cons_pede[f,7],cons_pede[f,8],cons_pede[f,10],cons_pede[f,14],cons_pede[f,23],cons_pede[f,24],cons_pede[f,24],cons_pede[f,15],cons_pede[f,18],cons_pede[f,9],cons_pede[f,36],cons_pede[f,35],cons_pede[f,40]})
        NEXT F
        setcor(1)
        opcao := op_simnao('S','Deseja Imprimir o Pedido:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                wvw_lclosewindow()
                RETURN NIL
        ELSE
                form_ped_ent(1,STRZERO(mnum_ped,6))
                //imp_ped2()
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************

