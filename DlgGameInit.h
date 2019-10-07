#if !defined(AFX_DLGGAMEINIT_H__B8CAE88A_1C4F_4D0F_8924_CF1F382567E7__INCLUDED_)
#define AFX_DLGGAMEINIT_H__B8CAE88A_1C4F_4D0F_8924_CF1F382567E7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgGameInit.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DlgGameInit dialog

class DlgGameInit : public CDialog
{
// Construction
public:
	DlgGameInit(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DlgGameInit)
	enum { IDD = IDD_GAMEINIT };
	int		m_N_Players;
	int		m_N_Cols;
	int		m_N_Rows;
	BOOL	m_Layout_Random;
	BOOL	m_Options_Base;
	BOOL	m_Options_Crash;
	BOOL	m_Options_Radio;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DlgGameInit)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DlgGameInit)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGGAMEINIT_H__B8CAE88A_1C4F_4D0F_8924_CF1F382567E7__INCLUDED_)
