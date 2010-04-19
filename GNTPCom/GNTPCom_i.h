

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Apr 19 19:27:28 2010
 */
/* Compiler settings for .\GNTPCom.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __GNTPCom_i_h__
#define __GNTPCom_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGrowler_FWD_DEFINED__
#define __IGrowler_FWD_DEFINED__
typedef interface IGrowler IGrowler;
#endif 	/* __IGrowler_FWD_DEFINED__ */


#ifndef __Growler_FWD_DEFINED__
#define __Growler_FWD_DEFINED__

#ifdef __cplusplus
typedef class Growler Growler;
#else
typedef struct Growler Growler;
#endif /* __cplusplus */

#endif 	/* __Growler_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IGrowler_INTERFACE_DEFINED__
#define __IGrowler_INTERFACE_DEFINED__

/* interface IGrowler */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IGrowler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3241832B-2158-459A-9E6B-4692587066F5")
    IGrowler : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ BSTR ApplicationName,
            /* [in] */ VARIANT Notifications,
            /* [optional][in] */ VARIANT Password) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BSTR NotificationType,
            /* [in] */ BSTR Title,
            /* [in] */ BSTR MessageText,
            /* [optional][in] */ VARIANT Icon,
            /* [optional][in] */ VARIANT Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ApplicationName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Notifications( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitWithAddress( 
            /* [in] */ BSTR ServerAddress,
            /* [in] */ BSTR Password,
            /* [in] */ BSTR ApplicationName,
            /* [in] */ VARIANT Notifications) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGrowlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGrowler * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGrowler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGrowler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGrowler * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGrowler * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGrowler * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGrowler * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IGrowler * This,
            /* [in] */ BSTR ApplicationName,
            /* [in] */ VARIANT Notifications,
            /* [optional][in] */ VARIANT Password);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IGrowler * This,
            /* [in] */ BSTR NotificationType,
            /* [in] */ BSTR Title,
            /* [in] */ BSTR MessageText,
            /* [optional][in] */ VARIANT Icon,
            /* [optional][in] */ VARIANT Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ApplicationName )( 
            IGrowler * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Notifications )( 
            IGrowler * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitWithAddress )( 
            IGrowler * This,
            /* [in] */ BSTR ServerAddress,
            /* [in] */ BSTR Password,
            /* [in] */ BSTR ApplicationName,
            /* [in] */ VARIANT Notifications);
        
        END_INTERFACE
    } IGrowlerVtbl;

    interface IGrowler
    {
        CONST_VTBL struct IGrowlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGrowler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGrowler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGrowler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGrowler_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGrowler_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGrowler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGrowler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGrowler_Init(This,ApplicationName,Notifications,Password)	\
    ( (This)->lpVtbl -> Init(This,ApplicationName,Notifications,Password) ) 

#define IGrowler_Notify(This,NotificationType,Title,MessageText,Icon,Url)	\
    ( (This)->lpVtbl -> Notify(This,NotificationType,Title,MessageText,Icon,Url) ) 

#define IGrowler_get_ApplicationName(This,pVal)	\
    ( (This)->lpVtbl -> get_ApplicationName(This,pVal) ) 

#define IGrowler_get_Notifications(This,pVal)	\
    ( (This)->lpVtbl -> get_Notifications(This,pVal) ) 

#define IGrowler_InitWithAddress(This,ServerAddress,Password,ApplicationName,Notifications)	\
    ( (This)->lpVtbl -> InitWithAddress(This,ServerAddress,Password,ApplicationName,Notifications) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGrowler_INTERFACE_DEFINED__ */



#ifndef __GNTPComLib_LIBRARY_DEFINED__
#define __GNTPComLib_LIBRARY_DEFINED__

/* library GNTPComLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_GNTPComLib;

EXTERN_C const CLSID CLSID_Growler;

#ifdef __cplusplus

class DECLSPEC_UUID("D83537A7-2B26-44C6-A798-AD623189EC46")
Growler;
#endif
#endif /* __GNTPComLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


