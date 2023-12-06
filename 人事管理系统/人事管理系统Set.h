// 人事管理系统Set.h : interface of the CMySet class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SET_H__69FBB844_21ED_416C_820A_5605CAE2DBC5__INCLUDED_)
#define AFX_SET_H__69FBB844_21ED_416C_820A_5605CAE2DBC5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMySet : public CRecordset
{
public:
	CMySet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CMySet)

// Field/Param Data
	//{{AFX_FIELD(CMySet, CRecordset)
	int		m_zgnl;
	CString	m_zgxb;
	CString	m_zgxm;
	//CTime	m_gzsj;//更改类型
	COleDateTime m_gzsj;
	float	m_jbgz;
	CString	m_jl;
	CString	m_szbm;
	CString	m_zc;
	long	m_zgbh;
	//}}AFX_FIELD

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMySet)
	public:
	virtual CString GetDefaultConnect();	// Default connection string
	virtual CString GetDefaultSQL(); 	// default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SET_H__69FBB844_21ED_416C_820A_5605CAE2DBC5__INCLUDED_)

