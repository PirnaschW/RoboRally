// RoboRallyView.h : interface of the CRoboRallyView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ROBORALLYVIEW_H__9B2832B0_EF04_11D4_B2C1_9C97E3000000__INCLUDED_)
#define AFX_ROBORALLYVIEW_H__9B2832B0_EF04_11D4_B2C1_9C97E3000000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CRoboRallyView : public CView
{
protected: // create from serialization only
	CRoboRallyView();
	DECLARE_DYNCREATE(CRoboRallyView)

// Attributes
public:
	CRoboRallyDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRoboRallyView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CRoboRallyView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CRoboRallyView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in RoboRallyView.cpp
inline CRoboRallyDoc* CRoboRallyView::GetDocument()
   { return (CRoboRallyDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ROBORALLYVIEW_H__9B2832B0_EF04_11D4_B2C1_9C97E3000000__INCLUDED_)
