
// week2lesson3.h : week2lesson3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek2lesson3App:
// �йش����ʵ�֣������ week2lesson3.cpp
//

class Cweek2lesson3App : public CWinApp
{
public:
	Cweek2lesson3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek2lesson3App theApp;
