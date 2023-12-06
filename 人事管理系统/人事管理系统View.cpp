// 人事管理系统View.cpp : implementation of the CMyView class
//

#include "stdafx.h"
#include "人事管理系统.h"

#include "人事管理系统Set.h"
#include "人事管理系统Doc.h"
#include "人事管理系统View.h"
#include "DlgQuery.h"
#include "DlgAdd.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyView

IMPLEMENT_DYNCREATE(CMyView, CRecordView)

BEGIN_MESSAGE_MAP(CMyView, CRecordView)
	//{{AFX_MSG_MAP(CMyView)
	ON_BN_CLICKED(IDC_BUTTON_ADD, OnButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_DEL, OnButtonDel)
	ON_BN_CLICKED(IDC_BUTTON_FILTER, OnButtonFilter)
	ON_BN_CLICKED(IDC_BUTTON_SORT, OnButtonSort)
	ON_BN_CLICKED(IDC_BUTTON_up, OnBUTTONup)
	ON_BN_CLICKED(IDC_BUTTON_down, OnBUTTONdown)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyView construction/destruction

CMyView::CMyView()
	: CRecordView(CMyView::IDD)
{
	//{{AFX_DATA_INIT(CMyView)
	m_pSet = NULL;
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CMyView::~CMyView()
{
}

void CMyView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyView)
	DDX_FieldText(pDX, IDC_EDIT_JL, m_pSet->m_jl, m_pSet);
	DDX_FieldText(pDX, IDC_EDIT_SZBM, m_pSet->m_szbm, m_pSet);
	DDX_FieldText(pDX, IDC_EDIT_ZC, m_pSet->m_zc, m_pSet);
	DDX_FieldText(pDX, IDC_EDIT_ZGNL, m_pSet->m_zgnl, m_pSet);
	DDX_FieldText(pDX, IDC_EDIT_ZGXB, m_pSet->m_zgxb, m_pSet);
	DDX_FieldText(pDX, IDC_EDIT_ZGXM, m_pSet->m_zgxm, m_pSet);
	DDX_FieldText(pDX, IDC_EDIT_ZGBH, m_pSet->m_zgbh, m_pSet);
	DDX_FieldText(pDX, IDC_EDIT_JBGZ, m_pSet->m_jbgz, m_pSet);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER_GZSJ, m_pSet->m_gzsj);
	//}}AFX_DATA_MAP
}

BOOL CMyView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CRecordView::PreCreateWindow(cs);
}

void CMyView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_mySet;
	CRecordView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}

/////////////////////////////////////////////////////////////////////////////
// CMyView printing

BOOL CMyView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMyView diagnostics

#ifdef _DEBUG
void CMyView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMyView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMyDoc* CMyView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyDoc)));
	return (CMyDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyView database support
CRecordset* CMyView::OnGetRecordset()
{
	return m_pSet;
}


/////////////////////////////////////////////////////////////////////////////
// CMyView message handlers

void CMyView::OnButtonAdd() 
{
	// TODO: Add your control notification handler code here
	CDlgAdd Dlgadd;
	if(Dlgadd.DoModal() == IDOK)
	{
		m_pSet->AddNew();
		m_pSet->m_zgbh = Dlgadd.m_zgbh;
		m_pSet->m_zc = Dlgadd.m_zc;
		m_pSet->m_gzsj = Dlgadd.m_gzsj;
		m_pSet->m_zgnl = Dlgadd.m_zgnl;
		m_pSet->m_zgxb = Dlgadd.m_zgxb;
		m_pSet->m_zgxm = Dlgadd.m_zgxm;
		m_pSet->m_jl = Dlgadd.m_jl;
		m_pSet->m_jbgz = Dlgadd.m_jbgz;
		m_pSet->m_szbm = Dlgadd.m_szbm;

		m_pSet->Update();//更新记录集
		m_pSet->Requery();//重新提取数据
		m_pSet->MoveLast();//移动下一条数据
		//m_pSet->Edit();
		UpdateData(FALSE);//更新视图
	}
}

void CMyView::OnButtonDel() 
{
	// TODO: Add your control notification handler code here
	m_pSet->Delete();
	m_pSet->MoveNext();
	if(m_pSet->IsEOF())//如果到达数据尾部
		m_pSet->MoveLast();
	m_pSet->Requery();
	UpdateData(FALSE);	
}

void CMyView::OnButtonFilter() 
{
	// TODO: Add your control notification handler code here
	CDlgQuery Dlgquery;
	CString value;
	if(Dlgquery.DoModal() == IDOK)     //窗口模式打开，结束前不能操作父窗口
	{
		value = "职工编号 = +"+Dlgquery.m_query+"";
		m_pSet->m_strFilter = value;
		m_pSet->Requery();
		UpdateData(FALSE);
	}

}

void CMyView::OnButtonSort() 
{
	// TODO: Add your control notification handler code here
	m_pSet->m_strSort = "职工编号";
	m_pSet->Requery();
	UpdateData(FALSE);
}

void CMyView::OnBUTTONup() 
{
	// TODO: Add your control notification handler code here
	if(m_pSet->IsBOF)
		m_pSet->MoveFirst();
	else
		m_pSet->MovePrev();
	UpdateData(FALSE);
}

void CMyView::OnBUTTONdown() 
{
	// TODO: Add your control notification handler code here
	if(m_pSet->IsEOF())//如果到达数据尾部
		m_pSet->MoveLast();
	else 
		m_pSet->MoveNext();
	UpdateData(FALSE);
}
