// DlgGameInit.cpp : implementation file
//

#include "stdafx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DlgGameInit dialog


DlgGameInit::DlgGameInit(CWnd* pParent /*=NULL*/)
	: CDialog(DlgGameInit::IDD, pParent)
{
	//{{AFX_DATA_INIT(DlgGameInit)
	m_N_Players = 2;
	m_N_Cols = 8;
	m_N_Rows = 8;
	m_Layout_Random = true;
	m_Options_Base = true;
	m_Options_Crash = true;
	m_Options_Radio = true;
	//}}AFX_DATA_INIT
}


void DlgGameInit::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DlgGameInit)
	DDX_Text(pDX, IDC_N_PLAYERS, m_N_Players);
	DDV_MinMaxInt(pDX, m_N_Players, 1, 4);
	DDX_Text(pDX, IDC_N_COLS, m_N_Cols);
	DDV_MinMaxInt(pDX, m_N_Cols, 8, 64);
	DDX_Text(pDX, IDC_N_ROWS, m_N_Rows);
	DDV_MinMaxInt(pDX, m_N_Rows, 8, 64);
	DDX_Check(pDX, IDC_LAYOUT_RANDOM, m_Layout_Random);
	DDX_Check(pDX, IDC_OPTIONS_BASE, m_Options_Base);
	DDX_Check(pDX, IDC_OPTIONS_CRASH, m_Options_Crash);
	DDX_Check(pDX, IDC_OPTIONS_RADIO, m_Options_Radio);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DlgGameInit, CDialog)
	//{{AFX_MSG_MAP(DlgGameInit)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DlgGameInit message handlers
