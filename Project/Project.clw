; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDraw
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Project.h"
LastPage=0

ClassCount=8
Class1=CProjectApp
Class2=CProjectDoc
Class3=CProjectView
Class4=CMainFrame

ResourceCount=6
Resource1=IDD_PROJECT_FORM
Resource2=IDD_Calculator
Class5=CAboutDlg
Resource3=IDD_Graph
Resource4=IDD_ABOUTBOX
Class6=CGraph
Class7=CCalculator
Resource5=IDR_MAINFRAME
Class8=CDraw
Resource6=IDD_Draw

[CLS:CProjectApp]
Type=0
HeaderFile=Project.h
ImplementationFile=Project.cpp
Filter=N

[CLS:CProjectDoc]
Type=0
HeaderFile=ProjectDoc.h
ImplementationFile=ProjectDoc.cpp
Filter=N

[CLS:CProjectView]
Type=0
HeaderFile=ProjectView.h
ImplementationFile=ProjectView.cpp
Filter=D
BaseClass=CFormView
VirtualFilter=VWC
LastObject=ID_APP_Calculator


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=Project.cpp
ImplementationFile=Project.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177294
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_APP_Calculator
Command2=ID_APP_Graph
Command3=ID_APP_EXIT
Command4=ID_APP_ABOUT
CommandCount=4

[DLG:IDD_PROJECT_FORM]
Type=1
Class=CProjectView
ControlCount=0

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_Calculator]
Type=1
Class=CCalculator
ControlCount=27
Control1=IDC_LED_Calculator,edit,1350631552
Control2=IDC_Button_7,button,1342242816
Control3=IDC_Button_8,button,1342242816
Control4=IDC_Button_9,button,1342242816
Control5=IDC_Button_Plus,button,1342242816
Control6=IDC_Button_Minus,button,1342242816
Control7=IDC_Button_Multiple,button,1342242816
Control8=IDC_Button_divide,button,1342242816
Control9=IDC_Button_4,button,1342242816
Control10=IDC_Button_5,button,1342242816
Control11=IDC_Button_6,button,1342242816
Control12=IDC_Button_Sin,button,1342242816
Control13=IDC_Button_Cos,button,1342242816
Control14=IDC_Button_Tan,button,1342242816
Control15=IDC_Button_ExponentialA,button,1342242816
Control16=IDC_Button_1,button,1342242816
Control17=IDC_Button_2,button,1342242816
Control18=IDC_Button_3,button,1342242816
Control19=IDC_Button_Root,button,1342242816
Control20=IDC_Button_Log,button,1342242816
Control21=IDC_Button_Pai,button,1342242816
Control22=IDC_Button_ExponentialE,button,1342242816
Control23=IDC_Button_Dot,button,1342242816
Control24=IDC_Button_0,button,1342242816
Control25=IDC_Button_00,button,1342242816
Control26=IDC_Button_CL,button,1342242816
Control27=IDC_Button_Enter,button,1342242816

[DLG:IDD_Graph]
Type=1
Class=CGraph
ControlCount=29
Control1=IDC_LED_Calculator,edit,1350631552
Control2=IDC_STATIC,static,1342308864
Control3=IDC_Button_7,button,1342242816
Control4=IDC_Button_8,button,1342242816
Control5=IDC_Button_9,button,1342242816
Control6=IDC_Button_Plus,button,1342242816
Control7=IDC_Button_Minus,button,1342242816
Control8=IDC_Button_Multiple,button,1342242816
Control9=IDC_Button_divide,button,1342242816
Control10=IDC_Button_4,button,1342242816
Control11=IDC_Button_5,button,1342242816
Control12=IDC_Button_6,button,1342242816
Control13=IDC_Button_Sin,button,1342242816
Control14=IDC_Button_Cos,button,1342242816
Control15=IDC_Button_Tan,button,1342242816
Control16=IDC_Button_ExponentialA,button,1342242816
Control17=IDC_Button_1,button,1342242816
Control18=IDC_Button_2,button,1342242816
Control19=IDC_Button_3,button,1342242816
Control20=IDC_Button_Root,button,1342242816
Control21=IDC_Button_Log,button,1342242816
Control22=IDC_Button_Pai,button,1342242816
Control23=IDC_Button_ExponentialE,button,1342242816
Control24=IDC_Button_Dot,button,1342242816
Control25=IDC_Button_0,button,1342242816
Control26=IDC_Button_00,button,1342242816
Control27=IDC_Button_CL,button,1342242816
Control28=IDC_Button_x,button,1342242816
Control29=IDC_Button_Enter,button,1342242816

[CLS:CGraph]
Type=0
HeaderFile=Graph.h
ImplementationFile=Graph.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_LED_Calculator
VirtualFilter=dWC

[CLS:CCalculator]
Type=0
HeaderFile=Calculator.h
ImplementationFile=Calculator.cpp
BaseClass=CDialog
Filter=D
LastObject=CCalculator
VirtualFilter=dWC

[DLG:IDD_Draw]
Type=1
Class=CDraw
ControlCount=0

[CLS:CDraw]
Type=0
HeaderFile=Draw.h
ImplementationFile=Draw.cpp
BaseClass=CDialog
Filter=D
LastObject=CDraw
VirtualFilter=dWC

