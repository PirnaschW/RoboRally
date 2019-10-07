// RoboRallyDoc.cpp : implementation of the CRoboRallyDoc class
//

#include "stdafx.h"
#include "RoboRally.h"

#include "RoboRallyDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyDoc

IMPLEMENT_DYNCREATE(CRoboRallyDoc, CDocument)

BEGIN_MESSAGE_MAP(CRoboRallyDoc, CDocument)
	//{{AFX_MSG_MAP(CRoboRallyDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyDoc construction/destruction

CRoboRallyDoc::CRoboRallyDoc()
{
	// TODO: add one-time construction code here
  m_Game = NULL;
}

CRoboRallyDoc::~CRoboRallyDoc()
{
  if (m_Game != NULL) delete m_Game;
}

BOOL CRoboRallyDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
  m_Game = Game::Make();

	return m_Game != NULL;
}



/////////////////////////////////////////////////////////////////////////////
// CRoboRallyDoc serialization

void CRoboRallyDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyDoc diagnostics

#ifdef _DEBUG
void CRoboRallyDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CRoboRallyDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyDoc commands
