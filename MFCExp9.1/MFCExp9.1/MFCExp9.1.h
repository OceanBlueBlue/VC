
// MFCExp9.1.h : MFCExp9.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExp91App:
// �йش����ʵ�֣������ MFCExp9.1.cpp
//

class CMFCExp91App : public CWinApp
{
public:
	CMFCExp91App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExp91App theApp;
