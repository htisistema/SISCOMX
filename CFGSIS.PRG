MEMVAR getlist
*****************************
* CONFIGURACAO DE TERMINAIS
*****************************

FUNCTION cfgsis(estacao)
***************

LOCAL tela,lci,cci,lba,cba,opcao,mnome,mdtaatu,mdtaant,mtip_term,mprt_ped,;
      mprt_ped2,mtipfrmped,mimpped,mqtdlinped,mqtdcopped,mprt_rel,mimp_rel,;
      mprt_dup,mimp_dup,mqtdcopdup,maut_dup,mprt_nota,mprt_bol,mimp_bol,mdir_cli,mdir_sen,;
      mdir_forn,mdir_merc,camin,mbematech,minf_cli,mautocaixa,minf_prz,mdir_dupp,;
      mtp_prot:=0,mtmp_prot:=0,mdir_tped,mtipfrmorc,mprt_orc,mprt_orc2,mdesc_cx,;
      mqtdcoporc,mset_data,memp_def:=SPACE(3),msuper:='N',;
      mt_fiscal,mn_pdv:='    ',mprd_filial:=' ',mcon_filial,mtipo_sis:=' ',;
      mport_emb:=' ',mos:=' ',mtip_masc:=' ',mtip_cod:=' ',mcompr_cx:='S',;
      mtelemark:='N',mdir_sped,mdir_sprod,mdir_smov,mcod_sc,mcor:='P',;
      mqtd_max:=0,mvlr_max:=0,mtef:=' ',msef:=' ',mop_dup:=' ',mdir_cfg:=' ',;
      mnum_term:='   ',marquivo:=' ',menu_prin,mcam_bm,mform_os,mrepre

PUBLIC mens

PRIVATE mtcor:=NIL,mcaminho:='',mcamin,;
        mdir_fil0,mdir_fil1,mdir_fil2,mdir_fil3,mdir_fil4,mdir_fil5,;
        mdir_fil6,mdir_fil7,mdir_fil8,mdir_fil9,mtipo_cons:=' ',mcli_fil

// MODULO PRA ACESSAR ARQUIVOS .CDX
REQUEST DBFCDX
RDDSETDEFAULT('DBFCDX')
//

