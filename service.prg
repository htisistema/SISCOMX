
PROCEDURE SERVICE( cParam )
   LOCAL cName
   LOCAL cDisplay
   LOCAL cDescription

   IF PCount() > 0
      cName := "TestService"

      DO CASE
      CASE cParam == "-i"
         cDisplay     := "xHarbour Service Test"
         cDescription := "Bla, bla, bla, bla, bla, bla, bla, bla"

         InstallWinService( cName, cDisplay, cDescription )

      CASE cParam == "-d"
         RemoveWinService( cName )

      CASE cParam == "-r"
         RunWinService( cName )

      ENDCASE
   ENDIF
   WaitForThreads()
   RETURN

PROCEDURE gtsys()

PROCEDURE ServiceMain()
   OutputDebugString( "begin" )

   DO WHILE !WinServiceStopped()
      OutputDebugString( "ok" )
      
      ThreadSleep( 1000 )
   ENDDO
   OutputDebugString( "end" )
   RETURN

#pragma BEGINDUMP

#define HB_THREAD_SUPPORT
#define HB_OS_WIN_32

#include <windows.h>
//#include <strsafe.h>

#include "hbapi.h"
#include "hbvm.h"
#include "hbstack.h"

// g l o b a l s
SERVICE_STATUS_HANDLE m_hServiceStatus = NULL;
HANDLE                m_hStopEvent = NULL;
HANDLE                m_hThread = NULL;

// t o o l s

void ErrorStopWinService( TCHAR * );

void SetWinServiceStatus( DWORD dwCurrentState, 
                          DWORD dwWin32ExitCode,
                          DWORD dwCheckPoint,
                          DWORD dwWaitHint )
{
   SERVICE_STATUS mSS;  // Current status of the service.

   // Disable control requests until the service is started.
   if ( dwCurrentState == SERVICE_START_PENDING )
   {
      mSS.dwControlsAccepted = 0;
   }
   else
   {
      mSS.dwControlsAccepted = SERVICE_ACCEPT_STOP | SERVICE_ACCEPT_SHUTDOWN;
      // Other flags include SERVICE_ACCEPT_PAUSE_CONTINUE
      // and SERVICE_ACCEPT_SHUTDOWN.
   }
   
   // Initialize structure.
   mSS.dwServiceType             = SERVICE_WIN32_OWN_PROCESS;
   mSS.dwServiceSpecificExitCode = 0;
   mSS.dwCurrentState            = dwCurrentState;
   mSS.dwWin32ExitCode           = dwWin32ExitCode;
   mSS.dwCheckPoint              = dwCheckPoint;
   mSS.dwWaitHint                = dwWaitHint;

   // Send status of the service to the Service Controller.
   if ( !SetServiceStatus( m_hServiceStatus, &mSS ) )
   {
      ErrorStopWinService( TEXT("SetWinServiceStatus") );
   }
}


void ErrorStopWinService( TCHAR *cAPI )
{
   TCHAR  cBuffer[256] = TEXT("");
   TCHAR  cError[1024] = TEXT("");
   TCHAR *cMessageBuffer;
   DWORD  dwCheckPoint;
   DWORD  dwWaitRes;

   StringCbPrintf( cBuffer, 256, TEXT("API = %s, "), cAPI );
   StringCbCat( cError, 1024, cBuffer );

   ZeroMemory( cBuffer, sizeof( cBuffer ) );
   
   StringCbPrintf( cBuffer, 256, TEXT("error code = %d, "), GetLastError() );
   StringCbCat( cError, 1024, cBuffer );

   // Obtain the error string.
   FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM,
                  NULL,
                  GetLastError(),
                  MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ),
                  (LPSTR) &cMessageBuffer,
                  0,
                  NULL );

   ZeroMemory( cBuffer, sizeof( cBuffer ) );
   StringCbPrintf( cBuffer, 256, TEXT("message = %s"), cMessageBuffer );
   StringCbCat( cError, 1024, cBuffer );

   // Free the buffer allocated by the system.
   LocalFree( (LPVOID) cMessageBuffer );

   // Write the error string to the debugger.
   OutputDebugString( cError );

   // If you have threads running, tell them to stop. Something went
   // wrong, and you need to stop them so you can inform the SCM.
   SetEvent( m_hStopEvent );

   // Wait for the thread to stop.
   for ( dwCheckPoint = 1; TRUE; dwCheckPoint++ )
   {
      dwWaitRes = WaitForSingleObject( m_hThread, 1000 );
      
      if ( dwWaitRes == WAIT_OBJECT_0 || 
           dwWaitRes == WAIT_FAILED || 
           dwWaitRes == WAIT_ABANDONED )
      {
         break;
      }
      SetWinServiceStatus( SERVICE_STOP_PENDING, 0, dwCheckPoint, 3000 );
   }

   // Stop the service.
   SetWinServiceStatus( SERVICE_STOPPED, GetLastError(), 0, 0 );
}


