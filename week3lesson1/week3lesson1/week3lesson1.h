
// week3lesson1.h : week3lesson1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek3lesson1App:
// �йش����ʵ�֣������ week3lesson1.cpp
//

class Cweek3lesson1App : public CWinApp
{
public:
	Cweek3lesson1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek3lesson1App theApp;
