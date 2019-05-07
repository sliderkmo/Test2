// IdeaDisplay.h  : Declaration of ActiveX Control wrapper class(es) created by Microsoft Visual C++

#pragma once
#pragma warning( disable : 4100 )

/////////////////////////////////////////////////////////////////////////////
// CIdeaDisplay

class CIdeaDisplay : public CWnd
{
protected:
	DECLARE_DYNCREATE(CIdeaDisplay)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x25647549, 0x37D5, 0x11D5, { 0xBF, 0x9B, 0x0, 0x50, 0xBA, 0xD3, 0x62, 0xD7 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// Attributes
public:
	OLE_COLOR GetBackColor();
	void SetBackColor(OLE_COLOR);
	short GetBorderStyle();
	void SetBorderStyle(short);
	OLE_HANDLE GetHWnd();
	void SetHWnd(OLE_HANDLE);
	long GetColorKey();
	void SetColorKey(long);
	long GetHScroll();
	void SetHScroll(long);
	BOOL GetFitToSize();
	void SetFitToSize(BOOL);
	long GetLiveDisplay();
	void SetLiveDisplay(long);
	BOOL GetMouseMessages();
	void SetMouseMessages(BOOL);
	long GetVScroll();
	void SetVScroll(long);
	long GetVerbosity();
	void SetVerbosity(long);
	CString GetMessageCaption();
	void SetMessageCaption(LPCTSTR);

// Operations
public:

	void SetImageHandle(long ImageHandle)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ImageHandle);
	}
	void TraceMouse(BOOL DoTrace, long ColorRef, long Thickness)
	{
		static BYTE parms[] = VTS_BOOL VTS_I4 VTS_I4 ;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DoTrace, ColorRef, Thickness);
	}
	void ClearMouseTrace()
	{
		InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void EnableLiveAOI(BOOL DoAOI, long ColorRef, long Thickness)
	{
		static BYTE parms[] = VTS_BOOL VTS_I4 VTS_I4 ;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DoAOI, ColorRef, Thickness);
	}
	void DisplayMessage(CString msg, long Index, long x, long y, long ColorRef, long iFont, long PointSize)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
    InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, msg.AllocSysString(), Index, x, y, ColorRef, iFont, PointSize);
	}
	void DisplayBitmap(long hbm, long Index, long x, long y, long ColorKey, long Transparency)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms, hbm, Index, x, y, ColorKey, Transparency);
	}
	void ClearBitmap(long Index)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Index);
	}
	void ClearMessage(long Index)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Index);
	}
	void SaveLiveImage(CString path, long Flags)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4 ;
    InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, parms, path.AllocSysString(), Flags);
	}
	void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}


};

#pragma warning( default : 4100 )
