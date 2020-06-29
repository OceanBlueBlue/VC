
// week4.2View.cpp : Cweek42View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week4.2.h"
#endif

#include "week4.2Doc.h"
#include "week4.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek42View

IMPLEMENT_DYNCREATE(Cweek42View, CView)

BEGIN_MESSAGE_MAP(Cweek42View, CView)
	//	ON_WM_CHAR()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// Cweek42View ����/����

Cweek42View::Cweek42View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek42View::~Cweek42View()
{
}

BOOL Cweek42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek42View ����

void Cweek42View::OnDraw(CDC* pDC)
{
	Cweek42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek42View ���

#ifdef _DEBUG
void Cweek42View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek42Doc* Cweek42View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek42Doc)));
	return (Cweek42Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek42View ��Ϣ�������


//void Cweek42View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	
//	CView::OnChar(nChar, nRepCnt, nFlags);
//}


void Cweek42View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek42Doc*pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 10;
			pDoc->cr.right -= 10;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right <= (clientRec.right - clientRec.left))
		{
			pDoc->cr.left += 10;
			pDoc->cr.right += 10;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0)
		{
			pDoc->cr.top -= 10;
			pDoc->cr.bottom -= 10;
		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= (clientRec.bottom - clientRec.top))
		{
			pDoc->cr.top += 10;
			pDoc->cr.bottom += 10;
		}
		break;
	case VK_HOME:
		if (pDoc->cr.left > 0 && pDoc->cr.top>0)
		{
			pDoc->cr.left -= 15;
			pDoc->cr.top -= 10;
		}
		break;
	case VK_END:
		if (pDoc->cr.right <= (clientRec.right - clientRec.left)
			&& pDoc->cr.bottom <= (clientRec.bottom - clientRec.top) && pDoc->cr.left != pDoc->cr.right)
		{
			pDoc->cr.left += 15;
			pDoc->cr.top += 10;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}