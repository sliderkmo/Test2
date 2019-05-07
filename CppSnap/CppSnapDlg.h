// CppSnapDlg.h : header file
//

#if !defined(AFX_CPPSNAPDLG_H__F4593166_ED6A_11D5_BF9B_0050BAD362D7__INCLUDED_)
#define AFX_CPPSNAPDLG_H__F4593166_ED6A_11D5_BF9B_0050BAD362D7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCppSnapDlg dialog

class CCppSnapDlg : public CDialog
{
// Construction
public:
	CCppSnapDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCppSnapDlg)
	enum { IDD = IDD_CPPSNAP_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCppSnapDlg)
	public:
	virtual BOOL DestroyWindow();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCppSnapDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSnapButton();
	afx_msg void OnConfiguration();
	afx_msg void OnVideoAdjustments();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
  DECLARE_EVENTSINK_MAP()
public:
  void OnFrameReady(long FrameNumber );
  void OnNotificationMessage(short MessageCode, long MessageParameter);
  void OnSnap(short Status);
  void OnStreamingTermination(short Status, long NumberFrames);
  void OnSequenceTermination(short Status, long NumberFrames);
private:
  CIdeaFG         *m_pIdeaFG;
  CIdeaDisplay    *m_pIdeaDisplay;
protected:
  void            ResizeForm();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CPPSNAPDLG_H__F4593166_ED6A_11D5_BF9B_0050BAD362D7__INCLUDED_)
