; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=DlgPlayerInit
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "RoboRally.h"
LastPage=0

ClassCount=8
Class1=CRoboRallyApp
Class2=CRoboRallyDoc
Class3=CRoboRallyView
Class4=CMainFrame

ResourceCount=10
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDR_ROBORTYPE
Class5=CAboutDlg
Class6=CChildFrame
Class7=DlgGameInit
Resource4=IDD_PLAYERINIT
Class8=DlgPlayerInit
Resource5=IDD_PLAYERINIT (English (U.S.))
Resource6=IDR_MAINFRAME (English (U.S.))
Resource7=IDR_ROBORTYPE (English (U.S.))
Resource8=IDD_ABOUTBOX (English (U.S.))
Resource9=IDD_GAMEINIT (English (U.S.))
Resource10=IDD_GAMEINIT

[CLS:CRoboRallyApp]
Type=0
HeaderFile=RoboRally.h
ImplementationFile=RoboRally.cpp
Filter=N

[CLS:CRoboRallyDoc]
Type=0
HeaderFile=RoboRallyDoc.h
ImplementationFile=RoboRallyDoc.cpp
Filter=N

[CLS:CRoboRallyView]
Type=0
HeaderFile=RoboRallyView.h
ImplementationFile=RoboRallyView.cpp
Filter=C
LastObject=CRoboRallyView

[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T


[CLS:CChildFrame]
Type=0
HeaderFile=ChildFrm.h
ImplementationFile=ChildFrm.cpp
Filter=M

[CLS:CAboutDlg]
Type=0
HeaderFile=RoboRally.cpp
ImplementationFile=RoboRally.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_PRINT_SETUP
Command4=ID_FILE_MRU_FILE1
Command5=ID_APP_EXIT
Command6=ID_VIEW_TOOLBAR
Command7=ID_VIEW_STATUS_BAR
Command8=ID_HELP_FINDER
Command9=ID_APP_ABOUT
CommandCount=9

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
Command9=ID_CONTEXT_HELP
CommandCount=9

[MNU:IDR_ROBORTYPE]
Type=1
Class=CRoboRallyView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CUT
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_VIEW_TOOLBAR
Command16=ID_VIEW_STATUS_BAR
Command17=ID_WINDOW_NEW
Command18=ID_WINDOW_CASCADE
Command19=ID_WINDOW_TILE_HORZ
Command20=ID_WINDOW_ARRANGE
Command21=ID_HELP_FINDER
Command22=ID_APP_ABOUT
CommandCount=22

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
Command15=ID_CONTEXT_HELP
Command16=ID_HELP
CommandCount=16

[DLG:IDD_GAMEINIT (English (U.S.))]
Type=1
Class=DlgGameInit
ControlCount=18
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_N_PLAYERS,edit,1350631554
Control5=IDC_SPIN_N_PLAYERS,msctls_updown32,1342177334
Control6=IDC_STATIC,static,1342308352
Control7=IDC_N_COLS,edit,1350631554
Control8=IDC_SPIN_N_COLS,msctls_updown32,1342177334
Control9=IDC_STATIC,static,1342308352
Control10=IDC_N_ROWS,edit,1350631554
Control11=IDC_SPIN_N_ROWS,msctls_updown32,1342177334
Control12=IDC_STATIC,static,1342308352
Control13=IDC_STATIC,static,1342308352
Control14=IDC_OPTIONS_BASE,button,1342242819
Control15=IDC_OPTIONS_CRASH,button,1342242819
Control16=IDC_OPTIONS_RADIO,button,1342242819
Control17=IDC_LAYOUT,button,1342242816
Control18=IDC_LAYOUT_RANDOM,button,1342242819

[CLS:DlgGameInit]
Type=0
HeaderFile=DlgGameInit.h
ImplementationFile=DlgGameInit.cpp
BaseClass=CDialog
Filter=D
LastObject=DlgGameInit
VirtualFilter=dWC

[DLG:IDD_PLAYERINIT (English (U.S.))]
Type=1
Class=DlgPlayerInit
ControlCount=3
Control1=IDC_PLAYER,static,1342308352
Control2=IDC_PLAYER_NAME,edit,1350631552
Control3=IDC_COMPUTER,button,1342242819

[CLS:DlgPlayerInit]
Type=0
HeaderFile=DlgPlayerInit.h
ImplementationFile=DlgPlayerInit.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=DlgPlayerInit

[TB:IDR_MAINFRAME (English (U.S.))]
Type=1
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
Command9=ID_CONTEXT_HELP
CommandCount=9

[MNU:IDR_MAINFRAME (English (U.S.))]
Type=1
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_PRINT_SETUP
Command4=ID_FILE_MRU_FILE1
Command5=ID_APP_EXIT
Command6=ID_VIEW_TOOLBAR
Command7=ID_VIEW_STATUS_BAR
Command8=ID_HELP_FINDER
Command9=ID_APP_ABOUT
CommandCount=9

[MNU:IDR_ROBORTYPE (English (U.S.))]
Type=1
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CUT
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_VIEW_TOOLBAR
Command16=ID_VIEW_STATUS_BAR
Command17=ID_WINDOW_NEW
Command18=ID_WINDOW_CASCADE
Command19=ID_WINDOW_TILE_HORZ
Command20=ID_WINDOW_ARRANGE
Command21=ID_HELP_FINDER
Command22=ID_APP_ABOUT
CommandCount=22

[ACL:IDR_MAINFRAME (English (U.S.))]
Type=1
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
Command15=ID_CONTEXT_HELP
Command16=ID_HELP
CommandCount=16

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_GAMEINIT]
Type=1
ControlCount=18
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_N_PLAYERS,edit,1350631554
Control5=IDC_SPIN_N_PLAYERS,msctls_updown32,1342177334
Control6=IDC_STATIC,static,1342308352
Control7=IDC_N_COLS,edit,1350631554
Control8=IDC_SPIN_N_COLS,msctls_updown32,1342177334
Control9=IDC_STATIC,static,1342308352
Control10=IDC_N_ROWS,edit,1350631554
Control11=IDC_SPIN_N_ROWS,msctls_updown32,1342177334
Control12=IDC_STATIC,static,1342308352
Control13=IDC_STATIC,static,1342308352
Control14=IDC_OPTIONS_BASE,button,1342242819
Control15=IDC_OPTIONS_CRASH,button,1342242819
Control16=IDC_OPTIONS_RADIO,button,1342242819
Control17=IDC_LAYOUT,button,1342242816
Control18=IDC_LAYOUT_RANDOM,button,1342242819

[DLG:IDD_PLAYERINIT]
Type=1
ControlCount=3
Control1=IDC_PLAYER,static,1342308352
Control2=IDC_PLAYER_NAME,edit,1350631552
Control3=IDC_COMPUTER,button,1342242819

