//#include "sys.ch"

#define CHAR_REMOVE  "/;-:,\.(){}[] "

#define IT_PRODUTO     01
#define IT_DESCRICAO   02
#define IT_CLFISCAL    03
#define IT_CT          04
#define IT_UNIDADE     05
#define IT_QUANTIDADE  06
#define IT_PCUNIT      07
#define IT_PCTOTAL     08
#define IT_ALIQICM     09
#define IT_ALIQIPI     10
#define IT_VRICM       11
#define IT_VRIPI       12
#define IT_CFO         13
#define IT_DESCONTO    14
#define IT_BASEICM     15
#define IT_ARTIGO      16
#define IT_ID          17

// Ref Configuracoes da NF
#define MAXITENS       11
#define TAM_DESCRICAO  48  
#define MAXDUP         06
#define ITENS_DA       07
#define MAXLEN_DA      60
#define P_DUPL   1
#define P_VCTO   2
#define P_VALOR  3

STATIC PastaxmlEnvio
STATIC PastaxmlRetorno 
STATIC PastaxmlEnviado 
STATIC PastaxmlErro    
STATIC PastaxmlBackup

FUNCTION GeraXML( cIdNota )
***************************
LOCAL i, oXml, cId,mchave

oXml := ini_xml():New()
oXml:InfNew( cId )
/*
//mchave := STRTRAN(mchv_public,'"','')
//mchave := STRTRAN(mchv_priv,'"','')
mchave := STRTRAN(mchave,'/','')
mchave := STRTRAN(mchave,'-','')
mchave := STRTRAN(mchave,':','')
mchave := STRTRAN(mchave,',','')
mchave := STRTRAN(mchave,'\','')
mchave := STRTRAN(mchave,'.','')
mchave := STRTRAN(mchave,'(','')
mchave := STRTRAN(mchave,')','')
mchave := STRTRAN(mchave,'{','')
mchave := STRTRAN(mchave,'}','')
mchave := STRTRAN(mchave,'[','')
mchave := STRTRAN(mchave,']','')
mchave := STRTRAN(mchave,'+','')
mchave := STRTRAN(mchave,' ','')
*/
//mchave := UPPER(mchave)
//oXml:criar_xml( 'nome','HTI Sistemas')
//oXml:criar_xml( 'modulo',mchv_public)
//oXml:criar_xml( 'modulo',mchave)
oXml:criar_xml( 'modulo',mmodulo+mchv_priv)
oXml:criar_xml( 'expoente_publico','10001')
oXml:Write( "HTIsistemas.xml" )

//RetFile()
RETURN .T.
********************************* F I M ***************************************
//#ifndef CPCLIPPER

#include "hbxml.ch"
#include "hbclass.ch"
#include "common.ch"

#define CHAR_REMOVE  "/;-:,\.(){}[] "

CREATE CLASS ini_xml

data oXml init TXmlDocument():New()
data oNfe
data oInfNfe
data odados
data oIde
//data oDest
//Data aProd INIT {}

METHOD New()
METHOD InfNew(id)
METHOD criar_xml()
METHOD Write(cFile)

end class
METHOD new()
return self

METHOD infNew(id1)
        Local a:=hash(), b := hash(),oNfe
        //a["Id"]    :=  id1
        //a["versao"]:= "1.10"
        //b["xmlns"] := "empresa_desenvolvedora"
        //b[" "] := " "
        //oNfe := tXMLNodeEx( ) :New( HBXML_TYPE_TAG, "infnfe" , b )
        ::oXml:oRoot:AddBelow( tXMLNodeEx():New( HBXML_TYPE_PI,'xml' , ,'version="1.0"' ) )
        oNfe := tXMLNodeEx( ) :New( HBXML_TYPE_TAG, "empresa_desenvolvedora" )
        ::odados := tXMLNodeEx( ) :New( HBXML_TYPE_TAG, 'nome',,'HTIsistemas')
        oNFe:AddBelow(::odados)
        ::oInfNfe := tXMLNodeEx( ) :New( HBXML_TYPE_TAG, "chave")
        oNFe:AddBelow(::oInfNfe )
        ::oXml:oRoot:AddBelow(oNFe )
return Self
********************************* F I M ***************************************
METHOD criar_xml(mmod,mmod1)
        ::oIde := tXMLNodeEx( ):New( HBXML_TYPE_TAG, mmod,,mmod1 )
        ::oInfNfe:AddBelow(::oIde)
return self
*******************************
METHOD Write(cFile)
*******************************
 Local n :=fcreate(cFile)
 fwrite(n,@::oXml:ToString( HBXML_STYLE_INDENT + HBXML_STYLE_THREESPACES  ) )
 // testar pra ver como fica
 // fwrite(n,@::oXml:ToString( HBXML_STYLE_INDENT + HBXML_STYLE_NOESCAPE  ) )
 fclose(n)
return self
********************************* F I M ***************************************
CLASS tXMLNodeEx from tXMLNode
        METHOD New( nType, cName, aAttributes, cData ) CONSTRUCTOR
endclass
METHOD New( nType, cName, aAttributes, cData ) class tXMLNodeEx
        Local xTemp,cTemp
        if valtype(cData) =="C"
                cData := Alltrim(cData)
        elseif valtype(cData) =="D"
                ctemp := DTos( cData )
                cData := Transform( cTemp,"@R 9999-99-99")
        endif
        ::super:New( nType, cName, aAttributes, cData )
return Self

