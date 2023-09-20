MEMVAR getlist
#define ENT_TXT  'ENTNFE.TXT'
#define SAI_TXT  'SAINFE.TXT'
#define TMP_TXT  'ENTNFE.TMP'
* FUNCAO P/ENTRADA PELO XML
***************************
FUNCTION sacentxml()
******************
LOCAL mprg:='SACENTXML',m_aux1:={},m_demo:={},mmotivo:=SPACE(20),mdat_ini,mdat_fim,mcons_nota := {},mtipo:=0,marq_sai := '',;
      m_entrada := {},lin:=0,linha:=0,linhas:=0
PRIVATE mchnfe:=SPACE(50),mcnpj:=SPACE(14),sENDER:='',m_caminho:={},mcaminho:='',marq_excl:='',aret:={}
op_tela(01,15,49,110,'ARQUIVOS NFE (XML)',,1)
exibi_prg('SAC_NFE/SACNF_E')
/*
IF m_indiv[1,37] = 'C:\ACBRMONITORPLUS\'
        marq_sai := ALLTRIM(m_indiv[1,37])+"SAINFE.TXT"
ELSE
        marq_sai := "C:\ACBrNFeMonitor\SAINFE.TXT"
ENDIF
*/

***INICIA O ACBRMONITOR***

IF ! inicia_acbr()
        wvw_lclosewindow()
        RETURN NIL
ENDIF

mdat_ini := mdat_fim := CTOD('  /  /  ')
WHILE .T.
        exibi_prg(mprg)
        mchnfe:=SPACE(50)
        mcnpj:=STRTRAN(mcgc_firm,'.','')
        mcnpj:=STRTRAN(mcnpj,'/','')
        mcnpj:=STRTRAN(mcnpj,'-','')
        limpa(00,00,50,100)
        //DEVPOS(00,01);DEVOUT('CNPJ do Fornecedor:')
        //DEVPOS(00,36);DEVOUT('Chave da NFE:')
        DEVPOS(01,01);DEVOUT('Caminho dos XML...:')
        @ 02,00 TO 02,100
        setcor(3)
        DEVPOS(03,00);DEVOUT(' N.Nota                  Arquivo XML                             Data')
        setcor(1)
        @ 04,00 TO 04,90
        //@ 00,21 GET mcnpj
        //@ 00,50 GET mchnfe
        @ 01,21 GET m_indiv[1,50] WHEN EMPTY(mchnfe)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        m_aux1:={}
        m_demo:={}
        m_caminho:={}
        CLEAR GETS
                m_aux1 := DIRECTORY(ALLTRIM(m_indiv[1,50])+'*.xml','D')
                IF LEN(m_aux1) > 0
                        i := 0
                        FOR i = 1 TO LEN(m_aux1)
                                AADD(m_demo,' '+SUBSTR(m_aux1[i,1],38,6)+'  '+m_aux1[i,1]+'  '+DTOC(m_aux1[i,3]))
                                AADD(m_caminho,m_aux1[i,1])
                        NEXT
                ELSE
                        atencao('Nao existe nenhuma NFE neste Caminho: '+ALLTRIM(m_indiv[1,50]))
                        LOOP
                ENDIF
                point := 0
                mensagem('<CTRL + Page Down> p/Ultima Nota - Escolha a Nota e pressione <ENTER>')
                @ 46,00 TO 46,90
                DEVPOS(47,01);DEVOUT('TOTAL DE NOTAS FISCAIS:')
                @ 48,00 TO 48,90
                setcor(3)
                DEVPOS(47,25);DEVOUT(ALLTRIM(TRANSFORM(LEN(m_demo),'999,999,999')))
                setcor(10);point := ACHOICE(5,0,45,79,m_demo,,,point);setcor(1)
                setcor(1)
                DO CASE
                        CASE LASTKEY()=27
                                LOOP
                        CASE LASTKEY() = 13
                                mensagem('Coletando dados da nota aguarde....')
                                TRY
                                        sr_getconnection():exec("DELETE from sacentrada",,.f.)
                                        sr_committransaction()
                                CATCH E
                                        tracelog(valtoprg())
                                        sr_COMMITtransaction()
                                END
                                //ATENCAO('Lendo a NFE: '+ALLTRIM(m_indiv[1,50])+m_caminho[point])
                                //mretorno := IBR_comando('NFe.LerNFe('+ALLTRIM(m_indiv[1,50])+m_caminho[point]+')',,100)
                                //MYRUN('NOTEPAD '+ALLTRIM(mretorno))
                                //ATENCAO(MRETORNO)
                                IF 'S' = op_simnao('S','Confirma a Nota de Entrada')
                                        //IBR_comando('NFe.NFeToTXT('+ALLTRIM(m_indiv[1,50])+m_caminho[point]+','+ALLTRIM(m_indiv[1,50])+m_caminho[point]+SUBSTR(m_caminho[point],38,6)+'.txt)',,3)
                                        //ATENCAO(ALLTRIM(m_indiv[1,50])+m_caminho[point])
                                        marq_excl := ALLTRIM(m_indiv[1,50])+m_caminho[point]
                                        //IBR_comando('NFe.NFeToTXT('+ALLTRIM(m_indiv[1,50])+m_caminho[point]+','+ALLTRIM(m_indiv[1,50])+SUBSTR(m_caminho[point],38,6)+'.txt)',,100)
                                        //IF IBR_comando('NFE.AssinarNFe',{mretorno},,.T.) = ' '
                                        mcaminho:= ALLTRIM(m_indiv[1,50])+m_caminho[point]+'.txt'

                                        IBR_comando('NFe.NFeToTXT',{marq_excl,mcaminho},,.T.)
                                        //IBR_comando('NFe.NFeToTXT('+ALLTRIM(m_indiv[1,50])+m_caminho[point],ALLTRIM(m_indiv[1,50])+m_caminho[point]+"txt"'},,.T.)
                                        //mcaminho:= STRTRAN(ALLTRIM(m_indiv[1,50])+m_caminho[point],'.xml','.txt')
                                        //atencao(mcaminho)
                                        IF ! FILE(mcaminho)
                                                atencao('Nao foi possivel emcontrar este arquivo: '+mcaminho)
                                                LOOP
                                        ENDIF
                                        lin := MEMOLINE(MEMOREAD(mcaminho),254,1,,)
                                        linhas := linha := 0
                                        linhas := MLCOUNT(MEMOREAD(mcaminho),254)
                                        m_entrada := {}
                                        FOR linha = 1 TO  linhas
                                                lin := MEMOLINE(MEMOREAD(mcaminho),254,linha,,)
                                                AADD(m_entrada,STRTRAN(ALLTRIM(lin),'<?xml version="1.0" encoding="UTF-8"?>',''))
                                        NEXT
                                        /*
                                        op_tela(00,02,50,150,'ARQUIVOS NFE (XML)',,1)
                                        setcor(10);point := ACHOICE(00,00,50,150,M_ENTRADA,,,point);setcor(1)
                                        DO CASE
                                                CASE LASTKEY()=27
                                                wvw_lclosewindow()
                                                EXIT
                                        ENDCASE
                                        */
                                ELSE
                                        LOOP
                                ENDIF
                                IF LEN(m_entrada) = 0
                                        atencao('Nao foi encontrado nenhum dados do XML....')
                                        LOOP
                                ENDIF
                                aret:={}
                                i:=0
                                FOR i = 1 TO LEN(m_entrada)
                                                mqtd_campo := 0
                                                dados_ped := {}
                                                d:=0
			                        FOR d = 1 TO 40
                                                        AADD(dados_ped,' ')
                                                NEXT
                                                d:=0
                                                mcampo := ''
                        			FOR d = 1 TO LEN(ALLTRIM(m_entrada[i]))
                                                        WHILE SUBSTR(m_entrada[i],d,1) <> '|' .AND. d <= LEN(m_entrada[i])
                                                                mcampo := mcampo + SUBSTR(m_entrada[i],d,1)
                                                                d ++
                                                        ENDDO
                                                        mqtd_campo ++
                                                        dados_ped[mqtd_campo] := ALLTRIM(mcampo)
                                                        //atencao(STRZERO(mqtd_campo,5)+' - '+mcampo)
                                                        mcampo := ''
                                                NEXT
                                                //atencao(dados_ped[35])
                                                //setcor(10);point := ACHOICE(00,00,50,120,dados_ped,,,point);setcor(1)
                                                /*
                                                y:=0
                                                FOR y = 1 TO LEN(dados_ped)
                                                        AADD(dados_ent,' ')
                                                NEXT
                                                */
                                                IF EMPTY(dados_ped[1]) .OR. LEN(dados_ped[1]) > 6
                                                        LOOP
                                                ENDIF
                                                AADD(aret,{SUBSTR(dados_ped[1],1,60 ),;
                                                           SUBSTR(dados_ped[2],1,60 ),;
                                                           SUBSTR(dados_ped[3],1,60 ),;
                                                           SUBSTR(dados_ped[4],1,60 ),;
                                                           SUBSTR(dados_ped[5],1,60 ),;
                                                           SUBSTR(dados_ped[6],1,60 ),;
                                                           SUBSTR(dados_ped[7],1,60 ),;
                                                           SUBSTR(dados_ped[8],1,60 ),;
                                                           SUBSTR(dados_ped[9],1,60 ),;
                                                           SUBSTR(dados_ped[10],1,60),;
                                                           SUBSTR(dados_ped[11],1,60),;
                                                           SUBSTR(dados_ped[12],1,60),;
                                                           SUBSTR(dados_ped[13],1,60),;
                                                           SUBSTR(dados_ped[14],1,60),;
                                                           SUBSTR(dados_ped[15],1,60),;
                                                           SUBSTR(dados_ped[16],1,60),;
                                                           SUBSTR(dados_ped[17],1,60),;
                                                           SUBSTR(dados_ped[18],1,60),;
                                                           SUBSTR(dados_ped[19],1,60),;
                                                           SUBSTR(dados_ped[20],1,60),;
                                                           SUBSTR(dados_ped[21],1,60),;
                                                           SUBSTR(dados_ped[22],1,60),;
                                                           SUBSTR(dados_ped[23],1,60),;
                                                           SUBSTR(dados_ped[24],1,60),;
                                                           SUBSTR(dados_ped[25],1,60),;
                                                           SUBSTR(dados_ped[26],1,60),;
                                                           SUBSTR(dados_ped[27],1,60),;
                                                           SUBSTR(dados_ped[28],1,60),;
                                                           SUBSTR(dados_ped[29],1,60),;
                                                           SUBSTR(dados_ped[30],1,60),;
                                                           SUBSTR(dados_ped[31],1,60),;
                                                           SUBSTR(dados_ped[32],1,60),;
                                                           SUBSTR(dados_ped[33],1,60),;
                                                           SUBSTR(dados_ped[34],1,60),;
                                                           SUBSTR(dados_ped[35],1,60)})

                                        /*
                                        sr_getconnection():exec('INSERT INTO SACENTRADA ('+;
                                                'TIPO  ,'+;//1
                                                'CAMPO1,'+;//2
                                                'CAMPO2,'+;//3
                                                'CAMPO3,'+;//4
                                                'CAMPO4,'+;//5
                                                'CAMPO5,'+;//6
                                                'CAMPO6,'+;//7
                                                'CAMPO7,'+;//8
                                                'CAMPO8,'+;//9
                                                'CAMPO9,'+;//10
                                                'CAMPO10,'+;//11
                                                'CAMPO11,'+;//12
                                                'CAMPO12,'+;//13
                                                'CAMPO13,'+;//14
                                                'CAMPO14,'+;//15
                                                'CAMPO15,'+;//16
                                                'CAMPO16,'+;//17
                                                'CAMPO17,'+;//18
                                                'CAMPO18,'+;//19
                                                'CAMPO19,'+;//20
                                                'CAMPO20,'+;//21
                                                'CAMPO21,'+;//22
                                                'CAMPO22,'+;//23
                                                'CAMPO23,'+;//24
                                                'CAMPO24,'+;//25
                                                'CAMPO25,'+;//26
                                                'CAMPO26,'+;//27
                                                'CAMPO27,'+;//28
                                                'CAMPO28,'+;//29
                                                'CAMPO29,'+;//30
                                                'CAMPO30,'+;//31
                                                'CAMPO31,'+;//32
                                                'CAMPO32,'+;//33
                                                'CAMPO33,'+;//34
                                                'CAMPO34)'+;//35
                                                ' VALUES ('+;
                                                sr_cdbvalue(SUBSTR(dados_ped[1],1,60 ))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[2],1,60 ))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[3],1,60 ))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[4],1,60 ))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[5],1,60 ))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[6],1,60 ))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[7],1,60 ))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[8],1,60 ))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[9],1,60 ))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[10],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[11],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[12],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[13],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[14],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[15],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[16],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[17],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[18],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[19],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[20],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[21],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[22],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[23],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[24],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[25],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[26],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[27],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[28],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[29],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[30],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[31],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[32],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[33],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[34],1,60))+','+;
                                                sr_cdbvalue(SUBSTR(dados_ped[35],1,60))+')',,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        */
                                NEXT
                                //atencao( sr_ShowVector( aret ))
                                //sr_getconnection():exec("COMMIT",,.f.)
                        sac22xml()
                ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
