MEMVAR mdata_sis,getlist,nivel_acess,cod_operado,memp_resa,mend_firm,mcid_firm,mfone_firm,;
       mcgc_firm,minsc_firm
*******************
* MENU DA DEVOLUCAO
*******************
FUNCTION sactroca
*****************
LOCAL MPRG:='SACTROC',opcao
opcao = 0
setcor(1)
op_tela(10,10,12,35,' T R O C A ')
WHILE .T.
        exibi_prg(mprg)
        mensagem('Escolha a Opcao de Deseja:')
        setcor(10)
        @ 00,00 PROMPT '  0-> Emissao DEVOLUCAO   ' 
        @ 01,00 PROMPT '  1-> 2a.Via da DEVOLUCAO ' 
        @ 02,00 PROMPT '  2-> ESTORNO DA DEVOLUCAO '
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *        EMISSAO DA DEVOLUCAO
                         sactroc1()
                CASE opcao = 2
                *        2a.VIA DA DEVOLUCAO
                         sactroc1('*')
                CASE opcao = 3
                *        ESTORNO DA DEVOLUCAO
                         sactroc1('S')
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
****************************** F I M *******************************************
* FUNCAO P/DEVOLUCAO DE MERCADORIAS
***********************************
FUNCTION sactroc1(mno)
**********************
LOCAL mprg:='SACTROCA',;
      cci,lba,cba,tela_sai,tela_ent,tela1,mquantd,mvlr_merc,mtotal,;
      lci_ent,lba_ent,cba_ent,;
      I,opcao,mmerc,msituacao,li,ci,lb,cb,i_ent,mtelaDEVOLUCAO

PRIVATE m_codigo:={},m_Cbarra:={},mdif_sai:=0,mdif_ent:=0,;
        m_ent:={},mdiferenca,mcod_merc,mcod_barra,mproducao:='S',;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mpeso_brut:=0,mpeso_liq:=0,;
        mno_troca:=0,mcod_cli:=0,mobs1,mobs2,mobs3,mobs4,;
        mplaca,mcarro,mmodelo,mkm,mno_ped,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mdata_troc,mtipo:='  ',mdocumento:=SPACE(8),m_docum,mdoc,mflag:=' ',;
        cons_merc:={},cons_cli:={}

