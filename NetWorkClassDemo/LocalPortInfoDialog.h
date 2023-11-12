#pragma once
#include "afxdialogex.h"


// LocalPortInfoDialog 对话框

class LocalPortInfoDialog : public CDialogEx
{
	DECLARE_DYNAMIC(LocalPortInfoDialog)

public:
	LocalPortInfoDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~LocalPortInfoDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOCALPORTOPENNING_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
