#if !defined(AFX_GRAPH_H__95A5B64D_C275_4392_84E2_81366213E726__INCLUDED_)
#define AFX_GRAPH_H__95A5B64D_C275_4392_84E2_81366213E726__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Graph.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CGraph dialog

class CGraph : public CDialog
{
// Construction
public:
	CString m_strNumber;
	void Number(int a);
	CGraph(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CGraph)
	enum { IDD = IDD_Graph };
	CString	m_strLed;	
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGraph)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CGraph)
	afx_msg void OnButton1();
	afx_msg void OnButton0();
	afx_msg void OnButtonDot();
	afx_msg void OnButton00();
	afx_msg void OnButton3();
	afx_msg void OnButton2();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonPlus();
	afx_msg void OnButtonMinus();
	afx_msg void OnButtonMultiple();
	afx_msg void OnButtondivide();
	afx_msg void OnButtonSin();
	afx_msg void OnButtonCos();
	afx_msg void OnButtonTan();
	afx_msg void OnButtonExponentialA();
	afx_msg void OnButtonRoot();
	afx_msg void OnButtonLog();
	afx_msg void OnButtonPai();
	afx_msg void OnButtonExponentialE();
	afx_msg void OnButtonCL();
	afx_msg void OnButtonx();
	afx_msg void OnButtonEnter();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GRAPH_H__95A5B64D_C275_4392_84E2_81366213E726__INCLUDED_)
