
// week3lesson2View.cpp : Cweek3lesson2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week3lesson2.h"
#endif

#include "week3lesson2Doc.h"
#include "week3lesson2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek3lesson2View

IMPLEMENT_DYNCREATE(Cweek3lesson2View, CView)

BEGIN_MESSAGE_MAP(Cweek3lesson2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek3lesson2View ����/����

Cweek3lesson2View::Cweek3lesson2View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);
}

Cweek3lesson2View::~Cweek3lesson2View()
{
}

BOOL Cweek3lesson2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek3lesson2View ����

void Cweek3lesson2View::OnDraw(CDC* pDC)
{
	Cweek3lesson2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek3lesson2View ���

#ifdef _DEBUG
void Cweek3lesson2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek3lesson2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek3lesson2Doc* Cweek3lesson2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek3lesson2Doc)));
	return (Cweek3lesson2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek3lesson2View ��Ϣ�������


void Cweek3lesson2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int a = rand() %50 + 5;
	int b = rand() % 55+ 5;
	CRect cr(point.x-b,point.y-a,point.x+b,point.y+a);
	ca.Add(cr);
	this->Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
