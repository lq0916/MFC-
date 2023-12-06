#if !defined(AFX_DLGQUERY_H__A3023567_5080_4C1A_8479_D31FA00F518F__INCLUDED_)
#define AFX_DLGQUERY_H__A3023567_5080_4C1A_8479_D31FA00F518F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgQuery.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgQuery dialog

class CDlgQuery : public CDialog
{
// Construction
public:
	CDlgQuery(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgQuery)
	enum { IDD = IDD_DIALOG1 };
	CString	m_query;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgQuery)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgQuery)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGQUERY_H__A3023567_5080_4C1A_8479_D31FA00F518F__INCLUDED_)
