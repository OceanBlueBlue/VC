
// week4lesson1.h : week4lesson1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek4lesson1App:
// �йش����ʵ�֣������ week4lesson1.cpp
//

class Cweek4lesson1App : public CWinApp
{
public:
	Cweek4lesson1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek4lesson1App theApp;
