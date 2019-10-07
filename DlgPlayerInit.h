#if !defined(AFX_DLGPLAYERINIT_H__5259B38A_80EF_4453_882B_46CB3F42FEC2__INCLUDED_)
#define AFX_DLGPLAYERINIT_H__5259B38A_80EF_4453_882B_46CB3F42FEC2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgPlayerInit.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DlgPlayerInit dialog

class DlgPlayerInit : public CDialog
{
// Construction
public:
	DlgPlayerInit(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DlgPlayerInit)
	enum { IDD = IDD_PLAYERINIT };
	BOOL	m_Computer;
	CString	m_Player_Name;
	//}}AFX_DATA
  int m_Number;


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DlgPlayerInit)
	protected:
  virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DlgPlayerInit)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGPLAYERINIT_H__5259B38A_80EF_4453_882B_46CB3F42FEC2__INCLUDED_)
