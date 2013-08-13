; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CRecibosView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Recibos.h"
LastPage=0

ClassCount=6
Class1=CRecibosApp
Class2=CRecibosDoc
Class3=CRecibosView
Class4=CMainFrame
Class6=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDD_RECIBOS_FORM
Class5=CRecibosSet
Resource3=IDR_MAINFRAME

[CLS:CRecibosApp]
Type=0
HeaderFile=Recibos.h
ImplementationFile=Recibos.cpp
Filter=N

[CLS:CRecibosDoc]
Type=0
HeaderFile=RecibosDoc.h
ImplementationFile=RecibosDoc.cpp
Filter=N

[CLS:CRecibosView]
Type=0
HeaderFile=RecibosView.h
ImplementationFile=RecibosView.cpp
Filter=D
BaseClass=CRecordView
VirtualFilter=RVWC
LastObject=IDC_BUTTON1


[CLS:CRecibosSet]
Type=0
HeaderFile=RecibosSet.h
ImplementationFile=RecibosSet.cpp
Filter=N

[DB:CRecibosSet]
DB=1
DBType=ODBC
ColumnCount=16
Column1=[strNOMBRE], 12, 100
Column2=[strEMPRESA], 12, 60
Column3=[strNIF], 12, 30
Column4=[strCALLE], 12, 60
Column5=[strLOCALIDAD], 12, 52
Column6=[strPROVINCIA], 12, 50
Column7=[strCODPOS], 12, 10
Column8=[strTLF1], 12, 26
Column9=[strTLF2], 12, 26
Column10=[strFAX], 12, 26
Column11=[intNCONTABLE], 4, 4
Column12=[strBANCO], 12, 50
Column13=[strNCTA], 12, 50
Column14=[strLOCAL], 12, 200
Column15=[douCOEFICIENTE], 8, 8
Column16=[douPAGO], 2, 21


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=Recibos.cpp
ImplementationFile=Recibos.cpp
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
Command1=ID_FILE_PRINT
Command2=ID_FILE_PRINT_PREVIEW
Command3=ID_FILE_PRINT_SETUP
Command4=ID_APP_EXIT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_RECORD_FIRST
Command10=ID_RECORD_PREV
Command11=ID_RECORD_NEXT
Command12=ID_RECORD_LAST
Command13=ID_VIEW_TOOLBAR
Command14=ID_VIEW_STATUS_BAR
Command15=ID_APP_ABOUT
CommandCount=15

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_PRINT
Command2=ID_EDIT_UNDO
Command3=ID_EDIT_CUT
Command4=ID_EDIT_COPY
Command5=ID_EDIT_PASTE
Command6=ID_EDIT_UNDO
Command7=ID_EDIT_CUT
Command8=ID_EDIT_COPY
Command9=ID_EDIT_PASTE
Command10=ID_NEXT_PANE
Command11=ID_PREV_PANE
CommandCount=11

[DLG:IDD_RECIBOS_FORM]
Type=1
Class=CRecibosView
ControlCount=5
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_EDIT2,edit,1350631552

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_EDIT_CUT
Command2=ID_EDIT_COPY
Command3=ID_EDIT_PASTE
Command4=ID_FILE_PRINT
Command5=ID_RECORD_FIRST
Command6=ID_RECORD_PREV
Command7=ID_RECORD_NEXT
Command8=ID_RECORD_LAST
Command9=ID_APP_ABOUT
CommandCount=9

