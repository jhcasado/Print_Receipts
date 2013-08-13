// RecibosSet.cpp : implementation of the CRecibosSet class
//

#include "stdafx.h"
#include "Recibos.h"
#include "RecibosSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRecibosSet implementation

IMPLEMENT_DYNAMIC(CRecibosSet, CRecordset)

CRecibosSet::CRecibosSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CRecibosSet)
	m_strNOMBRE = _T("");
	m_strEMPRESA = _T("");
	m_strNIF = _T("");
	m_strCALLE = _T("");
	m_strLOCALIDAD = _T("");
	m_strPROVINCIA = _T("");
	m_strCODPOS = _T("");
	m_strTLF1 = _T("");
	m_strTLF2 = _T("");
	m_strFAX = _T("");
	m_intNCONTABLE = 0;
	m_strBANCO = _T("");
	m_strNCTA = _T("");
	m_strLOCAL = _T("");
	m_douCOEFICIENTE = 0.0;
	m_douPAGO = _T("");
	m_nFields = 16;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}

CString CRecibosSet::GetDefaultConnect()
{
	return _T("ODBC;DRIVER={MICROSOFT ACCESS DRIVER (*.mdb)};DSN='';DBQ=yumbo.mdb");
}

CString CRecibosSet::GetDefaultSQL()
{
	return _T("[tabRECIBOS]");
}

void CRecibosSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CRecibosSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[strNOMBRE]"), m_strNOMBRE);
	RFX_Text(pFX, _T("[strEMPRESA]"), m_strEMPRESA);
	RFX_Text(pFX, _T("[strNIF]"), m_strNIF);
	RFX_Text(pFX, _T("[strCALLE]"), m_strCALLE);
	RFX_Text(pFX, _T("[strLOCALIDAD]"), m_strLOCALIDAD);
	RFX_Text(pFX, _T("[strPROVINCIA]"), m_strPROVINCIA);
	RFX_Text(pFX, _T("[strCODPOS]"), m_strCODPOS);
	RFX_Text(pFX, _T("[strTLF1]"), m_strTLF1);
	RFX_Text(pFX, _T("[strTLF2]"), m_strTLF2);
	RFX_Text(pFX, _T("[strFAX]"), m_strFAX);
	RFX_Long(pFX, _T("[intNCONTABLE]"), m_intNCONTABLE);
	RFX_Text(pFX, _T("[strBANCO]"), m_strBANCO);
	RFX_Text(pFX, _T("[strNCTA]"), m_strNCTA);
	RFX_Text(pFX, _T("[strLOCAL]"), m_strLOCAL);
	RFX_Double(pFX, _T("[douCOEFICIENTE]"), m_douCOEFICIENTE);
	RFX_Text(pFX, _T("[douPAGO]"), m_douPAGO);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CRecibosSet diagnostics

#ifdef _DEBUG
void CRecibosSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CRecibosSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
