****************************
* MOVIMENTACAO DE VISITAS
****************************

FUNCTION sac6211

LOCAL mprg:='SAC6211',;
      lci,cci,lba,cba,linha,lin,linhas := 0,mop,;
      opcao,telarec,telaprin,mdata,mtip_form,;
      mhoraini,mhorafim,mtipo,mquantd,y,mprob1,mprob2,mprob3,mprob4,mprob5,;
      mcod_tec,mdata_visi

PRIVATE traco,mcliente,mcpf,mcgc,mnome_vend,mcom_ven,mcom_ap,mcod_cli,cons_cli := {}
opcao := SPACE(1)
traco := REPLI('-',80)
mdata := DATE()
lci := 06
cci := 1
lba := 18
cba := 78
mquantd := 1
telarec := SAVESCREEN(01,00,24,79)
SET KEY -9 TO ctrl_w()
********************************************
IF ! AbriArq('sacctvis','ctvis');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
SELE('ctvis')
ORDSETFOCUS(1)
********************************************
mobs1 := SPACE(70)
mobs2 := SPACE(70)
mobs3 := SPACE(70)
mobs4 := SPACE(70)
mobs5 := SPACE(70)
mtip_form := ' '
WHILE .T.
        exibi_prg(mprg)
        mdata_visi := CTOD('  /  /  ')
        mhoraini := TIME()
        mhorafim := SPACE(8)
        mcod_tec := 0
        mcod_cli := 0
        mcliente := SPACE(40)
        botao(lci,cci,lba,cba,,' CONTROLE DE VISITA ')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data Visita:')
        DEVPOS(lci+2,cci+2);DEVOUT('Cod.Cliente:')
        DEVPOS(lci+3,cci+2);DEVOUT('Hora Inicial:')
        DEVPOS(lci+3,cci+26);DEVOUT('Hora Final.:')
        DEVPOS(lci+4,cci+2);DEVOUT('Cod.Tecnico:')
        DEVPOS(lci+5,cci+2);DEVOUT('Conclusao...:')
        @ lci+1,cci+16 GET mdata_visi   // VALID IF(mdata_visi < mdata_sis,.F.,.T.)
        @ lci+2,cci+16 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+2,cci+22)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,telarec)
                SET KEY -9 TO
                RETURN NIL
        ENDIF
        ver_cli(mcod_cli,lci+2,cci+22)
        @ lci+3,cci+16 GET mhoraini PICT '99:99:99'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mop := ' '
        IF ctvis->(DBSEEK(DTOS(mdata_visi)+SUBSTR(mhoraini,1,5)+mcod_cli))
                mop := '*'
                mop := mensagem1('Esta visita ja foi inclusa, Deseja [A]lterar ou [E]xcluir: ','A','A,E')
                IF mop = 'A'
                        BLOQREG()
                        mhorafim := ctvis->hora_fim
                        mcod_tec := VAL(ctvis->cod_tec)
                        mobs1 := ctvis->obs1
                        mobs2 := ctvis->obs2
                        mobs3 := ctvis->obs3
                        mobs4 := ctvis->obs4
                        mobs5 := ctvis->obs5
                ELSEIF mop = 'E'
                        BLOQREG()
                        DELE
                        DBCOMMIT()
                        DBUNLOCK()
                        sr_getconnection():exec("DELETE FROM sacctvis WHERE SR_DELETED = 'T'",,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        LOOP
                ELSE
                        LOOP
                ENDIF
        ELSE
                mobs1 := SPACE(70)
                mobs2 := SPACE(70)
                mobs3 := SPACE(70)
                mobs4 := SPACE(70)
                mobs5 := SPACE(70)
        ENDIF
        @ lci+3,cci+16 GET mhoraini PICT '99:99:99'
        @ lci+3,cci+38 GET mhorafim PICT '99:99:99' VALID IF(EMPTY(mhorafim) .OR. EMPTY(SUBSTR(mhorafim,7,2)),.F.,IF(mhorafim < mhoraini,.F.,.T.))
        @ lci+4,cci+16 GET mcod_tec PICT '999' VALID IF(EMPTY(mcod_tec),.F.,ven(mcod_tec,lci+4,cci+20))
        @ lci+6,cci+05 GET mobs1
        @ lci+7,cci+05 GET mobs2
        @ lci+8,cci+05 GET mobs3
        @ lci+9,cci+05 GET mobs4
        @ lci+10,cci+05 GET mobs5
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        opcao := op_simnao('S','Confirma os Dados:')
        IF opcao = 'N';LOOP;ENDIF
        IF mop = ' '
                ADIREG()
        ENDIF
        ctvis->cod_cli := mcod_cli
        ctvis->cliente := mcliente
        ctvis->cod_tec := STRZERO(mcod_tec,3)
        ctvis->data_proc := mdata_sis
        ctvis->data_visi := mdata_visi
        ctvis->hora_ini := mhoraini
        ctvis->hora_fim := mhorafim
        ctvis->obs1 := mobs1
        ctvis->obs2 := mobs2
        ctvis->obs3 := mobs3
        ctvis->obs4 := mobs4
        ctvis->obs5 := mobs5
        ctvis->cod_oper := cod_operado
        DBUNLOCKALL()
        DBCOMMITALL()
ENDDO
******************************** f i m **************************************

