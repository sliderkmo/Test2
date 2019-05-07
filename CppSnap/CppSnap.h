// CppSnap.h : main header file for the CPPSNAP application
//

#if !defined(AFX_CPPSNAP_H__F4593164_ED6A_11D5_BF9B_0050BAD362D7__INCLUDED_)
#define AFX_CPPSNAP_H__F4593164_ED6A_11D5_BF9B_0050BAD362D7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCppSnapApp:
// See CppSnap.cpp for the implementation of this class
//

class CCppSnapApp : public CWinApp
{
public:
	CCppSnapApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCppSnapApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCppSnapApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CPPSNAP_H__F4593164_ED6A_11D5_BF9B_0050BAD362D7__INCLUDED_)
