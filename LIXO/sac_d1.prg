* FUNCAO P/DEVOLUCAO DE MERCADORIAS
***********************************
FUNCTION sac_d1()
*****************
LOCAL mprg:='SAC_D1',;
      cci,lba,cba,tela_sai,tela_ent,tela1,mquantd,mvlr_merc,mtotal,;
      lci_ent,cci_ent,lba_ent,cba_ent,;
      i,opcao,mmerc,li,ci,lb,cb,i_ent

PRIVATE m_codigo:={},m_Cbarra:={},mdif_sai:=0,mdif_ent:=0,;
        m_ent:={},mcod_merc,mcod_barra,mitem:=0

mtitulo:='INFORMACAO DA NOTA MANUAL'
IF ! ver_nivel(mprg,mtitulo,'156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
cci := 05
lba := 02
cba := 60

lci_ent := 04
cci_ent := 00
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
op_tela(00,00,32,90,mtitulo)
//botao(li,ci,lb,cb)
botao(0,cci,lba,cba)
botao(lci_ent,cci_ent,lba_ent,cba_ent)
DEVPOS(lci_ent+1,cci_ent+1);DEVOUT(' Cod.    Descricao                               Quantd   Vlr.unit.  Vlr.total')
@ lci_ent+2,cci_ent+1 TO lci_ent+2,cba_ent-1
botao(19,00,21,79)
setcor(1)
//DEVPOS(li+1,ci+2);DEVOUT('Diferenca:')
DEVPOS(20,01);DEVOUT('Cod:')
DEVPOS(20,44);DEVOUT('Qtd:')
DEVPOS(20,57);DEVOUT('Vlr.Unit:')
botao(23,00,32,79,,'T O T A L   R$:','*')

msituacao := 0
set_key('merc','cliente',,,'*')

WHILE .T.
        mitem := 0
        exibi_prg(mprg)
        i := 0
        mensagem('Escolha a opcao com a setas - <ESC>abandonar')
        ***************
        SELE('merc')
        ORDSETFOCUS(1)
        ***************
        setcor(1)
        botao1(0,cci+30,2,cci+55)
        botao1(0,cci+60,2,cci+72)
        @ 1,cci+31 PROMPT '  Dados dos Produtos   '
        @ 1,cci+61 PROMPT ' Finalizar '
        SET INTEN ON
        MENU TO msituacao

        IF LASTKEY() = 27
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
                                mensagem('Digite o Codigo da Mercadoria - <ESC>abandonar')

                                @ 20,01 GET mcod_barra PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mcod_barra)
                                        IF LEN(ALLTRIM(mcod_barra)) > 5
                                                ORDSETFOCUS(6)
                                                merc->(DBSEEK(mcod_barra))
                                        ELSE
                                                ORDSETFOCUS(1)
                                                merc->(DBSEEK(STRZERO(VAL(mcod_barra),5)))
                                        ENDIF
                                        IF ! FOUND()
                                                atencao('Codigo nao Cadastrado')
                                                LOOP
                                        ENDIF
                                ELSE
                                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(),f4_merc1())
                                        *************
                                        SELE('merc');ORDSETFOCUS(1)
                                        GO TOP
                                        *************
                                        IF ! merc->(DBSEEK(mcod_merc))
                                                *************
                                                SELE('merc');ORDSETFOCUS(1)
                                                *************
                                                atencao('Codigo da mercadoria nao cadastrado')
                                                LOOP
                                        ENDIF
                                        //f4_merc()
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                ENDIF
                                mcod_merc := VAL(merc->cod_merc)
                                mmerc := merc->merc
                                setcor(3)
                                DEVPOS(20,01);DEVOUT('             ')
                                DEVPOS(20,01);DEVOUT(merc->cod_merc)
                                DEVPOS(20,07);DEVOUT(LEFT(merc->merc,30))
                                setcor(1)
                                mvlr_merc := iat(merc->pr_venda,2)
                                IF merc->livre_desc = 'S'
                                        @ 20,07 GET mmerc PICT '@!'               //VALID lim_get() WHEN men_get(lba-09,cci+28,'<Digite descricao mercadoria>  <ENTER>p/retornar  <F4>p/pesquisar')
                                        READ
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                ENDIF
                                @ 20,48 GET mquantd PICT ALLTRIM(m_set[1,99]) VALID IF(EMPTY(mquantd),.F.,.T.)
                                @ 20,66 GET mvlr_merc PICT '9,999,999.999'
                                READ
                                IF LASTKEY() = 27;LOOP;ENDIF
                                opcao := op_simnao('S','Confirma Inclusao da Mercadoria [S/n]:')
                                IF opcao = 'N';LOOP;ENDIF
                                mitem ++
                                          //   1            2           3          4      5        6           7             8            9
                                AADD(m_ent,{mitem,merc->gru_sub,merc->cod_merc,mmerc,mquantd,mvlr_merc,merc->pr_venda,merc->unidade,merc->sittrib})
                                IF i_ent = 10
                                        SCROLL(lci_ent+i_ent,cci_ent+1,lba_ent-2,cba_ent-1,1)
                                ELSE
                                        i_ent++
                                ENDIF
                                setcor(3)
                                DEVPOS(lci_ent+i_ent,cci_ent+01);DEVOUT(STRZERO(mitem,3)+' '+STRZERO(mcod_merc,5)+' '+merc->merc+' '+TRANSFORM(mquantd,ALLTRIM(m_set[1,99]))+' '+TRANSFORM(mvlr_merc,'999999.99')+' '+TRANSFORM(mquantd*mvlr_merc,'999999.99'))
                                mdif_ent := mdif_ent + (mquantd*mvlr_merc)
                                SUB_BANNER(24,10,TRANSFORM(mdif_ent,ALLTRIM(m_set[1,98])))
                                setcor(1)
                        ENDDO
                CASE msituacao = 2
                        fecha_d1()
                        ASIZE(m_ent,0)
                        EXIT
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************** F I M ******************************************
* FECHAMENTO DA DEVOLUCAO
******************************
FUNCTION fecha_d1
******************
LOCAL mopcao,mnum_doc,mserie,msubserie,mcnpjcpf,mdata
PRIVATE mtot_merc:=0,mtot_doc:=0,mtot_desc:=0,mtot_pis:=0,mtot_confis:=0,i :=0
CLEAR GETS
op_tela(30,10,36,50,'FECHAMENTO DA NOTA MANUAL')
DO WHILE .T.
        mnum_doc := SPACE(10)
        mserie := msubserie := '  '
        mcnpjcpf := SPACE(14)
        op_imp := 'S'
        mdata := CTOD('  /  /  ')
        mcfop := SPACE(4)
        IF EMPTY(m_ent) 
                atencao('Nao foi informado nenhum Produto')
                EXIT
        ENDIF
        i = 1
        setcor(3)
        @ 01,1 SAY 'Valor Total:'
        setcor(1)
        DEVPOS(0,1);  devout('Data Emissao:')
        DEVPOS(1,1);devout('No.Documento:')
        DEVPOS(2,1);devout('Serie.......:')
        DEVPOS(3,1);devout('Sub-Serie...:')
        DEVPOS(4,1);devout('CNPJ/CPF....:')
        DEVPOS(5,1);devout('CFOP........:')
        @ 0,15 GET mdata PICT '9999999999' VALID IF(EMPTY(mdata),.F.,.T.)
        @ 1,15 GET mnum_doc PICT '9999999999' VALID IF(EMPTY(mnum_doc),.F.,.T.)
        @ 2,15 GET mserie PICT '@!' VALID IF(EMPTY(mserie),.F.,.T.)
        @ 3,15 GET msubserie PICT '@!'
        @ 4,15 GET mcnpjcpf PICT '9999999999999'
        @ 5,15 GET mcfop PICT '@@R 9.999'
        READ
        IF LASTKEY() = 27
                CLEAR GETS
                EXIT
        ENDIF
        IF 'S' = op_simnao('S','Confirma a Inclusao da Nota Manual:') 
                i := 0
                FOR i =1 TO LEN(m_ent)
                        mtot_merc := mtot_merc + (m_ent[i,5] * iat(m_ent[i,6],2))
                        mtot_doc  := mtot_doc  + (m_ent[i,5] * iat(m_ent[i,6],2))
                        mtot_desc := mtot_desc + (m_ent[i,5] * iat(IF(m_ent[i,7] > m_ent[i,6],m_ent[i,7] - m_ent[i,6],0),2))
                        mtot_pis  := mtot_pis  + 0
                        mtot_confis  := mtot_confis  + 0
                NEXT
                i := 0
                FOR i =1 TO LEN(m_ent)
                        mcampo_arq := 'data_doc   ,';//1
                                      +'serie     ,';//2
                                      +'sub_serie ,';//3
                                      +'num_doc   ,';//4
                                      +'cnpj_cpf  ,';//5  
                                      +'num_item  ,';//6     
                                      +'cod_item  ,';//7      
                                      +'qtd       ,';//8     
                                      +'unidade   ,';//9     
                                      +'vl_unit   ,';//10       
                                      +'vl_desc   ,';//11      
                                      +'vl_fat    ,';//12
                                      +'tot_merc  ,';//13
                                      +'tot_doc   ,';//14
                                      +'tot_desc  ,';//15
                                      +'tot_pis   ,';//16
                                      +'tot_confis ,';//17 
                                      +'cst        ,';//17 
                                      +'cfop        '//17 
                        cComm  := 'INSERT INTO d1 ('+mcampo_arq+',sr_deleted) values ('
                        cComm  := ccomm + sr_cdbvalue(mdata)+','+; //1
                        sr_cdbvalue(mserie                      )+','+;//2
                        sr_cdbvalue(msubserie                   )+','+;//3
                        sr_cdbvalue(mnum_doc                    )+','+;//4
                        sr_cdbvalue(mcnpjcpf                    )+','+;//5
                        sr_cdbvalue(STRZERO(m_ent[i,1],3)       )+','+;//6
                        sr_cdbvalue(STRZERO(VAL(m_ent[i,3]),10) )+','+;//7                                                                                                                                                                                                                                                                                                                                                                       
                        sr_cdbvalue(m_ent[i,5]                  )+','+;//8                                                                                                                                                                                                                                                                                                                                                                       
                        sr_cdbvalue(m_ent[i,8]                  )+','+;//9                                                                                                                                                                                                                                                                                                                                                                       
                        sr_cdbvalue(iat(m_ent[i,7],2)         )+','+;//10
                        sr_cdbvalue(iat(IF(m_ent[i,7] > m_ent[i,6],m_ent[i,7] - m_ent[i,6],0),2))+','+;//11
                        sr_cdbvalue(iat(m_ent[i,6],2)         )+','+;//12
                        sr_cdbvalue(iat(mtot_merc   ,2)         )+','+;//13
                        sr_cdbvalue(iat(mtot_doc    ,2)         )+','+;//14
                        sr_cdbvalue(iat(mtot_desc   ,2)         )+','+;//15
                        sr_cdbvalue(iat(mtot_pis    ,2)         )+','+;//16
                        sr_cdbvalue(iat(mtot_confis ,2)         )+','+;//17
                        sr_cdbvalue(m_ent[i,9]                    )+','+;//18
                        sr_cdbvalue(mcfop                         )+','+;//19
                        sr_cdbvalue(' ')+')'                                                                                                                                                                                                                                                                                                                                                                                                 
                        sr_getconnection():exec(ccomm,,.f.)                                                                                                                                                                                                                                                                                                                                                                                  
                NEXT
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
***************************  F I M  **********************************