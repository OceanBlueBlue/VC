
// week3.3.h : week3.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek33App:
// �йش����ʵ�֣������ week3.3.cpp
//

class Cweek33App : public CWinApp
{
public:
	Cweek33App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek33App theApp;
