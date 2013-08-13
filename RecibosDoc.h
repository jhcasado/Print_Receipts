// RecibosDoc.h : interface of the CRecibosDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_RECIBOSDOC_H__9E31BB4A_D234_11D6_8246_004F490B20A0__INCLUDED_)
#define AFX_RECIBOSDOC_H__9E31BB4A_D234_11D6_8246_004F490B20A0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "RecibosSet.h"


class CRecibosDoc : public CDocument
{
protected: // create from serialization only
	CRecibosDoc();
	DECLARE_DYNCREATE(CRecibosDoc)

// Attributes
public:
	CRecibosSet m_recibosSet;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRecibosDoc)
	public:
	virtual BOOL OnNewDocument();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CRecibosDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CRecibosDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RECIBOSDOC_H__9E31BB4A_D234_11D6_8246_004F490B20A0__INCLUDED_)
