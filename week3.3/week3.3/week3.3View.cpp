
// week3.3View.cpp : Cweek33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week3.3.h"
#endif

#include "week3.3Doc.h"
#include "week3.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek33View

IMPLEMENT_DYNCREATE(Cweek33View, CView)

BEGIN_MESSAGE_MAP(Cweek33View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek33View ����/����

Cweek33View::Cweek33View()
{
	// TODO: �ڴ˴���ӹ������
	a = 0; b = 0; c = 0;
	flag = 0;
	flag1 = 0;
	flag2 = 0;
}

Cweek33View::~Cweek33View()
{
}

BOOL Cweek33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek33View ����

void Cweek33View::OnDraw(CDC* pDC)
{
	Cweek33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CString s1, s2,s3;
	CString s = _T("�����Ч");
	CPoint   point;

	GetCursorPos(&point);

	CRect cr1(30, 30, 300, 300);
	CRect cr2(350, 30, 600, 300);
	CRect cr3(650, 30, 900, 300);
	pDC->Rectangle(&cr1);
	pDC->Rectangle(&cr2);
	pDC->Rectangle(&cr3);

	if (flag)
	{
	s1.Format(_T("%d"), a);
	pDC->TextOutW(135,135, s1);
	}
	
	if (flag==2)
	{
		s2.Format(_T("%d"), b);
		pDC->TextOutW(475, 135, s2);
	}

	if (flag1)
	{
		s3.Format(_T("%d"), c);
		pDC->TextOutW(775, 135, s3);
	}

	//if (flag2)
	{
		
		//pDC->TextOutW(point.x, point.y, s);
	}

	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek33View ���

#ifdef _DEBUG
void Cweek33View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek33Doc* Cweek33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek33Doc)));
	return (Cweek33Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek33View ��Ϣ�������


void Cweek33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s = _T("�����Ч");
	
	
	if (point.x > 30 && point.x < 300 && point.y>30 && point.y < 300)
	{
	a = rand();
	flag = 1;
	Invalidate();
	}
	else if (point.x > 350 && point.x < 600 && point.y>30 && point.y < 300)
	{
		b = rand();
		flag = 2;
		Invalidate();
	}
	else
	{
		//flag2 = 1;
		dc.TextOutW(point.x, point.y, s);
		
	}
	//Invalidate();
	
	
	
	CView::OnLButtonDown(nFlags, point);
}


void Cweek33View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (point.x > 650 && point.x < 900 && point.y>30 && point.y < 300)
	{
		c = a + b;
		flag1 = 1;
		Invalidate();
	}
	CView::OnRButtonDown(nFlags, point);
}
