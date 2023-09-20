function buscar_endereco()

       Local oUrl,opg,cUrl:=cBuf:=aUF:=aCID:=aBAI:=aLOG:=aCEP:="",nPos:=0,mcam_http:=''
       Local aRet  := {}
       local x_cep := '51150003'        //form_registro.gbox_cep_remext.value
       local cCEP  := SPACE(8)
       if Inetestaconectada() == .F.
          atencao('Este computador não possui acesso a Internet')
          return(nil)
       endif
       if empty(x_cep)
          atencao('Primeiro digite um CEP')
          //form_registro.gbox_cep_remext.setfocus
          return(nil)
       endif

       cCEP := alltrim(x_cep)
       //mcam_http :="http://www.correios.com.br/servicos/dnec/consultaLogradouroAction.do?Metodo=listaLogradouro&CEP="+ cCEP + "&TipoConsulta=cep"
       mcam_http :="http://www.htisistemas.com"

       oUrl:=turl():New(mcam_http)
       cUrl:=mcam_http
       //opg := TipClientHttp():New( oUrl ,.t.)
       opg := TipClient():New( oUrl ,.t.)
       opg:nConnTimeout := 20000

       if opg:Open( cUrl )
          oPg:Post("?Metodo=listaLogradouro&CEP=" + cCEP + "&TipoConsulta=cep") //ResponseText
          cUrl:="http://www.correios.com.br/servicos/dnec/detalheCEPAction.do?Metodo=detalhe&Posicao=1&TipoCep=2&CEP=$query"
          opg:Open( cUrl )
          oPg:Post("?Metodo=detalhe&Posicao=1&TipoCep=2&CEP=$query") //ResponseText
          cBuf := opg:readAll()

          cBuf = Stuff(cBuf,1,at('Logradouro:',cBuf)-87,"")
          cBuf = Stuff(cBuf,at('</table>',cBuf)+8,len(cBuf),"")

          nPos := at("value",cBuf)+7
          aLOG := substr(cBuf, nPos, at('</td>', cBuf, nPos) - nPos)
          nPos := at("value",cBuf,nPos)+7
          aBAI := substr(cBuf, nPos, at('</td>', cBuf, nPos) - nPos)
          nPos := at("value",cBuf,nPos)+7
          aCID := substr(cBuf, nPos, at('/',     cBuf, nPos) - nPos)
          aUF  := substr(cBuf, at('/', cBuf, nPos)+1, 2)
          nPos := at("value",cBuf,nPos)+7
          aCEP := substr(cBuf, nPos, at('</td>', cBuf, nPos) - nPos)
          opg:close()

          if cCEP == strtran(aCEP,'-')
             aadd( aRet, aLOG )
             aadd( aRet, aBAI )
             aadd( aRet, aCID )
             aadd( aRet, aUF  )
             aadd( aRet, aCEP )
          endif
       endif

       if len(aRet) = 0
          atencao('Cep não encontrado')
       else
          //setproperty('form_registro','gbox_endereco_remext','value',aRet[1])
          //setproperty('form_registro','gbox_bairro_remext','value',aRet[2])
          //setproperty('form_registro','gbox_cidade_remext','value',aRet[3])
          //setproperty('form_registro','gbox_uf_remext','value',aRet[4])
       endif

       return(nil)
****************************** F I M *********************************
function inetestaconectada( cAddress )

LOCAL aHosts
LOCAL cName
InetInit()
IF cAddress == NIL
   cAddress := "www.google.com.br"
ENDIF
aHosts := InetGetHosts( cAddress )
IF aHosts == NIL .or. len(aHosts)=0
   InetCleanup()
   RETURN .f.
endif
InetCleanup()
RETURN .t.

************************ F I M ******************************
FUNCTION IP_EXTERNO()
   url := 'http://www.meuip.com.br/'
   html:= ReadPage_ler( url )
   vRET:= PegaIP_ex(html)
        atencao(vret)
RETURN vRET

FUNCTION PegaIP_ex(cHtml)
   LOCAL Pos, PosF
   Pos := At('IP?', Upper(cHtml) )
   IF Pos < 1
      RETURN 0
   ENDIF
   Pos   += Len('IP?')
   cHtml := subst( cHtml, Pos )
   PosF  := At('</TITLE>',Upper(cHtml)) - 1
   cHtml := Subst(cHtml,1,PosF)
RETURN cHtml

FUNCTION ReadPage_ler( cUrl )
   LOCAL oUrl, oCli, cRes := ''
   BEGIN SEQUENCE
      oUrl = TUrl():New( cUrl )
      IF EMPTY( oUrl )
         BREAK
      ENDIF
      //oCli = TIpClientHttp():New( oUrl )
      oCli = TIPClient():New( oUrl )  // para uso em xharbour 9970
      IF EMPTY( oCli )
         BREAK
      ENDIF
      oCli:nConnTimeout = 20000
      IF !oCli:Open( oUrl )
         BREAK
      ENDIF
      cRes := oCli:Read()
      oCli:Close()
   END SEQUENCE
RETURN cRes

