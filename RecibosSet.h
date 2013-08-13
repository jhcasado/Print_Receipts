// RecibosSet.h : interface of the CRecibosSet class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_RECIBOSSET_H__9E31BB4E_D234_11D6_8246_004F490B20A0__INCLUDED_)
#define AFX_RECIBOSSET_H__9E31BB4E_D234_11D6_8246_004F490B20A0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CRecibosSet : public CRecordset
{
public:
	CRecibosSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CRecibosSet)

// Field/Param Data
	//{{AFX_FIELD(CRecibosSet, CRecordset)
	CString	m_strNOMBRE;
	CString	m_strEMPRESA;
	CString	m_strNIF;
	CString	m_strCALLE;
	CString	m_strLOCALIDAD;
	CString	m_strPROVINCIA;
	CString	m_strCODPOS;
	CString	m_strTLF1;
	CString	m_strTLF2;
	CString	m_strFAX;
	long	m_intNCONTABLE;
	CString	m_strBANCO;
	CString	m_strNCTA;
	CString	m_strLOCAL;
	double	m_douCOEFICIENTE;
	CString	m_douPAGO;
	//}}AFX_FIELD

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRecibosSet)
	public:
	virtual CString GetDefaultConnect();	// Default connection string
	virtual CString GetDefaultSQL(); 	// default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RECIBOSSET_H__9E31BB4E_D234_11D6_8246_004F490B20A0__INCLUDED_)

