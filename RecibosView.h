// RecibosView.h : interface of the CRecibosView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_RECIBOSVIEW_H__9E31BB4C_D234_11D6_8246_004F490B20A0__INCLUDED_)
#define AFX_RECIBOSVIEW_H__9E31BB4C_D234_11D6_8246_004F490B20A0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CRecibosSet;

class CRecibosView : public CRecordView
{
protected: // create from serialization only
	CRecibosView();
	DECLARE_DYNCREATE(CRecibosView)

public:
	//{{AFX_DATA(CRecibosView)
	enum { IDD = IDD_RECIBOS_FORM };
	CRecibosSet* m_pSet;
	CString	m_strFecha;
	CString	m_strCuerpo;
	//}}AFX_DATA

// Attributes
public:
	CRecibosDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRecibosView)
	public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	CFont m_fntCourier;
	virtual ~CRecibosView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CRecibosView)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in RecibosView.cpp
inline CRecibosDoc* CRecibosView::GetDocument()
   { return (CRecibosDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RECIBOSVIEW_H__9E31BB4C_D234_11D6_8246_004F490B20A0__INCLUDED_)
