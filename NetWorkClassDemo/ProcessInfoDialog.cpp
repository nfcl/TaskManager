// ProcessInfoDialog.cpp: 实现文件
//

#include "pch.h"
#include "NetWorkClassDemo.h"
#include "afxdialogex.h"
#include "ProcessInfoDialog.h"


// ProcessInfoDialog 对话框

IMPLEMENT_DYNAMIC(ProcessInfoDialog, CDialogEx)

ProcessInfoDialog::ProcessInfoDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PROCESSINFO_DIALOG, pParent)
{

}

ProcessInfoDialog::~ProcessInfoDialog()
{
}

void ProcessInfoDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ProcessInfoDialog, CDialogEx)
END_MESSAGE_MAP()


// ProcessInfoDialog 消息处理程序
