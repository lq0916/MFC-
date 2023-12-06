// DlgQuery.cpp : implementation file
//

#include "stdafx.h"
#include "人事管理系统.h"
#include "DlgQuery.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgQuery dialog


CDlgQuery::CDlgQuery(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgQuery::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgQuery)
	m_query = _T("");
	//}}AFX_DATA_INIT
}


void CDlgQuery::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgQuery)
	DDX_Text(pDX, IDC_EDIT1, m_query);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgQuery, CDialog)
	//{{AFX_MSG_MAP(CDlgQuery)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgQuery message handlers
