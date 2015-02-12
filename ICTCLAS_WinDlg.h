

#if !defined(AFX_ICTCLAS_WINDLG_H__0A7D81CA_E8AD_4B60_991B_9EAA84F55306__INCLUDED_)
#define AFX_ICTCLAS_WINDLG_H__0A7D81CA_E8AD_4B60_991B_9EAA84F55306__INCLUDED_

#include "RESULT\Result.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Result\\result.h"
/////////////////////////////////////////////////////////////////////////////
// CICTCLAS_WinDlg dialog

class CICTCLAS_WinDlg : public CDialog
{
// Construction
public:
	CICTCLAS_WinDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CICTCLAS_WinDlg)
	enum { IDD = IDD_ICTCLAS_WIN_DIALOG };
	CString	m_sResult;
	CString	m_sSource;
	UINT	m_nTime;
	int		m_nOutputFormat;
	int		m_nOperateType;
	UINT	m_nResultNum;
	CString	m_sScore;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CICTCLAS_WinDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
protected:
	bool m_bDisable;
	bool IsDataExists();
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CICTCLAS_WinDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBtnAbout();
	afx_msg void OnBtnRun();
	afx_msg void OnBtnFileopen();
	afx_msg void OnClose();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CResult m_ICTCLAS;
	CStdioFile m_fileLog;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ICTCLAS_WINDLG_H__0A7D81CA_E8AD_4B60_991B_9EAA84F55306__INCLUDED_)
