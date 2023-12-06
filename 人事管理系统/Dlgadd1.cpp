// Dlgadd1.cpp : implementation file
//

#include "stdafx.h"
#include "人事管理系统.h"
#include "Dlgadd1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgadd dialog


CDlgadd::CDlgadd(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgadd::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgadd)
	m_jbhz = _T("");
	m_jl = _T("");
	m_zc = _T("");
	m_zgbh = _T("");
	m_szbm = _T("");
	m_zgnl = 0;
	m_zgxb = _T("");
	m_zgxm = _T("");
	//}}AFX_DATA_INIT
}


void CDlgadd::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgadd)
	DDX_Text(pDX, IDC_EDIT_JBGZ, m_jbhz);
	DDX_Text(pDX, IDC_EDIT_JL, m_jl);
	DDX_Text(pDX, IDC_EDIT_ZC, m_zc);
	DDX_Text(pDX, IDC_EDIT_ZGBH, m_zgbh);
	DDX_Text(pDX, IDC_EDIT_SZBM, m_szbm);
	DDX_Text(pDX, IDC_EDIT_ZGNL, m_zgnl);
	DDX_Text(pDX, IDC_EDIT_ZGXB, m_zgxb);
	DDX_Text(pDX, IDC_EDIT_ZGXM, m_zgxm);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgadd, CDialog)
	//{{AFX_MSG_MAP(CDlgadd)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgadd message handlers
