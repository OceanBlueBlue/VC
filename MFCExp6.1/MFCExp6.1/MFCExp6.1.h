
// MFCExp6.1.h : MFCExp6.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExp61App:
// �йش����ʵ�֣������ MFCExp6.1.cpp
//

class CMFCExp61App : public CWinApp
{
public:
	CMFCExp61App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExp61App theApp;
