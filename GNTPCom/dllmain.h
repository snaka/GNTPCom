// dllmain.h : モジュール クラスの宣言

class CGNTPComModule : public CAtlDllModuleT< CGNTPComModule >
{
public :
	DECLARE_LIBID(LIBID_GNTPComLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_GNTPCOM, "{9B675FE3-E72F-4957-8B81-F8BE968606EF}")
};

extern class CGNTPComModule _AtlModule;
