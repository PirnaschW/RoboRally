// RoboRally.h : main header file for the ROBORALLY application
//

#if !defined(AFX_ROBORALLY_H__9B2832A6_EF04_11D4_B2C1_9C97E3000000__INCLUDED_)
#define AFX_ROBORALLY_H__9B2832A6_EF04_11D4_B2C1_9C97E3000000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyApp:
// See RoboRally.cpp for the implementation of this class
//

class CRoboRallyApp : public CWinApp
{
public:
	CRoboRallyApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRoboRallyApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CRoboRallyApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ROBORALLY_H__9B2832A6_EF04_11D4_B2C1_9C97E3000000__INCLUDED_)
