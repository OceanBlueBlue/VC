
// MFCExp8.2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCExp82App: 
// �йش����ʵ�֣������ MFCExp8.2.cpp
//

class CMFCExp82App : public CWinApp
{
public:
	CMFCExp82App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCExp82App theApp;