lci := cci := 00
lba := 25
cba := 79
estacao := ver_ini()
USE 'saccfg' ALIAS 'cfg' SHARED NEW
***********
SELE('cfg')
***********
LOCATE FOR cfg->estacao = estacao
mcaminho := ALLTRIM(cfg->caminho)
SETMODE(50,80)
//botao(00,00,50,80,'CONFIGURACAO INDIVIDUAL DO TERMINAL')
WHILE .T.
        ***********
        SELE('cfg')
        ***********
        SET DEVI TO PRINT;SET PRINT ON
        //SET PRINT TO (ALLTRIM(cfg->dir_cfg)+'SACCFG.INI')
        SET PRINT TO ('SACCFG.INI')
        DEVPOS(PROW()  ,00);DEVOUT('001 C Estacao               ='+cfg->estacao)
        DEVPOS(PROW()+1,00);DEVOUT('002 C Tipo de Terminal      ='+cfg->tip_term)
        DEVPOS(PROW()+1,00);DEVOUT('003 C Tipo do Sistema       ='+cfg->tipo_sis)
        DEVPOS(PROW()+1,00);DEVOUT('004 C Empresa Default       ='+cfg->emp_def   )
        DEVPOS(PROW()+1,00);DEVOUT('005 C Caminho Geral         ='+cfg->caminho)
        DEVPOS(PROW()+1,00);DEVOUT('006 C Caminho dos Clientes  ='+cfg->dir_cli)
        DEVPOS(PROW()+1,00);DEVOUT('007 C Caminho dos Operadores='+cfg->dir_sen)
        DEVPOS(PROW()+1,00);DEVOUT('008 C Caminho dos Fornecedor='+cfg->dir_forn)
        DEVPOS(PROW()+1,00);DEVOUT('009 C Caminho das Mercadoria='+cfg->dir_merc)
        DEVPOS(PROW()+1,00);DEVOUT("010 C Caminho Doc's Apagar  ="+cfg->dir_dupp)
        DEVPOS(PROW()+1,00);DEVOUT('011 C Caminho CFG           ='+cfg->dir_cfg)
        DEVPOS(PROW()+1,00);DEVOUT('012 C set_data              ='+cfg->set_data  )
        DEVPOS(PROW()+1,00);DEVOUT('013 C dir_sprod             ='+cfg->dir_sprod )
        DEVPOS(PROW()+1,00);DEVOUT('014 C dir_sped              ='+cfg->dir_sped  )
        DEVPOS(PROW()+1,00);DEVOUT('015 C dir_smov              ='+cfg->dir_smov  )
        DEVPOS(PROW()+1,00);DEVOUT('016 C os                    ='+cfg->os)
        DEVPOS(PROW()+1,00);DEVOUT('017 C                       ='+cfg->cam_bm)
        DEVPOS(PROW()+1,00);DEVOUT('018 C prd_filial            ='+cfg->prd_filial)
        DEVPOS(PROW()+1,00);DEVOUT('019 C tipo_cons             ='+cfg->tipo_cons )
        DEVPOS(PROW()+1,00);DEVOUT('020 C 1o.Porta do Pedido    ='+cfg->prt_ped   )
        DEVPOS(PROW()+1,00);DEVOUT('021 C 2o.Porta do Pedido    ='+cfg->prt_ped2  )
        DEVPOS(PROW()+1,00);DEVOUT('022 C 1o.Porta do Orcamento ='+cfg->prt_orc   )
        DEVPOS(PROW()+1,00);DEVOUT('023 C 2o.Porta do Orcamento ='+cfg->prt_orc2  )
        DEVPOS(PROW()+1,00);DEVOUT('024 C Tipo Formulario Pedido='+cfg->tipfrmped )
        DEVPOS(PROW()+1,00);DEVOUT('025 C Iipo Formulario Orcam.='+cfg->tipfrmorc )
        DEVPOS(PROW()+1,00);DEVOUT('026 C Tipo de Mascara       ='+cfg->tip_masc  )
        DEVPOS(PROW()+1,00);DEVOUT('027 C Tipo de Codigo        ='+cfg->tip_cod   )
        DEVPOS(PROW()+1,00);DEVOUT('028 C Tipo Impressora Pedido='+cfg->impped    )
        DEVPOS(PROW()+1,00);DEVOUT('029 N Quantd.Linhas Avanco  ='+STRZERO(cfg->qtdlinped,3))
        DEVPOS(PROW()+1,00);DEVOUT('030 N Quantd.Copia do Pedido='+STRZERO(cfg->qtdcopped,3))
        DEVPOS(PROW()+1,00);DEVOUT('031 N Quantd.Copia do Orcam.='+STRZERO(cfg->qtdcoporc,3))
        DEVPOS(PROW()+1,00);DEVOUT('032 C Porta dos Relatorios  ='+cfg->prt_rel   )
        DEVPOS(PROW()+1,00);DEVOUT('033 C Porta para Embalagem  ='+cfg->prt_emb   )
        DEVPOS(PROW()+1,00);DEVOUT('034 C Tipo Impressora Relat.='+cfg->imp_rel   )
        DEVPOS(PROW()+1,00);DEVOUT('035 C Porta das Duplicatas  ='+cfg->prt_dup   )
        DEVPOS(PROW()+1,00);DEVOUT('036 C Tipo Impressora Duplic='+cfg->imp_dup   )
        DEVPOS(PROW()+1,00);DEVOUT('037 C Autenticar Duplicata  ='+cfg->aut_dup   )
        DEVPOS(PROW()+1,00);DEVOUT('038 C op_dup                ='+cfg->op_dup    )
        DEVPOS(PROW()+1,00);DEVOUT('039 N Quantd.Copia Duplicata='+STRZERO(cfg->qtdcopdup,3))
        DEVPOS(PROW()+1,00);DEVOUT('040 C Porta para Nota Fiscal='+cfg->prt_nota  )
        DEVPOS(PROW()+1,00);DEVOUT('041 C Porta para Boleto Ban ='+cfg->prt_bol   )
        DEVPOS(PROW()+1,00);DEVOUT('042 C Tipo Impressora Boleto='+cfg->imp_bol   )
        DEVPOS(PROW()+1,00);DEVOUT('043 C Porta Imp.Fiscal      ='+cfg->bematech  )
        DEVPOS(PROW()+1,00);DEVOUT('044 C Tipo de Imp.Fiscal    ='+cfg->t_fiscal  )
        DEVPOS(PROW()+1,00);DEVOUT('045 C n_pdv                 ='+cfg->n_pdv     )
        DEVPOS(PROW()+1,00);DEVOUT('046 C inf_cli               ='+cfg->inf_cli   )
        DEVPOS(PROW()+1,00);DEVOUT('047 C Autocaixa             ='+cfg->autocaixa )
        DEVPOS(PROW()+1,00);DEVOUT('048 C inf_prz               ='+cfg->inf_prz   )
        DEVPOS(PROW()+1,00);DEVOUT('049 C Desconto no CAIXA     ='+cfg->desc_cx   )
        DEVPOS(PROW()+1,00);DEVOUT('050 C compr_cx              ='+cfg->compr_cx  )
        DEVPOS(PROW()+1,00);DEVOUT('051 C Telemark              ='+cfg->telemark  )
        DEVPOS(PROW()+1,00);DEVOUT('052 C Tipo da Cor do Sistema='+cfg->tip_cor   )
        DEVPOS(PROW()+1,00);DEVOUT('053 N qtd_max               ='+STRZERO(cfg->qtd_max,3))
        DEVPOS(PROW()+1,00);DEVOUT('054 N vlr_max               ='+STRZERO(cfg->vlr_max,5))
        DEVPOS(PROW()+1,00);DEVOUT('055 C Tef                   ='+cfg->tef       )
        DEVPOS(PROW()+1,00);DEVOUT('056 C Sef                   ='+cfg->sef       )
        DEVPOS(PROW()+1,00);DEVOUT('057 C Tipo Formulario da OS.='+cfg->form_os   )
        DEVPOS(PROW()+1,00);DEVOUT('058 C Informa Representante ='+cfg->repre     )
        DEVPOS(PROW()+1,00);DEVOUT('059 C con_filial            ='+cfg->con_filial)
        DEVPOS(PROW()+1,00);DEVOUT('060 C dir_fil0              ='+cfg->dir_filial)
        DEVPOS(PROW()+1,00);DEVOUT('061 C dir_fil1              ='+cfg->dir_filia1)
        DEVPOS(PROW()+1,00);DEVOUT('062 C dir_fil2              ='+cfg->dir_filia2)
        DEVPOS(PROW()+1,00);DEVOUT('063 C dir_fil3              ='+cfg->dir_filia3)
        DEVPOS(PROW()+1,00);DEVOUT('064 C dir_fil4              ='+cfg->dir_filia4)
        DEVPOS(PROW()+1,00);DEVOUT('065 C dir_fil5              ='+cfg->dir_filia5)
        DEVPOS(PROW()+1,00);DEVOUT('066 C dir_fil6              ='+cfg->dir_filia6)
        DEVPOS(PROW()+1,00);DEVOUT('067 C dir_fil7              ='+cfg->dir_filia7)
        DEVPOS(PROW()+1,00);DEVOUT('068 C dir_fil8              ='+cfg->dir_filia8)
        DEVPOS(PROW()+1,00);DEVOUT('069 C dir_fil9              ='+cfg->dir_filia9)
        DEVPOS(PROW()+1,00);DEVOUT('070 C cli_fil               ='+cfg->cli_filial)
        DEVPOS(PROW()+1,00);DEVOUT('071 C cli_fil1              ='+cfg->cli_filia1)
        DEVPOS(PROW()+1,00);DEVOUT('072 C cli_fil2              ='+cfg->cli_filia2)
        DEVPOS(PROW()+1,00);DEVOUT('073 C cli_fil3              ='+cfg->cli_filia3)
        DEVPOS(PROW()+1,00);DEVOUT('074 C cli_fil4              ='+cfg->cli_filia4)
        DEVPOS(PROW()+1,00);DEVOUT('075 C cli_fil5              ='+cfg->cli_filia5)
        DEVPOS(PROW()+1,00);DEVOUT('076 C cli_fil6              ='+cfg->cli_filia6)
        DEVPOS(PROW()+1,00);DEVOUT('077 C cli_fil7              ='+cfg->cli_filia7)
        DEVPOS(PROW()+1,00);DEVOUT('078 C cli_fil8              ='+cfg->cli_filia8)
        DEVPOS(PROW()+1,00);DEVOUT('079 C Dosprinter 1 ou 2     ='+cfg->cli_filia9)
        DEVPOS(PROW()+1,00);DEVOUT('080 C Tipo de Tela Sistema  ='+cfg->op_tela   )
        DEVPOS(PROW()+1,00);DEVOUT('081 C Nome Computador       ='+cfg->cli_filia9)
        DEVPOS(PROW()+1,00);DEVOUT('082 C cod_sc                ='+cfg->cod_sc    )
        DEVPOS(PROW()+1,00);DEVOUT('083 N Tipo do Banco Dados   =1')
        DEVPOS(PROW()+1,00);DEVOUT('084 C Caminho Banco Dados   = ')
        DEVPOS(PROW()+1,00);DEVOUT('085 C Porta Impressora 1    = ')
        DEVPOS(PROW()+1,00);DEVOUT('086 C Nome Computador  1    = ')
        DEVPOS(PROW()+1,00);DEVOUT('087 C Compartilhamento 1    = ')
        DEVPOS(PROW()+1,00);DEVOUT('088 C Porta Impressora 2    = ')
        DEVPOS(PROW()+1,00);DEVOUT('089 C Nome Computador  2    = ')
        DEVPOS(PROW()+1,00);DEVOUT('090 C Compartilhamento 2    = ')
        DEVPOS(PROW()+1,00);DEVOUT('091 C Porta Impressora 3    = ')
        DEVPOS(PROW()+1,00);DEVOUT('092 C Nome Computador  3    = ')
        DEVPOS(PROW()+1,00);DEVOUT('093 C Compartilhamento 3    = ')
        DEVPOS(PROW()+1,00);DEVOUT('094 C Campo Comandos        = ')
        DEVPOS(PROW()+1,00);DEVOUT('095 C Campo Comandos        = ')
        DEVPOS(PROW()+1,00);DEVOUT('096 C Campo Comandos        = ')
        DEVPOS(PROW()+1,00);DEVOUT('097 C Campo Comandos        = ')
        DEVPOS(PROW()+1,00);DEVOUT('098 C                       = ')
        DEVPOS(PROW()+1,00);DEVOUT('099 C                       = ')
        DEVPOS(PROW()+1,00);DEVOUT('100 C Versao do Sistema     ='+cfg->ver_cfg)
        SETPRC(00,00)
        SET PRINT TO;SET PRINT OFF;SET DEVI TO SCREEN
        EXIT
