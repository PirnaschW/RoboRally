#if !defined(_ROBORALLYDOC_H_)
#define _ROBORALLYDOC_H_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CRoboRallyDoc : public CDocument
{
protected: // create from serialization only
	CRoboRallyDoc();
	DECLARE_DYNCREATE(CRoboRallyDoc)

// Attributes
public:
  Game * m_Game;


// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRoboRallyDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CRoboRallyDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CRoboRallyDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif
