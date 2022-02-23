// ProjectView.h : interface of the CProjectView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROJECTVIEW_H__BC736047_71E2_4D19_AE3C_07C11E46082B__INCLUDED_)
#define AFX_PROJECTVIEW_H__BC736047_71E2_4D19_AE3C_07C11E46082B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CProjectView : public CFormView
{
protected: // create from serialization only
	CProjectView();
	DECLARE_DYNCREATE(CProjectView)

public:
	//{{AFX_DATA(CProjectView)
	enum{ IDD = IDD_PROJECT_FORM };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:
	CProjectDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProjectView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CProjectView)
	afx_msg void OnAPPCalculator();
	afx_msg void OnAPPGraph();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ProjectView.cpp
inline CProjectDoc* CProjectView::GetDocument()
   { return (CProjectDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROJECTVIEW_H__BC736047_71E2_4D19_AE3C_07C11E46082B__INCLUDED_)
