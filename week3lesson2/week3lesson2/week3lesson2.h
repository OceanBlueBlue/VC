
// week3lesson2.h : week3lesson2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek3lesson2App:
// �йش����ʵ�֣������ week3lesson2.cpp
//

class Cweek3lesson2App : public CWinApp
{
public:
	Cweek3lesson2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek3lesson2App theApp;
