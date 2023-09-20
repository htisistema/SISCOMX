* RECEBIMENTO DA NOTA FISCAL DE ENTRADA
******************************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sacrecnf1()
***************
LOCAL mcons_nota:={},mcons_merc:={},m_prod:={}

PRIVATE MPRG:='SACRECNF1',mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_forn,mcod_barr,mdescri,mnum_nota := SPACE(6),mtraco,mtit,mtipo,;
        mhoras := '',mdata

IF ! ver_nivel(mprg,'RECEBIMENTO DA NOTA FISCAL DE ENTRADA','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

op_tela(02,00,32,100,' RECEBIMENTO DA NOTA FISCAL DE ENTRADA ')
mtraco := REPLI('=',137)
WHILE .T.
        limpa(0,0,33,100)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        m_prod:={}
        mprod_ok:={}
        mprod_nao:={}
        mtipo_imp := m_indiv[1,10]
        mcod_forn := mquantd   := mavaria := 0
        mcod_barr := SPACE(14)
        mnum_nota := SPACE(6)
        mdescri   := SPACE(40)
        DEVPOS(0,0);DEVOUT('Codigo Fornecedor....:')
        DEVPOS(1,0);DEVOUT('Numero da Nota Fiscal:')
        @ 2,0 TO 2,100
        DEVPOS(3,0);DEVOUT('Codigo Barra........:')
        DEVPOS(4,0);DEVOUT('Codigo e Descricao..:')
        DEVPOS(5,0);DEVOUT('Quantidade..........:')
        DEVPOS(6,0);DEVOUT('Quantidade Avarias..:')
        @ 7,0 TO 7,100
        DEVPOS(8,0);DEVOUT('Item Codigo Barra    Cod. Descricao                                 Quantidade     Avarias Sit.')
        @ 9,0 TO 9,100
        @ 0,22 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,v_fornece(mcod_forn,0,27))
        READ
        IF LASTKEY() = 27
                RELEASE mprg
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        v_fornece(mcod_forn,0,27)
        @ 1,22 GET mnum_nota PICT '999999' VALID IF(EMPTY(mnum_nota) .OR. LEN(ALLTRIM(mnum_nota)) < 6,.F.,.T.)
        READ
        IF LASTKEY() = 27
                RELEASE mprg
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
	mcons_nota:={}
	sr_getconnection():exec("SELECT * FROM sacrec_nf WHERE num_nf = "+sr_cdbvalue(mnum_nota)+" AND cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4)),,.t.,@mcons_nota)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_nota) > 0
                atencao('Esta Nota ja Existe foi Digitada...')
                LOOP
        ENDIF
        WHILE .T.
                limpa(3,22,6,90)
                mquantd   := mavaria := 0
                mcod_barr := SPACE(14)
                mdescri   := SPACE(40)
                @ 3,22 GET mcod_barr PICT '@!'
                READ
                IF LASTKEY() = 27
                        IF LEN(m_prod) > 0
                                IF 'N' = op_simnao('N','Deseja abortar este Recebimento:')
                                        LOOP
                                ENDIF
                        ENDIF
                        EXIT
                ENDIF
                IF EMPTY(mcod_barr)
                        @ 3,22 GET mcod_barr PICT '@!'
                        READ
                        IF EMPTY(mcod_barr)
                                IF LEN(m_prod) > 0
                                        IF 'N' = op_simnao('S','Confirma a Digitacao da Nota:')
                                                LOOP
                                        ENDIF
                                ENDIF
                                EXIT
                        ENDIF
                ENDIF
        	mcons_merc:={}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_barr),,.t.,@mcons_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mcons_merc) = 0
                        machou := ' '
                        i := 0
                        FOR i = 1 TO LEN(m_prod)
                                IF ALLTRIM(mcod_barr) = m_prod[i,1] .AND. m_prod[i,1] <> '   EXCLUIDO'
                                        machou := '*'
                                        EXIT
                                ENDIF
                        NEXT
                        IF machou = '*'
                                mquantd := m_prod[i,4]
                                mavaria := m_prod[i,5]
                                atencao('Este Produto ja foi digitado....')
                                setcor(3)
                                DEVPOS(4,22);DEVOUT(m_prod[i,2]+' - '+m_prod[i,3])
                                setcor(1)
                                @ 5,22 GET mquantd PICT '999,999.999'
                                @ 6,22 GET mavaria PICT '999,999.999' 
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF 'S' = op_simnao('S','Confirma a Alteracao deste Produto:')
                                        m_prod[i,4] := mquantd
                                        m_prod[i,5] := mavaria
                                ENDIF
                        ELSE
                                atencao('Codigo de Barra com este CODIGO DE BARRA nao cadastrado...')
                                @ 4,28 GET mdescri PICT '@!' VALID IF(EMPTY(mdescri),.F.,.T.)
                                @ 5,22 GET mquantd PICT '999,999.999' VALID IF(EMPTY(mquantd),.F.,.T.)
                                @ 6,22 GET mavaria PICT '999,999.999' 
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF 'S' = op_simnao('S','Deseja Incluir este Produto:')
                                        AADD(m_prod,{ALLTRIM(mcod_barr),'     ',mdescri,mquantd,mavaria,'NAO CADASTRADO'})
                                ENDIF
                        ENDIF
                ELSE
                        machou := ' '
                        i := 0
                        FOR i = 1 TO LEN(m_prod)
                                IF ALLTRIM(mcod_barr) = m_prod[i,1]
                                        machou := '*'
                                        EXIT
                                ENDIF
                        NEXT
                        IF machou = '*'
                                mquantd := m_prod[i,4]
                                mavaria := m_prod[i,5]
                                atencao('Este Produto ja foi digitado....')
                                setcor(3)
                                DEVPOS(4,22);DEVOUT(mcons_merc[1,8]+' - '+mcons_merc[1,9])
                                setcor(1)
                                @ 5,22 GET mquantd PICT '999,999.999' VALID IF(EMPTY(mquantd),.F.,.T.)
                                @ 6,22 GET mavaria PICT '999,999.999' 
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF 'S' = op_simnao('S','Confirma a Alteracao deste Produto:')
                                        m_prod[i,4] := mquantd
                                        m_prod[i,5] := mavaria
                                ENDIF
                        ELSE
                                setcor(3)
                                DEVPOS(4,22);DEVOUT(mcons_merc[1,8]+' - '+mcons_merc[1,9])
                                setcor(1)
                                @ 5,22 GET mquantd PICT '999,999.999' VALID IF(EMPTY(mquantd),.F.,.T.)
                                @ 6,22 GET mavaria PICT '999,999.999' 
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF 'S' = op_simnao('S','Deseja Incluir este Produto:')
                                        AADD(m_prod,{ALLTRIM(mcod_barr),mcons_merc[1,8],mcons_merc[1,9],mquantd,mavaria,'OK'})
                                ENDIF
                        ENDIF

                ENDIF
                i := f := 0
                //ASORT(m_prod,,,{|x,y| x[2] < y[2]})
                FOR i = 1 TO LEN(m_prod)
                        setcor(3)
                        DEVPOS(9+i,0      );DEVOUT(STRZERO(i,3))
                        DEVPOS(9+i,5      );DEVOUT(m_prod[i,1])
                        DEVPOS(9+i,20     );DEVOUT(m_prod[i,2])
                        DEVPOS(9+i,COL()+1);DEVOUT(m_prod[i,3])
                        DEVPOS(9+i,COL()+1);DEVOUT(IF(m_prod[i,4] > 0,TRANSFORM(m_prod[i,4],'999,999.999'),'   EXCLUIDO'))
                        DEVPOS(9+i,COL()+1);DEVOUT(TRANSFORM(m_prod[i,5],'999,999.999'))
                        DEVPOS(9+i,COL()+1);DEVOUT(m_prod[i,6])
                        setcor(1)
                        IF f > 16
                                SCROLL(10,0,31,100,1)
                                setcor(1)
                                LOOP
                        ELSE
                                //i++
                                f++
                        ENDIF
                NEXT
        ENDDO
        IF LEN(m_prod) = 0 .OR. LASTKEY() = 27
                LOOP
        ENDIF
        //IF 'S' = op_simnao('S','Confirma a Digitacao da Nota:')
                mhoras := TIME()
                mdata  := DTOC(mdata_sis)
                moper  := cod_operado
                i := 0
                FOR i = 1 TO LEN(m_prod)
                        IF m_prod[i,4] = 0
                                LOOP
                        ENDIF
                        sr_getconnection():exec('INSERT INTO sacrec_nf ('+;
                        'num_nf    ,'+; //1
                        'cod_forn  ,'+; //2
                        'cod_barra  ,'+; //3
                        'cod_merc  ,'+; //4
                        'descricao ,'+; //5
                        'quantd    ,'+; //6
                        'avaria    ,'+; //7
                        'operador  ,'+; //8
                        'data_rec  ,'+; //9 
                        'hora_rec  ,'+; //10
                        'SR_DELETED )'+;                                                                                                                                  
                        ' VALUES ('+;                                                                                                                                     
                        sr_cdbvalue(mnum_nota                          )+','+; //1                                                                                      
                        sr_cdbvalue(STRZERO(mcod_forn,4)               )+','+; //2                                                                                      
                        sr_cdbvalue(m_prod[i,1]                        )+','+; //2                                                                                      
                        sr_cdbvalue(m_prod[i,2]                        )+','+; //3                                                                                      
                        sr_cdbvalue(m_prod[i,3]                        )+','+; //4                                                                                    
                        sr_cdbvalue(m_prod[i,4]                        )+','+; //5                                                                                      
                        sr_cdbvalue(m_prod[i,5]                        )+','+; //6                                                                                      
                        sr_cdbvalue(cod_operado                        )+','+; //7
                        sr_cdbvalue(mdata_sis                          )+','+; //8                                                                                      
                        sr_cdbvalue(mhoras                             )+','+; //9                                                                                      
                        sr_cdbvalue(' ')+')',,.f.)                                                                                                                        
                NEXT
                sr_getconnection():exec("COMMIT",,.f.)

                imp_recnf(m_prod,'01')

        //ENDIF
