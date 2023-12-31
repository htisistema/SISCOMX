#define  ETX CHR(3)
#define  CR  CHR(13)
#define  LF  CHR(10)
#define ENT_TXT  'ENTNFE.TXT'
#define SAI_TXT  'SAINFE.TXT'
#define TMP_TXT  'ENTNFE.TMP'
//Static sENDER   := ''  ,;
/*
Static SEM_ERRO := .F. ,;
sSECHORA := 0   ,;
sRETHORA := ''  ,;
sSECCOO  := 0   ,;
sNUMCUPOM:= ''  ,;
sSECEST  := 0   ,;
sESTADO  := ''  ,;
sMODELO  := ''
*/
#ifdef __XHARBOUR__
   Static sSOCKET
#ENDIF
#include "sqlrdd.ch"
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"
//#include "EasyTEF.ch"
#include "ecf.ch"
********************************
* SOLICITAR NFCe
*******************************
MEMVAR mtip_term,nivel_acess,cod_operado,getlist,inicio_protocolo,fim_protocolo_driver,;
       prepara_string,tamanho_de_retorno,mdata_sis,string_devolvida

FUNCTION SACMDFE(m_mtr,msc)        // CODIGO DE BARRA
*****************************
LOCAL MPRG:="SACMDFE",opcao,i:=0,f:=0,mdocumento:=0,mtot_carga :=0, mpeso_carga := 0,;
      mcida :=SPACE(25),slinhas:='',muf:='  ',mretorno:='',mcammdfe:='',mvalor:=0,mpeso:=0,;
      mPercuso1,mPercuso2,mPercuso3,mPercuso4,mPercuso5,mPercuso6,mPercuso7,mPercuso8,mPercuso9,mPercuso10,;
      mMunCarrega:=SPACE(30),mMunDescarga:=SPACE(30),reb_placa,reb_RENAVAM,reb_tara,reb_capKG,;
      reb_capM3,reb_UF,reb_CNPJCPF,reb_RNTRC,reb_xNome,reb_IE,reb_UFProp,reb_tpProp,reb_tpCar,;
      msegcodbarra:='',mtpemit:='2'

PRIVATE mmodal,mrntrc,mplaca,mrenavan,mtara,mcapkg,mcapm3,mtpRod,mtpcar,mtpProp,mxNome,mcpf,;
        mufini,muffim,mserie,m_movnt := {},m_demo:={},mqtd_lin:=0,machou := 0,m_cli:={},;
        m_demo_aux := {},mcep:=''

