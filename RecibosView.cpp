// RecibosView.cpp : implementation of the CRecibosView class
//

#include "stdafx.h"
#include "Recibos.h"

#include "RecibosSet.h"
#include "RecibosDoc.h"
#include "RecibosView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRecibosView

IMPLEMENT_DYNCREATE(CRecibosView, CRecordView)

BEGIN_MESSAGE_MAP(CRecibosView, CRecordView)
	//{{AFX_MSG_MAP(CRecibosView)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRecibosView construction/destruction

CRecibosView::CRecibosView()
	: CRecordView(CRecibosView::IDD)
{
	//{{AFX_DATA_INIT(CRecibosView)
	m_pSet = NULL;
	m_strFecha = _T("");
	m_strCuerpo = _T("");
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CRecibosView::~CRecibosView()
{
}

void CRecibosView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRecibosView)
	DDX_Text(pDX, IDC_EDIT1, m_strFecha);
	DDX_Text(pDX, IDC_EDIT2, m_strCuerpo);
	//}}AFX_DATA_MAP
}

BOOL CRecibosView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CRecordView::PreCreateWindow(cs);
}

void CRecibosView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_recibosSet;
	CRecordView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();


	m_strFecha = "dd/mm/aaaa";
	m_strCuerpo = "Recibo correspondiente al mes mm del año aaaa";
	UpdateData(false);

	m_fntCourier.CreatePointFont(270, "Courier New");

	if(!m_pSet->IsBOF())
	{
		while (!m_pSet->IsEOF())
			m_pSet->MoveNext();
		m_pSet->MoveFirst();
	}
}

/////////////////////////////////////////////////////////////////////////////
// CRecibosView printing

BOOL CRecibosView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	pInfo->m_bDirect = true;
	pInfo->SetMaxPage(3/*m_pSet->GetRecordCount()*/);

	return DoPreparePrinting(pInfo);
}

void CRecibosView::OnBeginPrinting(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
	TRACE0("--> CImp2View::OnBeginPrinting\n");
	
	DEVMODE *dm;
	CPrintDialog pd(false);
/*
	pd.m_pd.Flags = pd.m_pd.Flags ^ PD_NOPAGENUMS;
	pd.m_pd.nMinPage = 1;
	pd.m_pd.nMaxPage = (unsigned short) m_pSet->GetRecordCount();
	TRACE1("NUMERO DE PAGINAS %d\n",pd.m_pd.nMaxPage);
*/	
	if (pd.DoModal() == IDOK)
	{
		dm = pd.GetDevMode();
		dm->dmFields = dm->dmFields | DM_PAPERSIZE | DM_PAPERLENGTH | DM_PAPERWIDTH | DM_PRINTQUALITY;
		dm->dmPaperSize = DMPAPER_USER;
		dm->dmPaperLength = 1050;
		dm->dmPaperWidth = 2200;
		dm->dmPrintQuality = DMRES_DRAFT;

		pDC->ResetDC(dm);
	}

	m_pSet->MoveFirst();

	TRACE0("<-- CImp2View::OnBeginPrinting\n");
}

void CRecibosView::OnEndPrinting(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CRecibosView::OnPrint(CDC* pDC, CPrintInfo* pInfo) 
{
	// TODO: Add your specialized code here and/or call the base class
	char buffer[255];

	pDC->SetMapMode(MM_LOMETRIC);
	pDC->SelectObject(&m_fntCourier);

	sprintf(buffer,"%d",m_pSet->m_intNCONTABLE);
	pDC->TextOut(700,-35,buffer);

	pDC->TextOut(970,-35,"PLAYA DEL INGLES");

	sprintf(buffer,"%.2lf €",strtod(m_pSet->m_douPAGO,NULL));
	pDC->TextOut(1550,-35,buffer);

	pDC->TextOut(850,-130,m_strFecha);

	pDC->TextOut(150,-225,m_strCuerpo);

	sprintf(buffer,"Por los locales: %s",m_pSet->m_strLOCAL);
	pDC->TextOut(150,-275,buffer);

	pInfo->m_bContinuePrinting = true;

	pDC->SelectStockObject(SYSTEM_FONT);

	m_pSet->MoveNext();

	//CRecordView::OnPrint(pDC, pInfo);
}
/////////////////////////////////////////////////////////////////////////////
// CRecibosView diagnostics

#ifdef _DEBUG
void CRecibosView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CRecibosView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CRecibosDoc* CRecibosView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRecibosDoc)));
	return (CRecibosDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CRecibosView database support
CRecordset* CRecibosView::OnGetRecordset()
{
	return m_pSet;
}


/////////////////////////////////////////////////////////////////////////////
// CRecibosView message handlers


void CRecibosView::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CRecordView::OnFilePrintPreview();
}