IF mno = NIL
        mtitulo:='DEVOLUCAO DE MERCADORIA'
        IF ! ver_nivel(mprg,mtitulo,'156',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ELSEIF mno = '*'
        mtitulo:='2a.VIA DA DEVOLUCAO DE MERCADORIA'
        IF ! ver_nivel('2A_'+mprg,mtitulo,'156',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ELSEIF mno = 'S'
        mtitulo:='ESTORNO DA DEVOLUCAO DE MERCADORIA'
        IF ! ver_nivel('ES_'+mprg,mtitulo,'1',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ENDIF
cci := 05
lba := 02
cba := 60

lci_ent := 04
lba_ent := 18
cba_ent := 79
*----------------------------------------------
CLOSE ALL
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*--------------------------------------------------
mplaca:=mcarro:=mmodelo:= SPACE(15)
mkm := SPACE(12)
mobs1 := mobs2 := mobs3 := mobs4 := SPACE(39)
i_ent := 2
mdiferenca := mdif_sai := mdif_ent := 0
setcor(3)
op_tela(00,00,30,80,mtitulo)
//botao(li,ci,lb,cb)
botao(0,cci,lba,cba)
botao(lci_ent,0,lba_ent,cba_ent)
DEVPOS(lci_ent+1,1);DEVOUT(' Cod.    Descricao                               Quantd   Vlr.unit.  Vlr.total')
@ lci_ent+2,1 TO lci_ent+2,cba_ent-1
botao(19,00,21,79)
setcor(1)
//DEVPOS(li+1,ci+2);DEVOUT('Diferenca:')
DEVPOS(20,01);DEVOUT('Cod:')
DEVPOS(20,44);DEVOUT('Qtd:')
DEVPOS(20,57);DEVOUT('Vlr.Unit:')
botao(23,00,28,79,,'T O T A L   R$:','*')

msituacao := 0
set_key('merc','cliente',,,'*')

mdata_troc := mdata_sis    
mno_ped := mno
mtipo:='  '
mdocumento:=SPACE(8)
mdoc := .T.
WHILE .T.
        IF mno = NIL
		WHILE mdoc 
			mflag := ' '
			botao1(0,cci,2,cci+26)
			DEVPOS(1,cci+1);DEVOUT('No.Documento: ')
			@ 1,cci+15 GET mtipo PICT '@!'
			@ 1,cci+17 GET mdocumento PICT '@!'
			READ
			IF LASTKEY() = 27
		        	wvw_lclosewindow()
        			RETURN NIL
			ENDIF
			IF ! mdocumento = '00000000'
				m_docum:={}
				IF mtipo = 'CP' .OR. mtipo = 'NF'
					sr_getconnection():exec("SELECT * FROM sacmov WHERE documento = "+sr_cdbvalue(mtipo+ALLTRIM(mdocumento))+" AND ent_sai = 'S'",,.t.,@m_docum)
				ELSEIF mtipo = 'PD'
					sr_getconnection():exec("SELECT * FROM sacmov WHERE num_ped = "+sr_cdbvalue(ALLTRIM(mdocumento))+" AND ent_sai = 'S'",,.t.,@m_docum)
				ENDIF
                                sr_getconnection():exec('COMMIT',,.f.)
				IF LEN(m_docum) = 0
					IF mtipo = 'CP'
						sr_getconnection():exec("SELECT * FROM sacmov WHERE documento = "+sr_cdbvalue(ALLTRIM(mdocumento))+" AND ent_sai = 'S'",,.t.,@m_docum)
                                                sr_getconnection():exec('COMMIT',,.f.)
						IF LEN(m_docum) = 0
							atencao('Nao foi possivel encontra este DOCUMENTO DE SAIDA')
		        				LOOP
        					ENDIF
						mflag:='*'
					ELSE
						atencao('Nao foi possivel encontra este DOCUMENTO DE SAIDA')
        					LOOP
					ENDIF
                                ELSE
                                        mcod_cli := m_docum[1,36]
				ENDIF
				IF 'S' = op_simnao('S','Confirma o Documento Digitado:')
					mdoc := .F.
					EXIT
				ENDIF
			ELSE
				mdoc := .F.
				EXIT
			ENDIF
		ENDDO
	ENDIF
        exibi_prg(mprg)
        IF mno = NIL
                i := 0
                mensagem('Escolha a opcao com a setas - <ESC>Sair')
                ***************
                SELE('merc')
                ORDSETFOCUS(1)
                ***************
                setcor(1)
                botao1(0,cci+30,2,cci+55)
                botao1(0,cci+60,2,cci+72)
                setcor(10)
                @ 1,cci+31 PROMPT ' Entrada de Mercadoria '
                @ 1,cci+61 PROMPT ' Finalizar '
                MENU TO msituacao
                setcor(1)
                IF LASTKEY() = 27
                        mdiferenca := mdif_sai := mdif_ent := 0
                        ASIZE(m_ent,0)
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                DO CASE
                        CASE msituacao = 1
                                WHILE .T.
                                        setcor(3)
                                        botao(19,00,21,79)
                                        setcor(1)
                                        DEVPOS(19,01);DEVOUT('Cod.   Descricao')
                                        DEVPOS(19,52);DEVOUT('Qtd.')
                                        DEVPOS(19,66);DEVOUT('Vlr.Unit.')
                                        mcod_barra := SPACE(14)
                                        mcod_merc := mquantd := mvlr_merc := ;
                                        mtotal := 0
                                        mensagem('Digite o Codigo da Mercadoria - <ESC>Sair')

                                        @ 20,01 GET mcod_barra PICT '@!'
                                        READ
                                        IF LASTKEY() = 27
                                                EXIT
                                        ENDIF
                                        IF ! EMPTY(mcod_barra)
                                                IF LEN(ALLTRIM(mcod_barra)) > 5
                                        		cons_merc:={}
                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_barra),,.t.,@cons_merc)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        IF LEN(cons_merc) = 0
                                                                atencao('Nao foi possivel este CODIGO DE BARRA')
                                                                LOOP
                                                        ENDIF
                                                ELSE
                                        		cons_merc:={}
                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mcod_barra),5)),,.t.,@cons_merc)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        IF LEN(cons_merc) = 0
                                                                atencao('Nao foi possivel este CODIGO')
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                        ELSE
                                                mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(),f4_merc1())
                                                cons_merc:={}
                                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                IF LEN(cons_merc) = 0
                                                        atencao('Nao foi possivel este CODIGO')
                                                        LOOP
                                                ENDIF
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                        ENDIF
					m_docum:={}
					IF ! mdocumento = '00000000'
						IF mflag = '*'
							sr_getconnection():exec("SELECT * FROM sacmov WHERE documento = "+sr_cdbvalue(ALLTRIM(mdocumento))+" AND ent_sai = 'S' AND codigo = "+sr_cdbvalue(cons_merc[1,8]),,.t.,@m_docum)
						ELSEIF mtipo = 'CP' .OR. mtipo = 'NF'
							sr_getconnection():exec("SELECT * FROM sacmov WHERE documento = "+sr_cdbvalue(mtipo+ALLTRIM(mdocumento))+" AND ent_sai = 'S' AND codigo = "+sr_cdbvalue(cons_merc[1,8]),,.t.,@m_docum)
						ELSEIF mtipo = 'PD'
							sr_getconnection():exec("SELECT * FROM sacmov WHERE num_ped = "+sr_cdbvalue(ALLTRIM(mdocumento))+" AND ent_sai = 'S' AND codigo = "+sr_cdbvalue(cons_merc[1,8]),,.t.,@m_docum)
						ENDIF						
                                                sr_getconnection():exec('COMMIT',,.f.)
						IF LEN(m_docum) = 0
						        atencao('Este Produto nao se encontra neste DOCUMENTO...')
        						LOOP
						ENDIF
                                                mvlr_merc := m_docum[1,24]
                                        ELSE
                                                mvlr_merc := iat(cons_merc[1,46],2)
                                        ENDIF
                                        mcod_merc := VAL(cons_merc[1,8])
                                        mmerc := cons_merc[1,9]
                                        setcor(3)
                                        DEVPOS(20,01);DEVOUT('             ')
                                        DEVPOS(20,01);DEVOUT(cons_merc[1,8])
                                        DEVPOS(20,07);DEVOUT(LEFT(cons_merc[1,9],30))
                                        setcor(1)
                                        IF cons_merc[1,25] = 'S'
                                                @ 20,07 GET mmerc PICT '@!'               //VALID lim_get() WHEN men_get(lba-09,cci+28,'<Digite descricao mercadoria>  <ENTER>p/retornar  <F4>p/pesquisar')
                                                READ
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        @ 20,48 GET mquantd PICT ALLTRIM(m_set[1,99]) VALID IF(EMPTY(mquantd),.F.,.T.)
                                        @ 20,66 GET mvlr_merc PICT '9,999,999.999'
                                        READ
					IF LEN(m_docum) > 0 
                                                IF mquantd > m_docum[1,19]
                                                        atencao('Esta quantidade nao pode ser devolvida porque a quantidade vendida foi de '+TRANSFORM(m_docum[1,19],'999,999.999')+' e a quantidade solicitada e de '+TRANSFORM(mquantd,'999,999.999'))
                					LOOP
                                                ENDIF
					ENDIF
                                        IF LASTKEY() = 27;LOOP;ENDIF
                                        opcao := op_simnao('S','Confirma Inclusao da Mercadoria [S/n]:')
                                        IF opcao = 'N';LOOP;ENDIF
                                               //         1              2          3      4        5            6               7                8                9                10      11 12 13 14 15 16 17 18    19
                                        AADD(m_ent,{cons_merc[1,7],cons_merc[1,8],mmerc,mquantd,mvlr_merc,mquantd*mvlr_merc,cons_merc[1,26],cons_merc[1,46],cons_merc[1,45],cons_merc[1,14],'','','','','','','','',cod_operado,' '})
                                        IF i_ent = 10
                                                SCROLL(lci_ent+i_ent,1,lba_ent-2,cba_ent-1,1)
                                        ELSE
                                                i_ent++
                                        ENDIF
                                        setcor(3)
                                        DEVPOS(lci_ent+i_ent,01);DEVOUT(STRZERO(mcod_merc,5)+' '+cons_merc[1,9]+' '+TRANSFORM(mquantd,ALLTRIM(m_set[1,99]))+' '+TRANSFORM(mvlr_merc,'999999.99')+' '+TRANSFORM(mquantd*mvlr_merc,'999999.99'))
                                        mdif_ent := mdif_ent + (mquantd*mvlr_merc)
                                        SUB_BANNER(24,10,TRANSFORM(mdif_ent,ALLTRIM(m_set[1,98])))
                                        setcor(1)
                                ENDDO
                        CASE msituacao = 2
                                fecha_troca()
                                ASIZE(m_ent,0)
                                EXIT
                ENDCASE
        ELSEIF mno = '*'
                mno_troca := 0
                //botao(0,cci,lba,cba,,' 2a.Via da DEVOLUCAO ')
                DEVPOS(1,cci+1);DEVOUT('No.DEVOLUCAO:')
                @ 1,COL()+1 GET mno_troca PICT '999999'
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
		m_ent:={}
		//                   1       2      3       4      5           6           7       8         9      10       11    12   13   14   15     16      17       18      19        20
                cComm  := "SELECT gru_sub,codigo,produto,quantd,vl_vend,quantd*vl_vend,comissao,pr_venda,pr_unit,unidade,data_ped,obs1,obs2,obs3,obs4,cod_cli,cliente,conjunta,cod_oper,cond_intev FROM sacmov"
                cComm  := ccomm + " WHERE documento = "+sr_cdbvalue('DV'+STRZERO(mno_troca,6)+'  ')+" AND ent_sai = 'E'"
                sr_getconnection():exec(ccomm,,.t.,@m_ent)
                sr_getconnection():exec('COMMIT',,.f.)

                IF LEN(m_ent) = 0 
                        atencao('Nao foi possivel encontra esta DEVOLUCAO')
                        LOOP
		ENDIF                	
                mtipo := SUBSTR(m_ent[1,18],1,2)
                mdocumento := ALLTRIM(SUBSTR(m_ent[1,18],3))
                mdata_troc := m_ent[1,11]
                mobs1 := m_ent[1,12]
                mobs2 := m_ent[1,13]
                mobs3 := m_ent[1,14]
                mobs4 := m_ent[1,15]
                mcod_cli := m_ent[1,16]
	 	i:=mdiferenca:=0		
                FOR i = 1 TO LEN(m_ent)
                        IF i = 10
                                SCROLL(lci_ent+i,1,lba_ent-2,cba_ent-1,1)
                        ENDIF
                        setcor(3)
                        DEVPOS(lci_ent+2+i,01);DEVOUT(m_ent[i,2]+' '+m_ent[i,3]+' '+TRANSFORM(m_ent[i,4],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_ent[i,5],'999999.99')+' '+TRANSFORM(m_ent[i,6],'999999.99'))
                        mdif_ent := mdif_ent + (m_ent[i,4]*m_ent[i,5])
                        SUB_BANNER(24,10,TRANSFORM(mdif_ent,ALLTRIM(m_set[1,98])))
                        setcor(1)
		NEXT
	 	i:=0		
		mensagem('Pressione qualquer tecla p/continuar')
                INKEY(9)
                fecha_troca()
        ELSEIF mno = 'S'
                botao(23,00,28,79,,'T O T A L   R$:','*')
                limpa(lci_ent+3,0,lba_ent,cba_ent)
                botao(0,cci,lba,cba,,' ESTORNO DA DEVOLUCAO ')
                DEVPOS(1,cci+1);DEVOUT('No.DEVOLUCAO:')
                @ 1,COL()+1 GET mno_troca PICT '999999'
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
		m_ent:={}
		//                   1       2      3       4      5           6           7       8         9      10       11    12   13   14   15     16     17       18       19
                cComm  := "SELECT gru_sub,codigo,produto,quantd,vl_vend,quantd*vl_vend,comissao,pr_venda,pr_unit,unidade,data_ped,obs1,obs2,obs3,obs4,cod_cli,cliente,conjunta,cod_oper,cond_intev FROM sacmov"
                cComm  := ccomm + " WHERE documento = "+sr_cdbvalue('DV'+STRZERO(mno_troca,6)+'  ')+" AND ent_sai = 'E'"
                sr_getconnection():exec(ccomm,,.t.,@m_ent)
                sr_getconnection():exec('COMMIT',,.f.)

                IF ! EMPTY(m_ent[1,20])
                        atencao('Esta DEVOLUCAO ja foi Estornada...')
                        LOOP
		ENDIF
                IF LEN(m_ent) = 0
                        atencao('Nao foi possivel encontra esta DEVOLUCAO')
                        LOOP
		ENDIF                	
                mdata_troc := m_ent[1,11]
                mobs1 := m_ent[1,12]
                mobs2 := m_ent[1,13]
                mobs3 := m_ent[1,14]
                mobs4 := m_ent[1,15]
                mcod_cli := m_ent[1,16]
	 	i:=mdiferenca:=0		
                FOR i = 1 TO LEN(m_ent)
                        IF i = 10
                                SCROLL(lci_ent+i,1,lba_ent-2,cba_ent-1,1)
                        ENDIF
                        setcor(3)
                        DEVPOS(lci_ent+2+i,01);DEVOUT(m_ent[i,2]+' '+m_ent[i,3]+' '+TRANSFORM(m_ent[i,4],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_ent[i,5],'999999.99')+' '+TRANSFORM(m_ent[i,6],'999999.99'))
                        mdif_ent := mdif_ent + (m_ent[i,4]*m_ent[i,5])
                        SUB_BANNER(24,10,TRANSFORM(mdif_ent,ALLTRIM(m_set[1,98])))
                        setcor(1)
		NEXT
                opcao := op_simnao('N','Confirma o Estorno da DEVOLUCAO:')
                IF opcao = 'S'
                        SR_BEGINTRANSACTION()
                                        sr_getconnection():exec("UPDATE sacmov SET cond_intev = 'ES',hora_mov = "+sr_cdbvalue(TIME())+" WHERE documento = "+sr_cdbvalue('DV'+STRZERO(mno_troca,6)+'  ')+" AND ent_sai = 'E'",,.f.)
                                mensagem('Aguarde um momento Atualizando o Arquivo de CREDITO...')
                                        sr_getconnection():exec("DELETE FROM saccred WHERE duplicata = "+sr_cdbvalue('DV'+STRZERO(mno_troca,6)),,.f.)
                                mensagem('Aguarde um momento Atualizando o Arquivo de MERCADORIAS...')
                                sr_getconnection():exec('COMMIT',,.f.)
                                i:=0
                                FOR i = 1 TO LEN(m_ent)
                                        aret:={}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_ent[i,2]),,.t.,@aret)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] - m_ent[i,4])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] - m_ent[i,4])+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(m_ent[i,2]),,.f.)
                                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(m_ent[i,2])+','+; //4
                                                        sr_cdbvalue(m_ent[i,4])+','+; //5
                                                        sr_cdbvalue(aret[1,56])+','+; //6
                                                        sr_cdbvalue(aret[1,56] - m_ent[i,4])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SACTROCA')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('ESTORNO DEVOLUCAO:'+STRZERO(mno_troca,6))+','+; //11
                                                        sr_cdbvalue('S')+','+; //11
                                                        sr_cdbvalue(' ')+')',,.f.)
                                                mensagem('Aguarde um momento Atualizando o Arquivo de MOVIMENTOS...')
                                                mcampo_arq := 'empresa    ,';//1
                                                      +'num_ped   ,';//2
                                                      +'data_ped  ,';//3
                                                      +'documento ,';//4
                                                      +'codigo    ,';//5
                                                      +'gru_sub   ,';//6
                                                      +'produto   ,';//7
                                                      +'data_s_e  ,';//8
                                                      +'ent_sai   ,';//9
                                                      +'quantd    ,';//10
                                                      +'pr_venda  ,';//11
                                                      +'vl_vend   ,';//12
                                                      +'cod_vend  ,';//13
                                                      +'cod_cli   ,';//14
                                                      +'cliente   ,';//15
                                                      +'vl_fatura ,';//16
                                                      +'tipo      ,';//17
                                                      +'pr_unit   ,';//18
                                                      +'cod_oper  ,';//19
                                                      +'obs1      ,';//20
                                                      +'obs2      ,';//21
                                                      +'obs3      ,';//22
                                                      +'obs4      ,';//23
                                                      +'conjunta  ,';//24
                                                      +'hora_mov  '//25
                                                cComm  := 'INSERT INTO sacmov ('+mcampo_arq+',sr_deleted) values ('
                                                cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                                                sr_cdbvalue(IF(EMPTY(mno_troca),'DEVOL',STRZERO(mno_troca,6)))+','+;//2
                                                sr_cdbvalue(mdata_sis                )+','+;//3
                                                sr_cdbvalue('EDV'+STRZERO(mno_troca,6))+','+;//4
                                                sr_cdbvalue(m_ent[i,2]               )+','+;//5
                                                sr_cdbvalue(m_ent[i,1]               )+','+;//6
                                                sr_cdbvalue(m_ent[i,3]               )+','+;//7
                                                sr_cdbvalue(mdata_sis                )+','+;//8
                                                sr_cdbvalue('S'                      )+','+;//9
                                                sr_cdbvalue(m_ent[i,4]               )+','+;//10
                                                sr_cdbvalue(m_ent[i,8]               )+','+;//11
                                                sr_cdbvalue(m_ent[i,5]               )+','+;//12
                                                sr_cdbvalue('111'                    )+','+;//13
                                                sr_cdbvalue(m_ent[1,16]              )+','+;//14
                                                sr_cdbvalue(m_ent[1,17]              )+','+;//15
                                                sr_cdbvalue(m_ent[i,5]               )+','+;//16
                                                sr_cdbvalue('02'                     )+','+;//17
                                                sr_cdbvalue(m_ent[i,9]               )+','+;//18
                                                sr_cdbvalue(cod_operado              )+','+;//19
                                                sr_cdbvalue(mobs1                    )+','+;//20
                                                sr_cdbvalue(mobs2                    )+','+;//21
                                                sr_cdbvalue(mobs3                    )+','+;//22
                                                sr_cdbvalue(mobs4                    )+','+;//23
                                                sr_cdbvalue(m_ent[1,18]              )+','+;//24
                                                sr_cdbvalue(TIME()                   )+','+;//25
                                                sr_cdbvalue(' ')+')'
                                                sr_getconnection():exec(ccomm,,.f.)
                                NEXT
                                sr_committransaction()
                        SR_ENDTRANSACTION()
                        sr_getconnection():exec('COMMIT',,.f.)
                ENDIF
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************** F I M ******************************************
* FECHAMENTO DA DEVOLUCAO
*************************
FUNCTION fecha_troca
********************
LOCAL mtot_ped,mtot_desc,mtot_quant,mdesconto,op_imp,;
      mcab,mrodap1,mrodap2,mperc,mextenso,mlinha,lin,mlin,h,;
      ccia,lbaa,cbaa,telaf,mopcao,mdesc,mvlr_desc,mcond_int,I,mdif,f:=0,tela2

