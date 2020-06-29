
// MFCExp4.1View.cpp : Cweek4lesson1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week4lesson1.h"
#endif

#include "week4lesson1Doc.h"
#include "week4lesson1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek4lesson1View

IMPLEMENT_DYNCREATE(Cweek4lesson1View, CView)

BEGIN_MESSAGE_MAP(Cweek4lesson1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cweek4lesson1View ����/����

Cweek4lesson1View::Cweek4lesson1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek4lesson1View::~Cweek4lesson1View()
{
}

BOOL Cweek4lesson1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek4lesson1View ����

void Cweek4lesson1View::OnDraw(CDC* pDC)
{
	Cweek4lesson1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->c);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek4lesson1View ���

#ifdef _DEBUG
void Cweek4lesson1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek4lesson1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek4lesson1Doc* Cweek4lesson1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek4lesson1Doc)));
	return (Cweek4lesson1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek4lesson1View ��Ϣ�������


void Cweek4lesson1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek4lesson1Doc*pDoc = GetDocument();
	
	pDoc->c.left = point.x;
	pDoc->c.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cweek4lesson1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek4lesson1Doc*pDoc = GetDocument();
	
	pDoc->c.right= point.x;
	pDoc->c.bottom = point.y;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}


void Cweek4lesson1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	Cweek4lesson1Doc*pDoc = GetDocument();
	pDoc->s.Format(_T("%d,%d"), point.x, point.y);
	dc.TextOutW(20, 20, pDoc->s);
	CView::OnMouseMove(nFlags, point);
}