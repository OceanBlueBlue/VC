
// week3lesson1View.cpp : Cweek3lesson1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week3lesson1.h"
#endif

#include "week3lesson1Doc.h"
#include "week3lesson1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek3lesson1View

IMPLEMENT_DYNCREATE(Cweek3lesson1View, CView)

BEGIN_MESSAGE_MAP(Cweek3lesson1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek3lesson1View ����/����

Cweek3lesson1View::Cweek3lesson1View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
}

Cweek3lesson1View::~Cweek3lesson1View()
{
}

BOOL Cweek3lesson1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek3lesson1View ����

void Cweek3lesson1View::OnDraw(CDC* pDC)
{
	Cweek3lesson1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (flag)
	{
		
		pDC->Ellipse(cr);
	}

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek3lesson1View ���

#ifdef _DEBUG
void Cweek3lesson1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek3lesson1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek3lesson1Doc* Cweek3lesson1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek3lesson1Doc)));
	return (Cweek3lesson1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek3lesson1View ��Ϣ�������


void Cweek3lesson1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	this->GetClientRect(&cr);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
