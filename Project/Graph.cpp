// Graph.cpp : implementation file
//

#include "stdafx.h"
#include "Project.h"
#include "Graph.h"
#include "Draw.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraph dialog


CGraph::CGraph(CWnd* pParent /*=NULL*/)
	: CDialog(CGraph::IDD, pParent)
{
	//{{AFX_DATA_INIT(CGraph)
	m_strLed = _T("");
	//}}AFX_DATA_INIT
}


void CGraph::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CGraph)
	DDX_Text(pDX, IDC_LED_Calculator, m_strLed);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CGraph, CDialog)
	//{{AFX_MSG_MAP(CGraph)
	ON_BN_CLICKED(IDC_Button_1, OnButton1)
	ON_BN_CLICKED(IDC_Button_0, OnButton0)
	ON_BN_CLICKED(IDC_Button_Dot, OnButtonDot)
	ON_BN_CLICKED(IDC_Button_00, OnButton00)
	ON_BN_CLICKED(IDC_Button_3, OnButton3)
	ON_BN_CLICKED(IDC_Button_2, OnButton2)
	ON_BN_CLICKED(IDC_Button_4, OnButton4)
	ON_BN_CLICKED(IDC_Button_5, OnButton5)
	ON_BN_CLICKED(IDC_Button_6, OnButton6)
	ON_BN_CLICKED(IDC_Button_7, OnButton7)
	ON_BN_CLICKED(IDC_Button_8, OnButton8)
	ON_BN_CLICKED(IDC_Button_9, OnButton9)
	ON_BN_CLICKED(IDC_Button_Plus, OnButtonPlus)
	ON_BN_CLICKED(IDC_Button_Minus, OnButtonMinus)
	ON_BN_CLICKED(IDC_Button_Multiple, OnButtonMultiple)
	ON_BN_CLICKED(IDC_Button_divide, OnButtondivide)
	ON_BN_CLICKED(IDC_Button_Sin, OnButtonSin)
	ON_BN_CLICKED(IDC_Button_Cos, OnButtonCos)
	ON_BN_CLICKED(IDC_Button_Tan, OnButtonTan)
	ON_BN_CLICKED(IDC_Button_ExponentialA, OnButtonExponentialA)
	ON_BN_CLICKED(IDC_Button_Root, OnButtonRoot)
	ON_BN_CLICKED(IDC_Button_Log, OnButtonLog)
	ON_BN_CLICKED(IDC_Button_Pai, OnButtonPai)
	ON_BN_CLICKED(IDC_Button_ExponentialE, OnButtonExponentialE)
	ON_BN_CLICKED(IDC_Button_CL, OnButtonCL)
	ON_BN_CLICKED(IDC_Button_x, OnButtonx)
	ON_BN_CLICKED(IDC_Button_Enter, OnButtonEnter)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraph message handlers

void CGraph::Number(int a)
{
	m_strNumber.Format("%d", a);

	m_strLed += m_strNumber;
	UpdateData(FALSE);
}

void CGraph::OnButton0() 
{
	// TODO: Add your control notification handler code here
	Number(0);
}

void CGraph::OnButton00() 
{
	// TODO: Add your control notification handler code here
	Number(0);	
	Number(0);
}

void CGraph::OnButton1() 
{
	// TODO: Add your control notification handler code here
	Number(1);
}

void CGraph::OnButton2() 
{
	// TODO: Add your control notification handler code here
	Number(2);
}

void CGraph::OnButton3() 
{
	// TODO: Add your control notification handler code here
	Number(3);
}

void CGraph::OnButton4() 
{
	// TODO: Add your control notification handler code here
	Number(4);
}

void CGraph::OnButton5() 
{
	// TODO: Add your control notification handler code here
	Number(5);
}

void CGraph::OnButton6() 
{
	// TODO: Add your control notification handler code here
	Number(6);
}

void CGraph::OnButton7() 
{
	// TODO: Add your control notification handler code here
	Number(7);
}

void CGraph::OnButton8() 
{
	// TODO: Add your control notification handler code here
	Number(8);
}

void CGraph::OnButton9() 
{
	// TODO: Add your control notification handler code here
	Number(9);
}

void CGraph::OnButtonDot() 
{
	// TODO: Add your control notification handler code here
	m_strLed += ".";
	UpdateData(FALSE);
}

BOOL CGraph::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_strLed = "";
	m_strNumber = "";
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CGraph::OnButtonPlus() 
{
	// TODO: Add your control notification handler code here
	m_strLed += "+";
	UpdateData(FALSE);
}

void CGraph::OnButtonMinus() 
{
	// TODO: Add your control notification handler code here
	m_strLed += "-";
	UpdateData(FALSE);
}

void CGraph::OnButtonMultiple() 
{
	// TODO: Add your control notification handler code here
	m_strLed += "*";
	UpdateData(FALSE);
}

void CGraph::OnButtondivide() 
{
	// TODO: Add your control notification handler code here
	m_strLed += "/";
	UpdateData(FALSE);
}

void CGraph::OnButtonSin() 
{
	// TODO: Add your control notification handler code here
	
}

void CGraph::OnButtonCos() 
{
	// TODO: Add your control notification handler code here
	
}

void CGraph::OnButtonTan() 
{
	// TODO: Add your control notification handler code here
	
}

void CGraph::OnButtonExponentialA() 
{
	// TODO: Add your control notification handler code here
	m_strLed += "^";
	UpdateData(FALSE);
}

void CGraph::OnButtonRoot() 
{
	// TODO: Add your control notification handler code here
	
}

void CGraph::OnButtonLog() 
{
	// TODO: Add your control notification handler code here
	
}

void CGraph::OnButtonPai() 
{
	// TODO: Add your control notification handler code here
	
}

void CGraph::OnButtonExponentialE() 
{
	// TODO: Add your control notification handler code here
	
}

void CGraph::OnButtonCL() 
{
	// TODO: Add your control notification handler code here
	m_strLed = "";
	m_strNumber = "";
	UpdateData(FALSE);
}

void CGraph::OnButtonx() 
{
	// TODO: Add your control notification handler code here
	m_strLed += "x";
	UpdateData(FALSE);
}

void CGraph::OnButtonEnter() 
{
	// TODO: Add your control notification handler code here
	CDraw test;
	test.Sendstr(m_strLed);
	test.DoModal();	
}
