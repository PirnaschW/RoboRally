// DlgPlayerInit.cpp : implementation file
//

#include "stdafx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DlgPlayerInit dialog


DlgPlayerInit::DlgPlayerInit(CWnd* pParent /*=NULL*/)
	: CDialog(DlgPlayerInit::IDD, pParent)
{
	//{{AFX_DATA_INIT(DlgPlayerInit)
	m_Computer = FALSE;
	m_Player_Name = _T("");
	//}}AFX_DATA_INIT
}


void DlgPlayerInit::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DlgPlayerInit)
	DDX_Check(pDX, IDC_COMPUTER, m_Computer);
	DDX_Text(pDX, IDC_PLAYER_NAME, m_Player_Name);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DlgPlayerInit, CDialog)
	//{{AFX_MSG_MAP(DlgPlayerInit)
	ON_BN_CLICKED(IDCANCEL, OnOK)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DlgPlayerInit message handlers


BOOL DlgPlayerInit::OnInitDialog() 
{
	CDialog::OnInitDialog();

  char Format [32], Text [32];
  GetWindowText(Format,sizeof(Format));
  int n = sprintf(Text,Format,m_Number+1);
  assert(n<sizeof(Text));
  SetWindowText(Text);

  GetDlgItem(IDC_PLAYER)->GetWindowText(Format,sizeof(Format));
  n = sprintf(Text,Format,m_Number+1);
  assert(n<sizeof(Text));
  GetDlgItem(IDC_PLAYER)->SetWindowText(Text);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
void DlgPlayerInit::OnOK()
{
  UpdateData(true);
  if (!m_Computer && m_Player_Name.GetLength() == 0) AfxMessageBox(IDS_NONAME);
  else CDialog::OnOK();
}
