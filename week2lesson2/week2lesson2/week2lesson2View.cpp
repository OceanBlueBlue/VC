
// week2lesson2View.cpp : Cweek2lesson2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2lesson2.h"
#endif

#include "week2lesson2Doc.h"
#include "week2lesson2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2lesson2View

IMPLEMENT_DYNCREATE(Cweek2lesson2View, CView)

BEGIN_MESSAGE_MAP(Cweek2lesson2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2lesson2View ����/����

Cweek2lesson2View::Cweek2lesson2View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
	x = 0;
	y = 0;
}

Cweek2lesson2View::~Cweek2lesson2View()
{
}

BOOL Cweek2lesson2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek2lesson2View ����

void Cweek2lesson2View::OnDraw(CDC* pDC)
{
	Cweek2lesson2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (flag)
	{	
	int r = rand() % (x - y) + x;
	pDC->Ellipse(x - r, y - r, x + r, y + r);
	}
	

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek2lesson2View ���

#ifdef _DEBUG
void Cweek2lesson2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2lesson2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2lesson2Doc* Cweek2lesson2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2lesson2Doc)));
	return (Cweek2lesson2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2lesson2View ��Ϣ�������


void Cweek2lesson2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	flag = 1;
	x = point.x;
	y = point.y;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