MEMVAR m_ent,mdiferenca,mcod_cli

PRIVATE m_dia[15],m_vlr[15],;
        mnome_cli,mnome_vend:=SPACE(30),mcom_ven:= 0,mdocum:=' ',mpoint,mtraco,mnum_ped,;
        mdata,mcod_ven,mhora,mend,mbairro,mcidade,muf,minsc,mcgc,mcpf,;
        ali:='ped_s',mvia:='DEVOLUCAO',mcliente,mquantd,mproducao:='S',;
        mdado_cli,menvelope,mtp_venda:=' ',mcartao,mdup,mcheque,;
        mdinheiro,mfin,mcond_veze,mcondicao,mtipo_pg,mprazo,mvlr_ent:=0,mt_pedido,;
        mnome,mlimite,mrelatorio,mblo_vend,mop_dup,mcopia,mform,mlinhas,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcust_real,mporta_imp,mcart_ban:=' ',cons_cli :={}

ccia := 05
lbaa := 20
cbaa := 75

tela2 = SAVESCREEN(00,00,24,79)
mtraco := REPLI('=',80)
mlinha := lin := mlin := 0
i = 1
CLEAR GETS
DO WHILE .T.
        h := 0
        FOR h = 1 TO 15
                m_dia[h]:=m_vlr[h]:=0
        NEXT
        mtipo_imp := m_indiv[1,10]
        mporta_imp := m_indiv[1,7]
        mquantd := m_indiv[1,11]
        mt_pedido := mnum_ped := mvlr_desc := mdesc := 0
        mcartao := mdup := mcheque := mdinheiro := mfin := SPACE(1)
        muf := mcond_veze := mcond_int := mtipo_pg := SPACE(2)
        mcpf = SPACE(11)
        minsc := mcgc = SPACE(14)
        mbairro := mcidade := SPACE(20)
        mnome := mnome_cli := SPACE(30)
        mend := SPACE(35)
        menvelope := SPACE(40)
        op_imp := 'S'
        botao(0,ccia,lbaa,cbaa,,' FECHAMENTO DA DEVOLUCAO ')
        @ 2,ccia+1 TO 2,cbaa-1
        @ 4,ccia+1 TO 4,cbaa-1
        @ 8,ccia+1 TO 8,cbaa-1
        mtot_ped = 0
        IF EMPTY(m_ent) 
                atencao('Nao foi feito DEVOLUCAO')
                RESTSCREEN(00,00,24,79,tela2)
                RETURN NIL
        ENDIF
        mdif := mdiferenca := mdif_ent
        i = 1
        setcor(3)
        @ 01,ccia+1 SAY 'Total da DEVOLUCAO:'
        setcor(1)
        @ 01,ccia+25 SAY mdiferenca PICT '99,999,999.99'
        SETCOLOR('i')
        DEVPOS(02,ccia+20);DEVOUT('Indentificacao do VENDEDOR')
        DEVPOS(04,ccia+20);DEVOUT('Indentificacao CLIENTE')
        setcor(1)
        DEVPOS(5,ccia+1);devout('Cod.:')
        DEVPOS(3,ccia+1);devout('Cod.:')
        DEVPOS(6,ccia+1);devout('CPF.:')
        DEVPOS(7,ccia+1);devout('CNPJ:')
        DEVPOS(9,ccia+1);devout('Observacao:')
        mcod_ven := VAL(cod_operado)
        @ 3,ccia+7 GET mcod_ven PICT '999' VALID ven(mcod_ven,3,ccia+12) WHEN EMPTY(mcod_cli)
        @ 5,ccia+7 GET mcod_cli PICT '99999' WHEN EMPTY(mno_troca)
        @ 5,ccia+14 GET mnome_cli PICT '@!' WHEN EMPTY(mcod_cli)
        @ 6,ccia+7 GET mcpf PICT '@@R 999.999.999-99' WHEN mcod_cli = 0 .AND. EMPTY(mnome_cli)
        @ 7,ccia+7 GET mcgc PICT '@@R 99.999.999/9999-99' WHEN mcpf = SPACE(11) .AND. mcod_cli = 0 .AND. EMPTY(mnome_cli)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela2)
                CLEAR GETS
                RETURN NIL
        ENDIF
        cons_cli :={}
        IF ! EMPTY(mcod_cli)
                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
        ELSEIF ! EMPTY(mnome_cli)
                sr_getconnection():exec("SELECT * FROM saccli WHERE razao LIKE "+sr_cdbvalue(ALLTRIM(mnome_cli)+'%'),,.t.,@cons_cli)
        ELSEIF ! EMPTY(mcgc)
                sr_getconnection():exec("SELECT * FROM saccli WHERE cgc = "+sr_cdbvalue(mcgc),,.t.,@cons_cli)
        ELSEIF ! EMPTY(mcpf)
                sr_getconnection():exec("SELECT * FROM saccli WHERE cpf = "+sr_cdbvalue(mcpf),,.t.,@cons_cli)
        ELSE
                LOOP
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_cli) = 0
                atencao('Cliente nao cadastrado !!!')
                LOOP
        ENDIF
        IF cons_cli[1,41] = 'S' .AND. EMPTY(mno_troca)
                atencao('Este CLIENTE ESTA COM CREDITO BLOQUEADO PELO SISTEMA')
                LOOP
        ENDIF
        IF EMPTY(mnome_cli) .AND.  EMPTY(mcod_cli) .AND. EMPTY(mcpf) .AND. EMPTY(mcgc)
                atencao('Precisa de informar algum CLIENTE....')
                LOOP
        ENDIF                
        mcod_cli = cons_cli[1,2]
        mnome_cli = cons_cli[1,3]
        mend := cons_cli[1,21]+', '+RTRIM(cons_cli[1,136])+IF(! EMPTY(RTRIM(cons_cli[1,137])),' - Compl.:'+RTRIM(cons_cli[1,137]),'')
        mbairro := cons_cli[1,22]
        mcidade := cons_cli[1,24]
        muf := cons_cli[1,25]
        mcgc := cons_cli[1,32]
        mcpf := cons_cli[1,34]
        minsc := cons_cli[1,33]
        mlimite := cons_cli[1,44]

        setcor(3)
        DEVPOS(5,ccia+7);DEVOUT(STR(mcod_cli,5))
        DEVPOS(5,ccia+14);DEVOUT(cons_cli[1,3])
        DEVPOS(6,ccia+7);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(7,ccia+7);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        setcor(1)
        WHILE .T.
                IF mno_ped <> NIL
                        EXIT
                ENDIF
                @ 9,ccia+14 GET mobs1 WHEN EMPTY(mno_troca)
                @ 10,ccia+14 GET mobs2 WHEN ! EMPTY(mobs1)
                @ 11,ccia+14 GET mobs3 WHEN ! EMPTY(mobs2)
                @ 12,ccia+14 GET mobs4 WHEN ! EMPTY(mobs3)
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                opcao := op_simnao('S','Confirma as OBSERVACOES [S/n]:')
                IF opcao = 'S'
                        EXIT
                ENDIF
        ENDDO
        mopcao := op_simnao('S','Confirma Fechamento da DEVOLUCAO:')
        RESTSCREEN(00,00,24,79,tela2)
        IF mopcao = 'N'
                RETURN NIL
        ENDIF
        IF mopcao = 'S' .OR. LASTKEY() = 13
                mcab := m_set[1,22]
                mrodap1 := m_set[1,25]
                mrodap2 := m_set[1,26]
                mrelatorio := m_indiv[1,17]
                mblo_vend := m_set[1,38]
                mdado_cli := m_set[1,39]
                mop_dup := m_set[1,45]
                mcopia := m_indiv[1,11]
                mform := m_indiv[1,9]
                mlinhas := m_indiv[1,16]
                mdiferenca := mdif
                mensagem('GERANDO O NUMERO DA DEVOLUCAO, AGUARDE....')
                IF mno_ped = NIL
                        aret:={}                                                                                                                                                                                                                                                                                                                                                                                                             
                        lExit := .T.
                        while lExit                                                                                                                                                                                                                                                                                                                                                                                                          
                        sr_begintransaction()                                                                                                                                                                                                                                                                                                                                                                                                
                        try                                                                                                                                                                                                                                                                                                                                                                                                                  
                        sr_getconnection():exec( "select numero from  sacnodev where sr_recno = 1 for update with lock",,.t.,@aret)                                                                                                                                                                                                                                                                                                          
                        if len(aRet)  == 0                                                                                                                                                                                                                                                                                                                                                                                                   
                                sr_getconnection():exec("insert into sacnodev (numero,sr_deleted,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ',1)",,.f.)
                                mno_troca := 1
                                mnum_ped = 1
                                mnum = strzero(1,6)
                        else                                                                                                                                                                                                                                                                                                                                                                                                                 
                                mno_troca = VAL(aret[1,1])+1
                                mnum_ped = VAL(aret[1,1])+1
                                mnum = strzero(VAL(aret[1,1])+1,6)
                                sr_getconnection():exec("update sacnodev set numero = " + sr_cdbvalue(mnum) + ", data_ped = " + sr_cdbvalue( mdata_sis) + " where sr_recno = 1 ",,.f.)
                        endif                                                                                                                                                                                                                                                                                                                                                                                                                
                        sr_committransaction()                                                                                                                                                                                                                                                                                                                                                                                               
                        lExit:=.F.                                                                                                                                                                                                                                                                                                                                                                                                           
                        catch e                                                                                                                                                                                                                                                                                                                                                                                                              
                        tracelog(valtoprg())                                                                                                                                                                                                                                                                                                                                                                                                 
                        sr_COMMITtransaction()                                                                                                                                                                                                                                                                                                                                                                                             
                        end                                                                                                                                                                                                                                                                                                                                                                                                                  
                        sr_endtransaction()                                                                                                                                                                                                                                                                                                                                                                                                  
                        end                                                                                                                                                                                                                                                                                                                                                                                                                  
                        //sr_stoptrace()                                                                                                                                                                                                                                                                                                                                                                                                     
                        //mno_troca := VAL(noped->numero)+1                                                                                                                                                                                                                                                                                                                                                                                  
                        sr_getconnection():exec('COMMIT',,.f.)
                        mensagem('Aguarde um momento Atualizando o Arquivo de CREDITO...')
                        mcampo_arq := 'empresa,';//1                                                                                                                                                                                                                                                                                                                                                                                         
                                      +'tipo    ,';//2                                                                                                                                                                                                                                                                                                                                                                                       
                                      +'duplicata   ,';//3                                                                                                                                                                                                                                                                                                                                                                                   
                                      +'valor_dup ,';//4                                                                                                                                                                                                                                                                                                                                                                                     
                                      +'tip_cli,';//5                                                                                                                                                                                                                                                                                                                                                                                        
                                      +'fornec,';//6                                                                                                                                                                                                                                                                                                                                                                                         
                                      +'cliente,';//7                                                                                                                                                                                                                                                                                                                                                                                        
                                      +'emissao,';//8                                                                                                                                                                                                                                                                                                                                                                                        
                                      +'venc,';//9                                                                                                                                                                                                                                                                                                                                                                                           
                                      +'venc1,';//10                                                                                                                                                                                                                                                                                                                                                                                         
                                      +'valor,';//11                                                                                                                                                                                                                                                                                                                                                                                         
                                      +'vendedor,';//12                                                                                                                                                                                                                                                                                                                                                                                      
                                      +'num_ped,';//13                                                                                                                                                                                                                                                                                                                                                                                       
                                      +'obs,';//14                                                                                                                                                                                                                                                                                                                                                                                           
                                      +'operador'//15                                                                                                                                                                                                                                                                                                                                                                                        
                        cComm  := 'INSERT INTO saccred ('+mcampo_arq+',sr_deleted) values ('                                                                                                                                                                                                                                                                                                                                                 
                        cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1                                                                                                                                                                                                                                                                                                                                                                 
                        sr_cdbvalue('CR'                    )+','+;//2                                                                                                                                                                                                                                                                                                                                                                       
                        sr_cdbvalue('DV'+STRZERO(mnum_ped,6))+','+;//3                                                                                                                                                                                                                                                                                                                                                                       
                        sr_cdbvalue(mdif_ent              )+','+;//4                                                                                                                                                                                                                                                                                                                                                                         
                        sr_cdbvalue(cons_cli[1,8]               )+','+;//5
                        sr_cdbvalue(mcod_cli     )+','+;//6                                                                                                                                                                                                                                                                                                                                                                       
                        sr_cdbvalue(cons_cli[1,3]              )+','+;//7
                        sr_cdbvalue(mdata_sis               )+','+;//8                                                                                                                                                                                                                                                                                                                                                                       
                        sr_cdbvalue(mdata_sis+2             )+','+;//9                                                                                                                                                                                                                                                                                                                                                                       
                        sr_cdbvalue(mdata_sis+2             )+','+;//10                                                                                                                                                                                                                                                                                                                                                                      
                        sr_cdbvalue(mdif_ent                )+','+;//11                                                                                                                                                                                                                                                                                                                                                                      
                        sr_cdbvalue(STRZERO(mcod_ven,3)    )+','+;//12
                        sr_cdbvalue(STRZERO(mnum_ped,6)     )+','+;//13                                                                                                                                                                                                                                                                                                                                                                      
                        sr_cdbvalue('DEVOLUCAO DE MERCADORIA No.: '+STRZERO(mnum_ped,6) )+','+;//14                                                                                                                                                                                                                                                                                                                                          
                        sr_cdbvalue(cod_operado             )+','+;//15                                                                                                                                                                                                                                                                                                                                                                      
                        sr_cdbvalue(' ')+')'                                                                                                                                                                                                                                                                                                                                                                                                 
                        sr_getconnection():exec(ccomm,,.f.)                                                                                                                                                                                                                                                                                                                                                                                  
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(m_ent) > 0

                                SR_BEGINTRANSACTION()

                                i := 0                                                                                                                                                                                                                                                                                                                                                                                                       
                                FOR i = 1 TO LEN(m_ent)                                                                                                                                                                                                                                                                                                                                                                                      
                                        IF m_ent[i,2] = '     '                                                                                                                                                                                                                                                                                                                                                                              
                                                LOOP                                                                                                                                                                                                                                                                                                                                                                                         
                                        ENDIF                                                                                                                                                                                                                                                                                                                                                                                                
                                        mensagem('Aguarde um momento Atualizando o Arquivo de MERCADORIAS...')
                                        aret:={}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_ent[i,2]),,.t.,@aret)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] + m_ent[i,4])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] + m_ent[i,4])+",data_atu = "+sr_cdbvalue(mdata_sis)+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(m_ent[i,2]),,.f.)
                                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(m_ent[i,2])+','+; //4
                                                        sr_cdbvalue(m_ent[i,4])+','+; //5
                                                        sr_cdbvalue(aret[1,56])+','+; //6
                                                        sr_cdbvalue(aret[1,56] + m_ent[i,4])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SACTROCA')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('DEVOLUCAO MERCAD.No.: '+STRZERO(mnum_ped,6))+','+; //11
                                                        sr_cdbvalue('E')+','+; //11
                                                        sr_cdbvalue(' ')+')',,.f.)
                                                mensagem('Aguarde um momento Atualizando o Arquivo de MOVIMENTOS...')
                                                mcampo_arq := 'empresa    ,';//1
                                                      +'num_ped   ,';//2                                                                                                                                                                                                                                                                                                                                                                     
                                                      +'data_ped  ,';//3                                                                                                                                                                                                                                                                                                                                                                     
                                                      +'documento ,';//4                                                                                                                                                                                                                                                                                                                                                                     
                                                      +'codigo    ,';//5                                                                                                                                                                                                                                                                                                                                                                     
                                                      +'gru_sub   ,';//6                                                                                                                                                                                                                                                                                                                                                                     
                                                      +'produto   ,';//7                                                                                                                                                                                                                                                                                                                                                                     
                                                      +'data_s_e  ,';//8                                                                                                                                                                                                                                                                                                                                                                     
                                                      +'ent_sai   ,';//9                                                                                                                                                                                                                                                                                                                                                                     
                                                      +'quantd    ,';//10                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'pr_venda  ,';//11                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'vl_vend   ,';//12                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'cod_vend  ,';//13                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'cod_cli   ,';//14                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'cliente   ,';//15                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'vl_fatura ,';//16                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'tipo      ,';//17                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'pr_unit   ,';//18                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'cod_oper  ,';//19                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'obs1      ,';//20                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'obs2      ,';//21                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'obs3      ,';//22                                                                                                                                                                                                                                                                                                                                                                    
                                                      +'obs4      ,';//23
                                                      +'conjunta  ,';//24
                                                      +'hora_mov   '//25
                                                cComm  := 'INSERT INTO sacmov ('+mcampo_arq+',sr_deleted) values ('
                                                cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                                                sr_cdbvalue(IF(EMPTY(mnum_ped),'DEVOL',STRZERO(mnum_ped,6)))+','+;//2
                                                sr_cdbvalue(mdata_sis                )+','+;//3
                                                sr_cdbvalue('DV'+STRZERO(mnum_ped,6) )+','+;//4
                                                sr_cdbvalue(m_ent[i,2]               )+','+;//5
                                                sr_cdbvalue(m_ent[i,1]               )+','+;//6
                                                sr_cdbvalue(m_ent[i,3]               )+','+;//7
                                                sr_cdbvalue(mdata_sis                )+','+;//8
                                                sr_cdbvalue('E'                      )+','+;//9
                                                sr_cdbvalue(m_ent[i,4]               )+','+;//10
                                                sr_cdbvalue(m_ent[i,8]               )+','+;//11
                                                sr_cdbvalue(m_ent[i,5]               )+','+;//12
                                                sr_cdbvalue('111'                    )+','+;//13
                                                sr_cdbvalue(mcod_cli      )+','+;//14
                                                sr_cdbvalue(mnome_cli                )+','+;//15
                                                sr_cdbvalue(m_ent[i,5]               )+','+;//16
                                                sr_cdbvalue('02'                     )+','+;//17
                                                sr_cdbvalue(m_ent[i,9]               )+','+;//18
                                                sr_cdbvalue(cod_operado              )+','+;//19
                                                sr_cdbvalue(mobs1                    )+','+;//20
                                                sr_cdbvalue(mobs2                    )+','+;//21
                                                sr_cdbvalue(mobs3                    )+','+;//22
                                                sr_cdbvalue(mobs4                    )+','+;//23
                                                sr_cdbvalue(ALLTRIM(mdocumento)      )+','+;//24
                                                sr_cdbvalue(TIME())+','+;//25
                                                sr_cdbvalue(' ')+')'
                                                sr_getconnection():exec(ccomm,,.f.)
        					IF mflag = '*'
                                	                ccomm :="UPDATE sacmov SET devolucao = '*'  WHERE documento = "+sr_cdbvalue(ALLTRIM(mdocumento))+" AND ent_sai = 'S' AND codigo = "+sr_cdbvalue(m_ent[i,2])
                                                        sr_getconnection():exec(ccomm,,.f.)
		      	               		ELSEIF mtipo = 'CP' .OR. mtipo = 'NF'
                          	                      ccomm :="UPDATE sacmov SET devolucao = '*'  WHERE documento = "+sr_cdbvalue(mtipo+ALLTRIM(mdocumento))+" AND ent_sai = 'S' AND codigo = "+sr_cdbvalue(m_ent[i,2])
                                                        sr_getconnection():exec(ccomm,,.f.)
                                		ELSEIF mtipo = 'PD'
                                	                ccomm :="UPDATE sacmov SET devolucao = '*'  WHERE num_ped = "+sr_cdbvalue(ALLTRIM(mdocumento))+" AND ent_sai = 'S' AND codigo = "+sr_cdbvalue(m_ent[i,2])
                                                        sr_getconnection():exec(ccomm,,.f.)
                                		ENDIF
                                NEXT
                                sr_committransaction()
                                SR_ENDTRANSACTION()
                                sr_getconnection():exec('COMMIT',,.f.)
                        ENDIF
                ENDIF
                ********* VARIAVEIS DE IMPRESSAO *******************
                mtipo_imp := m_indiv[1,10]
                ****************************************************
                mensagem('Aguarde um momento imprimindo a DEVOLUCAO...')
        	mdiferenca := 0
	        IF ! imp_arq('DEVOLUCAO.REL','T')
                        //mdiferenca := 0
                        ASIZE(m_ent,0)
                        RESTSCREEN(00,00,24,79,tela2)
                        RETURN NIL
                ENDIF
		m_ent:={}
		//                   1       2      3       4      5           6           7       8         9      10       11    12   13   14   15     16      17       18      19        20
                cComm  := "SELECT gru_sub,codigo,produto,quantd,vl_vend,quantd*vl_vend,comissao,pr_venda,pr_unit,unidade,data_ped,obs1,obs2,obs3,obs4,cod_cli,cliente,conjunta,cod_oper,cond_intev FROM sacmov"
                cComm  := ccomm + " WHERE documento = "+sr_cdbvalue('DV'+STRZERO(mno_troca,6)+'  ')+" AND ent_sai = 'E'"
                sr_getconnection():exec(ccomm,,.t.,@m_ent)
                sr_getconnection():exec('COMMIT',,.f.)

                IF LEN(m_ent) = 0
                        atencao('Nao foi possivel encontra esta DEVOLUCAO')
                        LOOP
		ENDIF

                ASORT(m_ent,,,{|x,y| x[2] < y[2]})
                IF m_indiv[1,14] = 'B' .OR. m_indiv[1,14] = 'P'
                       mtraco := REPLI('=',60)
                       f := 0
                       FOR f = 1 TO m_indiv[1,11]
                                mtot_ped := mtot_desc := mtot_quant := 0
                                IF mcab = 'S'
                                        DEVPOS(PROW(),00);DEVOUT(PADC(RTRIM(memp_resa),40))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mend_firm),40))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mcid_firm),40))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM('Fone: '+mfone_firm),40))
                                        imprt(mtipo_imp,'C')
                                        @ PROW()+1,00 SAY mtraco
                                ENDIF
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('')
                                IF mcod_cli > 0
                                        @ PROW(),00 SAY 'Cliente:'
                                        @ PROW(),09 SAY STR(mcod_cli,5)
                                        @ PROW(),15 SAY mnome_cli
                                        IF mdado_cli = 'S'
                                                @ PROW()+1,00 SAY 'End.: '+mend
                                                @ PROW()+1,00 SAY 'Bairro: '+RTRIM(mbairro)
                                                @ PROW()+1,00 SAY 'Cidade: '+RTRIM(mcidade)+'-'+muf
                                                IF mcgc <> SPACE(14)
                                                        @ PROW()+1,00 SAY 'CGC:'
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+minsc)
                                                ELSEIF mcpf <> SPACE(11)
                                                        @ PROW()+1,00 SAY 'CPF:'
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
                                                ENDIF
                                        ENDIF
                                        IF EMPTY(mno_troca)
                                                @ PROW(),74 SAY '1a.via'
                                        ELSE
                                                @ PROW(),74 SAY '2a.via'
                                        ENDIF
                                        @ PROW()+1,00 SAY mtraco
                                        @ PROW()+1,00 SAY 'Emissao:'
                                ELSEIF mnome <> SPACE(30)
                                        @ PROW(),00 SAY 'Cliente:'
                                        @ PROW(),09 SAY mnome
                                        @ PROW(),09 SAY mnome
                                        @ PROW()+1,00 SAY mtraco
                                        @ PROW()+1,00 SAY 'Emissao:'
                                ELSE
                                        @ PROW(),00 SAY 'Emissao:'
                                ENDIF
                                @ PROW(),10 SAY mdata_troc
                                @ PROW(),PCOL()+2 SAY 'Hora:'
                                @ PROW(),PCOL()+1 SAY TIME()
                                @ PROW(),PCOL()+2 SAY 'Cod.: '+m_ent[1,19]
                                //@ PROW(),PCOL()+1 SAY STRZERO(mcod_ven,3)
                                imprt(mtipo_imp,'N')
                                @ PROW()+1,00 SAY 'Documento No.:'+mtipo+ALLTRIM(mdocumento)
                                @ PROW()+1,00 SAY PADC('DEVOLUCAO DE MERCADORIA No.:'+STRZERO(mno_troca,6),35)
                                IF ! EMPTY(m_ent[1,20])
                                        @ PROW()+1,00 SAY PADC('E S T O R N A D A',35)
                                ENDIF
                                imprt(mtipo_imp,'C')
                                @ PROW()+1,00 SAY mtraco

                                @ PROW()+1,00 SAY 'Cod.'
                                @ PROW(),15 SAY PADC('Descricao',30)
                                @ PROW()+1,00 SAY 'UN'
                                @ PROW(),04 SAY '  Quantd.'
                                @ PROW(),15 SAY 'Vlr. Venda'
                                @ PROW(),35 SAY 'Vlr. Total'
                                @ PROW()+1,00 SAY mtraco
                                //DEVPOS(PROW()+1,00);DEVOUT('')
                                i := 0
                                FOR i = 1 TO LEN(m_ent)
                                        if m_ent[i,2] = '     '
                                                LOOP
                                        ENDIF
                                        @ PROW()+1,00 SAY m_ent[i,2]
                                        @ PROW(),06 SAY m_ent[i,3]
                                        @ PROW()+1,00 SAY m_ent[i,10]
                                        @ PROW(),04 SAY m_ent[i,4] PICT ALLTRIM(m_set[1,99])
                                        IF m_ent[i,8] > m_ent[i,5]
                                                mdesconto =  (m_ent[i,4] * m_ent[i,5]) - (m_ent[i,4] * m_ent[i,8])
                                                mperc := (((m_ent[i,4] * m_ent[i,8]) - (m_ent[i,4] * m_ent[i,5])) / (m_ent[i,4] * m_ent[i,8])) * 100
                                        ELSE
                                                mperc := 0
                                                mdesconto = 0
                                        ENDIF
                                        @ PROW(),15 SAY m_ent[i,5] PICT '9999999.99'
                                        mcust_real = m_ent[i,4] * m_ent[i,5]
                                        @ PROW(),35 SAY mcust_real PICT '9999999.99'
                                        IF m_ent[i,8] > m_ent[i,5]
                                                mtot_desc = mtot_desc + (m_ent[i,4] * m_ent[i,8])-(m_ent[i,4] * m_ent[i,5])
                                                mtot_ped = mtot_ped + (m_ent[i,4] * m_ent[i,8])
                                        ELSE
                                                mtot_ped = mtot_ped + (m_ent[i,4] * m_ent[i,5])
                                        ENDIF
                                        mtot_quant = mtot_quant + m_ent[i,4]
		                        mdiferenca := mdiferenca + m_ent[i,6]
                                NEXT
                                @ PROW()+1,00 SAY mtraco
                                @ PROW()+1,00 SAY 'Volume Total:'
                                @ PROW(),14 SAY STRZERO(mtot_quant,6)
                                @ PROW()+1,00 SAY 'Sub-total:'
                                @ PROW(),11 SAY mtot_ped PICT '99,999,999.99'
                                @ PROW(),26 SAY 'Desconto:'
                                @ PROW(),35 SAY mtot_desc PICT '99,999,999.99'
                                imprt(mtipo_imp,'N')
                                @ PROW()+1,00 SAY 'Total Entrada R$:'
                                mcust_real = mtot_ped - mtot_desc
                                @ PROW(),17 SAY mcust_real PICT '99,999,999.99'
                                imprt(mtipo_imp,'C')
                                @ PROW()+1,00 SAY mtraco
                	NEXT
                        DEVPOS(PROW()+1,00);DEVOUT('Credito a RECEBER: '+TRANSFORM(mcust_real,'999,999,999.99'))
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('__________________________',40))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('A Gerencia',40))
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        IF ! EMPTY(mobs1)
                                DEVPOS(PROW()+1,00);DEVOUT('O B S E R V A C A O:')
                                DEVPOS(PROW()+1,00);DEVOUT(mobs1)
                                DEVPOS(PROW()+1,00);DEVOUT(mobs2)
                                DEVPOS(PROW()+1,00);DEVOUT(mobs3)
                                DEVPOS(PROW()+1,00);DEVOUT(mobs4)
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        imprt(mtipo_imp,'N',mlinhas)
                        SETPRC(00,00)
                        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                        UNLOCK
                        IF mcopia > 1
                                        imprt(mtipo_imp,'N',3)
                        ENDIF
                        SETPRC(00,00)
                ELSEIF m_indiv[1,14] = 'F'
                        mtraco := REPLI('=',80)
                        IF mtipo_imp = 'M'
