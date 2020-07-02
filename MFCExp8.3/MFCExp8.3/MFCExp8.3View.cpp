
// MFCExp8.3View.cpp : CMFCExp83View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExp8.3.h"
#endif

#include "MFCExp8.3Doc.h"
#include "MFCExp8.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExp83View

IMPLEMENT_DYNCREATE(CMFCExp83View, CView)

BEGIN_MESSAGE_MAP(CMFCExp83View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCExp83View ����/����

CMFCExp83View::CMFCExp83View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCExp83View::~CMFCExp83View()
{
}

BOOL CMFCExp83View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExp83View ����

void CMFCExp83View::OnDraw(CDC* pDC)
{
	CMFCExp83Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->c.left = s_point.x;
	pDoc->c.top = s_point.y;
	pDoc->c.right = e_point.x;
	pDoc->c.bottom = e_point.y;
	pDC->Ellipse(pDoc->c);
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExp83View ���

#ifdef _DEBUG
void CMFCExp83View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExp83View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExp83Doc* CMFCExp83View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExp83Doc)));
	return (CMFCExp83Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExp83View ��Ϣ�������


void CMFCExp83View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	s_point = point;
	e_point = point;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCExp83View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		e_point = point;
		Invalidate();
	}
	
	CView::OnMouseMove(nFlags, point);
}


void CMFCExp83View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}