op_tela(00,00,50,120,memp_resa+'  '+mversao+'  *** M F D - e ***',1,1)
WHILE .T.
        exibi_prg(mprg)

        ***INICIA O ACBRMONITOR***

        IF ! inicia_acbr()
                wvw_lclosewindow(1)
                RETURN NIL
        ENDIF

        //setcor(1)
        DEVPOS(0, 0);DEVOUT('Tipo de Emitente......:   ')
        DrawLabel(0,26,'[1] Prestador Serv.Transp. [2] Transportaor Carga Propria [3] Prestador servi�o transporte que emitir� CT-e Globalizado.',210,, 'Arial',15,7)
        DEVPOS(1, 0);DEVOUT('Modalidade transporte.:   ')
        DrawLabel(1,26,'[1] Rodoviario [2] Aereo [3] Aquaviario [4] Ferroviario',210,, 'Arial',15,7)
        DEVPOS(2, 0);DEVOUT('Serie MFD-e...........:')
        DEVPOS(3, 0);DEVOUT('UF Carrego............:   Municipio Carrego...:')
        DEVPOS(4, 0);DEVOUT('UF Descarregamento....:')
        setcor(3)
        @ 5,00 TO 5,120
        DEVPOS(5,30);DEVOUT('Dados do Veiculo com a Tracao')
        setcor(1)
        DEVPOS(6, 0);DEVOUT('RNTRC.................:')
        DEVPOS(7, 0);DEVOUT('Placa do Veiculo......:')
        DEVPOS(8, 0);DEVOUT('UF da Placa do Veiculo:')
        DEVPOS(9, 0);DEVOUT('RENAVAN...............:')
        DEVPOS(10, 0);DEVOUT('TARA KG.........:')
        DEVPOS(11,0);DEVOUT('Capacidade em KG......:')
        DEVPOS(12,0);DEVOUT('Capacidade em M3......:')
        DEVPOS(13,0);DEVOUT('Tipo de Rodado........:')
        DrawLabel(13,26,'[01]Truck  [02]Toco  [03]Cavalo Mecanico  [04]VAN  [05]Utilitario  [06]Outros',210,, 'Arial',15,7)
        DEVPOS(14,0);DEVOUT('Tipo de Carroceria....:')
        DrawLabel(14,26,'[00]Nao aplicavel [01]Aberta [02]Fechada/Bau [03]Granelera [04]Porta Container [05]Sider',210,, 'Arial',15,7)
        DEVPOS(15,0);DEVOUT('Tipo Propriet�rio.....: ')
        DrawLabel(15,26,'[0]TAC Agregado   [1]TAC Independente   [2]Outros',210,, 'Arial',15,7)
        setcor(3)
        @ 16,00 TO 16,120
        DEVPOS(16,30);DEVOUT('Dados do Reboque')
        setcor(1)
        DEVPOS(17, 0);DEVOUT('Placa do Reboque......:')
        DEVPOS(18, 0);DEVOUT('UF da Placa do Reboque:')
        DEVPOS(19, 0);DEVOUT('RENAVAN Reboque.......:')
        DEVPOS(20, 0);DEVOUT('TARA KG.........:')
        DEVPOS(21,0);DEVOUT('Capacidade em KG......:')
        DEVPOS(22,0);DEVOUT('Capacidade em M3......:')
        DEVPOS(23,0);DEVOUT('CNPJ/CPF..............:')
        DrawLabel(23,36,'Informe campos abaixo apenas se o propriet�rio do Reboque n�o for o emitente do MDFe',210,, 'Arial',15,7)
        DEVPOS(24, 0);DEVOUT('RNTRC do Reboque......:')
        DEVPOS(25,0);DEVOUT('Nome do Proprietario..:')
        DEVPOS(26,0);DEVOUT('Inscricao estadual....:')
        DEVPOS(27,0);DEVOUT('UF Proprietario.......:')
        DEVPOS(28,0);DEVOUT('Tipo de Proprietario..:')
        DEVPOS(29,0);DEVOUT('Tipo de Carroceria....:')
        setcor(3)
        @ 30,00 TO 30,120
        DEVPOS(30,30);DEVOUT('Informacoes do(s) Condutor(s) do veiculo')
        setcor(1)
        DEVPOS(31,0);DEVOUT('Nome do Condutor......:')
        DEVPOS(32,0);DEVOUT('CPF do Condutor.......:')
        DEVPOS(33,0);DEVOUT('Informar Percuso 1 UF.:')
        DEVPOS(34,0);DEVOUT('Informar Percuso 2 UF.:')
        DEVPOS(35,0);DEVOUT('Informar Percuso 3 UF.:')
        DEVPOS(36,0);DEVOUT('Informar Percuso 4 UF.:')
        DEVPOS(37,0);DEVOUT('Informar Percuso 5 UF.:')
        DEVPOS(38,0);DEVOUT('Informar Percuso 6 UF.:')
        DEVPOS(39,0);DEVOUT('Informar Percuso 7 UF.:')
        DEVPOS(40,0);DEVOUT('Informar Percuso 8 UF.:')
        DEVPOS(41,0);DEVOUT('Informar Percuso 9 UF.:')
        DEVPOS(42,0);DEVOUT('Informar Percuso 10 UF:')
        DEVPOS(43,0);DEVOUT('Numero da nota fiscal.:')



