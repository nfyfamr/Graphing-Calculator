#if !defined(AFX_CALCULATOR_H__6D533D22_868B_4B53_979F_32AF53315CF1__INCLUDED_)
#define AFX_CALCULATOR_H__6D533D22_868B_4B53_979F_32AF53315CF1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Calculator.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCalculator dialog

class CCalculator : public CDialog
{
// Construction
public:
	void Cal(int a);
	void Number(int a);
	CCalculator(CWnd* pParent = NULL);   // standard constructor
	double m_iTwo;
	double m_iOne;
	int m_iCal;
	int m_iSwitch;
	CString m_strNumber;

// Dialog Data
	//{{AFX_DATA(CCalculator)
	enum { IDD = IDD_Calculator };
	CString	m_strLed;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalculator)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCalculator)
	afx_msg void OnButton0();
	afx_msg void OnButton00();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	afx_msg void OnButtonCL();
	afx_msg void OnButtonPlus();
	afx_msg void OnButtonMinus();
	afx_msg void OnButtonMultiple();
	afx_msg void OnButtondivide();
	afx_msg void OnButtonEnter();
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonDot();
	afx_msg void OnButtonSin();
	afx_msg void OnButtonCos();
	afx_msg void OnButtonTan();
	afx_msg void OnButtonExponentialA();
	afx_msg void OnButtonRoot();
	afx_msg void OnButtonLog();
	afx_msg void OnButtonPai();
	afx_msg void OnButtonExponentialE();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCULATOR_H__6D533D22_868B_4B53_979F_32AF53315CF1__INCLUDED_)
