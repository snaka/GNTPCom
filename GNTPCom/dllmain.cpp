// dllmain.cpp : DllMain の実装

#include "stdafx.h"
#include "resource.h"
#include "GNTPCom_i.h"
#include "dllmain.h"

CGNTPComModule _AtlModule;

// DLL エントリ ポイント
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved); 
}
