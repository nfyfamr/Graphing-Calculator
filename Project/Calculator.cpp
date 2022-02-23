// Calculator.cpp : implementation file
//

#include "stdafx.h"
#include "Project.h"
#include "Calculator.h"
#include <cmath>
#include <cstring>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCalculator dialog


CCalculator::CCalculator(CWnd* pParent /*=NULL*/)
	: CDialog(CCalculator::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCalculator)
	m_strLed = _T("");
	//}}AFX_DATA_INIT
}


void CCalculator::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCalculator)
	DDX_Text(pDX, IDC_LED_Calculator, m_strLed);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCalculator, CDialog)
	//{{AFX_MSG_MAP(CCalculator)
	ON_BN_CLICKED(IDC_Button_0, OnButton0)
	ON_BN_CLICKED(IDC_Button_00, OnButton00)
	ON_BN_CLICKED(IDC_Button_1, OnButton1)
	ON_BN_CLICKED(IDC_Button_2, OnButton2)
	ON_BN_CLICKED(IDC_Button_3, OnButton3)
	ON_BN_CLICKED(IDC_Button_4, OnButton4)
	ON_BN_CLICKED(IDC_Button_5, OnButton5)
	ON_BN_CLICKED(IDC_Button_6, OnButton6)
	ON_BN_CLICKED(IDC_Button_7, OnButton7)
	ON_BN_CLICKED(IDC_Button_8, OnButton8)
	ON_BN_CLICKED(IDC_Button_9, OnButton9)
	ON_BN_CLICKED(IDC_Button_CL, OnButtonCL)
	ON_BN_CLICKED(IDC_Button_Plus, OnButtonPlus)
	ON_BN_CLICKED(IDC_Button_Minus, OnButtonMinus)
	ON_BN_CLICKED(IDC_Button_Multiple, OnButtonMultiple)
	ON_BN_CLICKED(IDC_Button_divide, OnButtondivide)
	ON_BN_CLICKED(IDC_Button_Enter, OnButtonEnter)
	ON_BN_CLICKED(IDC_Button_Dot, OnButtonDot)
	ON_BN_CLICKED(IDC_Button_Sin, OnButtonSin)
	ON_BN_CLICKED(IDC_Button_Cos, OnButtonCos)
	ON_BN_CLICKED(IDC_Button_Tan, OnButtonTan)
	ON_BN_CLICKED(IDC_Button_ExponentialA, OnButtonExponentialA)
	ON_BN_CLICKED(IDC_Button_Root, OnButtonRoot)
	ON_BN_CLICKED(IDC_Button_Log, OnButtonLog)
	ON_BN_CLICKED(IDC_Button_Pai, OnButtonPai)
	ON_BN_CLICKED(IDC_Button_ExponentialE, OnButtonExponentialE)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalculator message handlers

void CCalculator::Number(int a)
{
	m_strNumber.Format("%d", a);

	m_strLed += m_strNumber;
	UpdateData(FALSE);

	if(m_iSwitch == 0)
		m_iOne=atof(m_strLed);
	else
		m_iTwo=atof(m_strLed);
}

void CCalculator::Cal(int a)
{
	m_iSwitch = 10;
	m_strLed = "";
	m_strNumber = "";
	m_iCal = a;
	UpdateData(FALSE);
}

void CCalculator::OnButton0() 
{
	// TODO: Add your control notification handler code here
	Number(0);
}

void CCalculator::OnButton00() 
{
	// TODO: Add your control notification handler code here
	Number(0);	
	Number(0);
}

void CCalculator::OnButton1() 
{
	// TODO: Add your control notification handler code here
	Number(1);
}

void CCalculator::OnButton2() 
{
	// TODO: Add your control notification handler code here
	Number(2);
}

void CCalculator::OnButton3() 
{
	// TODO: Add your control notification handler code here
	Number(3);
}

void CCalculator::OnButton4() 
{
	// TODO: Add your control notification handler code here
	Number(4);
}

void CCalculator::OnButton5() 
{
	// TODO: Add your control notification handler code here
	Number(5);
}

void CCalculator::OnButton6() 
{
	// TODO: Add your control notification handler code here
	Number(6);
}

void CCalculator::OnButton7() 
{
	// TODO: Add your control notification handler code here
	Number(7);
}

void CCalculator::OnButton8() 
{
	// TODO: Add your control notification handler code here
	Number(8);
}

void CCalculator::OnButton9() 
{
	// TODO: Add your control notification handler code here
	Number(9);
}