* ENTRADA DE PRODUTO
********************
MEMVAR nivel_acess,mdata_sis,cod_operado,getlist,memp_resa,mend_firm,mcid_firm,;
       mfone_firm,minsc_firm,mcgc_firm

FUNCTION sac22xml
*****************
LOCAL MPRG:='SACENTXML',mtitulo:='ENTRADA DE PRODUTO PELO XML',;
      op,i,point,msaldo_atu,mmensagem,;
      m_transp:={},m_point:={},mcod_aux,mqtd_ent:={},mquantd_aux,;
      mpreco_aux:=0,mvlr_base:=0,mcod_nat,mreg,y:=0,mtela_per,;
      m_param:={},mtot_p,mgramatura:=0,machou:=0,m_produtos:={},mitem:=0,;
      marq_saida:='',mbas_icmsub:=0

PRIVATE opcao,tela,lba,cba,mcod_forn,mfornece,f4,mp,mv,;
        micm,mfob,mcif,mdia1,mdia2,mdia3,mdia4,mdia5,;
        mtransp,mnota,mvol_nota,mvlr_nota,mcomprador,mrecebedor,memissao,msaida,;
        mchegada,mfrete:=0,mfrete_aux:=0,mencargo_f:=0,mdisp_asse,mtot_vlr,mtot_vol,;
        muf,mperc,msaldo_mer,menc_aux,mdisp_aux,mpercent,MCONFIS,mpis,;
        mcod_merc,mgru_sub,mmerc,mcod_bc,mquantd,tp_ipi,mtot_des,msoma,mimposto,;
        munidade,mp_lucro,mpr_unit,mdesc1,mdesc2,mdesc3,mipi,mipi_aux,mpeso,;
        mvlr_merc,mcust_merc,mpr_venda,mlucro,mpr_medio,mcust_real,mvlr_fat,;
        mvlr_ent,mavista,m_entrada:={},m_demo:={},mii:=0,mii_aux:=0,mvlr_icmsub:=0,mbas_icmsu:=0,;
        micm_firm:=0,mcus_merc := 0,mcus_real := 0,mvl_nota,mvl_base,mdesc_aux,mnivel_cal:=' ',;
        mserie:=SPACE(3),mcfop,micmsub:=0,mmodelo:='  ',mvalor_icm:=0,muf_forn:='  ',;
        mnatureza,mcredito,mper_vlr,mper_qtd,m_tipo4:={},;
        mpr_unit4:=0,mvlr_merc4:=0,mcust_mer4:=0,mcust_rea4:=0,mpr_venda4:=0,;
        mpr_medio4:=0,mtot_icm:=0,mtot_ipi:=0,msaldo_ant:=0,set_aredonda,set_vlr_ent,mvarejo:=1,mnorm_ele:= 'E',;
        nulo:='NULL',mtot_icmsub := 0,mvlr_icm_sub := 0,mtipo_icmsub:='I',mvlr_prod:=0,;
        mfant_forn:='',mcnpj_forn:='',mie_forn:='',mend_forn:='',mnum_forn:='',;
        mcompl_forn:='',mbairro_forn:='',mcid_forn:='',mcep_forn:='',;
        mfone_forn:='',mcons_forn:={},mcons_prod:={},mcod_op:='1',mnum_ped:=0,mversao_xml:=''

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lba = 23
cba = 100
//SET KEY 281 TO f4_merc('*')           // inclusao de PRODUTO ALT+P
***************
set_aredonda := m_set[1,103]
set_vlr_ent  := m_set[1,7]
micm_firm := m_set[1,20]
mpis := m_set[1,2]
mconfis := m_set[1,3]
mimposto := m_set[1,4]
mpercent := m_set[1,12]
mvlr_ent := m_set[1,7]
mavista := SPACE(1)
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
CLEAR GETS
op_tela(00,01,50,110,mtitulo,,1)
WHILE .T.
        limpa(0,0,50,100)
        IF LEN(aret) = 0
                atencao('Nao foi encontrado nenhum dados do XML....')
                fimset()
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        i:=0
        FOR i = 1 TO LEN(aret)
                IF ALLTRIM(aret[i,1]) = 'A'
                        mversao_xml := ALLTRIM(aret[i,2])
                        LOOP
                ENDIF
        NEXT
        i:=0
        FOR i = 1 TO LEN(aret)
                IF ALLTRIM(aret[i,1]) = 'B'
                        IF mversao_xml = '3.10'
                                mnota     := ALLTRIM(aret[i,8])
                                msaida := memissao  := mchegada  := CTOD(SUBSTR(aret[i,9],9,2)+'/'+SUBSTR(aret[i,9],6,2)+'/'+SUBSTR(aret[i,9],1,4))
                                //msaida    := CTOD(SUBSTR(aret[i,10],9,2)+'/'+SUBSTR(aret[i,10],6,2)+'/'+SUBSTR(aret[i,10],1,4))
                                mmodelo   := ALLTRIM(aret[i,6])
                                mserie    := ALLTRIM(aret[i,7])
                        ELSE
                                mnota     := ALLTRIM(aret[i,7])
                                msaida := memissao  := mchegada  := CTOD(SUBSTR(aret[i,8],9,2)+'/'+SUBSTR(aret[i,8],6,2)+'/'+SUBSTR(aret[i,8],1,4))
                                //msaida    := CTOD(SUBSTR(aret[i,10],9,2)+'/'+SUBSTR(aret[i,10],6,2)+'/'+SUBSTR(aret[i,10],1,4))
                                mmodelo   := ALLTRIM(aret[i,5])
                                mserie    := ALLTRIM(aret[i,6])
                        ENDIF
                ELSEIF ALLTRIM(aret[i,1]) = 'C'
                        mfornece := ALLTRIM(aret[i,2])
                        mfant_forn:= ALLTRIM(aret[i,3])
                        mie_forn:= ALLTRIM(aret[i,4])
                ELSEIF ALLTRIM(aret[i,1]) = 'C02'
                        mcnpj_forn := STRTRAN(ALLTRIM(aret[i,2]),'.','')
                        mcnpj_forn := STRTRAN(mcnpj_forn,'-','')
                        mcnpj_forn := STRTRAN(mcnpj_forn,'/','')
                ELSEIF ALLTRIM(aret[i,1]) = 'C05'
                        mend_forn := ALLTRIM(aret[i,2])
                        mnum_forn := ALLTRIM(aret[i,3])
                        mcompl_forn := ALLTRIM(aret[i,4])
                        mbairro_forn := ALLTRIM(aret[i,5])
                        mcid_forn := ALLTRIM(aret[i,7])
                        muf_forn := ALLTRIM(aret[i,8])
                        mcep_forn := ALLTRIM(aret[i,9])
                        mfone_forn := ALLTRIM(aret[i,12])
                ELSEIF ALLTRIM(aret[i,1]) = 'H'
                        //atencao(ALLTRIM(aret[i,2]))
                        mitem := VAL(ALLTRIM(aret[i,2]))
                ELSEIF ALLTRIM(aret[i,1]) = 'I'

                        //                   1         2          3        4         5          6         7                            8                                                                    9
                        //                                            10                                 11         12                        13                                                    14                                                   15          16        17          18         19       20          21     22
                        AADD(m_produtos,{aret[i,2],aret[i,3],aret[i,4],aret[i,5],aret[i,6],aret[i,12],aret[i,13],IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,14])),'99999999.999'))),IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,15])),'99999999.999'))),;
                                        IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,16])),'99999999.999'))),aret[i,17],aret[i,18],IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,19])),'99999999.999'))),IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,20])),'99999999.999'))),aret[i,21],aret[i,22],aret[i,23],aret[i,24],aret[i,25],aret[i,26],aret[i,27],0})
                ELSEIF ALLTRIM(aret[i,1]) = 'O10'
                        //atencao(STRZERO(mitem,3))
                        m_produtos[mitem,22] := VAL(ALLTRIM(aret[i,3]))
                ELSEIF ALLTRIM(aret[i,1]) = 'W02'
                        mvlr_base   := IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,2])),'99999999.999')))
                        mvalor_icm  := IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,3])),'99999999.999')))
                        mbas_icmsub := IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,9])),'99999999.999')))
                        mvlr_icmsub := IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,10])),'99999999.999')))
                        mvlr_prod   := IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,13])),'99999999.999')))
                        mfrete := mfrete_aux := IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,14])),'99999999.999')))
                        mencargo_f := menc_aux := IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,15])),'99999999.999')))
                        mtot_ipi := IAT(VAL(TRANSFORM(VAL(ALLTRIM(aret[i,18])),'99999999.999')))
                ENDIF
        NEXT
        mnatureza:=SPACE(40)
        mcredito := ' '
        micm_firm := m_set[1,20]
        mvol_nota := mvlr_nota := msaldo_atu := ;
        micm :=  mdisp_asse := mdisp_aux := msaldo_mer := mperc :=  mcod_forn :=;
        mper_vlr := mper_qtd := mtot_icmsub := 0
        i := 1
        ASIZE(m_entrada,0)
        ASIZE(m_tipo4,0)
        ASIZE(m_demo,0)
        ASIZE(m_transp,0)
        ASIZE(m_point,0)
        ASIZE(mqtd_ent,0)
        mavista    := mfob := mcif := SPACE(1)
        mdia1      := mdia2 := mdia3 := mdia4 := mdia5 := mdia6 := mdia7 := mdia8 := mdia9 := mdia10 := SPACE(3)
        mtransp    := mcomprador := mrecebedor := SPACE(15)
        //mv         := mnivel_cal := SPACE(1)
        mp         := 'X'
        mcod_nat   := SPACE(5)

        mtipo_icmsub:='I'
        SET INTEN ON
        mensagem('Preencha os Campos - <ESC> p/ Retornar')
        janela(0,0,' Informacoes de Impostos da Empresa                                               Versao do XML:'+mversao_xml,'*',1)
        DEVPOS(1,1);DEVOUT('ICM(%):')
        DEVPOS(1,14);DEVOUT('PIS(%):')
        DEVPOS(1,28);DEVOUT('Confis(%):')
        DEVPOS(1,45);DEVOUT('Outros Impostos(%):')
        @ 2,0 TO 2,cba
        janela(2,0,' Informacoes do Fornecedor ','*',1)
        DEVPOS(3,1); DEVOUT('Fornecedor......:')
        @ 4,0 TO 4,cba
        @ 5,35 TO 16,35
        janela(4,0,' Informacoes da Nota ','*',1)
        DEVPOS(5,1); DEVOUT('Numero da Nota..:')
        DEVPOS(6,1); DEVOUT('Serie da Nota...:')
        DEVPOS(7,1); DEVOUT('Modelo da Nota..:')
        DEVPOS(8,1); DEVOUT('Data de Emissao.:')
        DEVPOS(9,1); DEVOUT('Data de Saida...:')
        DEVPOS(10,1);DEVOUT('Data da Chegada.:')
        DEVPOS(11,1);DEVOUT('Valor Produtos..:')
        DEVPOS(12,1);DEVOUT('Valor Base ICMS.:')
        DEVPOS(13,1);DEVOUT('Valor ICMS......:')
        DEVPOS(14,1);DEVOUT('Base ICM Subst..:')
        DEVPOS(15,1);DEVOUT('Valor ICM Subst.:')
        DEVPOS(16,1);DEVOUT('Valor do Frete..:')
        DEVPOS( 6,37);DEVOUT('Nivel................:')
        DEVPOS( 7,37);DEVOUT('CFOP Entrada.........:')
        DEVPOS( 8,37);DEVOUT('Pag.[A]vista A[P]razo:')
        DEVPOS( 9,37);DEVOUT('Dias.................:')
        DEVPOS(10,37);DEVOUT('Encargos.............:')
        DEVPOS(11,37);DEVOUT('Despesa Assessoria...:')
        @ 17,0 TO 17,cba
        DEVPOS(18,1);DEVOUT('Cod.Produto:')
        DEVPOS(18,63);DEVOUT('UN:')
        DEVPOS(19,1);DEVOUT('CFOP.......:')
        DEVPOS(20,1);DEVOUT('Quantidade.:')
        DEVPOS(21,1);DEVOUT('Lucro (%)..:')
        DEVPOS(22,1);DEVOUT('Vlr.Unit...:')
        DEVPOS(23,1);DEVOUT('ICMS (%)...:')
        DEVPOS(24,1);DEVOUT('Gramatura..:')
        DEVPOS(25,1);DEVOUT('Desconto...:')
        DEVPOS(26,1);DEVOUT('IPI (%)....:')
        DEVPOS(27,1);DEVOUT('I.I (%)....:')
        DEVPOS(28,1);DEVOUT('ICM Sub.(%):')

        botao(20,69,28,96,,' Valores Atuais  ')
        DEVPOS(21,70);DEVOUT('Vlr.Mercad.:')
        DEVPOS(22,70);DEVOUT('Cus.Mercad.:')
        DEVPOS(23,70);DEVOUT('Custo Real.:')
        DEVPOS(24,70);DEVOUT('Custo Medio:')
        DEVPOS(25,70);DEVOUT('Preco Venda:')
        DEVPOS(26,70);DEVOUT('Lucro R$...:')
        DEVPOS(27,70);DEVOUT('Saldo Atual:             ')
        @ 29,0 TO 29,cba

        //DEVPOS(10,59);DEVOUT('Tipo ICM-SUB [I]ndiv. [G]eral:')
        /*
        @ 11,0 TO 11,cba
        @ 7,51 GET mserie PICT '@!' WHEN m_set[1,8] <> 'N'
        @ 7,62 GET mmodelo PICT '@!' WHEN m_set[1,8] <> 'N'
        */
        setcor(3)
        DEVPOS(5,19);DEVOUT(mnota)
        DEVPOS(6,19);DEVOUT(mserie)
        DEVPOS(7,19);DEVOUT(mmodelo)
        DEVPOS(8,19);DEVOUT(memissao)
        DEVPOS(9,19);DEVOUT(msaida)
        DEVPOS(10,19);DEVOUT(mchegada)
        DEVPOS(11,19);DEVOUT(TRANSFORM(mvlr_prod,'9,999,999.99'))
        //DEVPOS(12,10);DEVOUT(TRANSFORM(mvlr_nota,'9,999,999.99'))
        DEVPOS(12,19);DEVOUT(TRANSFORM(mvlr_base,'9,999,999.99'))
        DEVPOS(13,19);DEVOUT(TRANSFORM(mvalor_icm,'9,999,999.99'))
        DEVPOS(14,19);DEVOUT(TRANSFORM(mbas_icmsub,'9,999,999.99'))
        DEVPOS(15,19);DEVOUT(TRANSFORM(mvlr_icmsub,'9,999,999.99'))
        DEVPOS(16,19);DEVOUT(TRANSFORM(mfrete_aux,'9,999,999.99'))
        setcor(1)
        mvlr_nota := mvlr_prod + mvlr_icmsub
        mcons_forn:={}
        sr_getconnection():exec( "SELECT * FROM sacforn WHERE cgc = "+sr_cdbvalue(mcnpj_forn),,.t.,@mcons_forn)
        sr_getconnection():exec('COMMIT',,.f.)
        //ATENCAO(mcons_forn[1,1])
        IF LEN(mcons_forn) > 0
                mcod_forn := VAL(mcons_forn[1,1])
                setcor(3)
                DEVPOS(3,19);DEVOUT(STRZERO(mcod_forn,4))
                DEVPOS(3,COL()+2);DEVOUT(mcons_forn[1,2])
                setcor(1)
        ELSE
                aret:={}
                sr_getconnection():exec( "SELECT MAX(cod_forn) FROM sacforn",,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                mcod_forn := VAL(aret[1,1])+1
                sr_getconnection():exec('INSERT INTO sacforn ('+;
                'cod_forn  ,'+; //1
                'razao 	   ,'+; //2
                'fantasia  ,'+; //3
                'data_cad  ,'+; //4
                'endereco  ,'+; //5
                'bairro    ,'+; //6
                'cidade    ,'+; //7
                'uf 	   ,'+; //8
                'cep 	   ,'+; //9
                'tel1 	   ,'+; //10
                'cgc 	   ,'+; //11
                'insc 	   ,'+; //12
                'obs       ,'+; //13
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(mcod_forn,4)        )+','+; //1
                sr_cdbvalue(SUBSTR(mfornece,1,40)       )+','+; //2
                sr_cdbvalue(SUBSTR(mfant_forn,1,40)     )+','+; //3
                sr_cdbvalue(mdata_sis                  )+','+; //4
                sr_cdbvalue(SUBSTR(mend_forn+', '+mnum_forn,1,35) )+','+; //5
                sr_cdbvalue(SUBSTR(mbairro_forn,1,20)   )+','+; //6
                sr_cdbvalue(SUBSTR(mcid_forn,1,20)                     )+','+; //7
                sr_cdbvalue(muf_forn                         )+','+; //8
                sr_cdbvalue(mcep_forn                      )+','+; //9
                sr_cdbvalue(mfone_forn                      )+','+; //10
                sr_cdbvalue(mcnpj_forn                  )+','+; //11
                sr_cdbvalue(mie_forn                    )+','+; //12
                sr_cdbvalue('CADASTRO PELA ENTRADA DE MERCADORIA PELO XML')+','+; //13
                sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                mcons_forn:={}
                sr_getconnection():exec( "SELECT * FROM sacforn WHERE cgc = "+sr_cdbvalue(mcnpj_forn),,.t.,@mcons_forn)
                sr_getconnection():exec('COMMIT',,.f.)
                setcor(3)
                DEVPOS(3,19);DEVOUT(STRZERO(mcod_forn,4))
                DEVPOS(3,COL()+2);DEVOUT(mcons_forn[1,2])
                setcor(1)
        ENDIF
        Wvw_SetTitle( ,' Entrada de Mercadoria ')
        mensagem('Fazendo Pesquisa da NOTA FISCAL se ja foi Processada Aguarde......')
        aret:={}
        //ATENCAO("SELECT sr_recno FROM sacmov WHERE documento = "+sr_cdbvalue('NF'+mnota)+" AND ent_sai = 'E' AND cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4)))
        sr_getconnection():exec( "SELECT sr_recno FROM sacmov WHERE documento = "+sr_cdbvalue('NF'+mnota)+" AND ent_sai = 'E' AND cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4)),,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        setcor(1)
        //atencao( sr_ShowVector( aret ))
        *************
        IF LEN(aret) > 0
                atencao('Esta Nota: '+'NF'+mnota+' do Fornecedor: '+STRZERO(mcod_forn,4)+' ja foi processada !!!!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        @ 1,08 GET micm_firm PICT '99.99'       //VALID lim_get() WHEN men_get(2,9,'Informe o percentual de ICM do Estado ou ENTER p/continuar')
        @ 1,21 GET mpis PICT '999.99' WHEN m_set[1,8] <> 'N'
        @ 1,38 GET mconfis PICT '999.99' WHEN m_set[1,8] <> 'N'
        @ 1,64 GET mimposto PICT '999.99' WHEN m_set[1,8] <> 'N'
        READ
        IF LASTKEY() = 27
                fimset()
                RELEASE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        setcor(1)
        ver_uf(muf_forn)
        micm := mperc
        opcao := 'S'
        @  6,59 GET mnivel_cal PICT '@!' VALID mnivel_cal $ '1,2,3'       //.AND. lim_get() WHEN men_get(6,7,'Nivel [1]: Verifica dos os dados valor total da NOTA e volume - NIVEL [2]: Verifica o Volume e o preco de venda e calculado so o percentual de lucro')
        @  7,59 GET mcod_nat PICT '9.999' VALID IF(EMPTY(mcod_nat),.F.,ver_nat(mcod_nat,'E')) WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')     //.AND. m_set[1,8] <> 'N'
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        @  8,59 GET mavista PICT '@!' VALID mavista $ 'A,P'      //.AND. lim_get() WHEN men_get(6,42,'Informe os dias de prazo para pagamento p/que possa ser Gerada a DUPLICATA A PAGAR')
        @  9,59 GET mdia1 PICT '999' WHEN mavista = 'P'
        @  9,63 GET mdia2 PICT '999' WHEN mavista = 'P' .AND. ! EMPTY(mdia1)
        @  9,67 GET mdia3 PICT '999' WHEN mavista = 'P' .AND. ! EMPTY(mdia2)
        @  9,71 GET mdia4 PICT '999' WHEN mavista = 'P' .AND. ! EMPTY(mdia3)
        @  9,75 GET mdia5 PICT '999' WHEN mavista = 'P' .AND. ! EMPTY(mdia4)
        @  8,79 GET mdia6 PICT '999' WHEN mavista = 'P' .AND. ! EMPTY(mdia5)
        @  9,83 GET mdia7 PICT '999' WHEN mavista = 'P' .AND. ! EMPTY(mdia6)
        @  9,87 GET mdia8 PICT '999' WHEN mavista = 'P' .AND. ! EMPTY(mdia7)
        @  9,91 GET mdia9 PICT '999' WHEN mavista = 'P' .AND. ! EMPTY(mdia8)
        @  9,95 GET mdia10 PICT '999' WHEN mavista = 'P' .AND. ! EMPTY(mdia9)
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        //ver_ent()
        mensagem('Preencha os Campos - <ESC> p/ Retornar')
        //@ 6,29 GET mvol_nota PICT '999,999.999' VALID IF(EMPTY(mvol_nota),.F.,.T.)
        @ 10,59 GET menc_aux PICT '999,999.99'   //WHEN mnivel_cal = '1'
        @ 11,59 GET mdisp_aux PICT '999,999.99'  //WHEN mnivel_cal = '1'
        //@ 10,89 GET mtipo_icmsub PICT '@!' VALID lim_get() WHEN m_set[1,8] <> 'N' .AND. mvlr_icmsub > 0 .AND. men_get(0,0,'Informe [I] Para infomar o ICM-SUB por Produto [G]eral o ICM-SUB FRACIONADO para todos os Produtos')
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        mcfop := mcod_nat
        opcao := op_simnao('S','Confirma os dados da Nota Fiscal:')
        IF opcao = 'N'
                LOOP
        ELSE
                ASIZE(m_tipo4,0)
                ASIZE(m_entrada,0)
                ASIZE(m_demo,0)
                i := 0
                FOR i = 1 TO LEN(m_produtos)
                        IF mfrete_aux + menc_aux > mvlr_nota
                                atencao('Frete mais encargos esta maior que valor da nota !!!')
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                        //mfrete := (IF(ver_serie() = '141204',mfrete_aux*.93,mfrete_aux)/mvlr_nota)

                        mfrete := mfrete_aux/(mvlr_nota - mfrete_aux)
                        mencargo_f := (menc_aux/mvlr_nota)
                        mdisp_asse := (mdisp_aux/mvlr_nota)
                        mtot_vlr := mtot_vol := 0

                        mcod_ean := IF(m_produtos[i,2]='SEM GTIN','',m_produtos[i,2])
                        mmerc := SUBSTR(m_produtos[i,3],1,40)
                        munidade := m_produtos[i,7]
                        mpr_unit := m_produtos[i,9]
                        mquantd  := m_produtos[i,8]
                        mipi_aux := m_produtos[i,22]
                        mp_lucro :=  mvlr_merc := mcus_merc := mcus_real :=;
                        mpr_venda := mpr_medio := mlucro := mdesc1 := mdesc2 := mdesc3 := mipi := ;
                        mii := mii_aux := mpeso := ;
                        mdesc_aux := mvlr_merc4 := mcus_merc4 := mcus_real4 := mpr_venda4 := ;
                        mpr_medio4 := mpr_unit4 := mcod_merc:=0

                        mcons_prod:={}
                        IF ! EMPTY(mcod_ean)
                                sr_getconnection():exec( "SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_ean),,.t.,@mcons_prod)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mcons_prod) > 0
                                        mcod_merc := VAL(mcons_prod[1,8])
                                        mmerc     := mcons_prod[1,9]
                                        munidade  := mcons_prod[1,14]
                                        mp_lucro  := mcons_prod[1,22]
                                        mpeso     := mcons_prod[1,17]
                                        mgramatura:= mcons_prod[1,74]
                                ENDIF
                        ELSE
                                mcod_merc := 0
                        ENDIF
                        CLEAR GETS
                        setcor(5)
                        DEVPOS(18,21);DEVOUT(mmerc)
                        setcor(1)
                        mensagem('Digite Codigo')
                        @ 18,14 GET mcod_merc PICT '99999' WHEN LEN(mcons_prod) = 0
                        READ
                        IF LASTKEY() = 27
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                        IF LEN(mcons_prod) = 0 .OR. ! EMPTY(mcod_ean)
                                IF EMPTY(mcod_merc)
                                        f4_merc(,mmerc)
                                ENDIF
                                mcons_prod:={}
                                sr_getconnection():exec( "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mcons_prod)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mcons_prod) = 0
                                        atencao('Nao foi possivel encontrar este produto...')
                                        i--
                                        LOOP
                                ENDIF
                                mcod_merc := VAL(mcons_prod[1,8])
                                mmerc     := mcons_prod[1,9]
                                munidade  := mcons_prod[1,14]
                                mp_lucro  := mcons_prod[1,22]
                                mpeso     := mcons_prod[1,17]
                                mgramatura:= mcons_prod[1,74]
                        ENDIF
                        //mcod_bc := SPACE(14)
                        f4 := ' '
                        mvlr_icm_sub := 0
                        setcor(3)
                        DEVPOS(18,14);DEVOUT(STRZERO(mcod_merc,5))
                        DEVPOS(18,21);DEVOUT(mmerc)
                        DEVPOS(18,66);DEVOUT(munidade)
                        DEVPOS(21,83);DEVOUTPICT(mcons_prod[1,43],'9,999,999.99')
                        DEVPOS(22,83);DEVOUTPICT(mcons_prod[1,44],'9,999,999.99')
                        DEVPOS(23,83);DEVOUTPICT(mcons_prod[1,45],'9,999,999.99')
                        DEVPOS(24,83);DEVOUTPICT(mcons_prod[1,48],'9,999,999.99')
                        DEVPOS(25,83);DEVOUTPICT(mcons_prod[1,46],'9,999,999.99')
                        DEVPOS(26,83);DEVOUTPICT(mcons_prod[1,46]-mcons_prod[1,48],'9,999,999.99')
                        DEVPOS(27,83);DEVOUTPICT(mcons_prod[1,56],'999,999.99')

                        DEVPOS(20,14);DEVOUTPICT(mquantd,(unidade(mcons_prod[1,14])))
                        DEVPOS(22,14);DEVOUTPICT(mpr_unit,'9,999,999.9999')
                        setcor(1)
                        //ver_merc()
                        mcfop := mcod_nat
                        @ 19,14 GET mcfop PICT '9.999'
                        @ 21,14 GET mp_lucro PICT '999.99'      //VALID lim_get() WHEN men_get(14,28,'Informe o percentual de lucro que deseja')
                        @ 23,13 GET micm PICT '999.99' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')    //.AND. men_get(14,62,'Informe o percentual de ICMS')
                        @ 24,14 GET mgramatura PICT '9,999'     //WHEN mgramatura > 0
                        @ 26,14 GET mipi_aux PICT '999,999.9999' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')  //.AND. men_get(15,45,'Informe IPI '+tp_ipi)
                        @ 27,14 GET mii_aux PICT '9999.999' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')       //.AND. men_get(15,45,'Informe I.I. [Imposto de Importacao] '+tp_ipi)
                        @ 28,14 GET mvlr_icm_sub PICT '999,999.99' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3') .AND. mtipo_icmsub = 'I'
                        READ
                        IF LASTKEY() = 27
                                i--
                                LOOP
                        ENDIF
                        mipi := mipi_aux
                        mii := mii_aux
                        /*
                        mdesc_aux := (mdesc1 / mpr_unit) * 100
                        mdesc1 := mdesc_aux
                        mdesc_aux := (mdesc2 / mpr_unit) * 100
                        mdesc2 := mdesc_aux
                        mdesc_aux := (mdesc3 / mpr_unit) * 100
                        mdesc3 := mdesc_aux
                        */
                        mquantd_aux := mquantd
                        mpreco_aux := mpr_unit
                        IF mgramatura > 1
                                mquantd := mquantd_aux * mgramatura
                                mpr_unit := mpreco_aux / mgramatura
                        ENDIF
                        * Calculo de Custo da Mercadoria
                        calc_cus()
                        ********************************
                        mtot_icmsub := mtot_icmsub + mvlr_icm_sub
                        SR_BEGINTRANSACTION()
                        TRY
                                IF EMPTY(mcons_prod[1,70])
                                        sr_getconnection():exec("UPDATE sacmerc SET p_lucro = "+sr_cdbvalue(mp_lucro)+",nbm = "+sr_cdbvalue(m_produtos[i,4])+",cod_barr = "+sr_cdbvalue(mcod_ean)+" WHERE cod_merc = "+sr_cdbvalue(mcons_prod[1,8]),,.f.)
                                ELSE
                                        sr_getconnection():exec("UPDATE sacmerc SET p_lucro = "+sr_cdbvalue(mp_lucro) +",cod_barr = "+sr_cdbvalue(mcod_ean)+" WHERE cod_merc = "+sr_cdbvalue(mcons_prod[1,8]),,.f.)
                                ENDIF
                                sr_getconnection():exec('COMMIT',,.f.)
                                sr_committransaction()
                        CATCH e
                        SR_ENDTRANSACTION()
                        END

                                *                     1           2        3      4         5          6          7
                                *         8         9      10       11       12    13    14     15     16
                                *          17           18            19          20         21      22       23            24        25      26   27        28
                                AADD(m_entrada,{mcons_prod[1,7],mcod_merc,mmerc,mpr_unit,mvlr_merc,mcust_merc,mcust_real,;
                                     mpr_medio,mpr_venda,mquantd,mgramatura,mipi,mpeso,mdesc1,mdesc2,mdesc3,;
                                     mcons_prod[1,30],mcons_prod[1,31],mcons_prod[1,61],mquantd_aux,mpreco_aux,mii,mcons_prod[1,14],mcons_prod[1,68],mcfop,micmsub,micm,mcons_prod[1,56]})
                                AADD(m_tipo4  ,{mcons_prod[1,7],mcod_merc,mmerc,mpr_unit4,mvlr_merc4,mcust_mer4,mcust_rea4,;
                                     mpr_medio4,mpr_venda4,mquantd,mcons_prod[1,74],mipi,mpeso,mdesc1,mdesc2,mdesc3,;
                                     mcons_prod[1,30],mcons_prod[1,31],mcons_prod[1,61],mquantd_aux,mpreco_aux,mii,mcons_prod[1,14],mcons_prod[1,68],mcfop,micmsub,micm,mcons_prod[1,56]})
                                AADD(m_demo,STRZERO(mcod_merc,5)+'-'+mmerc+' '+TRANSFORM(mquantd_aux,'99999.9999')+' '+TRANSFORM(mpreco_aux,'9,999,999.99'))
                                mtot_des := (mpr_unit * mquantd)
                                mtot_des := mtot_des - (mtot_des * (mdesc1 / 100))
                                mtot_des := mtot_des - (mtot_des * (mdesc2 / 100))
                                mtot_des := mtot_des - (mtot_des * (mdesc3 / 100))
                                mtot_vlr := mtot_vlr + (mtot_des + ((mpr_unit*mquantd) * (mipi/100)))
                                mtot_vlr := mtot_vlr + (mtot_des + ((mpr_unit*mquantd) * (mii/100)))
                                mtot_vlr := iat(mtot_vlr,2)
                                mtot_vol := iat(mtot_vol + mquantd_aux,set_aredonda)
                                mtot_des := 0
                        f:=xlin:=0
                        FOR f=1 TO LEN(m_demo)
                                IF xlin>=20
                                        scroll(30,00,48,120,1)
                                else
                                        xlin++
                                ENDIF
                                setcor(3)
                                DEVPOS(30+xlin,01);DEVOUT(m_demo[f])
                        NEXT

                        LOOP
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                NEXT
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                opcao := op_simnao('S','Todas Informacoes "OK"... Confirma Entrada:')
                IF opcao = 'N'
                        LOOP
                ELSE
                        repl_forn()
                        SR_BEGINTRANSACTION()
                        i := 0
                        FOR i=1 TO LEN(m_entrada)
                                aret := {}
                                                          //         1        2        3     4    5        6        7        8         9        10       11       12     13     14      15
                                sr_getconnection():exec("SELECT saldo_mer,saldo_fis,doc_ent,icm,pr_unit,vlr_merc,cust_merc,pr_venda,cust_real,pr_medio,cod_barr,cod_merc,merc,unidade,sittrib FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.t.,@aret)
                                sr_getconnection():exec('COMMIT',,.f.)
                                mlinha := aret[1,11]+aret[1,12]+aret[1,13]+aret[1,14]+STRZERO((aret[1,1] + m_tipo4[i,10])*1000,13)+STRZERO(iat(m_tipo4[i,9])*100,14)+aret[1,15]

                                        ver_nat(m_entrada[i,25],'E')
                                        sr_getconnection():exec("UPDATE sacmerc SET data_atu = "+sr_cdbvalue(mdata_sis)+;
                                                        ",dat_ult_e  = "+sr_cdbvalue(mchegada                          )+;
                                                        ",ul_alt_pr = "+IF(aret[1,8] <> m_entrada[i,9],sr_cdbvalue(mdata_sis),nulo)+;//sr_cdbvalue(IF(aret[1,8] <> m_entrada[i,9],mdata_sis,nulo))+; //",ul_alt_pr  = "+sr_cdbvalue(mchegada                          )+;
                                                        ",opera_pr     = "+sr_cdbvalue(cod_operado)+;
                                                        ",isento     = "+sr_cdbvalue(m_entrada[i,19]                   )+;
                                                        ",doc_ent_a  = "+sr_cdbvalue(aret[1,3]                     )+;
                                                        ",doc_ent    = "+sr_cdbvalue('NF'+mnota                        )+;
                                                        ",a_pr_unit  = "+sr_cdbvalue(aret[1,5] )+;
                                                        ",a_vlr_merc = "+sr_cdbvalue(aret[1,6] )+;
                                                        ",a_cust_mer = "+sr_cdbvalue(aret[1,7] )+;
                                                        ",a_pr_venda = "+sr_cdbvalue(aret[1,8] )+;
                                                        ",a_cust_rea = "+sr_cdbvalue(aret[1,9] )+;
                                                        ",a_pr_medio = "+sr_cdbvalue(aret[1,10])+;
                                                        ",pr_unit   = "+sr_cdbvalue(iat(m_entrada[i,4],set_aredonda))+;
                                                        ",vlr_merc  = "+sr_cdbvalue(iat(m_entrada[i,5],set_aredonda))+;
                                                        ",cust_merc = "+sr_cdbvalue(iat(m_entrada[i,6],set_aredonda))+;
                                                        ",pr_venda  = "+sr_cdbvalue(iat(m_entrada[i,9],set_aredonda))+;
                                                        ",cust_real = "+sr_cdbvalue(iat(m_entrada[i,7],set_aredonda))+;
                                                        ",pr_medio  = "+sr_cdbvalue(iat(m_entrada[i,8],set_aredonda))+;
                                                        ",saldo_mer = "+sr_cdbvalue(aret[1,1] + m_entrada[i,10])+;
                                                        ",saldo_fis = "+sr_cdbvalue(aret[1,2] + IF(mcredito='S',m_entrada[i,10],0))+;
                                                        ",icm = "+sr_cdbvalue(iat(aret[1,4] + IF(! EMPTY(m_entrada[i,27]),((m_entrada[i,5] * m_entrada[i,10])* (m_entrada[i,27]/100)),0),2))+;
                                                        ",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+;
                                                        " WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.f.)
                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                'processo,ent_sai,SR_DELETED )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(DATE())+','+; //1
                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                sr_cdbvalue(TIME())+','+; //3
                                                sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                sr_cdbvalue(m_entrada[i,10])+','+; //5
                                                sr_cdbvalue(aret[1,1])+','+; //6
                                                sr_cdbvalue(aret[1,1] + m_entrada[i,10])+','+; //7
                                                sr_cdbvalue(cod_operado)+','+; //8
                                                sr_cdbvalue('SAC22')+','+; //9
                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                sr_cdbvalue('ENTRADA: NF'+mnota)+','+; //11
                                                sr_cdbvalue('E')+','+; //11
                                                sr_cdbvalue(' ')+')',,.f.)
                                        IF mcredito = 'S'
                                                sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai)'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                        sr_cdbvalue(m_entrada[i,10])+','+; //5
                                                        sr_cdbvalue(aret[1,2])+','+; //6
                                                        sr_cdbvalue(aret[1,2] + m_entrada[i,10])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SAC22')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('ENTRADA: NF'+mnota)+','+; //11
                                                        sr_cdbvalue('E')+')',,.f.)
                                        ENDIF
                                                ver_cod(m_entrada[i,2],,,,,'*')
                                                //ATENCAO('NF'+mnota)
                                                sr_getconnection():exec('INSERT INTO sacmov (empresa,'+; //01
                                                        'documento,'+;          //02
                                                        'serie,'+;              //03
                                                        'modelo,'+;             //04
                                                        'num_ped,'+;            //05
                                                        'gru_sub,'+;            //06
                                                        'codigo,'+;             //07
                                                        'produto,'+;            //08
                                                        'cod_fab,'+;            //09
                                                        'fabrica,'+;            //10
                                                        'unidade,'+;            //11
                                                        'data_s_e,'+;           //12
                                                        'ent_sai,'+;            //13
                                                        'saldo_ant,'+;          //14
                                                        'quantd,'+;             //15
                                                        'quantd_aux,'+;         //16
                                                        'pr_venda1,'+;          //17
                                                        'pr_venda,'+;           //18
                                                        'pr_unit,'+;            //19
                                                        'cod_forn,'+;           //20
                                                        'fornece,'+;            //21
                                                        'uf_cli,'+;             //22
                                                        'icm_aliq,'+;           //23
                                                        'icm_sub,'+;            //24
                                                        'fob,'+;                //25
                                                        'cif,'+;                //26
                                                        'dia1,'+;               //27
                                                        'dia2,'+;               //28
                                                        'dia3,'+;               //29
                                                        'emissao,'+;            //30
                                                        'saida,'+;              //31
                                                        'chegada,'+;            //32
                                                        'frete,'+;              //33
                                                        'encargo_f,'+;          //34
                                                        'disp_asse,'+;          //35
                                                        'ipi_aliq,'+;           //36
                                                        'ipi,'+;                //37
                                                        'peso,'+;               //38
                                                        'desc1,'+;              //39
                                                        'desc2,'+;              //40
                                                        'desc3,'+;              //41
                                                        'tipo,'+;               //42
                                                        'isento,'+;             //43
                                                        'sittrib,'+;            //44
                                                        'cod_nat,'+;            //45
                                                        'cod_oper,'+;           //46
                                                        'icm,'+;                //47
                                                        'norm_ele,vl_merc,SR_DELETED )'+; //48
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(mcodempresa         )+','+; //1
                                                        sr_cdbvalue('NF'+mnota)+','+; //2
                                                        sr_cdbvalue(mserie              )+','+; //3
                                                        sr_cdbvalue(mmodelo             )+','+; //4
                                                        sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                                                        sr_cdbvalue(m_entrada[i,1]           )+','+; //6
                                                        sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+;//7
                                                        sr_cdbvalue(m_entrada[i,3]           )+','+;//8
                                                        sr_cdbvalue(m_entrada[i,17]          )+','+; //9
                                                        sr_cdbvalue(LEFT(m_entrada[i,18],30))+','+;//10
                                                        sr_cdbvalue(m_entrada[i,23]          )+','+;//11
                                                        sr_cdbvalue(mchegada               )+','+;//12
                                                        sr_cdbvalue('E'                    )+','+;//13
                                                        sr_cdbvalue(m_entrada[i,28]          )+','+;//14
                                                        sr_cdbvalue(m_entrada[i,10]          )+','+;//15
                                                        sr_cdbvalue(m_entrada[i,10]          )+','+;//16
                                                        sr_cdbvalue(aret[1,8]         )+','+;//17
                                                        sr_cdbvalue(m_entrada[i,9]           )+','+;//18
                                                        sr_cdbvalue(m_entrada[i,5]           )+','+;//19
                                                        sr_cdbvalue(STRZERO(mcod_forn,4)   )+','+;//20
                                                        sr_cdbvalue(LEFT(mfornece,30)      )+','+;//21
                                                        sr_cdbvalue(forn->uf               )+','+;//22
                                                        sr_cdbvalue(m_entrada[i,27]        )+','+;//23
                                                        sr_cdbvalue(iat(m_entrada[i,26])   )+','+;//24
                                                        sr_cdbvalue(mfob                   )+','+;//25
                                                        sr_cdbvalue(mcif                   )+','+;//26
                                                        sr_cdbvalue(STRZERO(val(mdia1),2)  )+','+;//27
                                                        sr_cdbvalue(STRZERO(val(mdia2),2)  )+','+;//28
                                                        sr_cdbvalue(STRZERO(val(mdia3),2)  )+','+;//29
                                                        sr_cdbvalue(memissao               )+','+;//30
                                                        sr_cdbvalue(msaida                 )+','+;//31
                                                        sr_cdbvalue(mchegada               )+','+;//32
                                                        sr_cdbvalue(iat((m_entrada[i,5] * m_entrada[i,10]) * mfrete)             )+','+;//33
                                                        sr_cdbvalue(iat((m_entrada[i,5] * m_entrada[i,10]) * mencargo_f)         )+','+;//34
                                                        sr_cdbvalue(iat((m_entrada[i,5] * m_entrada[i,10]) * mdisp_asse)         )+','+;//35
                                                        sr_cdbvalue(m_entrada[i,12]                                       )+','+;//36
                                                        sr_cdbvalue(iat((m_entrada[i,5] * m_entrada[i,10]) * (m_entrada[i,12]/100)))+','+;//37
                                                        sr_cdbvalue(m_entrada[i,13]                                       )+','+;//38
                                                        sr_cdbvalue(iat((m_entrada[i,4] * m_entrada[i,10]) * (m_entrada[i,14]/100)))+','+;//39
                                                        sr_cdbvalue(iat((m_entrada[i,4] * m_entrada[i,10])* (m_entrada[i,15]/100)) )+','+;//40
                                                        sr_cdbvalue(iat((m_entrada[i,4] * m_entrada[i,10])*(m_entrada[i,16]/100))  )+','+;//41
                                                        sr_cdbvalue('01'                                                )+','+;//42
                                                        sr_cdbvalue(m_entrada[i,19]                                       )+','+;//43
                                                        sr_cdbvalue(m_entrada[i,24]                                       )+','+;//44
                                                        sr_cdbvalue(m_entrada[i,25]                                       )+','+;//45
                                                        sr_cdbvalue(cod_operado                                         )+','+;//46
                                                        sr_cdbvalue(ROUND(IF(! EMPTY(m_entrada[i,27]),((m_entrada[i,5] * m_entrada[i,10]) * (m_entrada[i,27]/100)),0),2))+','+;//47
                                                        sr_cdbvalue(mnorm_ele)+','+;//48
                                                        sr_cdbvalue(m_entrada[i,4])+','+;//39
                                                        sr_cdbvalue(' ')+')',,.f.)

                                                mtot_ipi := mtot_ipi + (m_entrada[i,5] * m_entrada[i,10]) * (m_entrada[i,12]/100)
                                                IF ! EMPTY(m_entrada[i,27])
                                                        mtot_icm := mtot_icm + ((m_entrada[i,5] * m_entrada[i,10]) * (m_entrada[i,27]/100))
                                                ENDIF
                        NEXT
                        sr_committransaction()
                        SR_ENDTRANSACTION()
                        sr_getconnection():exec('INSERT INTO sactotnt (empresa,'+;
                                'documento,serie,modelo,'+;
                                'num_ped,emissao,ent_sai,'+;
                                'cod_cli,cliente,uf_cli,'+;
                                'cid_cli,insc_cli,cpf_cli,'+;
                                'cgc_cli,vl_base,vl_nota,'+;
                                'vl_icm,vlr_icmsub,base_icmsu,'+;
                                'frete,encargo_f,disp_asse,ipi,'+;
                                'cod_nat,norm_ele,'+;
                                'SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(mcodempresa         )+','+; //1
                                sr_cdbvalue('NF'+mnota          )+','+; //2
                                sr_cdbvalue(mserie              )+','+; //3
                                sr_cdbvalue(mmodelo             )+','+; //4
                                sr_cdbvalue(STRZERO(0,6) )+','+; //5
                                sr_cdbvalue(mchegada            )+','+; //6
                                sr_cdbvalue('E'                 )+','+; //7
                                sr_cdbvalue(STRZERO(mcod_forn,4))+','+; //8
                                sr_cdbvalue(LEFT(mfornece,30)   )+','+;//9
                                sr_cdbvalue(mcons_forn[1,9])+','+;//10
                                sr_cdbvalue(mcons_forn[1,8])+','+; //11
                                sr_cdbvalue(mcons_forn[1,17])+','+;//12
                                sr_cdbvalue(mcons_forn[1,18])+','+;//13
                                sr_cdbvalue(mcons_forn[1,16])+','+;//14
                                sr_cdbvalue(mvlr_base   )+','+;//15
                                sr_cdbvalue(mvlr_nota   )+','+;//16
                                sr_cdbvalue(mvalor_icm)+','+;//17
                                sr_cdbvalue(mvlr_icmsub )+','+;//18
                                sr_cdbvalue(mbas_icmsub )+','+;//19
                                sr_cdbvalue(mfrete_aux  )+','+;//20
                                sr_cdbvalue(menc_aux    )+','+;//21
                                sr_cdbvalue(mdisp_aux   )+','+;//22
                                sr_cdbvalue(iat(mtot_ipi,2))+','+;//23
                                sr_cdbvalue(mcod_nat    )+','+;//24
                                sr_cdbvalue(mnorm_ele    )+','+;//25
                                sr_cdbvalue(' ')+')',,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        IF ! EMPTY(mdia1) .OR. mfob = 'X'
                                opcao := op_simnao('S','Deseja Gerar DUPLICATA A PAGAR:')
                                IF opcao = 'S';dup_pag();ENDIF
                        ENDIF
                        IF ! EMPTY(mavista)
                                opcao := op_simnao('S','Deseja Gerar DUPLICATA A PAGAR avista:')
                                IF opcao = 'S';dup_pag();ENDIF
                        ENDIF
                        opcao := op_simnao('S','Deseja emitir o resumo da nota fiscal de entrada: ')
                        IF opcao = 'S'
                                imp_resu('NF',mnota)
                        ENDIF
                        opcao := op_simnao('N','Deseja emitir ETIQUETA DOS PRODUTOS [S/n]:')
                        IF opcao = 'S';sac5etq1('E');ENDIF
                        marq_saida := STRTRAN(marq_excl,'XML','ENT')
                        marq_saida := STRTRAN(marq_excl,'xml','ent')
                        //atencao(marq_excl+' - '+marq_saida)
                        frename(marq_excl,marq_saida)

                ENDIF
        ENDIF
        EXIT
ENDDO
fimset()
wvw_lclosewindow()
RETURN NIL
**************************** f i m ******************************************
