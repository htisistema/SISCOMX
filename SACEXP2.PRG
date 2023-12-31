********************************
* EXPEDICAO DE PEDIDOS
********************************
FUNCTION sacexp2(mtp,mped_orc)
*****************
LOCAL mprg:='SACEXP2',mtitulo,;
      tela,tela1,lci,cci,lba,cba,opcao,mnum_pedido,mtempo,m_codigo:={},;
      mdias,mcod_vend,mdata_ped,mposicao,mdata_lib,;
      mhora,mtipo_venda,mcod_op,mcod_emp,mcodemp,m_pedido:={}

PRIVATE mcod_cli,mnum_ped:=0,m_posicao:={},point,mtot_ped:=0,mali_ped,mali_con

IF mtp = NIL
	mtitulo := 'EXPEDICAO DE PEDIDOS'
        IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mali_ped := 'ped_s'
        mali_con := 'ped_c'
ELSE
        IF mped_orc = 'P'
		mtitulo := 'ESTORNO DE PEDIDOS LIBERADOS'
                mprg := mprg+'E'
                IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
                mali_ped := 'ped_s'
                mali_con := 'ped_c'
        ELSE
		mtitulo := 'ESTORNO DE ORCAMENTO LIBERADOS'
                mprg := mprg+'EO'
                IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
                mali_ped := 'orcam'
                mali_con := 'orc_c'
        ENDIF
ENDIF

lci := cci := 0
lba := 22
cba := 77

tela := SAVESCREEN(01,00,24,79)
*---------------------------------------------------------------
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacped_c','ped_c');RETURN NIL;ENDIF
IF ! AbriArq('sacorcam','orcam');RETURN NIL;ENDIF
IF ! AbriArq('sacorc_c','orc_c');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*---------------------------------------------------------------
mnum_pedido := SPACE(6)
CLEAR GETS
point := 0
IF mped_orc = 'P'
        op_tela(00,00,24,79,IF(mtp=NIL,' EXPEDICAO DE PEDIDOS ',' ESTORNO DE PEDIDOS LIBERADOS '))
ELSE
        op_tela(00,00,24,79,IF(mtp=NIL,' EXPEDICAO DE PEDIDOS ',' ESTORNO DE ORCAMENTOS LIBERADOS '))
ENDIF
WHILE .T.
        exibi_prg(mprg)
        mcodemp := '   '
        mtot_ped := 0
        @ lci+2,cci+1 TO lci+2,cba-1
        DEVPOS(lci+1,cci+1);DEVOUT(' No.Ped ')
        DEVPOS(lci+1,cci+10);DEVOUT('Cd.Cli ')
        DEVPOS(lci+1,cci+17);DEVOUT('Vend ')
        DEVPOS(lci+1,cci+21);DEVOUT('   Data   ')
        DEVPOS(lci+1,cci+32);DEVOUT('    Valor')
        DEVPOS(lci+1,cci+47);DEVOUT('Tp')
        DEVPOS(lci+1,cci+51);DEVOUT('Lib.')
        DEVPOS(lci+1,cci+55);DEVOUT(' Data Lib.')
        DEVPOS(lci+1,cci+67);DEVOUT('Emp.')
        IF mmult_emp = 'S'
                mcodemp := mcodempresa
                DEVPOS(lci,cci+2);DEVOUT('Empresa:')
                @ lci,cci+10 GET mcodemp PICT '999' VALID ver_emp(mcodemp,,,,'*')
                READ
        ENDIF
        *************
        SELE((mali_ped));ORDSETFOCUS(3)
        GO TOP
        *************
        IF ! (mali_ped)->(DBSEEK(' '))
                atencao('Nao existe nenhuma Pedido p/Liberar !!!')
                RESTSCREEN(01,00,24,79,tela)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('Aguarde um momento OK !!!')
        ASIZE(m_pedido,0)
        ASIZE(m_codigo,0)
        ASIZE(m_posicao,0)
        WHILE ! EOF() .AND. (mali_ped)->ppag = ' '
                IF (! EMPTY(mcodemp) .AND. mcodemp <> (mali_ped)->pempresa);
                   .OR. EMPTY((mali_ped)->plib_por);
                   .OR. ! EMPTY((mali_ped)->pexp_por);
                   .OR. ! EMPTY((mali_ped)->pexp_dat)
                        SKIP
                        LOOP
                ENDIF
                mnum_pedido := (mali_ped)->pnum_ped
                mcod_vend   := (mali_ped)->pcod_vend
                mcod_op     := (mali_ped)->plib_por
                mdata_lib   := (mali_ped)->plib_dat
                mdata_ped   := (mali_ped)->pdat_ped
                mhora       := (mali_ped)->phora
                mtot_ped    := 0
                mtipo_venda := (mali_ped)->ptp_vend
                mposicao    := RECNO()
                mcod_cli    := (mali_ped)->pcod_cli
                mcod_emp    := (mali_ped)->pempresa
                WHILE mnum_pedido = (mali_ped)->pnum_ped .AND. ! EOF()
                        mtot_ped := mtot_ped + (mali_ped)->pquantd * (mali_ped)->pvlr_fat
                        SKIP
                ENDDO
                AADD(m_pedido,mtot_ped)
                AADD(m_codigo,' '+mnum_pedido+'  '+mcod_cli+'  '+mcod_vend+'  '+DTOC(mdata_ped)+'  '+TRANSFORM(mtot_ped,'99,999,999.99')+'  '+mtipo_venda+'  '+mcod_op+'  '+DTOC(mdata_lib)+'   '+mcod_emp)
                AADD(m_posicao,mposicao)
        ENDDO

        IF LEN(m_codigo) = 0
                atencao('Nenhum Pedido p/EXPEDICAO !!!  -  <ESC> p/Sair')
                IF LASTKEY() = 27
                        RESTSCREEN(01,00,24,79,tela)
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                LOOP
        ENDIF
        WHILE .T.
                mensagem("<> Consulta - <"+CHR(27)+"ou"+CHR(26)+">p/Atualizar - <ENTER>p/Confirma - <ESC> Retorna")
                setcor(10);point := ACHOICE(lci+3,cci+1,lba-1,cba-1,m_codigo,,,point);setcor(1)

                IF LASTKEY()=27
                        RESTSCREEN(01,00,24,79,tela)
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                IF LASTKEY() = 4 .OR. LASTKEY() = 19 .OR. LASTKEY() = 286
                        EXIT
                ENDIF
                IF LASTKEY() = 13
                        GO m_posicao[point]
                        IF mtp = NIL
                                mnum_ped := VAL((mali_ped)->pnum_ped)
                                mcod_cli := VAL((mali_ped)->pcod_cli)
                                mtot_ped := m_pedido[point]
                                opcao := mensagem1('Deseja: [A]lteracao de Pedido - [E] p/Expedicao - [I]mprimir',' ','A,E,I')
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF LASTKEY() = ASC('i') .OR. LASTKEY() = ASC('I')
                                        sac5ped1((mali_ped)->pnum_ped)
                                        ***************
                                        SELE((mali_ped));ORDSETFOCUS(3)
                                        ***************
                                ELSEIF opcao = 'A'
                                        sac23pd1(,mnum_ped,'*')
                                        //sac23p2(,mnum_ped,'E')
                                ELSE
                                        mensagem('Expedicao do PEDIDOS, Aguarde...')
                                        WHILE STRZERO(mnum_ped,6) = pnum_ped .AND. ! EOF()
                                                IF ! BLOQREG()
                                                        atencao('Nao foi possivel acessar o arquivo !!!')
                                                        LOOP
                                                ENDIF
                                                (mali_ped)->pexpedi := '*'
                                                (mali_ped)->pexp_por := cod_operado
                                                (mali_ped)->pexp_dat := mdata_sis
                                                SKIP
                                        ENDDO
                                        DBUNLOCKALL()
                                        DBCOMMITALL()
                                ENDIF
                        ELSE
                                mnum_ped := VAL((mali_ped)->pnum_ped)
                                opcao := mensagem1('Confirma o Estorno do PEDIDO LIBERADO:','N','N,S')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        EXIT
                                ENDIF
                                mensagem('Estornando do PEDIDO, Aguarde...')
                                WHILE STRZERO(mnum_ped,6) = pnum_ped .AND. ! EOF()
                                        IF ! BLOQREG()
                                                atencao('Nao foi possivel acessar o arquivo !!!')
                                                LOOP
                                        ENDIF
                                        (mali_ped)->pexpedi := ' '
                                        (mali_ped)->pexp_por := '   '
                                        (mali_ped)->pexp_dat := CTOD('  /  /  ')
                                        (mali_ped)->plib_por := '   '
                                        (mali_ped)->plib_dat := CTOD('  /  /  ')
                                        SKIP
                                ENDDO
                                DBUNLOCKALL()
                                *************
                                SELE((mali_con));ORDSETFOCUS(1)
                                GO TOP
                                *************
                                IF (mali_con)->(DBSEEK(STRZERO(mnum_ped,6)))
                                        BLOQREG()
                                        (mali_con)->expedi := ' '
                                        (mali_con)->exp_por := '   '
                                        (mali_con)->exp_dat := CTOD('  /  /  ')
                                        (mali_con)->lib_por := '   '
                                        (mali_con)->lib_dat := CTOD('  /  /  ')
                                        (mali_con)->lib_vlr := 0
                                        DBUNLOCK()
                                ENDIF
                                DBCOMMITALL()
                        ENDIF
                        EXIT
                ENDIF
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
************************* F I M ******************************************