// w i n d o w s   s e r v i c e s
DWORD WINAPI WinServiceThreadProc( LPVOID lpParameter )
{
   //
   // like in hb_func_startthread
   //
   PHB_DYNS pExecSym;
   HB_STACK *pStack, *_pStack_;
   HB_MUTEX_STRUCT *pMtx;
   int nCount;

   pStack = _pStack_ = hb_threadCreateStack( 0 );

   pStack->uiParams = 0;
   pStack->bIsMethod = FALSE;
   
   HB_SHARED_LOCK( hb_runningStacks );

   pStack->bInUse = TRUE;
   hb_threadLinkStack( pStack );

   #ifdef HB_THREAD_TLS_KEYWORD
   hb_thread_stack = pStack;
   #else
   TlsSetValue( hb_dwCurrentStack, ( void * ) pStack );
   #endif

   pStack->th_id = GetCurrentThreadId();
   pStack->th_h  = GetCurrentThread();

   HB_SHARED_UNLOCK( hb_runningStacks );
   
   //
   // like in hb_create_a_thread
   //
   pExecSym = hb_dynsymFind( "ERRORSYS" );

   if( pExecSym )
   {
      hb_vmPushSymbol( pExecSym->pSymbol );
      hb_vmPushNil();
      hb_vmDo( 0 );
   }
   
   pExecSym = hb_dynsymFind( "SERVICEMAIN" );

   if( pExecSym )
   {
      hb_vmPushSymbol( pExecSym->pSymbol );
      hb_vmPushNil();
      hb_vmDo( 0 );
   }

   //
   // like in hb_threadCancelInternal
   //
   HB_DISABLE_ASYN_CANC;

   nCount = pStack->iCleanCount;
   while ( nCount > 0 )
   {
      nCount--;
      pStack->pCleanUp[ nCount ]( pStack->pCleanUpParam[ nCount ] );
   }

   //
   // like in hb_threadTerminator
   //
   extern HB_CRITICAL_T hb_mutexMutex;
   HB_STACK_LOCK;

   HB_CRITICAL_LOCK( hb_mutexMutex );
   pMtx = hb_ht_mutex;
   while( pMtx != NULL )
   {
      if ( HB_SAME_THREAD( pMtx->locker, pStack->th_id ) )
      {
         hb_mutexForceUnlock( pMtx );
      }
      pMtx = pMtx->next;
   }
   HB_CRITICAL_UNLOCK( hb_mutexMutex );

   HB_SHARED_LOCK( hb_runningStacks );
   pStack->bInUse = FALSE;
   hb_threadUnlinkStack( pStack );
   hb_threadDestroyStack( pStack );
   HB_SHARED_UNLOCK( hb_runningStacks );
   
   // non stopped by service manager
   if ( WaitForSingleObject( m_hStopEvent, 0 ) != WAIT_OBJECT_0 )
   {
       SetEvent( m_hStopEvent );
   }
   return 0;
}

void WINAPI WinServiceCtrlHandler( DWORD dwCtrlCode )
{
   DWORD dwState = SERVICE_RUNNING;

   switch(dwCtrlCode)
   {
      case SERVICE_CONTROL_STOP:
         dwState = SERVICE_STOP_PENDING;
         break;

      case SERVICE_CONTROL_SHUTDOWN:
         dwState = SERVICE_STOP_PENDING;
         break;

      case SERVICE_CONTROL_INTERROGATE:
         break;

      default:
         break;
   }

   // Set the status of the service.
   SetWinServiceStatus( dwState, NO_ERROR, 0, 0 );

   // Tell service_main thread to stop.
   if ( dwCtrlCode == SERVICE_CONTROL_STOP ||
        dwCtrlCode == SERVICE_CONTROL_SHUTDOWN )
   {
      if ( !SetEvent( m_hStopEvent ) )
      {
         ErrorStopWinService( TEXT("SetEvent") );
      }
   }
}

