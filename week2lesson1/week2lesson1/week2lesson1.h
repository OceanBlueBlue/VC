
// week2lesson1.h : week2lesson1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek2lesson1App:
// �йش����ʵ�֣������ week2lesson1.cpp
//

class Cweek2lesson1App : public CWinApp
{
public:
	Cweek2lesson1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek2lesson1App theApp;
