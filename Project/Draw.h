#if !defined(AFX_DRAW_H__7E46BA9D_64EC_43AD_9D15_ADC4EF974FA8__INCLUDED_)
#define AFX_DRAW_H__7E46BA9D_64EC_43AD_9D15_ADC4EF974FA8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Draw.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDraw dialog
class CGraph;
class CDraw : public CDialog
{
// Construction
public:
	void Sendstr(CString str);
	CString m_strLed;
	LONG initx(LONG x);
	CDraw(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDraw)
	enum { IDD = IDD_Draw };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDraw)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDraw)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAW_H__7E46BA9D_64EC_43AD_9D15_ADC4EF974FA8__INCLUDED_)
