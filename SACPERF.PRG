*************************************************************
* ROTINA P/GERAR ARQUIVO P/O EXCEL ENTRADA DE MATERIA PRIMA
*************************************************************
FUNCTION sacperf
****************
LOCAL mprg:='SACPERF',;
      lba:=04,cba:=60,mopcao,mdata1,mdata2,mtipo_prod,mcom_sem_sub:=' '

op_tela(0,0,6,60,' Gerar Arquivo p/Excel de MATERIA PRIMA ')
WHILE .T.
        exibi_prg(mprg)
        mopcao := 'S'
        mdata1 := mdata2 := CTOD('  /  /  ')
        mtipo_prod := '2'
        mcom_sem_sub:=' '
        DEVPOS(1,1);DEVOUT('Data Inicial....................:')
        DEVPOS(2,1);DEVOUT('Data Final......................:')
        DEVPOS(3,1);DEVOUT('Tipo [1]Produto [2]Materia Prima:')
        DEVPOS(4,1);DEVOUT('Produto [C]om [S]em Substituicao:')
        @ 1,35 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,35 GET mdata2 VALID IF(mdata1>mdata2,.F.,.T.)
        @ 3,35 GET mtipo_prod VALID mtipo_prod $ '1,2'
        @ 4,35 GET mcom_sem_sub VALID mcom_sem_sub $ 'C,S, '
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mopcao := op_simnao('S','Confirma o Operacao:')
        IF mopcao = 'N'
                LOOP
        ENDIF
        IF ! AbriArq('sacperf','perf','E');RETURN NIL;ENDIF
        ZAP
        IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
        **************************
        SELE('mov');ORDSETFOCUS(1)
        GO TOP
        **************************
        mov->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao tem movimento neste periodo')
                LOOP
        ENDIF
        WHILE mov->data_s_e <= mdata2 .AND. ! EOF()
                prog_imp(RECNO())
                IF (! ver_cod(VAL(mov->codigo),,,,,'*'));
                   .OR. merc->tipo_merc <> mtipo_prod;
                   .OR. mov->ent_sai = 'S';
                   .OR. SUBSTR(mov->documento,1,2) <> 'NF'
                        SKIP
                        LOOP
                ENDIF
                ver_fab(VAL(mov->cod_forn),,,'*')
                *************
                SELE('perf')
                *************
                ADIREG()
                perf->fornecedor := mov->fornece
                perf->cnpj       := forn->cgc
                perf->mat_prima  := mov->produto
                perf->c_fiscal   := merc->cod_fis
                perf->quantd     := mov->quantd
                perf->vl_unit    := mov->pr_unit
                perf->ipi        := mov->ipi
                perf->vl_total   := (mov->quantd*mov->pr_unit)
                perf->data       := mov->data_s_e
                **************************
                SELE('mov');ORDSETFOCUS(1)
                **************************
                SKIP
        ENDDO
        DBCOMMITALL()
        DBUNLOCKALL()
        CLOSE perf
        atencao('Foi gerado o arquivo p/EXCEL')
        RUN EXCEL.EXE ENT_MAT.XLS
ENDDO
wvw_lclosewindow()
RETURN NIL
