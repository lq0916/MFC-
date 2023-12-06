#if !defined(AFX_DLGADD_H__AEE8BD42_6FED_4DB8_AF07_1E85FFCD2BD6__INCLUDED_)
#define AFX_DLGADD_H__AEE8BD42_6FED_4DB8_AF07_1E85FFCD2BD6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgAdd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgAdd dialog

class CDlgAdd : public CDialog
{
// Construction
public:
	CDlgAdd(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgAdd)
	enum { IDD = IDD_DIALOG2 };
	//CTime	m_gzsj;
	COleDateTime m_gzsj;
	CString	m_jl;
	CString	m_szbm;
	CString	m_zc;
	CString	m_zgxb;
	CString	m_zgxm;
	float	m_jbgz;
	int		m_zgnl;
	long	m_zgbh;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgAdd)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgAdd)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGADD_H__AEE8BD42_6FED_4DB8_AF07_1E85FFCD2BD6__INCLUDED_)
