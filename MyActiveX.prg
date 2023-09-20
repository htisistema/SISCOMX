//-----------------------------------------------------------------------------------------------//
/*
                      CLASS MyActiveX Para Conectar a ActiveX/COM
                      Redstarsoft Informática 2000 - 2009
                      www.redstarsoft.net / www.redstarsoft.com.br
                      Lailton Fernando Mariano
                                                                                                  */
//-----------------------------------------------------------------------------------------------//
#include "HBclass.ch"
//#include "Constant.ch"
//-----------------------------------------------------------------------------------------------//
CLASS MyActiveX
      DATA hWnd
      DATA aEvent
      DATA aBlock
      DATA oOle      INIT nil
      DATA hSink     INIT nil
      DATA hObj      INIT nil
      DATA ProgId
      Method New()                   CONSTRUCTOR
      Method Event( nEvent, bBlock )
      Method Release()
      Method End()   INLINE ::Release()
      DELEGATE Set TO oOle
      DELEGATE Get TO oOle
      ERROR HANDLER __Error
ENDCLASS
//-----------------------------------------------------------------------------------------------//
METHOD New( cProgId ) CLASS MyActiveX
       ::ProgId:= cProgId
       If ( ::hWnd := MyWINActiveX( ::ProgId ) ) <> 0
            ::hObj := MyActiveXGetDisp( ::hWnd )
       TRY
            ::oOle := ToleAuto():New( ::hObj )
       CATCH oError
             QOut( oError:Description )
       END
            ::hSink := MyActiveXConnectEvents( ::hObj, ::aEvent:= {} , ::aBlock:= {} )
       EndIf
RETURN SELF
//-----------------------------------------------------------------------------------------------//
METHOD Event( nEvent, bBlock ) CLASS MyActiveX
LOCAL nAt
  IF (nAt := AScan( ::aEvent, nEvent )) == 0
              AAdd( ::aEvent, nEvent )
              AAdd( ::aBlock, bBlock )
  ELSE
                    ::aBlock[ nAt ] := bBlock
  ENDIF
RETURN NIL
//-----------------------------------------------------------------------------------------------//
METHOD Release() CLASS MyActiveX
   If ::hSink != NIL
      MyActiveXDisconnectEvents( ::hSink )
      ::hSink:= NIL
   EndIf
   If ::hObj != NIL
      MyActiveXFreeDispatch( ::hObj )
      ::hObj:= NIL
   EndIf
   ::aEvent:=NIL
   ::aBlock:=NIL
   If ::hWnd != NIL
      MyActiveXDestroy( ::hWnd )
      ::hWnd := NIL
   EndIf
   If ::oOle != NIL
      ::oOle:= NIL
   Endif
RETURN NIL
/*-----------------------------------------------------------------------------------------------*/
METHOD __Error( ... ) CLASS MyActiveX
Local cMessage, uRet
      cMessage := __GetMessage()
      IF Left( cMessage, 1 ) == "_"
               cMessage := SubStr( cMessage, 2 )
      ENDIF
RETURN HB_ExecFromArray( ::oOle, cMessage, HB_aParams() )
//-----------------------------------------------------------------------------------------------//
Function MyActiveXEND()
         //PostQuitMessage( 0 )
         __Quit()
RETURN
//-----------------------------------------------------------------------------------------------//