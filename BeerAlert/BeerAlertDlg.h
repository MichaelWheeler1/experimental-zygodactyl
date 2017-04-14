// BeerAlertDlg.h : header file
//

#if !defined(AFX_BEERALERTDLG_H__3DAA204E_063F_4EA7_BE74_0A64C4DE7541__INCLUDED_)
#define AFX_BEERALERTDLG_H__3DAA204E_063F_4EA7_BE74_0A64C4DE7541__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CBeerAlertDlg dialog

class CBeerAlertDlg : public CDialog
{
// Construction
public:
	CBeerAlertDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CBeerAlertDlg)
	enum { IDD = IDD_BEERALERT_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBeerAlertDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CBeerAlertDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BEERALERTDLG_H__3DAA204E_063F_4EA7_BE74_0A64C4DE7541__INCLUDED_)