ENDDO
RETURN NIL

********************************* f i m ***************************************
* IMPRIMIR RELATORIO DE RECEBIMENTO DE NOTA FISCAL
***************************************************
FUNCTION imp_recnf(m_v,mvia)
***************************
//ASORT(m_vetor,,,{|x,y| x[2] < y[2]})
mpag = 0
IF ! imp_arq('REC_NF.REL','R')
        RETURN NIL
ENDIF
m_vetor:={}
sr_getconnection():exec("SELECT * FROM sacrec_nf WHERE num_nf = "+sr_cdbvalue(mnum_nota)+" AND cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4))+" ORDER BY sr_recno",,.t.,@m_vetor)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(m_vetor) = 0
        atencao('Nao esta Nota fiscal em nosso arquivos...')
        RETURN NILL
ENDIF

f:=0
mtit := 'Relatorio de RECEBIMENTO DE NOTA FISCAL No: '+mnum_nota 
mtipo := 'Fornecedor: '+STRZERO(mcod_forn,4)
//FOR f = 1 TO mquantd_cop
        mtot_item := mpag := mtot_item := 0
        i:=0
        FOR i = 1 TO LEN(m_vetor)
                IF mpag = 0 .OR. PROW() >= 57
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg,'001')
                        imprt(mtipo_imp,'C')
                        imprt(mtipo_imp,'N')
                        imprt(mtipo_imp,'W1')
                        imprt(mtipo_imp,'N+')
                        DEVPOS(PROW()+1,00);DEVOUT('No.Nota: '+mnum_nota +' - Fornecedor: '+STRZERO(mcod_forn,4))
                        imprt(mtipo_imp,'N-')
                        imprt(mtipo_imp,'W0')
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('Data...: '+mdata +' - Hora: '+mhoras+' - Operador: '+moper+' - Via: '+mvia)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        DEVPOS(PROW()+1,00);DEVOUT(' Codigo Barra')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Codigo')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Descricao                               ')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Quantidade')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('   Avarias')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                prog_imp(RECNO())
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(m_vetor[i,3])
                DEVPOS(PROW(),16);DEVOUT(m_vetor[i,4])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_vetor[i,5])
                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_vetor[i,6],'999,999.99')
                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_vetor[i,7],'999,999.99')
                DEVPOS(PROW(),PCOL()+2);DEVOUT(IF(EMPTY(m_vetor[i,4]),'NAO CADASTRADO','OK'))
                mtot_item ++
        NEXT
        IF PROW() >= 55         //.AND. mop_cab = 'S'
                EJECT
                mpag ++
                cabecalho(mpag,mtit,mtipo,mprg,'001')
                imprt(mtipo_imp,'C')
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'W1')
                imprt(mtipo_imp,'N+')
                DEVPOS(PROW()+1,00);DEVOUT('No.Nota: '+mnum_nota +' - Fornecedor: '+STRZERO(mcod_forn,4))
                imprt(mtipo_imp,'N-')
                imprt(mtipo_imp,'W0')
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Data...: '+mdata +' - Hora: '+mhoras+' - Operador: '+moper+' - Via: '+mvia)
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(' Codigo Barra')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Codigo')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Descricao                               ')
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Quantidade')
                DEVPOS(PROW(),PCOL()+2);DEVOUT('   Avarias')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+2,00);DEVOUT('Total de Item..........:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mtot_item,'999,999')))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        SETPRC(00,00)
//NEXT
SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
conf_impressao('REC_NF.REL')
RETURN NIL
