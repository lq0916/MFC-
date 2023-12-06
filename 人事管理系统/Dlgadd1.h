#if !defined(AFX_DLGADD1_H__24D5746C_9A11_4E6A_B75F_55BC3C15B1B6__INCLUDED_)
#define AFX_DLGADD1_H__24D5746C_9A11_4E6A_B75F_55BC3C15B1B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dlgadd1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgadd dialog

class CDlgadd : public CDialog
{
// Construction
public:
	CDlgadd(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgadd)
	enum { IDD = IDD_DIALOG2 };
	CString	m_jbhz;
	CString	m_jl;
	CString	m_zc;
	CString	m_zgbh;
	CString	m_szbm;
	int		m_zgnl;
	CString	m_zgxb;
	CString	m_zgxm;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgadd)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgadd)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGADD1_H__24D5746C_9A11_4E6A_B75F_55BC3C15B1B6__INCLUDED_)
