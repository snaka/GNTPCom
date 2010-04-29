// Growler.h : CGrowler �̐錾

#pragma once
#include "resource.h"       // ���C�� �V���{��

#include <vector>
#include "growl++.hpp"

#include "GNTPCom_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "DCOM �̊��S�T�|�[�g���܂�ł��Ȃ� Windows Mobile �v���b�g�t�H�[���̂悤�� Windows CE �v���b�g�t�H�[���ł́A�P��X���b�h COM �I�u�W�F�N�g�͐������T�|�[�g����Ă��܂���BATL ���P��X���b�h COM �I�u�W�F�N�g�̍쐬���T�|�[�g���邱�ƁA����т��̒P��X���b�h COM �I�u�W�F�N�g�̎����̎g�p�������邱�Ƃ���������ɂ́A_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ���`���Ă��������B���g�p�� rgs �t�@�C���̃X���b�h ���f���� 'Free' �ɐݒ肳��Ă���ADCOM Windows CE �ȊO�̃v���b�g�t�H�[���ŃT�|�[�g�����B��̃X���b�h ���f���Ɛݒ肳��Ă��܂����B"
#endif



// CGrowler

class ATL_NO_VTABLE CGrowler :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CGrowler, &CLSID_Growler>,
	public IDispatchImpl<IGrowler, &IID_IGrowler, &LIBID_GNTPComLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CGrowler()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_GROWLER)


BEGIN_COM_MAP(CGrowler)
	COM_INTERFACE_ENTRY(IGrowler)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
		delete(growler);
	}

public:

	STDMETHOD(Init)(
		BSTR ApplicationName, 
		VARIANT Notifications, 
		/*[optional]*/ VARIANT Password
	);

	STDMETHOD(InitWithAddress)(
		BSTR ServerAddress, 
		BSTR Password, 
		BSTR ApplicationName, 
		VARIANT Notifications
	);

	STDMETHOD(Notify)(
		BSTR NotificationType, 
		BSTR Title, 
		BSTR MessageText, 
		/*[optional]*/VARIANT Icon,
		/*[optional]*/VARIANT Url
	);

	STDMETHOD(get_ApplicationName)(BSTR* pVal);
	STDMETHOD(get_Notifications)(VARIANT* pVal);
	STDMETHOD(get_UseUDP)(VARIANT_BOOL* pVal);
	STDMETHOD(put_UseUDP)(VARIANT_BOOL newVal);

private:
	Growl* growler;
	char* m_server;
	char* m_password;
	std::vector<CComBSTR> m_notifications;
	CComBSTR m_applicationName;
	char* m_iconUrl;
	VARIANT_BOOL m_isUseUDP;

	Growl_Protocol getProtocol() {
		if (m_isUseUDP == VARIANT_TRUE)
			return GROWL_UDP;
		else
			return GROWL_TCP;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(Growler), CGrowler)
