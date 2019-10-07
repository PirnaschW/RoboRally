// RoboRallyView.cpp : implementation of the CRoboRallyView class
//

#include "stdafx.h"
#include "RoboRally.h"

#include "RoboRallyDoc.h"
#include "RoboRallyView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyView

IMPLEMENT_DYNCREATE(CRoboRallyView, CView)

BEGIN_MESSAGE_MAP(CRoboRallyView, CView)
	//{{AFX_MSG_MAP(CRoboRallyView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyView construction/destruction

CRoboRallyView::CRoboRallyView()
{
	// TODO: add construction code here

}

CRoboRallyView::~CRoboRallyView()
{
}

BOOL CRoboRallyView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyView drawing

void CRoboRallyView::OnDraw(CDC* pDC)
{
	CRoboRallyDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

  if (pDoc->m_Game == NULL) return;

  int X0 =  50;
  int Y0 = 150;
  for (int i=0; i<pDoc->m_Game->m_N_Players;i++)
  {
    pDC->Rectangle(X0+i%2*800,Y0+(i/2)*200,X0+i%2*800+100,Y0+(i/2)*200+150);
  }
}

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyView printing

BOOL CRoboRallyView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CRoboRallyView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CRoboRallyView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyView diagnostics

#ifdef _DEBUG
void CRoboRallyView::AssertValid() const
{
	CView::AssertValid();
}

void CRoboRallyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRoboRallyDoc* CRoboRallyView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRoboRallyDoc)));
	return (CRoboRallyDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CRoboRallyView message handlers
