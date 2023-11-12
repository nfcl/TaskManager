// NetWorkClassDemoDlg.h: 头文件
#ifndef _NETWORKCLASSDEMODLG_H
#define _NETWORKCLASSDEMODLG_H

#include "ProcessInfoDialog.h"
#include "LocalPortInfoDialog.h"

// CNetWorkClassDemoDlg 对话框
class CNetWorkClassDemoDlg : public CDialogEx
{
	// 构造
public:
	// 标准构造函数
	CNetWorkClassDemoDlg(CWnd* pParent = nullptr);

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NETWORKCLASSDEMO_DIALOG };
#endif

protected:
	// DDX/DDV 支持
	virtual void DoDataExchange(CDataExchange* pDX);

	CTabCtrl			m_tab;
	int					m_CurSelTab;
	ProcessInfoDialog	m_page1;
	LocalPortInfoDialog	m_page2;
	CDialog*			pDialog[2];
	// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTcnSelchangeTabMain(NMHDR* pNMHDR, LRESULT* pResult);
};

#endif // !_NETWORKCLASSDEMODLG_H