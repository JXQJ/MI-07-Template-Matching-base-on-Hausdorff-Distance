#pragma once

#include "CommonHeader.h"
#include "HausDorffComputer.h"

#include <opencv2\opencv.hpp>
#include "afxwin.h"

// CRecognizeDlg �Ի���

class CRecognizeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CRecognizeDlg)

public:
	CRecognizeDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CRecognizeDlg();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CEdit r_edit;
};
