// Draw.cpp : implementation file
//

#include "stdafx.h"
#include "Project.h"
#include "Draw.h"
#include "Graph.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDraw dialog


CDraw::CDraw(CWnd* pParent /*=NULL*/)
	: CDialog(CDraw::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDraw)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDraw::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDraw)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDraw, CDialog)
	//{{AFX_MSG_MAP(CDraw)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDraw message handlers

void CDraw::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	dc.MoveTo(0, 300);
	dc.LineTo(1000, 300);
	dc.MoveTo(500, 0);
	dc.LineTo(500, 600);
	dc.TextOut(490, 303, TEXT("0"));

//////////////////////////////////// 함수 확인 메시지
	AfxMessageBox(m_strLed);

//////////////////////////////////// 

////////////////////////////////////

	POINT init;
	dc.MoveTo(500, 300);
	for(init.x = 0; init.x > -1000; init.x--)
	{
		init.y = initx(init.x);
		dc.LineTo((init.x * 2) + 500, -(init.y * 2) + 300);
	}

	dc.MoveTo(500, 300);
	for(init.x = 0; init.x < 1000; init.x++)
	{
		init.y = initx(init.x);
		dc.LineTo((init.x * 2) + 500, -(init.y * 2) + 300);
	}

	// Do not call CDialog::OnPaint() for painting messages
}

LONG CDraw::initx(LONG x)
{
	char* Str = LPSTR(LPCTSTR(m_strLed));
	LONG a = 1;
	int t = -1;
	int n = 0;
	int k = 0;
	char ch[20] = {0};
	int len = m_strLed.GetLength();
	for(int i = 0; i < len; i++)
	{
		if(Str[i] < 48 || Str[i] > 57)
		{
			ch[n] = i;
			if(Str[ch[n]] == 94)
				k = n;
			if(Str[ch[n]] == 120)
				t = n;
			n++;
		}
	}

	if(k != 0)
	{
		int b = len - ch[k] - 1;
		double c = atof(m_strLed.Right(b));
		for(int i = 0; i < c; i++)
			a *= x;
	}
	
	if(atof(Str) == 0 && k == 0)
		a *= x;
	else if(k == 0 && t == -1)
		a *= atof(Str);
	else if(k == 0)
	{
		a *= x;
		a *= atof(Str);
	}
	else if(k != 0 && atof(Str) != 0)
		a *= atof(Str);
	

	n = 1;
	while(ch[n] != 0)
	{
		switch(Str[ch[n]])
		{
		case 43:
			a += atof(m_strLed.Right(len - ch[n] - 1));
			break;
		case 45:
			a -= atof(m_strLed.Right(len - ch[n] - 1));
			break;
		}	
		n++;
	}
	return a;
	
}


void CDraw::Sendstr(CString str)
{
	m_strLed = str;
}
