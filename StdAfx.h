// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__9B2832A8_EF04_11D4_B2C1_9C97E3000000__INCLUDED_)
#define AFX_STDAFX_H__9B2832A8_EF04_11D4_B2C1_9C97E3000000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT


//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#include <assert.h>
#include <stdio.h>
#include <time.h>

#include "Resource.h"
#include "Forward.h"
#include "Rnd.h"

#include "Card.h"
#include "Option.h"
#include "Tile.h"
#include "Board.h"
#include "Player.h"
#include "Game.h"

#include "DlgGameInit.h"
#include "DlgPlayerInit.h"

#include "RoboRallyDoc.h"
#include "RoboRallyView.h"

#endif // !defined(AFX_STDAFX_H__9B2832A8_EF04_11D4_B2C1_9C97E3000000__INCLUDED_)
