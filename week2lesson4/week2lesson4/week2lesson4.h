
// week2lesson4.h : week2lesson4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek2lesson4App:
// �йش����ʵ�֣������ week2lesson4.cpp
//

class Cweek2lesson4App : public CWinApp
{
public:
	Cweek2lesson4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek2lesson4App theApp;
