********************************
* DEPENDENTE    //15/07/2009
********************************
#INCLUDE "COMMCTRL.CH"
#include "wvwtools.ch"
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"
#include "inkey.ch"              // constantes de codigos das teclas
FUNCTION sacdepe(mcod)
**********************
LOCAL mprg:='SACDEPE',cComm,m_depe:={},point:=0
PRIVATE cons_depe:={}
MEMVAR mdata_sis,nivel_acess

setcor(1)
op_tela(10,00,33,90,'DEPENDENTE DO CLIENTE: '+STR(mcod,5))
/*
WVW_TBCreate( , .T.,TBSTYLE_LIST            , 0,3,3)
WVW_TBAddButton( ,1910,' ','Inclusao DEPENDENTE',1)
MenuId:=WVW_GETLASTMENUEVENT()
*/
WHILE .T.
        exibi_prg(mprg)
        mensagem('[ENTER] p/Alterar ou Excluir ou [ESC]p/Incluir ou Sair')
        setcor(3)
        DEVPOS(00,01);DEVOUT('Dependente                                 Data Nasc.  Parentesco   Dta.Obit. Data Cad.')
        @ 01,00 TO 01,100
        @ 22,00 TO 22,100
        DEVPOS(23,01);DEVOUT('Total de DEPENDENTE:')
        setcor(1)
        limpa(2,1,21,99)
        cComm  := "SELECT * FROM sacclidepe WHERE cod_cli = "+sr_cdbvalue(mcod)+" AND cod_dep = '000'"
        cons_depe := {}
        sr_getconnection():exec(ccomm,,.t.,@cons_depe)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_depe) = 0
                sr_getconnection():exec('INSERT INTO sacclidepe (cod_cli,'+;
                                        'cod_dep,dependente,data_nasc,'+;
                                        'parentesco,data_ob,data_cad,operador,SR_DELETED )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(mcod)+','+; //1
                                        sr_cdbvalue('000')+','+; //1
                                        sr_cdbvalue('TITULAR DO PLANO')+','+; //2
                                        'NULL'+','+; //3
                                        sr_cdbvalue('TITULAR')+','+; //4
                                        'NULL'+','+; //5
                                        sr_cdbvalue(mdata_sis)+','+; //6
                                        sr_cdbvalue(cod_operado)+','+; //8
                                        sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
        cComm  := "SELECT * FROM sacclidepe WHERE cod_cli = "+sr_cdbvalue(mcod)+" ORDER BY cod_dep"
        m_depe := {}
        cons_depe := {}
        sr_getconnection():exec(ccomm,,.t.,@cons_depe)
        sr_getconnection():exec('COMMIT',,.f.)
        DEVPOS(23,22);DEVOUT(STRZERO(LEN(cons_depe),5))
        IF LEN(cons_depe) > 0
                i:=0
                FOR i = 1 TO LEN(cons_depe)
                        AADD(m_depe,' '+cons_depe[i,11];
                                   +' '+cons_depe[i,3];
                                   +' '+DTOC(cons_depe[i,4]);
                                   +'  '+cons_depe[i,5];
                                   +'   '+DTOC(cons_depe[i,6]);
                                   +'  '+DTOC(cons_depe[i,9]))
                NEXT
                setcor(10);point := ACHOICE(2,0,20,100,m_depe,,,point);setcor(1)
        ELSE
                INKEY(0)
        ENDIF
        DO CASE
                CASE LASTKEY()=27
                        sacdep1(mcod)
                        EXIT
                CASE LASTKEY() = 13
                        sacdep2(mcod,m_depe[point])
        ENDCASE
END
wvw_lclosewindow()
RETURN .F.
**********************************  F I M ****************************************************
* INCLUSAO DE DEPENDENTE    //15/07/2009
********************************
FUNCTION sacdep1(mcod)
*****************
LOCAL mprg:='SACDEP1',mdependente,mdata_nasc,mparentesco,mdata_obito
MEMVAR mdata_sis,nivel_acess

setcor(1)
op_tela(10,10,13,70,'INCLUSAO DE DEPENDENTE NO CLIENTE: '+STR(mcod,5))
WHILE .T.
        exibi_prg(mprg)
        mensagem('Preencha os campos necessario - [ESC]p/Sair')
        mdependente := SPACE(40)
        mdata_nasc  := mdata_obito := CTOD('  /  /  ')
        mparentesco := SPACE(10)
        setcor(1)
        DEVPOS(00,01);DEVOUT('Nome do Dependente:')
        DEVPOS(01,01);DEVOUT('Data de Nascimento:')
        DEVPOS(02,01);DEVOUT('Parentesco........:')
        DEVPOS(03,01);DEVOUT('Data de Obito.....:')
        @ 00,21 GET mdependente PICT '@!'
        @ 01,21 GET mdata_nasc
        @ 02,21 GET mparentesco PICT '@!'
        @ 03,21 GET mdata_obito PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a Inclusao do DEPENDENTE [S/n]:')
        IF opcao = 'S'
                sr_getconnection():exec('INSERT INTO sacclidepe (cod_cli,'+;
                                        'cod_dep,dependente,data_nasc,'+;
                                        'parentesco,data_ob,data_cad,operador,SR_DELETED )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(mcod)+','+; //1
                                        sr_cdbvalue(STRZERO(LEN(cons_depe)+1,3))+','+; //1
                                        sr_cdbvalue(mdependente)+','+; //2
                                        IF(! EMPTY(mdata_nasc),sr_cdbvalue(mdata_nasc),'NULL')+','+; //3
                                        sr_cdbvalue(mparentesco)+','+; //4
                                        IF(! EMPTY(mdata_obito),sr_cdbvalue(mdata_obito),'NULL')+','+; //5
                                        sr_cdbvalue(mdata_sis)+','+; //6
                                        sr_cdbvalue(cod_operado)+','+; //8
                                        sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
**********************************  F I M ****************************************************
* ALTERACAO E EXCLUSAO DE DEPENDENTE    //15/07/2009
************************************
FUNCTION sacdep2(mcod,m_mat)
****************************
LOCAL mprg:='SACDEP2',mdependente,mdata_nasc,mparentesco,mdata_obito,mcons_dep:={}
MEMVAR mdata_sis,nivel_acess

setcor(1)
op_tela(10,10,13,70,'ALTERACAO DE DEPENDENTE NO CLIENTE: '+STR(mcod,5))
WHILE .T.
        exibi_prg(mprg)
        cComm  := "SELECT * FROM sacclidepe WHERE cod_cli = "+sr_cdbvalue(mcod)+" AND cod_dep = "+sr_cdbvalue(SUBSTR(m_mat,2,3))
        cons_dep := {}
        sr_getconnection():exec(ccomm,,.t.,@cons_dep)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_dep) = 0
                atencao('Nao foi encontrado este DEPENDENTE....')
                EXIT
        ENDIF

        mensagem('Preencha os campos - [ESC] p/Sair')
        mdependente := cons_dep[1,3]
        mdata_nasc  := cons_dep[1,4]
        mdata_obito := cons_dep[1,6]
        mparentesco := cons_dep[1,5]
        setcor(1)
        DEVPOS(00,01);DEVOUT('Nome do Dependente:')
        DEVPOS(01,01);DEVOUT('Data de Nascimento:')
        DEVPOS(02,01);DEVOUT('Parentesco........:')
        DEVPOS(03,01);DEVOUT('Data de Obito.....:')
        @ 00,21 GET mdependente PICT '@!'
        @ 01,21 GET mdata_nasc
        @ 02,21 GET mparentesco PICT '@!'
        @ 03,21 GET mdata_obito PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a Inclusao do DEPENDENTE [S/n]:')
        IF opcao = 'S'
                sr_getconnection():exec('UPDATE sacclidepe SET dependente = '+sr_cdbvalue(mdependente)+;
                                        ',data_nasc = '+IF(! EMPTY(mdata_nasc),sr_cdbvalue(mdata_nasc),'NULL')+;
                                        ',parentesco = '+sr_cdbvalue(mparentesco)+;
                                        ',data_ob = '+IF(! EMPTY(mdata_obito),sr_cdbvalue(mdata_obito),'NULL')+;
                                        '  WHERE cod_cli = '+sr_cdbvalue(mcod)+' AND cod_dep = '+sr_cdbvalue(SUBSTR(m_mat,2,3)),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
