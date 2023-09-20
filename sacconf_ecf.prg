*#include "SIXCDX.CH"
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"
MEMVAR getlist
**********************
* CONFIGURACAO DE ECF
**********************
FUNCTION sacconf_ecf()
**********************
LOCAL tela,lci:=0,cci:=0,opcao,nBota,nBota1,nBota2,nBota3,nBota4
op_tela(10,1,30,120,'CONFIGURACAO INDIVIDUAL DO TERMINAL',,1)

WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nBota := wvw_pbCreate(NIL,16,2,17,22,'HTI SISTEMAS.XML',NIL,{||GeraXML()})

WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nBota1 := wvw_pbCreate(NIL,16,24,17,35,'Gerar MD5',NIL,{||Gera_MD5(' ')})

WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nBota2 := wvw_pbCreate(NIL,16,37,17,56,'Corrigi Error ECF',NIL,{||corrigi_erro()})

WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nBota3 := wvw_pbCreate(NIL,16,58,17,78,'Gerar n_ecfpaf.txt',NIL,{||gerar_n_ecfpaf()})

WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nBota4 := wvw_pbCreate(NIL,16,80,17,97,'Gerar MD5 Geral',NIL,{||gerar_md5Geral()})
IF cod_operado # '999'
        WVW_PBEnable( NIL, nBota4, .F. )
ENDIF

WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nBota3 := wvw_pbCreate(NIL,16,99,17,116,'Dados Ultima RZ',NIL,{||dados_rz()})
WHILE .T.
        DEVPOS(1 ,1);DEVOUT('LAUDO PAF-ECF.........:')
        DEVPOS(2 ,1);DEVOUT('MD5 do PAF-ECF........:')
        //DEVPOS(3 ,1);DEVOUT('Modelo ECF............:')
        DEVPOS(4 ,1);DEVOUT('Tipo Gerenciador......:')
        //DEVPOS(5 ,1);DEVOUT('Porta Comunicacao.....:')
        DEVPOS(6 ,1);DEVOUT('Autocaixa.............:')
        DEVPOS(7 ,1);DEVOUT('Qtd. Maxima p/Produto.:')
        DEVPOS(8 ,1);DEVOUT('Valor Maximo p/Produto:')
        DEVPOS(9 ,1);DEVOUT('Caminho TEF-DIAL REQ..:')
        DEVPOS(10,1);DEVOUT('Caminho TEF-DIAL RESP.:')
        DEVPOS(11,1);DEVOUT('Caminho HIPERCARD REQ.:')
        DEVPOS(12,1);DEVOUT('Caminho HIPERCARD RESP:')
        DEVPOS(13,1);DEVOUT('IP ACBR Ex: iP:3434...:')
        DEVPOS(14,1);DEVOUT('Caminho Banco Dados...:')
        setcor(3)
        DEVPOS(1,25);DEVOUT(mpaf_ecf)
        DEVPOS(2,25);DEVOUT(mmd5)
        //DEVPOS(3,25);DEVOUT('ACBR')
        setcor(1)

        IF(EMPTY(m_indiv[1,33]) .OR. m_indiv[1,33] = NIL,m_indiv[1,33] := 'C:\HiperTEF\HiperLINK\REQ\'+SPACE(50 - LEN('C:\HiperTEF\HiperLINK\REQ\')),m_indiv[1,33])
        IF(EMPTY(m_indiv[1,34]) .OR. m_indiv[1,34] = NIL,m_indiv[1,34] := 'C:\HiperTEF\HiperLINK\RESP\'+SPACE(50 - LEN('C:\HiperTEF\HiperLINK\RESP\')),m_indiv[1,34])
        IF(EMPTY(m_indiv[1,35]) .OR. m_indiv[1,35] = NIL,m_indiv[1,35] := 'C:\tef_dial\req\'+SPACE(50 - LEN('C:\tef_dial\req\')),m_indiv[1,35])
        IF(EMPTY(m_indiv[1,36]) .OR. m_indiv[1,36] = NIL,m_indiv[1,36] := 'C:\tef_dial\resp\'+SPACE(50 - LEN('C:\tef_dial\resp\')),m_indiv[1,36])

        m_indiv[1,41] := m_indiv[1,41]+SPACE(50 - LEN(m_indiv[1,41]))
        m_indiv[1,26] := m_indiv[1,26]+SPACE(1 - LEN(m_indiv[1,26]))

        m_indiv[1,33] := m_indiv[1,33]+SPACE(50 - LEN(m_indiv[1,33]))
        m_indiv[1,34] := m_indiv[1,34]+SPACE(50 - LEN(m_indiv[1,34]))
        m_indiv[1,35] := m_indiv[1,35]+SPACE(50 - LEN(m_indiv[1,35]))
        m_indiv[1,36] := m_indiv[1,36]+SPACE(50 - LEN(m_indiv[1,36]))

        m_indiv[1,42] := m_indiv[1,42]+SPACE(60 - LEN(m_indiv[1,42]))
        m_cfg[4] := m_cfg[4]+SPACE(60 - LEN(m_cfg[4]))

        @ 4,25 GET m_indiv[1,41] PICT '@!' VALID lim_get() WHEN men_get(0,0,'PADRAO, PAYGO, PAYGOMULT')
        @ 6,25 GET m_indiv[1,26] PICT '@!' VALID lim_get() .AND. m_indiv[1,26] $ 'S,N,T' WHEN men_get(0,0,'[S]im - [N]ao ou [T]otal')
        @ 7,25 GET m_set[1,153] PICT '999,999'
        @ 8,25 GET m_set[1,154] PICT '9,999,999'
        @ 9,25 GET m_indiv[1,35] PICT '@!'
        @ 10,25 GET m_indiv[1,36] PICT '@!'
        @ 11,25 GET m_indiv[1,33] PICT '@!'
        @ 12,25 GET m_indiv[1,34] PICT '@!'
        @ 13,25 GET m_indiv[1,42]
        @ 14,25 GET m_cfg[4]
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN .F.
        ENDIF
        IF LASTKEY() = 27 .OR. 'N' = op_simnao('S','Confirma as Configuracoes:')
                LOOP
        ENDIF
        MYRUN('DEL saccfg01.ini')
        MYRUN('REN saccfg.ini saccfg01.ini')
        FCLOSE('saccfg.ini')
        mArq    := fcreate("saccfg.ini" )
        sLinhas := '001 C Estacao               ='+m_cfg[1]      + m_qp+ ;
                   '002 C Tipo de Terminal      ='+m_cfg[2]      + m_qp+ ;
                   '003 C HTI                   ='+' '        + m_qp+ ;
                   '004 C Caminho Banco Dados   ='+m_cfg[4]     + m_qp+ ;
                   '005 C Versao do Sistema     ='+m_cfg[5]     + m_qp+ ;
                   '006 C Tipo de Tela          ='+m_cfg[6]     + m_qp+ ;
                   '007 C Codigo da Empresa     ='+m_cfg[7]
        fwrite( mArq, @sLinhas, len( sLinhas ) )
        FCLOSE(mArq)
        EXIT
ENDDO
SETCOLOR('W/B+,B/w,,,GR+/B')
wvw_lclosewindow()
RETURN .T.
************************* F I M ***********************************
FUNCTION corrigi_erro()
***********************
IBR_OK( IBR_COMANDO( 'ECF.CorrigeEstadoErro',,10,.T. ))
atencao('Processo feito com Sucesso...')
RETURN NIL
************************* F I M ***********************************
FUNCTION gerar_n_ecfpaf()
*************************
LOCAL md5_sispdv,md5_acbrnfe,md5_acbr,md5_fbclient,md5_oci,md5_sign_bema,md5_ini

mensagem('Gerando o arquivo N_ECFPAF.TXT...')
MYRUN('DEL n_ecfpaf.txt')
md5_sispdv              := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\sispdv.EXE')
//md5_openssl             := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\openssl.exe')
//md5_fbclient            := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\fbclient.dll')
//md5_oci                 := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\oci.dll')
//md5_libeay32            := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\libeay32.dll')
//md5_ssleay32            := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\ssleay32.dll')

mArq                    := FCREATE('n_ecfpaf.txt')
sLinhas     :=  'N1'+mcnpj_HTI+SPACE(14)+mim_HTI+mrazao_HTI+ m_qp + ;
                'N2'+mpaf_ecf+'SISPDV'+SPACE(44)+mpaf_ver + m_qp + ;
                'N3SISPDV.EXE  '+SPACE(38)+md5_sispdv+ m_qp + ;         //'N3FBCLIENT.DLL'+SPACE(38)+md5_fbclient+ m_qp + ; 'N3OCI.DLL     '+SPACE(38)+md5_oci+ m_qp + ;
                'N9'+mcnpj_HTI+SPACE(14)+'000001'+ m_qp
FWRITE( mArq, @sLinhas, LEN( sLinhas ) )
FCLOSE(mArq)
GERA_EAD(CURDRIVE()+':\'+CURDIR()+'\n_ecfpaf.txt')
md5_ini := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\n_ecfpaf.txt')
mensagem('Gerando o arquivo HTIMD5.INI...')
MYRUN('DEL HTIMD5.INI')
mArq        := FCREATE('HTIMD5.INI')
sLinhas     :=  md5_ini+m_qp
FWRITE( mArq, @sLinhas, LEN( sLinhas ) )
FCLOSE(mArq)
IF m_line # 'OFF'
        mensagem('Atualizando o SACSETUP...')
        SR_BEGINTRANSACTION()
        TRY
        sr_getconnection():exec("UPDATE sacsetup SET md5_ini = " + sr_cdbvalue(md5_ini) + " WHERE sr_recno = 1 ",,.f.)
        sr_getconnection():exec('COMMIT',,.f.)
        CATCH e
        SR_ENDTRANSACTION()
        END
ENDIF
RETURN md5_ini
*****************************************************************************
FUNCTION gerar_md5Geral()
*************************
LOCAL md5_sispdv,md5_acbrnfe,md5_acbr,md5_fbclient,md5_oci,md5_sign_bema,md5_ini,;
      mArq,sLinhas
IF cod_operado # '999'
        atencao('Acesso nao autorizado...')
        RETURN NIL
ENDIF
ini_ecf(1)
MYRUN('DEL n_ecfpaf.txt')

md5_sispdv              := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\sispdv.EXE')
//md5_sign_bema           := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\sign_bema.dll')
md5_fbclient            := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\fbclient.dll')
md5_oci                 := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\oci.dll')
//md5_acbrnfe             := GERA_MD5('C:\ACBrNFeMonitor\ACBrNFeMonitor.exe')
//md5_acbr                := GERA_MD5('C:\ACBrMonitor\ACBrMonitor.exe')
//md5_DARUMAFRAMEWORK     := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\darumaframework.DLL')
mArq                    := FCREATE('n_ecfpaf.txt')
sLinhas     :=  'N1'+mcnpj_HTI+SPACE(14)+mim_HTI+mrazao_HTI+ m_qp + ;
                'N2'+mpaf_ecf+'SISPDV'+SPACE(44)+mpaf_ver + m_qp + ;
                'N3SISPDV.EXE  '+SPACE(38)+md5_sispdv+ m_qp + ;
                'N3FBCLIENT.DLL'+SPACE(38)+md5_fbclient+ m_qp + ;
                'N3OCI.DLL     '+SPACE(38)+md5_oci+ m_qp + ;
                'N9'+mcnpj_HTI+mim_HTI+'000003'+ m_qp
FWRITE( mArq, @sLinhas, LEN( sLinhas ) )
FCLOSE(mArq)
GERA_EAD(CURDRIVE()+':\'+CURDIR()+'\n_ecfpaf.txt')
md5_ini := GERA_MD5(CURDRIVE()+':\'+CURDIR()+'\n_ecfpaf.txt')
sr_getconnection():exec("UPDATE sacsetup SET md5_ini = " + sr_cdbvalue(md5_ini) + " WHERE sr_recno = 1 ",,.f.)
sr_getconnection():exec('COMMIT',,.f.)
MYRUN('DEL HTIMD5.INI')
mArq        := FCREATE('HTIMD5.INI')
sLinhas     :=  md5_ini+m_qp
FWRITE( mArq, @sLinhas, LEN( sLinhas ) )
FCLOSE(mArq)
MYRUN('DEL HTIAUX.INI')
IF ! FILE('HTIAUX.INI')
        mArq        := FCREATE('HTIAUX.INI')
        sLinhas     :=  CRIPTO('HTI',1)+m_qp+;
                        CRIPTO('000000000000000000',1)+m_qp+;
                        md5_sispdv+m_qp+;
                        md5_ini
        FWRITE( mArq, @sLinhas, LEN( sLinhas ) )
        FCLOSE(mArq)
ENDIF
atencao('Foi Gerado o MD5 do arquivo n_ecfpaf.txt'+m_qp+'MD5: '+md5_ini)
RETURN md5_ini
****************************************************************************