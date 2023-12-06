// DlgAdd.cpp : implementation file
//

#include "stdafx.h"
#include "人事管理系统.h"
#include "DlgAdd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgAdd dialog


CDlgAdd::CDlgAdd(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgAdd::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgAdd)
	//m_gzsj = 0;
	m_gzsj=COleDateTime::GetCurrentTime();
	m_jl = _T("");
	m_szbm = _T("");
	m_zc = _T("");
	m_zgxb = _T("");
	m_zgxm = _T("");
	m_jbgz = 0.0f;
	m_zgnl = 0;
	m_zgbh = 0;
	//}}AFX_DATA_INIT
}


void CDlgAdd::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgAdd)
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER_GZSJ, m_gzsj);
	DDX_Text(pDX, IDC_EDIT_JL, m_jl);
	DDX_Text(pDX, IDC_EDIT_SZBM, m_szbm);
	DDX_Text(pDX, IDC_EDIT_ZC, m_zc);
	DDX_Text(pDX, IDC_EDIT_ZGXB, m_zgxb);
	DDX_Text(pDX, IDC_EDIT_ZGXM, m_zgxm);
	DDX_Text(pDX, IDC_EDIT_JBGZ, m_jbgz);
	DDX_Text(pDX, IDC_EDIT_ZGNL, m_zgnl);
	DDX_Text(pDX, IDC_EDIT_ZGBH, m_zgbh);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgAdd, CDialog)
	//{{AFX_MSG_MAP(CDlgAdd)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgAdd message handlers
