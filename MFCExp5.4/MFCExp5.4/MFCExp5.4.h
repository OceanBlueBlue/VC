
// MFCExp5.4.h : MFCExp5.4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExp54App:
// �йش����ʵ�֣������ MFCExp5.4.cpp
//

class CMFCExp54App : public CWinApp
{
public:
	CMFCExp54App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExp54App theApp;
