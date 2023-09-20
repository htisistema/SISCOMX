//=>Como obter uma chave privada:
//RUN ("openssl genrsa -out chave.pem 1024")
//Onde:
//Chave.pem = arquivo onde a chave privada será gravada. Somente executar uma vez.

//=>Como obter o m¢dulo da chave privada (necess rio para montar o XML do eECFc)
//Comando: openssl rsa -in chave.pem -modulus -out modulo.txt
//Onde:
//Chave.pem = arquivo com a chave privada gerada anteriormente.
//modulo.txt = Arquivo onde ser gravado o m¢dulo. No arquivo conter o m¢dulo e a;
//chave privada. Vocˆ pega o m¢dulo e cola dentro do arquivo XML no campo espec¡fico.
//O expoente eu nÆo precisei alterar.

FUNCTION GERA_EAD( cFile )
**************************
LOCAL cScreen
LOCAL cFileTemp1:= "ARQ1.TMP"
LOCAL cFileTemp2:= "ARQ2.TMP"
LOCAL nHandle
LOCAL aBuffer  := {}
LOCAL cReply  := ""
LOCAL cSignature := ""
LOCAL mcaminho := ""
/*
IF ! EMPTY(m_indiv[1,42])
        mcaminho := ALLTRIM(m_indiv[1,42])
ELSE
*/
        mcaminho := curdrive()+":\ACBRMONITOR\"
//ENDIF
//cFileTemp1:= mcaminho+"ARQ1.TMP"
//cFileTemp2:= mcaminho+"ARQ2.TMP"

nHandle := FCREATE(cFileTemp1, 1)

FWRITE( nHandle,mchv_priv)
FCLOSE( nHandle )
// Gera assinatura rash 256 bytes
MYRUN(mcaminho+"OPENSSL.EXE dgst -md5 -sign " + cFileTemp1 + " -out " + cFileTemp2 + " -hex " + cFile )
cReply := MEMOREAD(cFileTemp2)
cSignature:= "EAD"+(SUBSTR(cReply,AT("=",cReply)+2))+chr(10)
nHandle := FOPEN(cFile,2)   // Abrir arquivo pra leitura e gravacao
FSEEK (nHandle, 0, 2)     // Final do arquivo
FWRITE(nHandle,+cSignature ) // Gravar no final do arquivo
FCLOSE(nHandle)        // Fechar arquivo

