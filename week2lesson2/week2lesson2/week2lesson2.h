
// week2lesson2.h : week2lesson2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek2lesson2App:
// �йش����ʵ�֣������ week2lesson2.cpp
//

class Cweek2lesson2App : public CWinApp
{
public:
	Cweek2lesson2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek2lesson2App theApp;
