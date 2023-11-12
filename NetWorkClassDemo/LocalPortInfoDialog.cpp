// LocalPortInfoDialog.cpp: 实现文件
//

#include "pch.h"
#include "NetWorkClassDemo.h"
#include "afxdialogex.h"
#include "LocalPortInfoDialog.h"


// LocalPortInfoDialog 对话框

IMPLEMENT_DYNAMIC(LocalPortInfoDialog, CDialogEx)

LocalPortInfoDialog::LocalPortInfoDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_LOCALPORTINFO_DIALOG, pParent)
{

}

LocalPortInfoDialog::~LocalPortInfoDialog()
{
}

void LocalPortInfoDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(LocalPortInfoDialog, CDialogEx)
END_MESSAGE_MAP()


// LocalPortInfoDialog 消息处理程序
