
// MFCExp8.3.h : MFCExp8.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExp83App:
// �йش����ʵ�֣������ MFCExp8.3.cpp
//

class CMFCExp83App : public CWinApp
{
public:
	CMFCExp83App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExp83App theApp;
