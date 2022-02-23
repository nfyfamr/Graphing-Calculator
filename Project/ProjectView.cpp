// ProjectView.cpp : implementation of the CProjectView class
//

#include "stdafx.h"
#include "Project.h"

#include "ProjectDoc.h"
#include "ProjectView.h"

#include "Graph.h"
#include "Calculator.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

CCalculator		g_Calculator;
CGraph			g_Graph;

/////////////////////////////////////////////////////////////////////////////
// CProjectView

IMPLEMENT_DYNCREATE(CProjectView, CFormView)

BEGIN_MESSAGE_MAP(CProjectView, CFormView)
	//{{AFX_MSG_MAP(CProjectView)
	ON_COMMAND(ID_APP_Calculator, OnAPPCalculator)
	ON_COMMAND(ID_APP_Graph, OnAPPGraph)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProjectView construction/destruction

CProjectView::CProjectView()
	: CFormView(CProjectView::IDD)
{
	//{{AFX_DATA_INIT(CProjectView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CProjectView::~CProjectView()
{
}

void CProjectView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProjectView)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BOOL CProjectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CProjectView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	g_Calculator.Create(IDD_Calculator, this);
	g_Calculator.SetWindowPos(&wndTop, 0, 0, 510, 320, SWP_SHOWWINDOW);

	g_Graph.Create(IDD_Graph, this);
}

/////////////////////////////////////////////////////////////////////////////
// CProjectView printing

BOOL CProjectView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProjectView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProjectView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CProjectView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CProjectView diagnostics

#ifdef _DEBUG
void CProjectView::AssertValid() const
{
	CFormView::AssertValid();
}

void CProjectView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CProjectDoc* CProjectView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProjectDoc)));
	return (CProjectDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CProjectView message handlers

void CProjectView::OnAPPCalculator() 
{
	// TODO: Add your command handler code here
	g_Calculator.SetWindowPos(&wndTop, 0, 0, 510, 320, SWP_SHOWWINDOW);
	g_Graph.ShowWindow(SW_HIDE);

}

void CProjectView::OnAPPGraph() 
{
	// TODO: Add your command handler code here
	g_Graph.SetWindowPos(&wndTop, 0, 0, 510, 320, SWP_SHOWWINDOW);
	g_Calculator.ShowWindow(SW_HIDE);

}