RETURN( .T. )
*************************************
/*
FUNCTION GERA_EAD1(cFile,chv_public)
*************************************
LOCAL ret:=0
PUBLIC cChavePublica:=SPACE(256), cChavePrivada:=SPACE(256),cSignature := "",cNomeArquivo := ""

//atencao(cfile)
cSignature = Space(256)
FCLOSE(cFile)
cSignature := IBR_COMANDO('ECF.assinaarquivo',{cFile},,.T.)
RETURN cSignature
/*
DLLsign_bema:=Loadlibrary("sign_bema.dll")
IF cfile = NIL
        ret:=DLLCALL(DLLsign_bema,32,"genkkey",cChavePublica, cChavePrivada)
        IF ret = 0
                atencao('Nao possivel gerar o EAD deste arquivo...')
                RETURN .F.
        ENDIF        
        sr_getconnection():exec("UPDATE sacsetup SET chv_public = " + sr_cdbvalue(cChavePublica) + ",chv_privada = " + sr_cdbvalue(cChavePrivada) +" WHERE sr_recno = 1 ",,.f.)
        RETURN cChavePublica
ENDIF
//cSignature:= "EAD"+'F63B8E212A68F0F66A90262493909899BCE1BDE8CB60B014559FB3DFACEDE7E1AEB58D74102E101ACCB694BF37171EEA1EBFD8B4DDB15F5133BE5EC9024B9795E312E23680748311FA6571A62AA6793AB5B14FB87E717DBAF47D7B3097DDD1C38DAF5E4C708128DEA657682D8C3EFB822DDF71F7FCD168586E2D2429B04C363B'
IF cfile = NIL
        RETURN cSignature
ELSE
        //cChavePrivada := 'DDAE86ADBD2AD186457E0B36F5A1E37B2857086949F0051A23B225A8135326451134472D6802E9FB58143C8AB70A672EF5DB683DE1B1D4A3B1711876E2A1212FFF6B05BB6ADC44786C1FEF92A0B44B6AD0945F714219035B887B01845424A26FFDE08DB281A15F4301EDAFEC440B6B6317FD3B8D78B971712852CA9D5DF51207'
        //cChavePublica := ALLTRIM('DDAE86ADBD2AD186457E0B36F5A1E37B2857086949F0051A23B225A8135326451134472D6802E9FB58143C8AB70A672EF5DB683DE1B1D4A3B1711876E2A1212FFF6B05BB6ADC44786C1FEF92A0B44B6AD0945F714219035B887B01845424A26FFDE08DB281A15F4301EDAFEC440B6B6317FD3B8D78B971712852CA9D5DF51207')
        //ATENCAO(cChavePrivada+m_qp+cChavePublica)
       //mchv_priv    := 'E9D4E1CCA464B7E811C7746E43B11943EC2A03667F78AD66F01ABC50AF188FF76C083829B07AA8175E9E1F1B15CF3A39E48957C71A40E15713E9EF345E405CEFDFB5252BE32CB19A76E291C798CC01F64E19C5F25191CF41E666AE4738837E2FB3746123AEDF821578F09496C81634A6D784E4FBB0837C4EEEC3BAEF1B3F94C3',;
       //mchv_public  := 'CC55E628C3C90F93E5C7B550A9075A52CA999A89D6406CBDEA5508CF4112E00B4D0055E2DEA5BDF7E4AAAE4C4BB4C582DC0EBA14232D2444B949A6FF2DD23FD5B4CDBEAE7A8929D6A3774F4CCD737522F073E86F0724EE886EA493114780EDD87C59A173E0494D3F64DFF91AA7CFF6FD7F1D46AE5BDCA4418AF8E0261491F60D',;

        cSignature = Space(256)
        cNomeArquivo = ALLTRIM(cFile)
        ret := DLLCALL(DLLsign_bema,32,"generateEAD",cNomeArquivo, mchv_public , mchv_priv, cSignature, 1 )
        IF Ret = 0 
                //atencao("Erro de execução!")
        END
        ret := DLLCALL(DLLsign_bema,32,"validateFile",cNomeArquivo, mchv_public, mchv_priv)
        IF Ret = 0 
                //atencao("Erro na chave !!!")
        END
ENDIF
//lertexto(cNomeArquivo)
RETURN cSignature
*/
******************************* F I M *************************************************************
FUNCTION GERA_MD5(cNomeArquivo)
*******************************
PRIVATE cmd5
IF cNomeArquivo = NIL
        op_tela(10,10,13,90,'Gerar o Modulo MD5')
        DEVPOS(1,1);DEVOUT('Caminho do Arquivo:')
        DEVPOS(2,1);DEVOUT('Gerado o MD5......:')
        cNomeArquivo := cNomeArquivo + SPACE(90-LEN(cNomeArquivo))
        @ 1,21 GET cnomearquivo PICT '@S80' WHEN cnomearquivo = NIL
        READ
        IF LASTKEY() = 27
                fecha_tela()
                RETURN ''
        ENDIF
        IF op_simnao('S','Confirma a Operacao:') = 'S' .OR. cnomearquivo # NIL
                cmd5 := HB_MD5File(cNomeArquivo)
                DEVPOS(2,21);DEVOUT(cmd5)
                INKEY(.10,20)
                fecha_tela()
                RETURN cmd5
        ENDIF
ELSE
        cmd5 := HB_MD5File(cNomeArquivo)
        cmd5 := SUBSTR(cmd5,1,32)
        RETURN cmd5
ENDIF
//fecha_tela()
RETURN ''
// End of GERA_EAD()
/*
<?xml version="1.0" ?> 
- <empresa_desenvolvedora>
  <nome>Software House Ltda - TESTE</nome> 
- <chave>
  <modulo>D137D25B3FD69F3167926BC764E46622FF890F079E71511A624C6585EFA5FFC1003EC3883C13DE0FC7B46F213F3300872A5717C912FFD76A96E10693E08F48825F28E7C70D4E8268389714B70B431EFD944FC3057C4E015BCFD1021F7ABD39B281E52F6F0FF91C7CF89D77C7565BD09D70BAE7FE1D3F558121D6CF0803F480F3</modulo> 
  <expoente_publico>0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010001</expoente_publico> 
  </chave>
  </empresa_desenvolvedora>
*/
************************************ f i m *******************************************
