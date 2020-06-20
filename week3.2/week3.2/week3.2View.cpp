
// week3.2View.cpp : Cweek32View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week3.2.h"
#endif

#include "week3.2Doc.h"
#include "week3.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek32View

IMPLEMENT_DYNCREATE(Cweek32View, CView)

BEGIN_MESSAGE_MAP(Cweek32View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek32View ����/����

Cweek32View::Cweek32View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
}

Cweek32View::~Cweek32View()
{
}

BOOL Cweek32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek32View ����

void Cweek32View::OnDraw(CDC* pDC)
{
	Cweek32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//int c = pDoc->a + pDoc->b;
	CString s1 = _T("A + B = ");
	CString s2;
	s2.Format(_T("%d"), pDoc->a + pDoc->b);
	if (flag)
		pDC->TextOutW(200, 200, s1+s2);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek32View ���

#ifdef _DEBUG
void Cweek32View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek32Doc* Cweek32View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek32Doc)));
	return (Cweek32Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek32View ��Ϣ�������


void Cweek32View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
