// Recibos.h : main header file for the RECIBOS application
//

#if !defined(AFX_RECIBOS_H__9E31BB44_D234_11D6_8246_004F490B20A0__INCLUDED_)
#define AFX_RECIBOS_H__9E31BB44_D234_11D6_8246_004F490B20A0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CRecibosApp:
// See Recibos.cpp for the implementation of this class
//

class CRecibosApp : public CWinApp
{
public:
	CRecibosApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRecibosApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CRecibosApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RECIBOS_H__9E31BB44_D234_11D6_8246_004F490B20A0__INCLUDED_)
