MEMVAR getlist,mdata_sis,cod_operado
**************************************
* MENU DOS BOLETOS
**************************************
FUNCTION sacbole1(mcli,mdoc,mvlr,mtp,mt)
****************************************
LOCAL mprg:='SACBOLE1',;
      tela,lba:=15,cba:=79,mtipo_end,mflag_imp:=' ',mfound,i:=0,meject:=' ',mnum_fat,mvlr_fat:=0

PRIVATE local,mdata,mvenc,n_documento,especie,aceite,mvalor,bol_obs1,;
        bol_obs2,bol_obs3,bol_obs4,bol_obs5,mcod_cli,mendereco,mcliente,mreg:=0,mtipo,mtip,;
        mvalor_ped:=0,mparc:=0,macrecimo:=0,cons_ped:={},cons_dup:={},cons_cli:={},;
        mcpf,mcgc,mnum_ped:=0,ali:='ped_s',;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

mtipo := mtp
mtip  := mt
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF mdoc = NIL
        *************
        IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
        //
        IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
        n_documento := mnum_fat := SPACE(10)
        mvalor := mcod_cli := mvlr_fat := 0
ELSE
        n_documento := mnum_fat := mdoc
        mvalor := mvlr_fat := mvlr
        mcod_cli := mcli
ENDIF
set_key('cliente')
SELE('cli');ORDSETFOCUS(2)
GO TOP
*************
mtipo_end := 'P'
local := m_set[1,55]
*local := 'Ate o vencimento pagavel em qualquer agencia'+SPACE((46-LEN('Ate o vencimento pagavel em qualquer agencia')))
mdata := mdata_sis
mvenc := CTOD('  /  /  ')
IF mtipo = 'DUPLICATA' .OR. mtipo = 'DUPLICATA JW'
        especie := 'C   '
ELSE
        especie := 'DUPL'
