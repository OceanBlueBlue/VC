
// week3.1View.cpp : Cweek31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week3.1.h"
#endif

#include "week3.1Doc.h"
#include "week3.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek31View

IMPLEMENT_DYNCREATE(Cweek31View, CView)

BEGIN_MESSAGE_MAP(Cweek31View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cweek31View ����/����

Cweek31View::Cweek31View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
	s1=_T("�����������");
	s2 = _T("�������̧��");
}

Cweek31View::~Cweek31View()
{
}

BOOL Cweek31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek31View ����

void Cweek31View::OnDraw(CDC* pDC)
{
	Cweek31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag)
		pDC->TextOutW(200, 200, s1);

	if (flag==2)
		pDC->TextOutW(200, 200, s2);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek31View ���

#ifdef _DEBUG
void Cweek31View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek31Doc* Cweek31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek31Doc)));
	return (Cweek31Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek31View ��Ϣ�������


void Cweek31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void Cweek31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	flag = 2;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
