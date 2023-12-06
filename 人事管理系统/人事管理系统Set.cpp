// ���¹���ϵͳSet.cpp : implementation of the CMySet class
//

#include "stdafx.h"
#include "���¹���ϵͳ.h"
#include "���¹���ϵͳSet.h"

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
	return _T("ODBC;DSN=���¹���ϵͳ");
}

CString CMySet::GetDefaultSQL()
{
	return _T("[���¹������ݱ�]");
}

void CMySet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CMySet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Int(pFX, _T("[ְ������]"), m_zgnl);
	RFX_Text(pFX, _T("[ְ���Ա�]"), m_zgxb);
	RFX_Text(pFX, _T("[ְ������]"), m_zgxm);
	RFX_Date(pFX, _T("[����ʱ��]"), m_gzsj);
	RFX_Single(pFX, _T("[��������]"), m_jbgz);
	RFX_Text(pFX, _T("[����]"), m_jl);
	RFX_Text(pFX, _T("[���ڲ���]"), m_szbm);
	RFX_Text(pFX, _T("[ְ��]"), m_zc);
	RFX_Long(pFX, _T("[ְ�����]"), m_zgbh);
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