void WINAPI WinServiceMain( DWORD argc, LPTSTR *argv )
{
   DWORD dwThreadId;
   DWORD dwCheckPoint;
   DWORD dwWaitRes;
    
   m_hServiceStatus = RegisterServiceCtrlHandler( argv[0], WinServiceCtrlHandler );
    
   if ( m_hServiceStatus == (SERVICE_STATUS_HANDLE)0 )
   {
       return;
   }
    
   m_hStopEvent = CreateEvent( NULL, TRUE, FALSE, NULL );
   if ( m_hStopEvent == NULL )
   {
      ErrorStopWinService( TEXT("CreateEvent") );
   }
    
   m_hThread = CreateThread( NULL, 0, WinServiceThreadProc, NULL, 0, &dwThreadId );
   if ( m_hThread == INVALID_HANDLE_VALUE )
   {
      ErrorStopWinService( TEXT("CreateThread") );
   }
         
   SetWinServiceStatus( SERVICE_RUNNING, 0, 0, 0 );

   while ( WaitForSingleObject( m_hStopEvent, 1000 ) != WAIT_OBJECT_0 )
   {
   }

   // Wait for thread to exit.
   for ( dwCheckPoint = 1; TRUE ; dwCheckPoint++ )
   {
      dwWaitRes = WaitForSingleObject( m_hThread, 1000 );
      
      if ( dwWaitRes == WAIT_OBJECT_0 )
      {
         break;
      }
      
      if ( dwWaitRes == WAIT_FAILED || dwWaitRes == WAIT_ABANDONED )
      {
         ErrorStopWinService( TEXT("WaitForSingleObject") );
      }
      else
      {
         SetWinServiceStatus( SERVICE_STOP_PENDING, 0, dwCheckPoint, 3000 );
      }
   }

   // Close the event handle and the thread handle.
   if ( !CloseHandle( m_hStopEvent ) )
      ErrorStopWinService( TEXT("CloseHandle") );
   if ( !CloseHandle( m_hThread ) )
      ErrorStopWinService( TEXT("CloseHandle") );

   m_hStopEvent = NULL;
   m_hThread = NULL;
   
   // Stop the service.
   SetWinServiceStatus( SERVICE_STOPPED, NO_ERROR, 0, 0 );
   return;
}



// x h a r b o u r 

HB_FUNC( INSTALLWINSERVICE )
{
   SERVICE_DESCRIPTION mSD;
   TCHAR               cPath[MAX_PATH];
   SC_HANDLE           hManager;
   SC_HANDLE           hService;

   if ( GetModuleFileName( NULL, cPath, MAX_PATH ) == 0 )
   {
      hb_retni( 1101 ); 
      return;
   }
   StringCbCat( cPath, MAX_PATH, TEXT(" -r") );
    
   hManager = OpenSCManager( NULL, NULL, SC_MANAGER_ALL_ACCESS );
    
   if ( hManager == NULL ) 
   {
      hb_retni( 1102 );
      return;
   }
      
   hService = CreateService( hManager,                   // SCManager database
                             hb_parcx( 1 ),              // name of service
                             hb_parcx( 2 ),              // name to display
                             SERVICE_ALL_ACCESS,         // desired access
                             SERVICE_WIN32_OWN_PROCESS,  // service type
                             SERVICE_AUTO_START,         // start type
                             SERVICE_ERROR_NORMAL,       // error control type
                             cPath,                      // service's binary
                             NULL,                       // no load ordering group
                             NULL,                       // no tag identifier
                             NULL,                       // dependencies
                             NULL,                       // LocalSystem account
                             NULL );                     // no password
    
   if ( hService == NULL )
   {
      if ( GetLastError() == ERROR_SERVICE_EXISTS )
      {
         hb_retni( 1103 );
         return;
      }
      hb_retni( 1104 );
      return;
   }
   mSD.lpDescription = hb_parcx( 3 );
   ChangeServiceConfig2( hService, SERVICE_CONFIG_DESCRIPTION, &mSD );
    
   CloseServiceHandle( hService );
    
   hb_retni( 0 );
}

HB_FUNC( REMOVEWINSERVICE )
{
   SC_HANDLE hManager;
   SC_HANDLE hService;
  
   hManager = OpenSCManager( NULL, NULL, SC_MANAGER_ALL_ACCESS );
   if ( hManager == NULL ) 
   {
      hb_retni( 1001 );
      return;
   }
    
   hService = OpenService( hManager, hb_parcx(1), DELETE );
 
   if ( hService == NULL )
   { 
       hb_retni( 1002 );
       return;
   }
 
   if ( !DeleteService( hService ) ) 
   {
       hb_retni( 1003 ); 
       return;
   }
   CloseServiceHandle( hService ); 
   hb_retni( 0 );
}

HB_FUNC( RUNWINSERVICE )
{
   SERVICE_TABLE_ENTRY aTable[]= { { hb_parcx( 1 ), WinServiceMain }, 
                                   { NULL, NULL } };
                                    
   StartServiceCtrlDispatcher( aTable );
}

HB_FUNC( WINSERVICESTOPPED )
{
   hb_retl( m_hStopEvent && WaitForSingleObject( m_hStopEvent, 0 ) == WAIT_OBJECT_0 );
}

HB_FUNC( OUTPUTDEBUGSTRING )
{
   OutputDebugString( hb_parcx(1) );
}

#pragma ENDDUMP

