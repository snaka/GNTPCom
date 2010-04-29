// Growler.cpp : CGrowler ‚ÌŽÀ‘•

#include "stdafx.h"

#include "Growler.h"

static char* string_to_utf8_alloc(const char* str);
static char* bstr2utf8(BSTR bstr);
static const char** vec2arr(std::vector<CComBSTR> &vec);

// CGrowler

STDMETHODIMP CGrowler::Init(
	BSTR ApplicationName, 
	VARIANT Notifications, 
	VARIANT Password
) {
	BSTR passwd;

	if (Password.vt == VT_BSTR)
		passwd = Password.bstrVal;
	else
		passwd = NULL;

	InitWithAddress(NULL, passwd, ApplicationName, Notifications);

	return S_OK;
}

STDMETHODIMP CGrowler::InitWithAddress(
	BSTR ServerAddress, 
	BSTR Password, 
	BSTR ApplicationName, 
	VARIANT Notifications
) {
	// Application name
	m_applicationName.Empty();
	m_applicationName.Append(ApplicationName);

	// Notifications
	m_notifications.clear();
	SAFEARRAY* psa = Notifications.parray;

	if (Notifications.vt == (VT_ARRAY | VT_VARIANT)) {
		// SAFEARRAY of VARIANT
		VARIANT* varArray;
		HRESULT hr = SafeArrayAccessData(psa, (void**)&varArray);
		if (FAILED(hr))
			return E_INVALIDARG;

		for (int i = 0; i < psa->rgsabound->cElements; i++) {
			m_notifications.push_back(CComBSTR(varArray[i].bstrVal));
		}
	}
	else if (Notifications.vt == (VT_ARRAY | VT_BSTR)) {
		// SAFEARRAY of BSTR
		BSTR* bstrArray;
		HRESULT hr = SafeArrayAccessData(psa, (void**)&bstrArray);
		if (FAILED(hr))
			return E_INVALIDARG;

		for (int i = 0; i < psa->rgsabound->cElements; i++)
			m_notifications.push_back(CComBSTR(bstrArray[i]));
	}

	SafeArrayUnaccessData(psa);

	// register
	const char** types = vec2arr(m_notifications);
	char* psPasswd = _com_util::ConvertBSTRToString(Password);
	char* appName = bstr2utf8(m_applicationName.m_str);

	if (ServerAddress == NULL)
		growler = new Growl(
			getProtocol(),
			psPasswd,
			appName,
			types,
			m_notifications.size()
		);
	else
		growler = new Growl(
			getProtocol(),
			_com_util::ConvertBSTRToString(ServerAddress),
			_com_util::ConvertBSTRToString(Password), 
			appName, 
			types, 
			m_notifications.size()
		);

	free(appName);
	delete[] psPasswd;

	return S_OK;
}

STDMETHODIMP CGrowler::Notify(BSTR NotificationType, 
							  BSTR Title, 
							  BSTR MessageText, 
							  /*[optional]*/ VARIANT Icon,
							  /*[optional]*/ VARIANT Url)
{
	char* mbsType = bstr2utf8(NotificationType);
	char* mbsTitle = bstr2utf8(Title);
	char* mbsMessage = bstr2utf8(MessageText);
	
	char* mbsUrl;
	if (Url.vt == VT_BSTR)
		mbsUrl = bstr2utf8(Url.bstrVal);
	else
		mbsUrl = NULL;
	
	char* mbsIcon;
	if (Icon.vt == VT_BSTR)
		mbsIcon = bstr2utf8(Icon.bstrVal);
	else
		mbsIcon = NULL;

	growler->Notify(
		mbsType, 
		mbsTitle, 
		mbsMessage, 
		mbsUrl, 
		mbsIcon
	);

	free(mbsType);
	free(mbsTitle);
	free(mbsMessage);
	if (mbsUrl) free(mbsUrl);
	if (mbsIcon) free(mbsIcon);

	return S_OK;
}


STDMETHODIMP CGrowler::get_ApplicationName(BSTR* pVal)
{
	m_applicationName.CopyTo(pVal);
	return S_OK;
}

STDMETHODIMP CGrowler::get_Notifications(VARIANT* pVal)
{
	VariantInit(pVal);
	pVal->vt = VT_ARRAY | VT_BSTR;

	SAFEARRAY* psa;
	SAFEARRAYBOUND bounds = {m_notifications.size(), 0};
	psa = SafeArrayCreate(VT_BSTR, 1, &bounds);

	BSTR* bstrArray;
	SafeArrayAccessData(psa, (void**)&bstrArray);
	std::vector<CComBSTR>::iterator it;

	int i = 0;
	for (it = m_notifications.begin(); it != m_notifications.end(); it++, i++)
		bstrArray[i] = SysAllocString((*it).m_str);

	SafeArrayUnaccessData(psa);

	pVal->parray = psa;

	return S_OK;
}



STDMETHODIMP CGrowler::get_UseUDP(VARIANT_BOOL* pVal)
{
	*pVal = m_isUseUDP; 
	return S_OK;
}

STDMETHODIMP CGrowler::put_UseUDP(VARIANT_BOOL newVal)
{
	m_isUseUDP = newVal;
	return S_OK;
}



// Utilities

static char* string_to_utf8_alloc(const char* str) 
{
	unsigned int codepage;
	size_t in_len = strlen(str);
	wchar_t* wcsdata;
	char* mbsdata;
	size_t mbssize, wcssize;

	codepage = GetACP();
	wcssize = MultiByteToWideChar(codepage, 0, str, in_len,  NULL, 0);
	wcsdata = (wchar_t*) malloc((wcssize + 1) * sizeof(wchar_t));
	wcssize = MultiByteToWideChar(codepage, 0, str, in_len, wcsdata, wcssize + 1);
	wcsdata[wcssize] = 0;

	mbssize = WideCharToMultiByte(CP_UTF8, 0, (LPCWSTR) wcsdata, -1, NULL, 0, NULL, NULL);
	mbsdata = (char*) malloc((mbssize + 1));
	mbssize = WideCharToMultiByte(CP_UTF8, 0, (LPCWSTR) wcsdata, -1, mbsdata, mbssize, NULL, NULL);
	mbsdata[mbssize] = 0;
	free(wcsdata);

	return mbsdata;
}

static char* bstr2utf8(BSTR bstr) 
{
	char *converted = _com_util::ConvertBSTRToString(bstr);
	char *utf8 = string_to_utf8_alloc(converted);
	delete[] converted;

	return utf8;
}

static const char** vec2arr(std::vector<CComBSTR> &vec)
{
	const char** arr = new const char*[vec.size()];
	for (int i = 0; i < vec.size(); i++)
		arr[i] = bstr2utf8((vec[i]).m_str);
	return arr;
}