void CCalculator::OnButtonCL()
{
	// TODO: Add your control notification handler code here
	m_iCal = 0;
	m_iOne = 0;
	m_iTwo = 0;
	m_iSwitch = 0;
	m_strLed = "";
	m_strNumber = "";
	UpdateData(FALSE);
}

void CCalculator::OnButtonEnter() 
{
	// TODO: Add your control notification handler code here
	switch(m_iCal)
	{
	case 1:
		m_strLed.Format("%f", m_iOne + m_iTwo);
		break;
	case 2:
		m_strLed.Format("%f", m_iOne - m_iTwo);
		break;
	case 3:
		m_strLed.Format("%f", m_iOne * m_iTwo);
		break;
	case 4:
		m_strLed.Format("%f", m_iOne / m_iTwo);
		break;
	case 5:
		m_strLed.Format("%f", pow(m_iOne, m_iTwo));
		break;
	}

	m_iOne = atof(m_strLed);

//	CCalculator temp;
//	AfxMessageBox(temp.m_strLed);

	UpdateData(FALSE);
}

void CCalculator::OnButtonPlus() 
{
	// TODO: Add your control notification handler code here
	Cal(1);
}

void CCalculator::OnButtonMinus() 
{
	// TODO: Add your control notification handler code here
	Cal(2);
}

void CCalculator::OnButtonMultiple() 
{
	// TODO: Add your control notification handler code here
	Cal(3);
}

void CCalculator::OnButtondivide() 
{
	// TODO: Add your control notification handler code here
	Cal(4);
}


BOOL CCalculator::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_iCal = 0;
	m_iOne = 0;
	m_iTwo = 0;
	m_iSwitch = 0;
	m_strLed = "";
	m_strNumber = "";

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CCalculator::OnButtonDot() 
{
	// TODO: Add your control notification handler code here
	m_strLed += ".";
	UpdateData(FALSE);

	if(m_iSwitch == 0)
		m_iOne = atof(m_strLed);
	else
		m_iTwo = atof(m_strLed);
}

void CCalculator::OnButtonSin() 
{
	// TODO: Add your control notification handler code here
	if(m_strLed == ""){}
	else
	{
		m_strLed.Format("%f", sin(m_iOne * 3.14 /180));
	
		m_iOne = atof(m_strLed);

		UpdateData(FALSE);
	}
}

void CCalculator::OnButtonCos() 
{
	// TODO: Add your control notification handler code here
	if(m_strLed == ""){}
	else
	{
		m_strLed.Format("%f", cos(m_iOne * 3.14 /180));
	
		m_iOne = atof(m_strLed);

		UpdateData(FALSE);
	}
}

void CCalculator::OnButtonTan() 
{
	// TODO: Add your control notification handler code here
	if(m_strLed == ""){}
	else
	{
		m_strLed.Format("%f", tan(m_iOne * 3.14 /180));
	
		m_iOne = atof(m_strLed);

		UpdateData(FALSE);
	}
}

void CCalculator::OnButtonExponentialA() 
{
	// TODO: Add your control notification handler code here
	Cal(5);
}

void CCalculator::OnButtonRoot() 
{
	// TODO: Add your control notification handler code here
	if(m_strLed == ""){}
	else
	{
		m_strLed.Format("%f", sqrt(m_iOne));

		m_iOne = atof(m_strLed);

		UpdateData(FALSE);
	}
}

void CCalculator::OnButtonLog() 
{
	// TODO: Add your control notification handler code here
	if(m_strLed == ""){}
	else
	{
		m_strLed.Format("%f", log(m_iOne) / log(10));

		m_iOne = atof(m_strLed);

		UpdateData(FALSE);
	}
}

void CCalculator::OnButtonPai() 
{
	// TODO: Add your control notification handler code here
	if(m_strLed == "")
	{
		m_strLed.Format("%f", 3.14);
		
		m_iOne = atof(m_strLed);
	
		UpdateData(FALSE);
	}
	else
	{
		m_strLed.Format("%f", m_iOne * 3.14);

		m_iOne = atof(m_strLed);

		UpdateData(FALSE);
	}
}

void CCalculator::OnButtonExponentialE() 
{
	// TODO: Add your control notification handler code here
	if(m_strLed == ""){}
	else
	{
		m_strLed.Format("%f", pow(2.71828, m_iOne));

		m_iOne = atof(m_strLed);

		UpdateData(FALSE);
	}
}

