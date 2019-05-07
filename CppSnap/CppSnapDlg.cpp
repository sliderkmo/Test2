// CppSnapDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ideafg.h"
#include "ideadisplay.h"
#include "CppSnap.h"
#include "CppSnapDlg.h"
#include "hdp_lib.h"
#include "ideaocx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

BEGIN_EVENTSINK_MAP(CCppSnapDlg, CDialog)
  ON_EVENT( CCppSnapDlg, 0x100, 1, OnNotificationMessage, VTS_I2 VTS_I4 )
  ON_EVENT( CCppSnapDlg, 0x100, 2, OnSnap, VTS_I2 )
  ON_EVENT( CCppSnapDlg, 0x100, 3, OnStreamingTermination, VTS_I2 VTS_I4 )
  ON_EVENT( CCppSnapDlg, 0x100, 4, OnSequenceTermination, VTS_I2 VTS_I4 )
  ON_EVENT( CCppSnapDlg, 0x100, 5, OnFrameReady, VTS_I4  )
END_EVENTSINK_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCppSnapDlg dialog

CCppSnapDlg::CCppSnapDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCppSnapDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCppSnapDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
  m_pIdeaFG = 0;
}

void CCppSnapDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCppSnapDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCppSnapDlg, CDialog)
	//{{AFX_MSG_MAP(CCppSnapDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_SNAP_BUTTON, OnSnapButton)
	ON_COMMAND(ID_CONFIGURATION, OnConfiguration)
	ON_COMMAND(ID_VIDEO_ADJUSTMENTS, OnVideoAdjustments)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

void CCppSnapDlg::ResizeForm()
{
  long lImageX   = m_pIdeaFG->GetSnapWidth();
  long lImageY   = m_pIdeaFG->GetSnapHeight();
  CButton *pSnap = (CButton *)GetDlgItem(IDC_SNAP_BUTTON);
	CButton *pTrigger = (CButton*) GetDlgItem(IDC_STATIC_TRIGGER);
  long lCaptionY = ::GetSystemMetrics(SM_CYCAPTION);
  long lMenuY    = ::GetSystemMetrics(SM_CYMENU);
  long lBorderX  = ::GetSystemMetrics(SM_CXEDGE);
  long lBorderY  = ::GetSystemMetrics(SM_CYEDGE);
  RECT rcDisp, rcSnap,rcTrigger;
  pSnap->GetWindowRect(&rcSnap);
	pTrigger->GetWindowRect (&rcTrigger);
  long lSnapX    = rcSnap.right - rcSnap.left;
  long lSnapY    = rcSnap.bottom - rcSnap.top;
	long lTriggerX = rcTrigger.right - rcTrigger.left;
	long lTriggerY = rcTrigger.bottom - rcTrigger.top; 
  if( lImageX == 0 )  // some visible default value
    lImageX = 320;

  if( lImageY == 0 )
    lImageY = 240;

  long yBorders = lCaptionY + lMenuY -8;
  long xBorders = 2 * lBorderX;
  SetWindowPos(NULL, 0, 0, xBorders + lImageX + 8, 
               yBorders + lImageY + 
               lSnapY + 12 + 8, SWP_NOMOVE);

  rcSnap.left    = lImageX/2 - lSnapX/2;
  rcSnap.top     = 4;
  rcSnap.right   = rcSnap.left + lSnapX;
  rcSnap.bottom  = rcSnap.top  + lSnapY;
  pSnap->MoveWindow(&rcSnap);
	rcTrigger.left = rcSnap.right + 20;
	rcTrigger.top = rcSnap.top + 5;
	rcTrigger.right = rcTrigger.left + lTriggerX;
	rcTrigger.bottom = rcTrigger.top + lTriggerY;
	pTrigger->MoveWindow (&rcTrigger);
	
  rcDisp.left    = 4;
  rcDisp.top     = yBorders;
  rcDisp.right   = rcDisp.left + lImageX + xBorders;
  rcDisp.bottom  = rcDisp.top  + lImageY + yBorders;
  m_pIdeaDisplay->MoveWindow(&rcDisp);


 // rcDisp.left    = 4;
 // rcDisp.top     = 4;
 // rcDisp.right   = rcDisp.left + lImageX;
 // rcDisp.bottom  = rcDisp.top  + lImageY ;
 // m_pIdeaDisplay->MoveWindow(&rcDisp);
 // rcSnap.left    = 4 + lImageX/2 - lSnapX/2;
 // rcSnap.top     = 4 + lImageY + 6;
 // rcSnap.right   = rcSnap.left + lSnapX;
 // rcSnap.bottom  = rcSnap.top  + lSnapY;
 // pSnap->MoveWindow(&rcSnap);
	//rcTrigger.left = rcSnap.right + 20;
	//rcTrigger.top = rcSnap.top + 5;
	//rcTrigger.right = rcTrigger.left + lTriggerX;
	//rcTrigger.bottom = rcTrigger.top + lTriggerY;
	//pTrigger->MoveWindow (&rcTrigger);
	
}

