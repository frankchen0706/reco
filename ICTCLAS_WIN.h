
#if !defined(AFX_ICTCLAS_WIN_H__B1162952_B2FC_4971_92F4_76B888BDEB1A__INCLUDED_)
#define AFX_ICTCLAS_WIN_H__B1162952_B2FC_4971_92F4_76B888BDEB1A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CICTCLAS_WinApp:
// See ICTCLAS_Win.cpp for the implementation of this class
//

class CICTCLAS_WinApp : public CWinApp
{
public:
	CICTCLAS_WinApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CICTCLAS_WinApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CICTCLAS_WinApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ICTCLAS_WIN_H__B1162952_B2FC_4971_92F4_76B888BDEB1A__INCLUDED_)