*                                imprt(mtipo_imp,'w1')
                                imprt(mtipo_imp,'P8')
                        ENDIF
                        f := 0
                        FOR f = 1 TO m_indiv[1,11]
                                mtot_ped := mtot_desc := mtot_quant := mperc := 0
                                IF mcab = 'S'
                                        imprt(mtipo_imp,'E')
                                        DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm+  +'Fone: '+mfone_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+'   C.G.C.: '+mcgc_firm)
                                        @ PROW()+1,00 SAY mtraco
                                ENDIF
                                imprt(mtipo_imp,'N')
                                IF mcod_cli > 0
                                        @ PROW()+1,00 SAY 'Cliente:'
                                        @ PROW(),PCOL()+1 SAY STR(mcod_cli,5)
                                        @ PROW(),PCOL()+1 SAY mnome_cli
                                        IF mdado_cli = 'S'
                                                @ PROW()+1,00 SAY 'End.: '+mend
                                                @ PROW()+1,00 SAY 'Bairro: '+mbairro+' - Cidade: '+mcidade+'-  UF: '+muf
                                                IF mcgc <> SPACE(14)
                                                        @ PROW()+1,00 SAY 'CGC:'
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+minsc)
                                                ELSEIF mcpf <> SPACE(11)
                                                        @ PROW()+1,00 SAY 'CPF:'
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
                                                ENDIF
                                        ENDIF
                                        @ PROW()+1,00 SAY mtraco
                                        @ PROW()+1,00 SAY 'Emissao:'
                                ELSEIF mnome <> SPACE(30)
                                        @ PROW()+1,00 SAY 'Cliente:'
                                        @ PROW(),PCOL()+1 SAY mnome
                                        @ PROW()+1,00 SAY mtraco
                                        @ PROW()+1,00 SAY 'Emissao:'
                                ELSE
                                        @ PROW()+1,00 SAY 'Emissao:'
                                ENDIF
                                @ PROW(),10 SAY mdata_troc
                                @ PROW(),20 SAY 'Hora:'
                                @ PROW(),26 SAY TIME()
                                @ PROW(),37 SAY 'Cod.: '+m_ent[1,19]
                                //@ PROW(),43 SAY STRZERO(mcod_ven,3)
                                @ PROW()+1,00 SAY 'Documento No.:'+mtipo+ALLTRIM(mdocumento)
                                imprt(mtipo_imp,'E')
                                @ PROW()+1,18 SAY 'DEVOLUCAO DE MERCADORIA No.:'+STRZERO(mno_troca,6)
                                IF ! EMPTY(m_ent[1,20])
                                @ PROW()+1,18 SAY '         E S T O R N A D A'
                                ENDIF
                                imprt(mtipo_imp,'N')
                                @ PROW()+1,00 SAY mtraco
                                imprt(mtipo_imp,'C')
                                @ PROW()+1,00 SAY 'Cod.'
                                @ PROW(),08 SAY 'Descricao'
                                @ PROW(),50 SAY 'UN'
                                @ PROW(),55 SAY 'Quantd.'
                                @ PROW(),66 SAY 'Valor Unit.'
                                @ PROW(),80 SAY 'Desc.(R$)'
                                @ PROW(),91 SAY 'Desc.(%)'
                                @ PROW(),102 SAY 'Valor Venda'
                                @ PROW(),117 SAY 'Valor Total'
                                imprt(mtipo_imp,'N')
                                @ PROW()+1,00 SAY mtraco
                                //@ PROW()+1,00 SAY ' '
                                i := 0
                                FOR i = 1 TO LEN(m_ent)
                                        if m_ent[i,2] = '     '
                                                LOOP
                                        ENDIF
                                        IF m_ent[i,8] > m_ent[i,5]
                                                mdesconto =  (m_ent[i,4] * m_ent[i,5]) - (m_ent[i,4] * m_ent[i,8])
                                                mperc := (((m_ent[i,4] * m_ent[i,8]) - (m_ent[i,4] * m_ent[i,5])) / (m_ent[i,4] * m_ent[i,8])) * 100
                                        ELSE
                                                mperc := 0
                                                mdesconto = 0
                                        ENDIF
                                        imprt(mtipo_imp,'C')
                                        @ PROW()+1,00 SAY m_ent[i,2]
                                        @ PROW(),08 SAY m_ent[i,3]
                                        @ PROW(),50 SAY m_ent[i,10]
                                        @ PROW(),53 SAY m_ent[i,4] PICT ALLTRIM(m_set[1,99])
                                        IF m_ent[i,8] < m_ent[i,5]
                                                @ PROW(),64 SAY m_ent[i,5] PICT '99,999,999.99'
                                        ELSE
                                                @ PROW(),64 SAY m_ent[i,8] PICT '99,999,999.99'
                                        ENDIF
                                        @ PROW(),77 SAY mdesconto PICT '9,999,999.99'
                                        @ PROW(),93 SAY mperc PICT '999.99'
                                        @ PROW(),101 SAY m_ent[i,5] PICT '99,999,999.99'
                                        mcust_real = m_ent[i,4] * m_ent[i,5]
                                        @ PROW(),116 SAY mcust_real PICT '99,999,999.99'
                                        IF m_ent[i,8] > m_ent[i,5]
                                                mtot_desc = mtot_desc + (m_ent[i,4] * m_ent[i,8])-(m_ent[i,4] * m_ent[i,5])
                                                mtot_ped = mtot_ped + (m_ent[i,4] * m_ent[i,8])
                                        ELSE
                                                mtot_ped = mtot_ped + (m_ent[i,4] * m_ent[i,5])
                                        ENDIF
                                        mtot_quant = mtot_quant + m_ent[i,4]
		                        mdiferenca := mdiferenca + m_ent[i,6]
                                        //SKIP
                                        IF PROW() >= 30                 //.AND. STRZERO(mnum_ped,6) == pnum_ped .AND. ! EOF()
                                                SETPRC(00,00)
                                                IF mcab = 'S'
                                                        imprt(mtipo_imp,'E')
                                                        DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                                        imprt(mtipo_imp,'N')
                                                        DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm+  +'Fone: '+mfone_firm)
                                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+'   C.G.C.: '+mcgc_firm)
                                                        @ PROW()+1,00 SAY mtraco
                                                ENDIF
                                                imprt(mtipo_imp,'N')
                                                IF mcod_cli > 0
                                                        @ PROW()+1,00 SAY 'Cliente:'
                                                        @ PROW(),PCOL()+1 SAY STR(mcod_cli,5)
                                                        @ PROW(),PCOL()+1 SAY mnome_cli
                                                        @ PROW()+1,00 SAY 'Emissao:'
                                                ELSE
                                                        @ PROW()+1,00 SAY 'Emissao:'
                                                ENDIF
                                                @ PROW(),10 SAY mdata_troc
                                                @ PROW(),20 SAY 'Hora:'
                                                @ PROW(),26 SAY TIME()
                                                @ PROW(),37 SAY 'Cod.:'
                                                @ PROW(),43 SAY STRZERO(mcod_ven,3)
                                                @ PROW(),00 SAY PADL('continuacao',80)
                                                imprt(mtipo_imp,'E')
                                                @ PROW()+1,18 SAY 'DEVOLUCAO DE MERCADORIA No.:'+STRZERO(mno_troca,6)
                                                imprt(mtipo_imp,'N')
                                                @ PROW()+1,00 SAY mtraco
                                                imprt(mtipo_imp,'C')
                                                @ PROW()+1,00 SAY 'Cod.'
                                                @ PROW(),08 SAY 'Descricao'
                                                @ PROW(),50 SAY 'UN'
                                                @ PROW(),55 SAY 'Quantd.'
                                                @ PROW(),66 SAY 'Valor Unit.'
                                                @ PROW(),80 SAY 'Desc.(R$)'
                                                @ PROW(),91 SAY 'Desc.(%)'
                                                @ PROW(),102 SAY 'Valor Total'
                                                imprt(mtipo_imp,'N')
                                                @ PROW()+1,00 SAY mtraco
                                        ENDIF
                                NEXT
                                imprt(mtipo_imp,'N')
                                @ PROW()+(25 - PROW())+1,00 SAY mtraco
                                @ PROW()+1,00 SAY 'Volume Total:'
                                @ PROW(),14 SAY STRZERO(mtot_quant,6)
                                @ PROW()+1,00 SAY 'Sub-total:'
                                @ PROW(),11 SAY mtot_ped PICT '99,999,999.99'
                                @ PROW(),26 SAY 'Desconto:'
                                @ PROW(),35 SAY mtot_desc PICT '99,999,999.99'
                                @ PROW(),50 SAY 'Total Entrada:'
                                mcust_real = mtot_ped - mtot_desc
                                @ PROW(),65 SAY mcust_real PICT '99,999,999.99'
                                @ PROW()+1,00 SAY mtraco
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT('Credito a RECEBER: '+TRANSFORM(mcust_real,'999,999,999.99'))
                                DEVPOS(PROW()+3,00);DEVOUT(PADC('__________________________',80))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC('A Gerencia',80))
                                @ PROW()+1,00 SAY mtraco
                                IF ! EMPTY(mobs1)
                                        @ PROW()+1,00 SAY mobs1 + mobs2
                                        @ PROW()+1,00 SAY mobs3 + mobs4
                                ENDIF
                                IF mcopia > 1
                                        imprt(mtipo_imp,'N',3)
                                ENDIF
                                SETPRC(00,00)
                        NEXT
                        imprt(mtipo_imp,'P6')
                        SETPRC(00,00)
                        EJECT
                ENDIF
                SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('DEVOLUCAO.REL')
                mdiferenca := mdif:= 0
                ASIZE(m_ent,0)
                RETURN NIL
        ENDIF
