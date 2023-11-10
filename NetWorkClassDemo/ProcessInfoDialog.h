#pragma once
#include "afxdialogex.h"


// ProcessInfoDialog 对话框

class ProcessInfoDialog : public CDialogEx
{
	DECLARE_DYNAMIC(ProcessInfoDialog)

public:
	ProcessInfoDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ProcessInfoDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROCESSINFO_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