ENDIF
aceite := SPACE(1)
mcliente := SPACE(40)
mendereco := SPACE(70)
mcgc := SPACE(18)
macrecimo := 0
op_tela(5,10,22,90,' Emissao de Boleto Bancario < '+mtipo+' >')
exibi_prg(mprg)
WHILE .T.
        bol_obs1 := m_set[1,56]
        bol_obs2 := m_set[1,57]
        bol_obs3 := m_set[1,58]
        bol_obs4 := m_set[1,59]
        bol_obs5 := m_set[1,60]
        *************
        //SELE('cli');ORDSETFOCUS(2)
        //GO TOP
        *************
        mtipo_imp := m_indiv[1,25]
        mfound:=' '
        mensagem('Preencha os campos que desejar - <ESC> p/Sair')
        DEVPOS(0,1);DEVOUT('No.Pedido..:')
        DEVPOS(1,1);DEVOUT('Cod.Cliente:')
        DEVPOS(2,1);DEVOUT('CGC/CPF:')
        DEVPOS(3,1);DEVOUT('Tipo Endereco [P]rincipal [C]obranca:')
        DEVPOS(4,1);DEVOUT('End.:')
        DEVPOS(5,1);DEVOUT('Local Pag.:')
        DEVPOS(6,1);DEVOUT('Data:')
        DEVPOS(6,17);DEVOUT('Vencimento:')
        DEVPOS(7,1);DEVOUT('No.Duplicata:')
        DEVPOS(7,27);DEVOUT('Especie:')
        DEVPOS(7,42);DEVOUT('Aceite:')
        DEVPOS(7,52);DEVOUT('Valor:')
        DEVPOS(8,1);DEVOUT('No.Fatura...:')
        DEVPOS(8,27);DEVOUT('Valor:')
        DEVPOS(9,1);DEVOUT('Outros Acrescimos:')
        DEVPOS(10,1);DEVOUT('Observacao:')
        @ 0,14 GET mnum_ped PICT '999999'
        READ
        IF LASTKEY() = 27
                IF ! EMPTY(mflag_imp)
                        SET DEVI TO PRINT
                        SET PRINT TO (m_indiv[1,24])
                        EJECT
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                ENDIF
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cli := 0
        IF ! EMPTY(mnum_ped)
                cons_ped := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_ped) = 0
                        atencao('Este Pedido ja foi emitido *** BOLETO ***')
                ENDIF
                cons_dup := {}
                sr_getconnection():exec("SELECT * FROM sacdupr WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND datpag IS NULL",,.t.,@cons_dup)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_dup) > 0
                        mfound := '*'
                        mreg := RECNO()
                        mcod_cli := VAL(cons_dup[1,7])
                        mcliente := cons_dup[1,8]
                        cons_cli := {}
                        sr_getconnection():exec("SELECT razao FROM saccli WHERE cod_cli = "+sr_cdbvalue(cons_dup[1,7]),,.t.,@cons_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_cli) > 0
                                mcliente := cons_cli[1,1]
                        ENDIF
                        mdata := cons_dup[1,10]
                        mvenc := cons_dup[1,11]
                        mvalor := cons_dup[1,19]
                        n_documento := cons_dup[1,4]
                ELSE
                        IF ! EMPTY(cons_ped[1,97])
                                atencao('Este Pedido ja foi emitido *** BOLETO ***')
                        ENDIF
                        mreg := RECNO()
                        mcod_cli := VAL(cons_ped[1,23])
                        cons_cli := {}
                        sr_getconnection():exec("SELECT razao FROM saccli WHERE cod_cli = "+sr_cdbvalue(cons_ped[1,23]),,.t.,@cons_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_cli) > 0
                                mcliente := cons_cli[1,1]
                        ENDIF
                        mdata := cons_ped[1,4]
                        mvenc := cons_ped[1,4] + VAL(SUBSTR(cons_ped[1,44],3,3))
                        mparc := VAL(SUBSTR(cons_ped[1,43],1,1))+VAL(SUBSTR(cons_ped[1,43],2))
                        n_documento := cons_ped[1,2]+'/01'
                        mvalor_ped := i := 0

                        FOR i = 1 TO LEN(cons_ped)
                                mvalor_ped := mvalor_ped + (cons_ped[i,14] * cons_ped[i,18])
                        NEXT
                        mvalor := mvalor_ped / mparc
                ENDIF
        ENDIF
        @ 1,14 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,1,20)
        @ 1,20 GET mcliente PICT '@!' WHEN EMPTY(mcod_cli)
        @ 2,10 GET mcgc WHEN EMPTY(mcod_cli)
        @ 3,39 GET mtipo_end PICT '@!' VALID mtipo_end $ 'P,C' .AND. lim_get() WHEN men_get(4,27,'Informe o tipo do Endereco: [P]rincipal ou [C]obranca')
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! EMPTY(mcod_cli)
                cons_cli := {}
                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                mcliente := cons_cli[1,3]
                IF mtipo_end = 'P'
                        mendereco := RTRIM(cons_cli[1,21])+'-'+RTRIM(cons_cli[1,22])+'-'+RTRIM(cons_cli[1,24])+'-'+RTRIM(cons_cli[1,25])+'- CEP.:'+cons_cli[1,26]
                ELSE
                        mendereco := RTRIM(cons_cli[1,100])+'-'+RTRIM(cons_cli[1,101])+'-'+RTRIM(cons_cli[1,102])+'-'+RTRIM(cons_cli[1,103])+'- CEP.:'+cons_cli[1,104]
                ENDIF
        ENDIF
        @ 4,7 GET mendereco PICT '@S70!'
        @ 5,13 GET local
        @ 6,7 GET mdata
        @ 6,29 GET mvenc VALID IF(mvenc<mdata .AND. ver_serie() <> '141447',.F.,.T.)
        @ 7,15 GET n_documento PICT '@!' VALID IF(EMPTY(n_documento),.F.,.T.)
        @ 7,36 GET especie PICT '@!'
        @ 7,50 GET aceite PICT '@!'
        @ 7,59 GET mvalor PICT '999,999.99'
        READ
        mnum_fat := n_documento
        mvlr_fat := mvalor
        @ 8,15 GET mnum_fat PICT '@!'
        @ 8,36 GET mvlr_fat PICT '999,999.99'
        @ 9,20 GET macrecimo PICT '999,999.99'
        READ
        bol_obs1 := STRTRAN(bol_obs1,'@$juros',ALLTRIM(TRANSFORM((m_set[1,51]/100)*mvalor,'999,999.99')))
        bol_obs2 := STRTRAN(bol_obs2,'@$juros',ALLTRIM(TRANSFORM((m_set[1,51]/100)*mvalor,'999,999.99')))
        bol_obs3 := STRTRAN(bol_obs3,'@$juros',ALLTRIM(TRANSFORM((m_set[1,51]/100)*mvalor,'999,999.99')))
        bol_obs4 := STRTRAN(bol_obs4,'@$juros',ALLTRIM(TRANSFORM((m_set[1,51]/100)*mvalor,'999,999.99')))
        bol_obs5 := STRTRAN(bol_obs5,'@$juros',ALLTRIM(TRANSFORM((m_set[1,51]/100)*mvalor,'999,999.99')))

        bol_obs1 := STRTRAN(bol_obs1,'@%juros',ALLTRIM(TRANSFORM(m_set[1,51],'999.99')))
        bol_obs2 := STRTRAN(bol_obs2,'@%juros',ALLTRIM(TRANSFORM(m_set[1,51],'999.99')))
        bol_obs3 := STRTRAN(bol_obs3,'@%juros',ALLTRIM(TRANSFORM(m_set[1,51],'999.99')))
        bol_obs4 := STRTRAN(bol_obs4,'@%juros',ALLTRIM(TRANSFORM(m_set[1,51],'999.99')))
        bol_obs5 := STRTRAN(bol_obs5,'@%juros',ALLTRIM(TRANSFORM(m_set[1,51],'999.99')))

        IF mtipo <> 'DUPLICATA' .AND. mtipo <> 'DUPLICATA JW' .AND. mtipo <> 'PRE_IMP2'
                @ 10,13 GET bol_obs1
                @ 11,13 GET bol_obs2
                @ 12,13 GET bol_obs3
                @ 13,13 GET bol_obs4
                @ 14,13 GET bol_obs5
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        meject := op_simnao('N','Dar AVANCO DE PAGINA apos a impressao do boleto:')
        IF LASTKEY() = 27;LOOP;ENDIF
        IF ! imp_arq('BOLETO.REL','B')
                LOOP
        ENDIF
        IF EMPTY(mnum_ped)
                /*
                IF mtipo = 'ITAU' .OR. mtipo = 'BILBAO'
                        mflag_imp := '*'
                        bol_itau()
                ELSEIF mtipo = 'UNIBANCO'
                        bol_unib()
                        IF meject = 'S';EJECT;ENDIF
                ELSEIF mtipo = 'RURAL'
                        bol_rural()
                        IF meject = 'S';EJECT;ENDIF
                ELSEIF mtipo = 'REAL'
                        bol_real()
                        IF meject = 'S';EJECT;ENDIF
                ELSEIF mtipo = 'BANDEPE' .OR. mtipo = 'HSBC'
                        bol_bandep()
                        IF meject = 'S';EJECT;ENDIF
                ELSEIF mtipo = 'BRADESCO' .OR. mtipo = 'BB'
                        mflag_imp := '*'
                        bol_brades()
                */
                IF mtipo == 'DUPLICATA'
                        dup_sis(STR(cons_cli[1,2],5),cons_cli[1,3],cons_cli[1,21],cons_cli[1,22],cons_cli[1,24],cons_cli[1,25],;
                                cons_cli[1,26],cons_cli[1,29],cons_cli[1,32],cons_cli[1,33],cons_cli[1,34],cons_cli[1,100],cons_cli[1,101],;
                                cons_cli[1,102],cons_cli[1,103],cons_cli[1,104],cons_cli[1,105],'DU',n_documento,;
                                mdata,mvenc,VAL(cod_operado),mvalor)
                        IF meject = 'S';EJECT;ENDIF
                ELSEIF mtipo == 'PRE_IMP2'
                        dup_pre2(mdata,cod_operado,mvalor,n_documento,mvenc,mcliente,mcod_cli,cons_cli[1,21],;
                                cons_cli[1,22],cons_cli[1,24],cons_cli[1,25],cons_cli[1,26],cons_cli[1,32],cons_cli[1,33],cons_cli[1,34],especie,mnum_fat,mvlr_fat)
                        EJECT
                        //IF meject = 'S';EJECT;ENDIF
                ENDIF
        ELSE
                IF mfound = '*'
                        i:=0
                        FOR i = 1 TO LEN(cons_dup)
                                IF ver_serie() <> '141447'
                                        mvenc:= cons_dup[i,11]
                                ENDIF
                                mdata := cons_dup[i,10]
                                n_documento := cons_dup[i,4]
                                mvalor := cons_dup[i,19]
                                IF mtipo == 'DUPLICATA'
                                        dup_sis(STR(cons_cli[1,2],5),cons_cli[1,3],cons_cli[1,21],cons_cli[1,22],cons_cli[1,24],cons_cli[1,25],;
                                                cons_cli[1,26],cons_cli[1,29],cons_cli[1,32],cons_cli[1,33],cons_cli[1,34],cons_cli[1,100],cons_cli[1,101],;
                                                cons_cli[1,102],cons_cli[1,103],cons_cli[1,104],cons_cli[1,105],'DU',n_documento,;
                                                mdata,mvenc,VAL(cod_operado),mvalor)
                                        IF meject = 'S';EJECT;ENDIF
                                ELSEIF mtipo == 'PRE_IMP2'
                                        dup_pre2(mdata,cod_operado,mvalor,n_documento,mvenc,mcliente,mcod_cli,cons_cli[1,21],;
                                                cons_cli[1,22],cons_cli[1,24],cons_cli[1,25],cons_cli[1,26],cons_cli[1,32],cons_cli[1,33],cons_cli[1,34],especie,mnum_fat,mvlr_fat)
                                        EJECT
                                        //IF meject = 'S';EJECT;ENDIF
                                ENDIF
                                SKIP
                        NEXT
                ELSE
                        *************
                        SELE('ped_s');ORDSETFOCUS(1)
                        GO mreg
                        *************
                        i := 1
                        FOR i = 1 TO mparc
                                IF ver_serie() <> '141447'
                                        mvenc := cons_ped[1,4] + VAL(SUBSTR(cons_ped[1,44],3*i,3))
                                ENDIF
                                mdata := cons_ped[1,4]
                                n_documento := ALLTRIM(STR(VAL(cons_ped[1,2])))+'/'+STRZERO(i,2)
                                mvalor := mvalor_ped / mparc
                                /*
                                IF mtipo = 'ITAU' .OR. mtipo = 'BILBAO'
                                        bol_itau()
                                ELSEIF mtipo = 'UNIBANCO'
                                        bol_unib()
                                        IF meject = 'S';EJECT;ENDIF
                                ELSEIF mtipo = 'RURAL'
                                        bol_rural()
                                        IF meject = 'S';EJECT;ENDIF
                                ELSEIF mtipo = 'REAL'
                                        bol_real()
                                        IF meject = 'S';EJECT;ENDIF
                                ELSEIF mtipo = 'BANDEPE' .OR. mtipo = 'HSBC'
                                        bol_bandep()
                                        IF meject = 'S';EJECT;ENDIF
                                ELSEIF mtipo = 'BRADESCO' .OR. mtipo = 'BB'
                                        bol_brades()
                                */
                                IF mtipo == 'DUPLICATA'
                                        dup_sis(STR(cons_cli[1,2],5),cons_cli[1,3],cons_cli[1,21],cons_cli[1,22],cons_cli[1,24],cons_cli[1,25],;
                                                cons_cli[1,26],cons_cli[1,29],cons_cli[1,32],cons_cli[1,33],cons_cli[1,34],cons_cli[1,100],cons_cli[1,101],;
                                                cons_cli[1,102],cons_cli[1,103],cons_cli[1,104],cons_cli[1,105],'DU',n_documento,;
                                                mdata,mvenc,VAL(cod_operado),mvalor)
                                        IF meject = 'S';EJECT;ENDIF
                                ELSEIF mtipo == 'PRE_IMP2'
                                        dup_pre2(mdata,cod_operado,mvalor,n_documento,mvenc,mcliente,mcod_cli,cons_cli[1,21],;
                                                cons_cli[1,22],cons_cli[1,24],cons_cli[1,25],cons_cli[1,26],cons_cli[1,32],cons_cli[1,33],cons_cli[1,34],especie,mnum_fat,mvlr_fat)
                                        EJECT
                                        //IF meject = 'S';EJECT;ENDIF
                                ENDIF
                        NEXT
                ENDIF
                sr_getconnection():exec("UPDATE sacped_s SET pboleto = '*' WHERE pnum_ped = " + sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
/*
                *************
                SELE('ped_s');ORDSETFOCUS(1)
                GO TOP
                *************
                ped_s->(DBSEEK(STRZERO(mnum_ped,6)))
                WHILE ped_s->pnum_ped = STRZERO(mnum_ped,6) .AND. ! EOF()
                        BLOQREG()
                        ped_s->pboleto := '*'
                        SKIP
                ENDDO
                DBCOMMITALL()
                DBUNLOCKALL()
*/
        ENDIF
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('BOLETO.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
****************************** fim **********************************
/*
* BOLETO BANCO ITAU
**************************************************
FUNCTION bol_itau()
*******************
MEMVAR mtipo_imp,mtipo,local,mvenc,mdata,n_documento,especie,aceite,mvalor,;
       bol_obs1,bol_obs2,bol_obs3,bol_obs4,bol_obs5,mcod_cli,mcliente,mcgc,mcpf,mendereco

imprt(mtipo_imp,'P8')
IF mtipo = 'ITAU'
        imprt(mtipo_imp,'N',1)
        DEVPOS(PROW()+2,00);DEVOUT(local)
ELSEIF mtipo = 'BILBAO'
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT(local)
ENDIF
DEVPOS(PROW(),50);DEVOUT(mvenc)
DEVPOS(PROW()+4,00);DEVOUT(mdata)
DEVPOS(PROW(),16);DEVOUT(n_documento)
DEVPOS(PROW(),30);DEVOUT(especie)
DEVPOS(PROW(),38);DEVOUT(aceite)
DEVPOS(PROW()+3,50);DEVOUT('R$ '+TRANSFORM(mvalor,'999,999.99'))
DEVPOS(PROW()+3,00);DEVOUT(bol_obs1)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs2)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs3)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs4)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs5)
DEVPOS(PROW()+5,00);DEVOUT(mcod_cli+' - '+mcliente)
IF ! EMPTY(mcod_cli)
        IF ! EMPTY(mcpf)
                DEVPOS(PROW()+1,00);DEVOUT('CPF: '+TRANSFORM(mcpf,'@@R 999.999.999-99'))
        ELSE
                DEVPOS(PROW()+1,00);DEVOUT('CGC: '+TRANSFORM(mcgc,'@@R 99.999.999/9999-99'))
        ENDIF
ELSE
        DEVPOS(PROW()+1,00);DEVOUT(mcgc)
ENDIF
imprt(mtipo_imp,'C',1)
DEVPOS(PROW(),00);DEVOUT(mendereco)
imprt(mtipo_imp,'N',8)
SETPRC(00,00)
imprt(mtipo_imp,'P6')
mvenc := CTOD('  /  /  ')
n_documento := SPACE(10)
mvalor := 0
RETURN NIL
******************************** F I M *************************************
* BOLETO BANCO UNIBANCO
**************************************************
FUNCTION bol_unib()
*******************
MEMVAR mtipo_imp,mtipo,local,mvenc,mdata,n_documento,especie,aceite,mvalor,;
       bol_obs1,bol_obs2,bol_obs3,bol_obs4,bol_obs5,mcgc,mcpf

imprt(mtipo_imp,'P8')
imprt(mtipo_imp,'N',1)
DEVPOS(PROW()+2,03);DEVOUT(local)
DEVPOS(PROW(),55);DEVOUT(mvenc)
DEVPOS(PROW()+4,03);DEVOUT(mdata)
DEVPOS(PROW(),21);DEVOUT(n_documento)
DEVPOS(PROW(),35);DEVOUT(especie)
DEVPOS(PROW(),41);DEVOUT(aceite)
DEVPOS(PROW()+2,55);DEVOUT('R$ '+TRANSFORM(mvalor,'999,999.99'))
DEVPOS(PROW()+3,03);DEVOUT(bol_obs1)
DEVPOS(PROW()+1,03);DEVOUT(bol_obs2)
DEVPOS(PROW()+1,03);DEVOUT(bol_obs3)
DEVPOS(PROW()+1,03);DEVOUT(bol_obs4)
DEVPOS(PROW()+1,03);DEVOUT(bol_obs5)
DEVPOS(PROW()+1,55);DEVOUT('R$ '+TRANSFORM(macrecimo,'999,999.99'))
DEVPOS(PROW()+4,05);DEVOUT(cons_cli[1,2]+' - '+cons_cli[1,3])
IF ! EMPTY(cons_cli[1,34])
        DEVPOS(PROW()+1,05);DEVOUT('CPF: '+TRANSFORM(mcpf,'@@R 999.999.999-99'))
ELSE
        DEVPOS(PROW()+1,05);DEVOUT('CGC: '+TRANSFORM(mcgc,'@@R 99.999.999/9999-99'))
ENDIF
imprt(mtipo_imp,'C',1)
DEVPOS(PROW(),10);DEVOUT(mendereco)
*DEVPOS(PROW(),10);DEVOUT(RTRIM(cons_cli[1,21])+'-'+RTRIM(cons_cli[1,22])+'-'+RTRIM(cons_cli[1,24])+'-'+RTRIM(cons_cli[1,25])+'- CEP.:'+cons_cli[1,26])
SETPRC(00,00)
imprt(mtipo_imp,'P6')
imprt(mtipo_imp,'N',7)          //quantidade de linha p/pula
mvenc := CTOD('  /  /  ')
n_documento := SPACE(10)
mvalor := 0
RETURN NIL
***************************** F I M ************************************
* BOLETO BANCO REAL
*******************
FUNCTION bol_real
LOCAL mnum_l:=0
MEMVAR mtipo_imp,mtipo,local,mvenc,mdata,n_documento,especie,aceite,mvalor,;
       bol_obs1,bol_obs2,bol_obs3,bol_obs4,bol_obs5,mtip,mcgc,mcpf

imprt(mtipo_imp,'P8')
imprt(mtipo_imp,'N',1)
DEVPOS(PROW()+1,00);DEVOUT(local)
DEVPOS(PROW(),55);DEVOUT(mvenc)
DEVPOS(PROW()+4,00);DEVOUT(mdata)
DEVPOS(PROW(),10);DEVOUT(n_documento)
DEVPOS(PROW(),35);DEVOUT(especie)
DEVPOS(PROW(),36);DEVOUT(aceite)
DEVPOS(PROW()+2,50);DEVOUT('R$ '+TRANSFORM(mvalor,'999,999.99'))
DEVPOS(PROW()+3,00);DEVOUT(bol_obs1)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs2)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs3)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs4)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs5)
IF mtip = NIL
        DEVPOS(PROW()+5,00);DEVOUT(cons_cli[1,2]+' - '+cons_cli[1,3])
        IF ! EMPTY(cons_cli[1,34])
                DEVPOS(PROW()+1,00);DEVOUT('CPF: '+TRANSFORM(mcpf,'@@R 999.999.999-99'))
        ELSE
                DEVPOS(PROW()+1,00);DEVOUT('CGC: '+TRANSFORM(mcgc,'@@R 99.999.999/9999-99'))
        ENDIF
        mnum_l := 6
ELSE
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+5,05);DEVOUT(cons_cli[1,2]+' - '+cons_cli[1,3])
        IF ! EMPTY(mcpf)
                DEVPOS(PROW(),PCOL()+30);DEVOUT(TRANSFORM(mcpf,'@@R 999.999.999-99'))
        ELSE
                DEVPOS(PROW(),PCOL()+30);DEVOUT(TRANSFORM(mcgc,'@@R 99.999.999/9999-99'))
        ENDIF
        mnum_l := 7
ENDIF
imprt(mtipo_imp,'C')
DEVPOS(PROW()+1,00);DEVOUT(mendereco)
*DEVPOS(PROW(),00);DEVOUT(RTRIM(cons_cli[1,21])+'-'+RTRIM(cons_cli[1,22])+'-'+RTRIM(cons_cli[1,24])+'-'+RTRIM(cons_cli[1,25])+'- CEP.:'+cons_cli[1,26])
imprt(mtipo_imp,'P6')
DEVPOS(PROW()+1,00);DEVOUT('')
SETPRC(00,00)
imprt(mtipo_imp,'N')
DEVPOS(PROW()+mnum_l,00);DEVOUT('')
mvenc := CTOD('  /  /  ')
n_documento := SPACE(10)
mvalor := 0
RETURN NIL
********************************* F I M ********************************
* BOLETO BANCO BANDEPE
**********************
FUNCTION bol_bandep

MEMVAR mtipo_imp,mtipo,local,mvenc,mdata,n_documento,mvalor,;
       bol_obs1,bol_obs2,bol_obs3,bol_obs4,bol_obs5,mcgc,mcpf

imprt(mtipo_imp,'P8')
imprt(mtipo_imp,'N',1)
DEVPOS(PROW(),00);DEVOUT(local)
IF mtipo = 'HSBC'
        DEVPOS(PROW(),61);DEVOUT(mvenc)
ELSE
        DEVPOS(PROW(),50);DEVOUT(mvenc)
ENDIF
IF m_set[1,54] = 'S'
        DEVPOS(PROW()+3,00);DEVOUT(m_set[1,129])
ELSE
        DEVPOS(PROW()+3,00);DEVOUT(' ')
ENDIF
DEVPOS(PROW()+2,00);DEVOUT(mdata)
DEVPOS(PROW(),11);DEVOUT(n_documento)
IF mtipo = 'HSBC'
        DEVPOS(PROW()+2,55);DEVOUT('R$ '+TRANSFORM(mvalor,'999,999.99'))
ELSE
        DEVPOS(PROW()+2,46);DEVOUT('R$ '+TRANSFORM(mvalor,'999,999.99'))
ENDIF
DEVPOS(PROW()+3,00);DEVOUT(bol_obs1)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs2)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs3)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs4)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs5)
DEVPOS(PROW()+5,00);DEVOUT(cons_cli[1,2]+'-'+LEFT(cons_cli[1,3],37))
imprt(mtipo_imp,'C',1)
DEVPOS(PROW(),00);DEVOUT(mendereco)
*DEVPOS(PROW(),00);DEVOUT(RTRIM(cons_cli[1,21])+'-'+RTRIM(cons_cli[1,22])+'-'+RTRIM(cons_cli[1,24])+'-'+RTRIM(cons_cli[1,25])+'- CEP.:'+cons_cli[1,26])
IF ! EMPTY(cons_cli[1,34])
        DEVPOS(PROW(),PCOL()+5);DEVOUT('CPF: '+TRANSFORM(mcpf,'@@R 999.999.999-99'))
ELSE
        DEVPOS(PROW(),PCOL()+5);DEVOUT('CGC: '+TRANSFORM(mcgc,'@@R 99.999.999/9999-99'))
ENDIF
imprt(mtipo_imp,'N',11)
SETPRC(00,00)
imprt(mtipo_imp,'P6')
mvenc := CTOD('  /  /  ')
n_documento := SPACE(10)
mvalor := 0
RETURN NIL
********************* F I M **************************************
* BOLETO BANCO BRADESCO
***********************
FUNCTION bol_brades

MEMVAR mtipo_imp,mtipo,local,mvenc,mdata,n_documento,mvalor,aceite,;
       bol_obs1,bol_obs2,bol_obs3,bol_obs4,bol_obs5,mcgc,mcpf

imprt(mtipo_imp,'P8')
imprt(mtipo_imp,'N')
DEVPOS(PROW()+2,00);DEVOUT(local)
DEVPOS(PROW(),50);DEVOUT(mvenc)
imprt(mtipo_imp,'C')
DEVPOS(PROW()+4,00);DEVOUT(mdata)
DEVPOS(PROW(),20);DEVOUT(n_documento)
IF mtipo = 'BRADESCO'
        DEVPOS(PROW(),54);DEVOUT(aceite)
ELSEIF mtipo = 'BB'
        DEVPOS(PROW(),64);DEVOUT(aceite)
ENDIF
imprt(mtipo_imp,'N')
DEVPOS(PROW()+2,51);DEVOUT(TRANSFORM(mvalor,'999,999.99'))
DEVPOS(PROW()+4,00);DEVOUT(bol_obs1)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs2)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs3)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs4)
DEVPOS(PROW()+1,00);DEVOUT(bol_obs5)
DEVPOS(PROW()+1,51);DEVOUT(TRANSFORM(macrecimo,'999,999.99'))
DEVPOS(PROW()+3,00);DEVOUT(cons_cli[1,2]+' - '+cons_cli[1,3])
IF ! EMPTY(cons_cli[1,34])
        DEVPOS(PROW()+1,00);DEVOUT('CPF: '+TRANSFORM(mcpf,'@@R 999.999.999-99'))
ELSE
        DEVPOS(PROW()+1,00);DEVOUT('CGC: '+TRANSFORM(mcgc,'@@R 99.999.999/9999-99'))
ENDIF
imprt(mtipo_imp,'C',1)
DEVPOS(PROW(),00);DEVOUT(mendereco)
*DEVPOS(PROW(),00);DEVOUT(RTRIM(cons_cli[1,21])+'-'+RTRIM(cons_cli[1,22])+'-'+RTRIM(cons_cli[1,24])+'-'+RTRIM(cons_cli[1,25])+'- CEP.:'+cons_cli[1,26])
imprt(mtipo_imp,'N',10)
SETPRC(00,00)
imprt(mtipo_imp,'P6')
mvenc := CTOD('  /  /  ')
n_documento := SPACE(10)
mvalor := 0
RETURN NIL
**************************************************
* BOLETO BANCO RURAL
********************
FUNCTION bol_rural()

MEMVAR mtipo_imp,mtipo,local,mvenc,mdata,n_documento,especie,aceite,mvalor,;
       bol_obs1,bol_obs2,bol_obs3,bol_obs4,bol_obs5,mcgc,mcpf

imprt(mtipo_imp,'P8')
imprt(mtipo_imp,'N')
DEVPOS(PROW()+2,03);DEVOUT(local)
DEVPOS(PROW(),70);DEVOUT(mvenc)
DEVPOS(PROW()+4,00);DEVOUT(mdata)
DEVPOS(PROW(),15);DEVOUT(n_documento)
DEVPOS(PROW(),30);DEVOUT(especie)
DEVPOS(PROW(),41);DEVOUT(aceite)
DEVPOS(PROW()+2,66);DEVOUT('R$ '+TRANSFORM(mvalor,'999,999.99'))
DEVPOS(PROW()+4,03);DEVOUT(bol_obs1)
DEVPOS(PROW()+1,03);DEVOUT(bol_obs2)
DEVPOS(PROW()+1,03);DEVOUT(bol_obs3)
DEVPOS(PROW()+1,03);DEVOUT(bol_obs4)
DEVPOS(PROW()+1,03);DEVOUT(bol_obs5)
DEVPOS(PROW(),66);DEVOUT('R$ '+TRANSFORM(macrecimo,'999,999.99'))
DEVPOS(PROW()+4,05);DEVOUT(cons_cli[1,2]+' - '+cons_cli[1,3])
IF ! EMPTY(cons_cli[1,34])
        DEVPOS(PROW()+1,05);DEVOUT('CPF: '+TRANSFORM(mcpf,'@@R 999.999.999-99'))
ELSE
        DEVPOS(PROW()+1,05);DEVOUT('CGC: '+TRANSFORM(mcgc,'@@R 99.999.999/9999-99'))
ENDIF
imprt(mtipo_imp,'C',1)
DEVPOS(PROW(),10);DEVOUT(mendereco)
*DEVPOS(PROW(),10);DEVOUT(RTRIM(cons_cli[1,21])+'-'+RTRIM(cons_cli[1,22])+'-'+RTRIM(cons_cli[1,24])+'-'+RTRIM(cons_cli[1,25])+'- CEP.:'+cons_cli[1,26])
SETPRC(00,00)
imprt(mtipo_imp,'P6')
imprt(mtipo_imp,'N',7)          //quantidade de linha p/pula
mvenc := CTOD('  /  /  ')
n_documento := SPACE(10)
mvalor := 0
RETURN NIL
***************************** F I M ************************************
*/