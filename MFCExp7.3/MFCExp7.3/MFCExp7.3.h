
// MFCExp7.3.h : MFCExp7.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExp73App:
// �йش����ʵ�֣������ MFCExp7.3.cpp
//

class CMFCExp73App : public CWinApp
{
public:
	CMFCExp73App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExp73App theApp;
