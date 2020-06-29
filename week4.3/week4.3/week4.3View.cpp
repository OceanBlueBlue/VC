
// week4.3View.cpp : Cweek43View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week4.3.h"
#endif

#include "week4.3Doc.h"
#include "week4.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek43View

IMPLEMENT_DYNCREATE(Cweek43View, CView)

BEGIN_MESSAGE_MAP(Cweek43View, CView)
END_MESSAGE_MAP()

// Cweek43View ����/����

Cweek43View::Cweek43View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek43View::~Cweek43View()
{
}

BOOL Cweek43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek43View ����

void Cweek43View::OnDraw(CDC* pDC)
{
	Cweek43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < pDoc->n; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		pDoc->cr.Add(rect);
	}
	for (int i = 0; i < pDoc->n; i++)
	{
		pDC->Ellipse(pDoc->cr[i]);
	}
	if (pDoc->set)
	{
		for (int i = 0; i < pDoc->n; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
		}
		pDoc->set = false;
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek43View ���

#ifdef _DEBUG
void Cweek43View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek43Doc* Cweek43View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek43Doc)));
	return (Cweek43Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek43View ��Ϣ�������


void Cweek43View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	Cweek43Doc*pDoc = GetDocument();
	CRect clientRect;
	GetClientRect(&clientRect);

	if (pDoc->cr[i].bottom >= clientRect.bottom)
	{
		pDoc->b[i] = true;
	}
	if (pDoc->cr[i].top <= clientRect.top)
	{
		pDoc->b[i] = false;
	}
	if (pDoc->b[i])
	{
		pDoc->cr[i].top -= 10;
		pDoc->cr[i].bottom -= 10;
	}
	else
	{
		pDoc->cr[i].top += 10;
		pDoc->cr[i].bottom += 10;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}