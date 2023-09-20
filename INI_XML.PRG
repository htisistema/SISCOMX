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
        ::odados := tXMLNodeEx( ) :New( HBXML_TYPE_TAG, 'nome',,'HTI Sistemas')
        oNFe:AddBelow(::odados)

        ::oInfNfe := tXMLNodeEx( ) :New( HBXML_TYPE_TAG, "chave")
        oNFe:AddBelow(::oInfNfe )
        ::oXml:oRoot:AddBelow(oNFe )
return Self


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