/////////////////////////////////////////////////////////////////////////////
// CCppSnapDlg message handlers

BOOL CCppSnapDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here

  RECT             rcVideo;
  rcVideo.left   = 21;
  rcVideo.top    = 22;
  rcVideo.right  = 21;
  rcVideo.bottom = 22;
  m_pIdeaDisplay  = (CIdeaDisplay *)GetDlgItem(IDC_IDEADISPLAY1);

  m_pIdeaFG  = new CIdeaFG;
  m_pIdeaFG->Create( " ", 0, rcVideo, this, 0x100 );
  m_pIdeaFG->Open();

  m_pIdeaFG->SetDisplayWindow(m_pIdeaDisplay->GetHWnd());
  m_pIdeaDisplay->SetImageHandle(m_pIdeaFG->GetImageHandle());
  m_pIdeaFG->SetFireSnapEvent(FALSE);

  long iCurrent = m_pIdeaFG->GetDefaultBoardIndex();
  m_pIdeaFG->SetCurrentBoardIndex(iCurrent);
  ResizeForm();
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCppSnapDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCppSnapDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCppSnapDlg::OnSnapButton() 
{
	if(m_pIdeaFG->GetUseTriggers () )
	{
		CString cstTemp = "";
		CButton* pButton = (CButton*) GetDlgItem(IDC_SNAP_BUTTON);
		CStatic* pStatic = (CStatic*) GetDlgItem(IDC_STATIC_TRIGGER);
		pButton->GetWindowText (cstTemp);
		if( strcmp(cstTemp, "Force Trigger") == 0)
		{
			m_pIdeaFG->ForceTrigger ();
			pButton->SetWindowText ("Snap");
      m_pIdeaFG->SetFireSnapEvent(FALSE);
			pStatic->ShowWindow (FALSE);
		}
		else
		{
			pButton->SetWindowText ("Force Trigger");
			pStatic->ShowWindow (TRUE);
      m_pIdeaFG->SetFireSnapEvent(TRUE);
			m_pIdeaFG->SnapInThread ();
		}
	}
	else
  {
    m_pIdeaFG->SetFireSnapEvent(FALSE);
		m_pIdeaFG->Snap();
}
}

BOOL CCppSnapDlg::DestroyWindow() 
{
  if ( m_pIdeaFG )
  {
    delete m_pIdeaFG;
    m_pIdeaFG = 0;
  }	
	return CDialog::DestroyWindow();
}

void CCppSnapDlg::OnConfiguration() 
{
  m_pIdeaFG->ShowConfigDialog(CONFIG_DIALOG_ON | CONFIG_DIALOG_NO_LIVE | CONFIG_DIALOG_NO_STREAMING);
}

void CCppSnapDlg::OnVideoAdjustments() 
{
  m_pIdeaFG->ShowVideoAdjustments(VIDEO_ADJUST_ON);
}

void CCppSnapDlg::OnSnap(short Status)
{
  OnSnapButton();
}

void CCppSnapDlg::OnNotificationMessage(short MessageCode, long MessageParameter)
{
  if (((MessageCode == IDEA_INFO_CONNECTION) && 
       (MessageParameter == IDEA_CONNECTION_REGAINED)) ||
      ((MessageCode == IDEA_INFO_DIALOG_ACTION) &&
        (MessageParameter == DIALOG_UPDATE_DISPLAY)))
    ResizeForm();
}

void CCppSnapDlg::OnFrameReady(long FrameNumber )
{

}

void CCppSnapDlg::OnStreamingTermination(short Status, long NumberFrames)
{

}

void CCppSnapDlg::OnSequenceTermination(short Status, long NumberFrames)
{

}
