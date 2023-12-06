// 人事管理系统Set.cpp : implementation of the CMySet class
//

#include "stdafx.h"
#include "人事管理系统.h"
#include "人事管理系统Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMySet implementation

IMPLEMENT_DYNAMIC(CMySet, CRecordset)

CMySet::CMySet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CMySet)
	m_zgnl = 0;
	m_zgxb = _T("");
	m_zgxm = _T("");
	m_jbgz = 0.0f;
	m_jl = _T("");
	m_szbm = _T("");
	m_zc = _T("");
	m_zgbh = 0;
	m_nFields = 9;
	//}}AFX_FIELD_INIT
	m_gzsj=COleDateTime::GetCurrentTime();
	m_nDefaultType = snapshot;
}

CString CMySet::GetDefaultConnect()
{
	return _T("ODBC;DSN=人事管理系统");
}

CString CMySet::GetDefaultSQL()
{
	return _T("[人事管理数据表]");
}

void CMySet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CMySet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Int(pFX, _T("[职工年龄]"), m_zgnl);
	RFX_Text(pFX, _T("[职工性别]"), m_zgxb);
	RFX_Text(pFX, _T("[职工姓名]"), m_zgxm);
	RFX_Date(pFX, _T("[工作时间]"), m_gzsj);
	RFX_Single(pFX, _T("[基本工资]"), m_jbgz);
	RFX_Text(pFX, _T("[简历]"), m_jl);
	RFX_Text(pFX, _T("[所在部门]"), m_szbm);
	RFX_Text(pFX, _T("[职称]"), m_zc);
	RFX_Long(pFX, _T("[职工编号]"), m_zgbh);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CMySet diagnostics

#ifdef _DEBUG
void CMySet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMySet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
