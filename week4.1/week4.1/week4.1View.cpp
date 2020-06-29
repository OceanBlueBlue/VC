// week41View.cpp : Cweek41View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week4.1.h"
#endif

#include "week4.1Doc.h"
#include "week4.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek41View

IMPLEMENT_DYNCREATE(Cweek41View, CView)

BEGIN_MESSAGE_MAP(Cweek41View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cweek41View ����/����

Cweek41View::Cweek41View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek41View::~Cweek41View()
{
}

BOOL Cweek41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek41View ����

void Cweek41View::OnDraw(CDC* /*pDC*/)
{
	Cweek41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek41View ���

#ifdef _DEBUG
void Cweek41View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek41Doc* Cweek41View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek41Doc)));
	return (Cweek41Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek41View ��Ϣ�������


void Cweek41View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek41Doc*pDoc = GetDocument();
	pDoc->count = 0;
	pDoc->m = point.x;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void Cweek41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek41Doc*pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->n = point.x;
	int d = pDoc->n - pDoc->m;
	CString ns;
	if (d == 0)
	{

		ns.Format(_T("���û���ƶ����޷�����"));
		dc.TextOutW(20, 50, ns);
		pDoc->s.Format(_T("�ƶ���������ÿ�κ����ƶ����أ�"));
		dc.TextOutW(20, 20, pDoc->s);
	}
	else
	{
		ns.Format(_T("�������ƶ������Լ���"));
		dc.TextOutW(20, 50, ns);
		pDoc->s.Format(_T("�ƶ�������%d��ÿ�κ����ƶ����أ�%d"), pDoc->count, d / pDoc->count);
		dc.TextOutW(20, 20, pDoc->s);
	}

	CView::OnLButtonUp(nFlags, point);
}


void Cweek41View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek41Doc*pDoc = GetDocument();
	pDoc->count += 1;
	CView::OnMouseMove(nFlags, point);
}