ENDDO
RETURN .T.
************************* F I M ***********************************
**************************************
* VER ARQUIVO DE INICIALIZACAO
**************************************
#include "fileio.ch"
FUNCTION ver_ini
LOCAL ret_tam:=0,pos_ret,var_ret_cmd,var_aux,i:=0
IF ! FILE('C:\HTICFG.INI') .AND. FILE('C:\CFGHTI.INI')
        SET DEVI TO PRINT
        SET PRINT ON
        SET PRINT TO 'C:\HTICFG.INI'
        DEVPOS(00,00);DEVOUT('001')
        DEVPOS(01,00);DEVOUT(' ')
        SET PRINT TO;SET PRINT OFF;SET DEVI TO SCREEN
ELSEIF ! FILE('C:\HTICFG.INI')
        RETURN '001'
ENDIF
While RET_TAM = 0
        H_Handle := Fopen("C:\HTICFG.INI")
        RET_TAM =  FSeek( H_Handle, 0, FS_END )
        Fclose(H_Handle)
enddo
H_Handle:= Fopen("C:\HTICFG.INI")
POS_RET = 0
VAR_RET_CMD=" "
VAR_AUX =" "
*if RET_TAM > 0
        FOR POS_RET = 1 to RET_TAM - 1
                fread( H_Handle, @VAR_AUX, 1)
                if VAR_AUX <> chr(13)
                        VAR_RET_CMD= VAR_RET_CMD + VAR_AUX
                end if
        next
*endif
fclose(H_Handle)
RETURN SUBSTR(ALLTRIM(var_ret_cmd),1,3)
*************************** f i m ****************************

