// RecibosDoc.cpp : implementation of the CRecibosDoc class
//

#include "stdafx.h"
#include "Recibos.h"

#include "RecibosSet.h"
#include "RecibosDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRecibosDoc

IMPLEMENT_DYNCREATE(CRecibosDoc, CDocument)

BEGIN_MESSAGE_MAP(CRecibosDoc, CDocument)
	//{{AFX_MSG_MAP(CRecibosDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRecibosDoc construction/destruction

CRecibosDoc::CRecibosDoc()
{
	// TODO: add one-time construction code here

}

CRecibosDoc::~CRecibosDoc()
{
}

BOOL CRecibosDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CRecibosDoc diagnostics

#ifdef _DEBUG
void CRecibosDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CRecibosDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CRecibosDoc commands
