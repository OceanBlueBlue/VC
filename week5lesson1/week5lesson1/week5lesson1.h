
// week5lesson1.h : week5lesson1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek5lesson1App:
// �йش����ʵ�֣������ week5lesson1.cpp
//

class Cweek5lesson1App : public CWinApp
{
public:
	Cweek5lesson1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek5lesson1App theApp;
