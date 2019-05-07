// IdeaDisplay.cpp  : Definition of ActiveX Control wrapper class(es) created by Microsoft Visual C++


#include "stdafx.h"
#include "IdeaDisplay.h"

/////////////////////////////////////////////////////////////////////////////
// CIdeaDisplay

IMPLEMENT_DYNCREATE(CIdeaDisplay, CWnd)

// CIdeaDisplay properties
OLE_COLOR CIdeaDisplay::GetBackColor()
{
	OLE_COLOR result;
	GetProperty(DISPID_BACKCOLOR, VT_I4, (void*)&result);
	return result;
}

void CIdeaDisplay::SetBackColor(OLE_COLOR propVal)
{
	SetProperty(DISPID_BACKCOLOR, VT_I4, propVal);
}

short CIdeaDisplay::GetBorderStyle()
{
	short result;
	GetProperty(DISPID_BORDERSTYLE, VT_I2, (void*)&result);
	return result;
}

void CIdeaDisplay::SetBorderStyle(short propVal)
{
	SetProperty(DISPID_BORDERSTYLE, VT_I2, propVal);
}

OLE_HANDLE CIdeaDisplay::GetHWnd()
{
	OLE_HANDLE result;
	GetProperty(DISPID_HWND, VT_I4, (void*)&result);
	return result;
}

void CIdeaDisplay::SetHWnd(OLE_HANDLE propVal)
{
	SetProperty(DISPID_HWND, VT_I4, propVal);
}

long CIdeaDisplay::GetColorKey()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CIdeaDisplay::SetColorKey(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

long CIdeaDisplay::GetHScroll()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void CIdeaDisplay::SetHScroll(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

BOOL CIdeaDisplay::GetFitToSize()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void CIdeaDisplay::SetFitToSize(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

long CIdeaDisplay::GetLiveDisplay()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void CIdeaDisplay::SetLiveDisplay(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

BOOL CIdeaDisplay::GetMouseMessages()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void CIdeaDisplay::SetMouseMessages(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

long CIdeaDisplay::GetVScroll()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void CIdeaDisplay::SetVScroll(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

long CIdeaDisplay::GetVerbosity()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void CIdeaDisplay::SetVerbosity(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

CString CIdeaDisplay::GetMessageCaption()
{
	CString result;
	GetProperty(0x8, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaDisplay::SetMessageCaption(LPCTSTR propVal)
{
	SetProperty(0x8, VT_BSTR, propVal);
}


// CIdeaDisplay operations
