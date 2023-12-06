; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "人事管理系统.h"
LastPage=0

ClassCount=9
Class1=CMyApp
Class2=CMyDoc
Class3=CMyView
Class4=CMainFrame
Class6=CAboutDlg

ResourceCount=5
Resource1=IDR_MAINFRAME
Resource2=IDD_DIALOG1
Class5=CMySet
Resource3=IDD_ABOUTBOX
Class7=CDlgQuery
Class8=CDlgAdd
Resource4=IDD_MY_FORM
Class9=CDlgadd
Resource5=IDD_DIALOG2

[CLS:CMyApp]
Type=0
HeaderFile=人事管理系统.h
ImplementationFile=人事管理系统.cpp
Filter=N

[CLS:CMyDoc]
Type=0
HeaderFile=人事管理系统Doc.h
ImplementationFile=人事管理系统Doc.cpp
Filter=N

[CLS:CMyView]
Type=0
HeaderFile=人事管理系统View.h
ImplementationFile=人事管理系统View.cpp
Filter=D
LastObject=IDC_BUTTON_DEL
BaseClass=CRecordView
VirtualFilter=RVWC


[CLS:CMySet]
Type=0
HeaderFile=人事管理系统Set.h
ImplementationFile=人事管理系统Set.cpp
Filter=N
BaseClass=CRecordset
VirtualFilter=r

[DB:CMySet]
DB=1
DBType=ODBC
ColumnCount=9
Column1=[职工编号], 4, 4
Column2=[职工姓名], 12, 40
Column3=[职工性别], 12, 60
Column4=[所在部门], -1, 2147483646
Column5=[职工年龄], 5, 2
Column6=[工作时间], 11, 16
Column7=[基本工资], 7, 4
Column8=[职称], 12, 40
Column9=[简历], 12, 510


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=人事管理系统.cpp
ImplementationFile=人事管理系统.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342308480
Control2=IDC_STATIC,static,1342308352
Control3=IDOK,button,1342373889
Control4=IDC_STATIC,static,1342177283

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

[DLG:IDD_MY_FORM]
Type=1
Class=CMyView
ControlCount=25
Control1=IDC_STATIC_ZGBH,static,1342308864
Control2=IDC_STATIC_BT,static,1342308865
Control3=IDC_STATIC_ZGXM,static,1342308864
Control4=IDC_STATIC_ZGXB,static,1342308864
Control5=IDC_STATIC_ZGNL,static,1342308864
Control6=IDC_STATIC_JBGZ,static,1342308864
Control7=IDC_STATIC_SZBM,static,1342308864
Control8=IDC_STATIC_GZSJ,static,1342308864
Control9=IDC_STATIC_JL,static,1342308864
Control10=IDC_STATIC_ZC2,static,1342308864
Control11=IDC_EDIT_ZGBH,edit,1350631552
Control12=IDC_EDIT_ZGXB,edit,1350631552
Control13=IDC_EDIT_ZGNL,edit,1350631552
Control14=IDC_EDIT_JBGZ,edit,1350631552
Control15=IDC_EDIT_ZGXM,edit,1350631552
Control16=IDC_EDIT_SZBM,edit,1350631552
Control17=IDC_EDIT_ZC,edit,1350631552
Control18=IDC_EDIT_JL,edit,1350631552
Control19=IDC_DATETIMEPICKER_GZSJ,SysDateTimePick32,1342242848
Control20=IDC_BUTTON_ADD,button,1342242816
Control21=IDC_BUTTON_DEL,button,1342242816
Control22=IDC_BUTTON_SORT,button,1342242816
Control23=IDC_BUTTON_FILTER,button,1342242816
Control24=IDC_BUTTON_up,button,1342242816
Control25=IDC_BUTTON_down,button,1342242816

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

[DLG:IDD_DIALOG1]
Type=1
Class=CDlgQuery
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_STATIC,button,1342177287

[CLS:CDlgQuery]
Type=0
HeaderFile=DlgQuery.h
ImplementationFile=DlgQuery.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CDlgQuery

[CLS:CDlgAdd]
Type=0
HeaderFile=DlgAdd.h
ImplementationFile=DlgAdd.cpp
BaseClass=CDialog
Filter=D
LastObject=CDlgAdd
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=CDlgadd
ControlCount=21
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC_ZGBH,static,1342308864
Control4=IDC_STATIC_ZGXM,static,1342308864
Control5=IDC_STATIC_ZGXB,static,1342308864
Control6=IDC_STATIC_ZGNL,static,1342308864
Control7=IDC_STATIC_JBGZ,static,1342308864
Control8=IDC_STATIC_SZBM,static,1342308864
Control9=IDC_STATIC_GZSJ,static,1342308864
Control10=IDC_STATIC_JL,static,1342308864
Control11=IDC_STATIC_ZC2,static,1342308864
Control12=IDC_EDIT_ZGBH,edit,1350631552
Control13=IDC_EDIT_ZGXB,edit,1350631552
Control14=IDC_EDIT_ZGNL,edit,1350631552
Control15=IDC_EDIT_JBGZ,edit,1350631552
Control16=IDC_EDIT_ZGXM,edit,1350631552
Control17=IDC_EDIT_SZBM,edit,1350631552
Control18=IDC_EDIT_ZC,edit,1350631552
Control19=IDC_EDIT_JL,edit,1350631552
Control20=IDC_DATETIMEPICKER_GZSJ,SysDateTimePick32,1342242848
Control21=IDC_STATIC,button,1342177287

[CLS:CDlgadd]
Type=0
HeaderFile=Dlgadd1.h
ImplementationFile=Dlgadd1.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