/*
[reboque01]
cInt=1
reb_placa=
reb_RENAVAM=
reb_tara=
reb_capKG=
reb_capM3=
reb_UF=SP
reb_CNPJCPF=
reb_RNTRC=
reb_xNome=
reb_IE=
reb_UFProp=
reb_tpProp=
reb_tpCar=
UF=
*/

        reb_placa       := SPACE(7)
        reb_RENAVAM     := SPACE(11)
        reb_tara        := SPACE(6)
        reb_capKG       := SPACE(6)
        reb_capM3       := SPACE(6)
        reb_UF          := SPACE(2)
        reb_CNPJCPF     := SPACE(14)
        reb_RNTRC       := SPACE(8)
        reb_xNome       := SPACE(40)
        reb_IE          := SPACE(11)
        reb_UFProp      := SPACE(2)
        reb_tpProp      := SPACE(1)
        reb_tpCar       := SPACE(2)
        m_demo_aux := {}
        m_demo:={}
        mmodal := '1'
        mtpProp := ' '
        mrntrc := SPACE(8)
        mplaca := SPACE(7)
        mrenavan := mcpf := SPACE(11)
        mtara := mcapkg := mcapm3 := SPACE(6)
        mtpRod := mtpcar := muffim := mserie := mPercuso1 := mPercuso2 := mPercuso3 := mPercuso4 := mPercuso5 := mPercuso6 := mPercuso7 := mPercuso8 := mPercuso9 := mPercuso10 := SPACE(2)
        mxNome := SPACE(40)
        mcida :=SPACE(25)
        mufini:= ALLTRIM(m_set[1,19])
        mMunCarrega:=m_set[1,134]
        mMunDescarga:=SPACE(30)
        mtpemit:='2'
        @ 0,23 GET mtpemit PICT '9' VALID mtpemit $ '123'
        @ 1,23 GET mmodal PICT '9' VALID mmodal $ '1234'
        @ 2,23 GET mserie PICT '9' VALID IF(EMPTY(mserie),.F.,.T.)
        @ 3,23 GET mufini PICT '@!' VALID IF(EMPTY(mufini),.F.,v_uf(mufini))
        @ 3,48 GET mMunCarrega PICT '@!' VALID IF(EMPTY(mMunCarrega),.F.,.T.)
        @ 4,23 GET muffim PICT '@!' VALID IF(EMPTY(muffim),.F.,v_uf(muffim))    //@ 3,48 GET mMunDescarga PICT '@!' VALID IF(EMPTY(mMunDescarga),.F.,.T.)
        @ 6,23 GET mrntrc
        @ 7,23 GET mplaca PICT '@!'
        @ 8,23 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf))
        @ 9,23 GET mrenavan
        @ 10,23 GET mtara  PICT '999999'
        @ 11,23 GET mcapkg PICT '999999'
        @ 12,23 GET mcapm3 PICT '999999'
        @ 13,23 GET mtpRod PICT '99' VALID mtpRod $ '00010203040506'
        @ 14,23 GET mtpcar PICT '99' VALID mtpcar $ '000102030405'
        @ 15,23 GET mtpProp PICT '9' VALID mtpProp $ '012'

        @ 17,23 GET reb_placa    PICT '@!'
        @ 18,23 GET reb_UF       PICT '@!' VALID IF(EMPTY(reb_UF),.F.,v_uf(reb_UF)) WHEN ! EMPTY(reb_placa)
        @ 19,23 GET reb_RENAVAM WHEN ! EMPTY(reb_placa)
        @ 20,23 GET reb_tara     PICT '999999' WHEN ! EMPTY(reb_placa)
        @ 21,23 GET reb_capKG    PICT '999999' WHEN ! EMPTY(reb_placa)
        @ 22,23 GET reb_capM3    PICT '999999' WHEN ! EMPTY(reb_placa)
        @ 23,23 GET reb_CNPJCPF  PICT '@!' WHEN ! EMPTY(reb_placa)
        @ 24,23 GET reb_RNTRC WHEN ! EMPTY(reb_placa)
        @ 25,23 GET reb_xNome    PICT '@!' WHEN ! EMPTY(reb_placa)
        @ 26,23 GET reb_IE WHEN ! EMPTY(reb_placa)
        @ 27,23 GET reb_UFProp   PICT '@!' VALID IF(EMPTY(reb_UFProp),.F.,v_uf(reb_UFProp)) WHEN ! EMPTY(reb_placa)
        @ 28,23 GET reb_tpProp   PICT '@!' WHEN ! EMPTY(reb_placa)
        @ 29,23 GET reb_tpCar    PICT '@!' WHEN ! EMPTY(reb_placa)

        @ 31,23 GET mxNome PICT '@!'
        @ 32,23 GET mcpf
        @ 33,23 GET mpercuso1  PICT '@!' VALID v_uf(mpercuso1 )
        @ 34,23 GET mpercuso2  PICT '@!' VALID v_uf(mpercuso2 ) WHEN ! EMPTY(mpercuso1 )
        @ 35,23 GET mpercuso3  PICT '@!' VALID v_uf(mpercuso3 ) WHEN ! EMPTY(mpercuso2 )
        @ 36,23 GET mpercuso4  PICT '@!' VALID v_uf(mpercuso4 ) WHEN ! EMPTY(mpercuso3 )
        @ 37,23 GET mpercuso5  PICT '@!' VALID v_uf(mpercuso5 ) WHEN ! EMPTY(mpercuso4 )
        @ 38,23 GET mpercuso6  PICT '@!' VALID v_uf(mpercuso6 ) WHEN ! EMPTY(mpercuso5 )
        @ 39,23 GET mpercuso7  PICT '@!' VALID v_uf(mpercuso7 ) WHEN ! EMPTY(mpercuso6 )
        @ 40,23 GET mpercuso8  PICT '@!' VALID v_uf(mpercuso8 ) WHEN ! EMPTY(mpercuso7 )
        @ 41,23 GET mpercuso9  PICT '@!' VALID v_uf(mpercuso9 ) WHEN ! EMPTY(mpercuso8 )
        @ 42,23 GET mpercuso10 PICT '@!' VALID v_uf(mpercuso10) WHEN ! EMPTY(mpercuso9 )
        READ
        IF LASTKEY() = 27
                fecha_tela()
                RETURN NIL
        ENDIF
        op_tela(00,10,50,120,'NOTA SOLICITADAS',,1)
        WHILE .T.
                mdocumento:=mtot_carga := mpeso_carga := mvalor := mpeso := 0
                mcida :=SPACE(25)
                IF LEN(m_demo) > 20
                        mqtd_lin := LEN(m_demo) - 10
                ENDIF
                f:=0
                @ 2,00 TO 2,120
                DEVPOS(3,1);DEVOUT('Documento       Data  Cliente                                        Cidade                    UF    Vlr Nota')
                @ 4,00 TO 4,120
                @ 48,00 TO 48,120
                setcor(3)
                limpa(5,0,47,120)
                i:=0
                FOR i = 1 TO LEN(m_demo)
                        SCROLL(5,0,47,119,1)
                        DEVPOS(47,1);DEVOUT(m_demo[i,1]+' '+DTOC(m_demo[i,2])+' '+STR(m_demo[i,3],5)+'-'+m_demo[i,4]+' '+m_demo[i,10]+' '+m_demo[i,5]+' '+TRANSFORM(+m_demo[i,9],ALLTRIM(m_set[1,99])))
                        SCROLL(5,0,47,119,1)
                        DEVPOS(47,1);DEVOUT('             Chave de Acesso: '+m_demo[i,6])
                        mtot_carga := mtot_carga + m_demo[i,9]
                        mpeso_carga := mpeso_carga + m_demo[i,11]
                NEXT
                DEVPOS(49,00);DEVOUT('Total R$: '+ALLTRIM(TRANSFORM(mtot_carga,'999999.99'))+'       Peso da Carga: '+ALLTRIM(TRANSFORM(mpeso_carga,'999999.9999')))
                //DEVPOS(49,PCOL()+5);DEVOUT('Peso da Carga: '+ALLTRIM(TRANSFORM(mpeso_carga,'999999.9999')))
                setcor(1)
                mensagem('Digite o numero da SUA NOTA ou digite 999999 para NOTA DE TERCEIRO...')
                DEVPOS(1,0);DEVOUT('Numero da nota fiscal.:')
                @ 1,23 GET mdocumento PICT '999999'
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF EMPTY(mdocumento)
                        @ 1,23 GET mdocumento PICT '999999'
                        READ
                        IF EMPTY(mdocumento)
                                EXIT
                        ENDIF
                ENDIF
                i := machou := 0
                FOR i = 1 TO LEN(m_demo)
                        IF 'NF'+STRZERO(mdocumento,6) = m_demo[i,1]
                                machou := 1
                                atencao('Ja foi incluida esta NOTA FISCAL')
                                EXIT
                        ENDIF
                NEXT
                IF machou = 1
                        LOOP
                ENDIF

                m_movnt := {}
                //                                  1         2       3       4      5       6      7     8          9                 10
                sr_getconnection():exec("SELECT documento,data_s_e,cod_cli,cliente,uf_cli,camnfe,modelo,serie,SUM(quantd*vl_fatura),SUM(quantd*peso) FROM sacmovnt WHERE documento ="+sr_cdbvalue('NF'+STRZERO(mdocumento,6))+" GROUP BY data_s_e,documento,cod_cli,cliente,uf_cli,camnfe,modelo,serie ORDER BY data_s_e,documento",,.t.,@m_movnt)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(m_movnt) = 0     //.AND. ! EMPTY(ALLTRIM(m_movnt[1,6]))
                        opcao := op_simnao('N','Nao foi encontrado esta nota.... Deseja incluir manualmente:')
                        IF opcao = 'N' .OR. LASTKEY() = 27
                                LOOP
                        ELSE
                                mcammdfe := msegcodbarra := SPACE(50)
                                muf_desc := '  '
                                op_tela(10,10,16,110,'INCLUIR NOTA MANUALMENTE',,1)
                                DEVPOS(0,1);DEVOUT('NUMERO DA NOTA FISCAL ELETRONICA:')
                                setcor(3)
                                @ 0,35 SAY mdocumento
                                setcor(1)
                                DEVPOS(1,1);DEVOUT('Digite a Chave de Acesso da Nota:')
                                DEVPOS(2,1);DEVOUT('Cidade do descarrego da Nota....:')
                                DEVPOS(3,1);DEVOUT('UF do descarrego da Nota........:')
                                DEVPOS(4,1);DEVOUT('Valor da Nota R$................:')
                                DEVPOS(5,1);DEVOUT('Peso da Nota ...................:')
                                DEVPOS(6,1);DEVOUT('Segundo Codigo Barra............:')
                                @ 1,35 GET mcammdfe
                                READ
                                IF LASTKEY() = 27
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                mcida := mMunDescarga
                                muf_desc := muffim
                                @ 2,35 GET mcida PICT '@!' VALID IF(EMPTY(mcida),.F.,.T.)
                                @ 3,35 GET muf_desc PICT '@!' VALID IF(EMPTY(muf_desc),.F.,v_uf(muf_desc))
                                @ 4,35 GET mvalor PICT '999,999,999.99'
                                @ 5,35 GET mpeso PICT '99,999,999.999'
                                @ 6,35 GET msegcodbarra
                                READ
                                opcao := op_simnao('S','Confirma a nota:')
                                IF opcao = 'S'
                                        //                        1                2     3     4        5       6      7    8     9     10    11         12
                                        AADD(m_demo_aux,{STRZERO(mdocumento,6),mdata_sis,0,SPACE(40),muf_desc,mcammdfe,'  ','  ',mvalor,mcida,mpeso,msegcodbarra})
                                ENDIF
                                fecha_tela()
                                //LOOP
                        ENDIF
                ELSE
                        IF EMPTY(ALLTRIM(m_movnt[1,6]))
                                atencao('Esta nota nao estar com o chave de acesso do XML....')
                                op_tela(10,10,12,110,'CHAVE DE ACESSO',,1)
                                DEVPOS(1,1);DEVOUT('Digite a Chave de Acesso da Nota:')
                                @ 1,COL()+1 GET m_movnt[1,6]
                                READ
                                opcao := op_simnao('S','Confirma os dados:')
                                IF EMPTY(m_movnt[1,6]) .OR. opcao = 'N'
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                sr_getconnection():exec("UPDATE sacmovnt SET camnfe = "+sr_cdbvalue(ALLTRIM(m_movnt[1,6])+'-nfe.xml')+" WHERE documento = "+sr_cdbvalue(m_movnt[1,1]),,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                                fecha_tela()
                        ENDIF
                        opcao := op_simnao('S','Confirma a nota:')
                        IF opcao = 'N'
                                LOOP
                        ENDIF
                        m_cli := {}
                        sr_getconnection():exec("SELECT cidade FROM saccli WHERE cod_cli ="+sr_cdbvalue(m_movnt[1,3]),,.t.,@m_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(m_cli) = 0     //.AND. ! EMPTY(ALLTRIM(m_movnt[1,6]))
                                atencao('Cliente nao foi encontrado desta nota....')
                                LOOP
                        ENDIF
                        //                      1            2            3            4           5                                          6                                         7            8            9          10            11
                        AADD(m_demo_aux,{m_movnt[1,1],m_movnt[1,2],m_movnt[1,3],m_movnt[1,4],m_movnt[1,5],SUBSTR(SUBSTR(ALLTRIM(m_movnt[1,6]),LEN(ALLTRIM(m_movnt[1,6]))-51),1,44),m_movnt[1,7],m_movnt[1,8],m_movnt[1,9],m_cli[1,1],m_movnt[1,10],msegcodbarra})
                ENDIF
                m_demo := ASORT(m_demo_aux,,, { |x, y| x[10] < y[10] })
        ENDDO
        IF LASTKEY() = 27
                fecha_tela()
                LOOP
        ENDIF
        IF LEN(m_demo) > 0
                @ 49,53 GET mpeso_carga PICT '9999999.9999'
                READ
                opcao := op_simnao('S','Confirma O PESO BRUTO DA CARGA:')
                fecha_tela()
                IF opcao = 'N'
                        LOOP
                ENDIF
                lExit := .T.
                WHILE lExit
                        sr_begintransaction()
                        try
                                aret:={}
                                sr_getconnection():exec( "select numero from sacnomdf",,.t.,@aret)
                                mdoc = STRZERO(VAL(aret[1,1])+1,6)
                                sr_getconnection():exec("update sacnomdf set numero = " + sr_cdbvalue(mdoc) + ", data_ped = " + sr_cdbvalue( mdata_sis),,.f.)
                                sr_committransaction()
                                lExit:=.F.
                        catch e
                                tracelog(valtoprg())
                                sr_COMMITtransaction()
                                lexit := .T.
                        END
                        sr_endtransaction()
                ENDDO
                mensagem('CRIANDO a MDF-e No. '+mdoc)
                /*
                tpTransp = 1 - ETC (Empresa de Transporte Rodovi�rio de Cargas) quando se tratar de: pessoa
                                jur�dica constitu�da por qualquer forma prevista em Lei que tenha o transporte rodovi�rio de
                                cargas como atividade econ�mica (Resolu��o ANTT 4.799 de 27/07/2015)
                            2 - TAC (Transportador Autonomo de Cargas) quando se tratar de: pessoa fisica que
                                exerce, habitualmente, atividade profissional de transporte rodoviario remunerado de
                                cargas, por sua conta e risco, como proprietaria, coproprietaria ou arrendataria de ate tres
                                veiculos automotores de cargas (Resolucao ANTT 4.799 de 27/07/2015)
                            3 - CTC (Cooperativa de Transporte Rodoviario de Cargas) quando se tratar de: sociedade
                                simples, com forma e natureza juridica propria, de natureza civil, constituida para atuar na
                                prestacao de servicos de transporte rodoviario de cargas, visando a defesa dos interesses
                                comuns dos cooperados (Resolucao ANTT 4.799 de 27/07/2015);.

                                Quando o emitente for Transportador de Carga Propria (tpEmit=2) e o transporte ocorrer em veiculos
                                proprios ou arrendados (ou seja, se nao houver contratacao de TAC) a informacao do tipo de
                                transportador (tpTransp) nao devera ser preenchida.
                */
                sLinhas     :=  '[infMDFe]'                     + m_qp
                sLinhas     :=  sLinhas +'versao=3.00'          + m_qp
                mdata_nfe := DTOC(mdata_sis)+' '+time()
                //atencao(mdata_nfe+' '+m_indiv[1,37])
                m_set[1,135] := STRTRAN(m_set[1,135],'-','')
                m_set[1,135] := STRTRAN(m_set[1,135],'.','')
                sLinhas := sLinhas + '[ide]'+ m_qp + ;
                                'cUF = '+vercod_uf(ALLTRIM(m_set[1,19]))+ m_qp + ;
                                'Modelo=58'                             + m_qp + ;
                                'serie='+ALLTRIM(mserie)                + m_qp + ;
                                'procEmi = 0'                           + m_qp + ;
                                'dhEmi='+DTOC(mdata_sis)+' '+time()     + m_qp + ;
                                'tpEmit = '+mtpemit                     + m_qp + ;
                                'tpTransp ='                            + m_qp + ;
                                'modal='+mmodal                         + m_qp + ;
                                'ufini='+mufini                         + m_qp + ;
                                'uffim='+muffim                         + m_qp + ;	//'cMDF ='+ALLTRIM(mserie)+mmodal+mdoc    + m_qp + ;
                                'cMDF =0'                               + m_qp + ;
                                'nMDF ='+ALLTRIM(STR(VAL(mdoc)))        + m_qp + ;
                                '[CARR001]'                             + m_qp + ;
                                'cMunCarrega ='+ALLTRIM(vercod_cid(ALLTRIM(mMunCarrega),mufini)) + m_qp + ;
                                'xMunCarrega ='+ALLTRIM(mMunCarrega)    + m_qp + ; //4
                                '[Emit]'                                + m_qp + ;
                                'CNPJ='+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+ m_qp + ; //'CNPJ=03726794000163'+ m_qp + ;
                                'IE='+ALLTRIM(m_set[1,128])             + m_qp + ;
                                'xnome='+ALLTRIM(m_set[1,129])          + m_qp + ;
                                'xFant='+ALLTRIM(m_set[1,130])          + m_qp + ;
                                'Fone='+ALLTRIM(m_set[1,136])           + m_qp + ;
                                'email='                                + m_qp + ;
                                'CEP='+ALLTRIM(m_set[1,135])            + m_qp + ;
                                'XLgr='+ALLTRIM(m_set[1,132])           + m_qp + ;
                                'Nro='+ALLTRIM(m_set[1,160])            + m_qp + ;
                                'xCpl='+ALLTRIM(m_set[1,161])           + m_qp + ;
                                'xBairro='+ALLTRIM(m_set[1,133])        + m_qp + ;
                                'Cmun='+ALLTRIM(vercod_cid(ALLTRIM(m_set[1,134]),ALLTRIM(m_set[1,19])))             + m_qp + ;
                                'xmun='+ALLTRIM(m_set[1,134])           + m_qp + ;
                                'UF = '+ALLTRIM(m_set[1,19])            + m_qp + ;
                                'cUF = '+vercod_uf(ALLTRIM(m_set[1,19]))+ m_qp + ;
                                '[veicTracao]'                          + m_qp + ;
                                'RNTRC =  '+mrntrc                      + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'placa =  '+mplaca                      + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'capKG =  '+mcapkg                      + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'capM3 =  '+mcapm3                      + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'tara =   '+mtara                       + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'tpRod =  '+mtprod                      + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'tpCar =  '+mtpcar                      + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'UF =     '+muf                         + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'RENAVAM ='+mrenavan                    + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'xnome =0'                              + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'tpProp = '+mtpprop                     + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'ie =0'                                 + m_qp + ;
                                '[MOTO001]'                             + m_qp + ;
                                'xNome = '+mxnome                       + m_qp + ;
                                'CPF = '+mcpf                           + m_qp
                                IF ! EMPTY(reb_placa)
                                        sLinhas := sLinhas + '[REBOQUE01]'                      + m_qp + ;
                                                                'cInt=1       '+mxnome          + m_qp + ;
                                                                'reb_placa=   '+reb_placa       + m_qp + ;
                                                                'reb_RENAVAM= '+reb_RENAVAM     + m_qp + ;
                                                                'reb_tara=    '+reb_tara        + m_qp + ;
                                                                'reb_capKG=   '+reb_capKG       + m_qp + ;
                                                                'reb_capM3=   '+reb_capM3       + m_qp + ;
                                                                'reb_UF=SP    '+reb_UF          + m_qp + ;
                                                                'reb_CNPJCPF= '+reb_CNPJCPF     + m_qp + ;
                                                                'reb_RNTRC=   '+reb_RNTRC       + m_qp + ;
                                                                'reb_xNome=   '+reb_xNome       + m_qp + ;
                                                                'reb_IE=      '+reb_IE          + m_qp + ;
                                                                'reb_UFProp=  '+reb_UFProp      + m_qp + ;
                                                                'reb_tpProp=  '+reb_tpProp      + m_qp + ;
                                                                'reb_tpCar=   '+reb_tpCar       + m_qp
                                ENDIF
                                IF ! EMPTY(mpercuso1)
                                        sLinhas := sLinhas + '[PERC001]'+ m_qp +;
                                                             'UFPer ='+ALLTRIM(mpercuso1)+ m_qp
                                ENDIF
                                IF ! EMPTY(mpercuso2)
                                        sLinhas := sLinhas + '[PERC002]'+ m_qp +;
                                                             'UFPer ='+ALLTRIM(mpercuso2)+ m_qp
                                ENDIF
                                IF ! EMPTY(mpercuso3)
                                        sLinhas := sLinhas + '[PERC003]'+ m_qp +;
                                                             'UFPer ='+ALLTRIM(mpercuso3)+ m_qp
                                ENDIF
                                IF ! EMPTY(mpercuso4)
                                        sLinhas := sLinhas + '[PERC004]'+ m_qp +;
                                                             'UFPer ='+ALLTRIM(mpercuso4)+ m_qp
                                ENDIF
                                IF ! EMPTY(mpercuso5)
                                        sLinhas := sLinhas + '[PERC005]'+ m_qp +;
                                                             'UFPer ='+ALLTRIM(mpercuso5)+ m_qp
                                ENDIF
                                IF ! EMPTY(mpercuso6)
                                        sLinhas := sLinhas + '[PERC006]'+ m_qp +;
                                                             'UFPer ='+ALLTRIM(mpercuso6)+ m_qp
                                ENDIF
                                IF ! EMPTY(mpercuso7)
                                        sLinhas := sLinhas + '[PERC007]'+ m_qp +;
                                                             'UFPer ='+ALLTRIM(mpercuso7)+ m_qp
                                ENDIF
                                IF ! EMPTY(mpercuso8)
                                        sLinhas := sLinhas + '[PERC008]'+ m_qp +;
                                                             'UFPer ='+ALLTRIM(mpercuso8)+ m_qp
                                ENDIF
                                IF ! EMPTY(mpercuso9)
                                        sLinhas := sLinhas + '[PERC009]'+ m_qp +;
                                                             'UFPer ='+ALLTRIM(mpercuso9)+ m_qp
                                ENDIF
                                IF ! EMPTY(mpercuso10)
                                        sLinhas := sLinhas + '[PERC010]'+ m_qp +;
                                                             'UFPer ='+ALLTRIM(mpercuso10)+ m_qp
                                ENDIF

                i:=f:=h:=0
                mcida := ' '    //m_demo[1,10]
                //sLinhas := sLinhas + '[DESC'+STRZERO(f,3)+']'+ m_qp +;
                //                     'cMunDescarga ='+ALLTRIM(vercod_cid(ALLTRIM(mMunDescarga),muffim))+ m_qp +;
                //                     'xMunDescarga ='+ALLTRIM(mMunDescarga)+ m_qp
                FOR i = 1 TO LEN(m_demo)
                        //atencao(m_demo[i,10]+' - '+mcida+' - '+m_demo[i,6])
                        IF mcida = m_demo[i,10]
                                //sLinhas := sLinhas + '[infNFe'+STRZERO(f,3)+']'+ m_qp +;
                                h++
                                sLinhas := sLinhas + '[infNFe'+STRZERO(f,3)+STRZERO(h,3)+']'+ m_qp
                                sLinhas := sLinhas + 'chNFe ='+ALLTRIM(m_demo[i,6])+ m_qp
                                IF ! EMPTY(m_demo[i,12])
                                        sLinhas := sLinhas + 'SegCodBarra='+ALLTRIM(m_demo[i,12])+ m_qp
                                ENDIF

                        ELSE
                                mcida := m_demo[i,10]
                                f++
                                h:=1
                                sLinhas := sLinhas + '[DESC'+STRZERO(f,3)+']'+ m_qp +;
                                           'cMunDescarga ='+ALLTRIM(vercod_cid(ALLTRIM(m_demo[i,10]),m_demo[i,5]))+ m_qp +;
                                           'xMunDescarga ='+ALLTRIM(m_demo[i,10])+ m_qp
                                sLinhas := sLinhas + '[infNFe'+STRZERO(f,3)+STRZERO(h,3)+']'+ m_qp +;
                                           'chNFe ='+ALLTRIM(m_demo[i,6])+ m_qp
                                IF ! EMPTY(m_demo[i,12])
                                        sLinhas := sLinhas + 'SegCodBarra='+ALLTRIM(m_demo[i,12])+ m_qp
                                ENDIF
                        ENDIF
                NEXT
                sLinhas := slinhas + '[tot]'+ m_qp
                sLinhas := slinhas + 'vCarga='+ALLTRIM(TRANSFORM(mtot_carga,'999999.99'))+ m_qp + ;
                        'cUnid = 01'+ m_qp +; //                        'ValorFrete='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                        'qCarga='+ALLTRIM(TRANSFORM(mpeso_carga,'999999.99'))+ m_qp + ;
                        'qNFe='+ALLTRIM(TRANSFORM(LEN(m_demo),'999999'))+ m_qp +;
                        'qCTe=0' + m_qp
        ELSE
                atencao('Nao informado nenhuma NF-e')
                fecha_tela()
                LOOP
        ENDIF
        IF LASTKEY() = 27
                fecha_tela()
                LOOP
        ENDIF
                op_tela(10,5,18,85,'FINALIZANDO O MDF-e....',,1)
                prog(2,1,20,'CRIANDO A MDF-e No....: '+mretorno)
                mretorno := IBR_comando('MDFE.CRIARMDFE',{sLinhas},,.T.)
                //WVW_DrawProgressBar( ,1,1,2,60,,25,50,155,,.f.,0 )
                //atencao(mretorno)
                mretorno := mcammdfe := ALLTRIM(SUBSTR(mretorno,4))
                //atencao(mcammdfe)
                //mretorno := mretorno
                IF 'Alertas:' $ mretorno
                        atencao(mretorno)
                        fecha_tela()
                        LOOP
                //ELSE
                //        mretorno :=ALLTRIM(SUBSTR(mretorno,LEN(mretorno)-52))
                ENDIF
                IBR_comando('MDFE.ASSINARMDFE',{mretorno},,.T.)
                prog(2,1,60,'VALIDANDO a MDFe No.: '+mretorno)
                //DEVPOS(03,01);DEVOUT('VALIDANDO a Nota No.: '+mretorno)
                IBR_comando('MDFE.VALIDARMDFE',{mretorno},,.T.)
                prog(2,1,80,'ENVIANDO a MDFe No..: '+mretorno)
                IBR_comando('MDFE.ENVIARMDFe',{mretorno},,.T.)
                prog(2,1,80,'IMPRIMINDO MDFe No..: '+mretorno)
                IBR_comando('MDFE.IMPRIMIRDAMDFEPDF',{mretorno},,.T.)
                IBR_comando('MDFE.IMPRIMIRDAMDFE',{mretorno},,.T.)
                //prog(2,1,80,'ENCERRANDO MDFe No..: '+mretorno)
                //IBR_comando('MDFE.ENCERRARMDFE',{mretorno,DTOC(mdata_sis),ALLTRIM(vercod_cid(ALLTRIM(m_demo[1,10]),m_demo[1,5]))},,.T.)

                DEVPOS(06,01);DEVOUT('ATUALIZANDO MDFe No: '+mretorno)
                i:=0
                FOR i = 1 TO LEN(m_demo)
                        sr_getconnection():exec('INSERT INTO sacmdfe ('+;
                        'cUF        	,'+;//1
                        'Modelo      ,'+;//2
                        'serie       ,'+;//3
                        'procEmi     	,'+;//4
                        'dhEmi       	,'+;//5
                        'tpEmit      ,'+;//6
                        'modal       ,'+;//7
                        'ufini       ,'+;//8
                        'uffim       ,'+;//9
                        'cMDF       	,'+;//10
                        'nMDF        ,'+;//11
                        'cMunCarrega      ,'+;//12
                        'xMunCarrega      ,'+;//13
                        'RNTRC            ,'+;//14
                        'placa            ,'+;//15
                        'capKG            ,'+;//16
                        'capM3            ,'+;//17
                        'tara             ,'+;//18
                        'tpRod            ,'+;//19
                        'tpCar            ,'+;//20
                        'UF_CAR           ,'+;//21
                        'RENAVAM          ,'+;//22
                        'tpProp           ,'+;//23
                        'ie               ,'+;//24
                        'xnome            ,'+;//25
                        'CPF              ,'+;//26
                        'chNFe            ,'+;//27
                        'cMunDescarga     ,'+;//28
                        'xMunDescarga     ,'+;//29
                        'cammdfe          )'+;//30
                        ' VALUES ('+;
                        sr_cdbvalue(vercod_uf(ALLTRIM(m_set[1,19])))+','+; //1
                        sr_cdbvalue('58'             )+','+; //2
                        sr_cdbvalue(ALLTRIM(mserie)  )+','+; //3
                        sr_cdbvalue('0'              )+','+; //4
                        sr_cdbvalue(mdata_sis        )+','+; //5
                        sr_cdbvalue('2'              )+','+; //6 sr_cdbvalue(cons_cli[1,2] )+','+; //9
                        sr_cdbvalue(mmodal         )+','+; //7
                        sr_cdbvalue(ALLTRIM(m_set[1,19])    )+','+; //8
                        sr_cdbvalue(muffim                  )+','+; //9
                        sr_cdbvalue(mdoc)+','+; //10
                        sr_cdbvalue(ALLTRIM(STR(VAL(mdoc))))+','+; //11
                        sr_cdbvalue(ALLTRIM(vercod_cid(ALLTRIM(m_set[1,134]),ALLTRIM(m_set[1,19]))))+','+; //12
                        sr_cdbvalue(ALLTRIM(m_set[1,134]))+','+; //13
                        sr_cdbvalue(mrntrc  )+','+; //14
                        sr_cdbvalue(mplaca  )+','+; //15
                        sr_cdbvalue(mcapkg  )+','+; //16
                        sr_cdbvalue(mcapm3  )+','+; //17
                        sr_cdbvalue(mtara   )+','+; //18
                        sr_cdbvalue(mtprod  )+','+; //19
                        sr_cdbvalue(mtpcar  )+','+; //20
                        sr_cdbvalue(muf     )+','+; //21
                        sr_cdbvalue(mrenavan)+','+; //22
                        sr_cdbvalue(mtpprop            )+','+; //23
                        sr_cdbvalue('0'            )+','+; //24
                        sr_cdbvalue(mxnome            )+','+; //25
                        sr_cdbvalue(mcpf            )+','+; //26
                        sr_cdbvalue(ALLTRIM(m_demo[i,6])            )+','+; //27
                        sr_cdbvalue(ALLTRIM(vercod_cid(ALLTRIM(m_demo[i,10]),m_demo[i,5])))+','+; //28
                        sr_cdbvalue(ALLTRIM(m_demo[i,10])                                 )+','+; //29
                        sr_cdbvalue(mcammdfe)+')',,.f.)
                        //sr_getconnection():exec(ccomm,,.f.)
                        sr_getconnection():exec('COMMIT',,.f.)

                NEXT
                fecha_tela()
ENDDO
RETURN NIL

