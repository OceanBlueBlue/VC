
// week3lesson3.h : week3lesson3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek3lesson3App:
// �йش����ʵ�֣������ week3lesson3.cpp
//

class Cweek3lesson3App : public CWinApp
{
public:
	Cweek3lesson3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek3lesson3App theApp;