ENDDO
RETURN NIL
***************************  F I M  **********************************
* ALTERACAO DE MERCADORIA
*************************
FUNCTION alt_troc
*****************
LOCAL mvlr_fat:=0
MEMVAR mponto,mcod_merc,mquantd,m_codigo,opcao,cod_operado,mcont_item,mtot_ped,;
       mdesconto,msubtotal,mtot_custo,mperc,mcod_cli
IF mponto = 0
        RETURN .T.
ENDIF
DO WHILE .T.
        CLEAR GETS
        ***************
        SELE('merc');ORDSETFOCUS(1)
        GO TOP
        ***************
        SEEK m_codigo[mponto]
        IF ! BLOQREG()
                LOOP
        ENDIF
        mcod_merc := VAL(cons_merc[1,8])
        IF EMPTY(mcod_merc)
                RETURN .T.
        ENDIF
        setcor(3)
        DEVPOS(20,01);DEVOUT('             ')
        DEVPOS(20,01);DEVOUT(cons_merc[1,8])
        DEVPOS(20,07);DEVOUT(cons_merc[1,9])
        DEVPOS(20,66);DEVOUTPICT(iat(cons_merc[1,46],2),'9,999,999.99')
        mp_venda = cons_merc[1,46]
        IF ! EMPTY(cons_merc[1,23])
                setcor(3)
                @ 20,08 SAY LEFT(cons_merc[1,9],35)
                mp_venda = mvlr_fat
                SETCOLOR([6])
                @ 20,COL()+1 SAY '(P)'
                setcor(1)
        ENDIF
        setcor(1)
        @ 20,48 GET mquantd PICT ALLTRIM(m_set[1,98])     //WHEN men_get(lba-10,cci+42,'Informe a quantidade que deseja, so nao pode ultrapassar o saldo da mercadoria') VALID lim_get()
        READ
        IF LASTKEY() = 27
                DBUNLOCKALL()
                EXIT
        ENDIF
        IF mquantd > cons_merc[1,56] + m_sai[mponto,4] .AND. m_set[1,107] = 'S'
                IF ! aut_sen('Quantidade maior que saldo... Senha de autorizacao:','LIB_SALDO',,mcod_merc)
                        DBUNLOCKALL()
                        EXIT
                ENDIF
        ENDIF
        IF mquantd = 0
                opcao := op_simnao('S','Confirma Exclusao da Mercadoria:')
                IF opcao = 'S'
                        mdiferenca := mdiferenca - (m_sai[mponto,4] * m_sai[mponto,5])
                        mquantd = 0
                        aret:={}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(aret) > 0
                                mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] + m_sai[mponto,4])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                                SR_BEGINTRANSACTION()
                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] + m_sai[mponto,4])+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.f.)
                                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(m_codigo[mponto])+','+; //4
                                                        sr_cdbvalue(m_sai[mponto,4])+','+; //5
                                                        sr_cdbvalue(aret[1,56])+','+; //6
                                                        sr_cdbvalue(aret[1,56]  + m_sai[mponto,4])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SACTROCA')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('EXCLUIR PROD.DEVOLUCAO: '+STRZERO(mnum_ped,6))+','+; //11
                                                        sr_cdbvalue('E')+','+; //11
                                                        sr_cdbvalue(' ')+')',,.f.)
                                        sr_committransaction()
                                SR_ENDTRANSACTION()
                        ELSE
                                atencao('Nao foi possivel atualizar saldo da mercadoria, Digite novamente')
                                LOOP
                        ENDIF
                        **********
                        SELE('merc');ORDSETFOCUS(1)
                        **********
                        m_codigo[mponto] = '     '
                        m_sai[mponto,4] = 0
                        m_sai[mponto,5] = 0
                        m_sai[mponto,6] = 0
                        m_sai[mponto,8] = 0
                        DBCOMMITALL()
                        DBUNLOCKALL()
                        mquantd := 1
                        EXIT
                ELSE
                        DBUNLOCKALL()
                        mquantd := 1
                        EXIT
                ENDIF
        ENDIF
        mp_venda = iat(cons_merc[1,46],m_set[1,103])
        @ 20,66 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF(cons_merc[1,23]>0 .AND. mvlr_fat < mp_venda,.F.,.T.) WHEN m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T'
        READ
        IF LASTKEY() = 27
                UNLOCK
                LOOP
        ENDIF
        IF iat(mp_venda,m_set[1,103]) > mvlr_fat
                IF ((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100 > m_set[1,33];
                   .OR. (((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100 > cons_merc[1,80] .AND. ! EMPTY(cons_merc[1,80]))
                        IF ! aut_sen(TRANSFORM(((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,mcod_merc)
                                setcor(1)
                                LOOP
                        ENDIF
                ENDIF
        ENDIF
        IF m_set[1,38] = 'C'
                IF mvlr_fat < iat(mp_venda,m_set[1,103])
                       IF mvlr_fat < cons_merc[1,45]
                                IF ! aut_sen('Senha de autorizacao:','LIB_DESC',,mcod_merc)
                                        DBUNLOCKALL()
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
        ELSEIF m_set[1,38] = 'V'
                IF mvlr_fat < iat(mp_venda,m_set[1,103])
                       IF mvlr_fat < iat(mp_venda,m_set[1,103])
                                IF ! aut_sen('Senha de autorizacao:','LIB_DESC',,mcod_merc)
                                        DBUNLOCKALL()
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
        ENDIF
        opcao := op_simnao('S','Confirma Alteracao da Mercadoria [S/n]:')
        IF opcao = 'S'
                mdesconto := 0
                IF mvlr_fat < iat(mp_venda,m_set[1,103])
                        mdesconto := ((iat(mp_venda,m_set[1,103])-mvlr_fat)/iat(mp_venda,m_set[1,103]))*100
                ENDIF
                aret:={}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) > 0
                        mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] - m_sai[mponto,4])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                        SR_BEGINTRANSACTION()
                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] - m_sai[mponto,4])+",data_atu = "+sr_cdbvalue(mdata_sis)+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.f.)
                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(m_codigo[mponto])+','+; //4
                                                        sr_cdbvalue(m_sai[mponto,4])+','+; //5
                                                        sr_cdbvalue(aret[1,56])+','+; //6
                                                        sr_cdbvalue(aret[1,56]  - m_sai[mponto,4])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SACTROCA')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('ALTERAR PROD.DEVOL.:'+STRZERO(mnum_ped,6))+','+; //11
                                                        sr_cdbvalue('S')+','+; //11
                                                        sr_cdbvalue(' ')+')',,.f.)
                                sr_committransaction()
                        SR_ENDTRANSACTION()
                ELSE
                        atencao('Nao foi possivel atualizar saldo da mercadoria, Digite novamente')
                        LOOP
                ENDIF
                m_sai[mponto,4] = mquantd
                m_sai[mponto,5] = mvlr_fat
                m_sai[mponto,6] = mvlr_fat*mquantd
                DBUNLOCKALL()
                **********
                SELE('merc');ORDSETFOCUS(1)
                **********
                mquantd := 1
                EXIT
        ELSE
                mquantd := 1
                DBUNLOCKALL()
                EXIT
        ENDIF
ENDDO
CLEAR GETS
RETURN .T.
********************************** F I M ***************************************