#pragma once
#include "afxwin.h"
#include "afxbutton.h"


class CCalculatorDlg : public CDialogEx
{
public:
	CCalculatorDlg(CWnd* pParent = NULL);

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATOR_DIALOG };
#endif
	CString m_first_num, m_second_num, m_operation;
	afx_msg void OnBnClickedButtonMc();
	afx_msg void OnBnClickedButtonMr();
	afx_msg void OnBnClickedButtonMAdd();
	afx_msg void OnBnClickedButtonMSub();
	afx_msg void OnBnClickedButtonMs();
	afx_msg void OnBnClickedButtonM();
	afx_msg void OnBnClickedButtonPercent();
	afx_msg void OnBnClickedButtonCe();
	afx_msg void OnBnClickedButtonC();
	afx_msg void OnBnClickedButtonBack();
	afx_msg void OnBnClickedButtonReciprocal();
	afx_msg void OnBnClickedButtonPow();
	afx_msg void OnBnClickedButtonSqrt();
	afx_msg void OnBnClickedButtonDiv();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButtonMultiple();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButtonSub();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButtonPlus();
	afx_msg void OnBnClickedButtonNegative();
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButtonDot();
	afx_msg void OnBnClickedButtonEqual();
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	CMFCButton m_button_equal;
	CMFCButton m_button_percent;
	CMFCButton m_button_ce;
	CMFCButton m_button_c;
	CMFCButton m_button_back;
	CMFCButton m_button_reciprocal;
	CMFCButton m_button_pow;
	CMFCButton m_button_sqrt;
	CMFCButton m_button_div;
	CMFCButton m_button_multiple;
	CMFCButton m_button_sub;
	CMFCButton m_button_plus;
	CMFCButton m_button_dot;
	CMFCButton m_button_negative;

	void Set_Work_Text(CString text);
	CBrush m_backBrush; //���̾�α� ����

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();

	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CRect m_rcMinimumDialog;
	CString m_work_text_view;// ȭ��� ���̴� �ؽ�Ʈ
	CString m_log_text_view_front;
	CString m_log_text_view; // back
	bool m_clear_work_text = false;
	bool m_dialog_init_complete = false;
	void Calculate(CString num1, CString num2, CString op);
	void Double2WorkText(const double number, CString & work_text);

	/// <summary>
	/// �ؽ�Ʈ�����̶� ��ư�� ȭ��� �°� ������ �Լ�
	/// </summary>
	void ResizeControls();
	void Change_Buttons_Color(); //��ư���� �ϰ����� �Լ�

public:
	afx_msg void OnEnChangeEditWork();
	BOOL PreTranslateMessage(MSG * pMsg) override;
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};