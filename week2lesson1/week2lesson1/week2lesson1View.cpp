
// week2lesson1View.cpp : Cweek2lesson1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2lesson1.h"
#endif

#include "week2lesson1Doc.h"
#include "week2lesson1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2lesson1View

IMPLEMENT_DYNCREATE(Cweek2lesson1View, CView)

BEGIN_MESSAGE_MAP(Cweek2lesson1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2lesson1View ����/����

Cweek2lesson1View::Cweek2lesson1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek2lesson1View::~Cweek2lesson1View()
{
}

BOOL Cweek2lesson1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek2lesson1View ����

void Cweek2lesson1View::OnDraw(CDC* /*pDC*/)
{
	Cweek2lesson1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek2lesson1View ���

#ifdef _DEBUG
void Cweek2lesson1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2lesson1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2lesson1Doc* Cweek2lesson1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2lesson1Doc)));
	return (Cweek2lesson1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2lesson1View ��Ϣ�������


void Cweek2lesson1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	int r = rand()% (point.x - point.y) + point.x;

	dc.Ellipse(point.x - r, point.y - r, point.x + r, point.y + r);
	
	CView::OnLButtonDown(nFlags, point);
}
