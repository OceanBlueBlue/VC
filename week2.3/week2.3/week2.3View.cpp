
// week2.3View.cpp : Cweek23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2.3.h"
#endif

#include "week2.3Doc.h"
#include "week2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek23View

IMPLEMENT_DYNCREATE(Cweek23View, CView)

BEGIN_MESSAGE_MAP(Cweek23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek23View ����/����

Cweek23View::Cweek23View()
{
	// TODO: �ڴ˴���ӹ������
	
	
}

Cweek23View::~Cweek23View()
{
}

BOOL Cweek23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek23View ����

void Cweek23View::OnDraw(CDC* pDC)
{
	Cweek23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	
	if (pDoc->flag)
	{
		pDoc->count++;
	}
	if (pDoc->flag == 2)
	{
		pDoc->s.Format(_T("%d"), pDoc->count);
		pDC->TextOutW(200, 200, pDoc->s);
	}

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek23View ���

#ifdef _DEBUG
void Cweek23View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek23Doc* Cweek23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek23Doc)));
	return (Cweek23Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek23View ��Ϣ�������


void Cweek23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDoc->flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void Cweek23View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDoc->flag = 2;
	Invalidate();
	CView::OnRButtonDown(nFlags, point);
}
