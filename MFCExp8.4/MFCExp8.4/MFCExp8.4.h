
// MFCExp8.4.h : MFCExp8.4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExp84App:
// �йش����ʵ�֣������ MFCExp8.4.cpp
//

class CMFCExp84App : public CWinApp
{
public:
	CMFCExp84App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExp84App theApp;
