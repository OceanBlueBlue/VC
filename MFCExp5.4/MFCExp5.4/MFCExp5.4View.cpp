
// MFCExp5.4View.cpp : CMFCExp54View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExp5.4.h"
#endif

#include "MFCExp5.4Doc.h"
#include "MFCExp5.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExp54View

IMPLEMENT_DYNCREATE(CMFCExp54View, CView)

BEGIN_MESSAGE_MAP(CMFCExp54View, CView)
	ON_COMMAND(ID_Line, &CMFCExp54View::OnLine)
	ON_COMMAND(ID_Rectangle, &CMFCExp54View::OnRectangle)
	ON_COMMAND(ID_Circle, &CMFCExp54View::OnCircle)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCExp54View ����/����

CMFCExp54View::CMFCExp54View()
{
	// TODO: �ڴ˴���ӹ������
	line = false;
	rectangle = false;
	circle = false;
}

CMFCExp54View::~CMFCExp54View()
{
}

BOOL CMFCExp54View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExp54View ����

void CMFCExp54View::OnDraw(CDC* /*pDC*/)
{
	CMFCExp54Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExp54View ���

#ifdef _DEBUG
void CMFCExp54View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExp54View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExp54Doc* CMFCExp54View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExp54Doc)));
	return (CMFCExp54Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExp54View ��Ϣ�������


void CMFCExp54View::OnLine()
{
	// TODO: �ڴ���������������
	line = true;
	rectangle = false;
	circle = false;
}


void CMFCExp54View::OnRectangle()
{
	// TODO: �ڴ���������������
	line = false;
	rectangle = true;
	circle = false;
}


void CMFCExp54View::OnCircle()
{
	// TODO: �ڴ���������������
	line = false;
	rectangle = false;
	circle = true;
}


void CMFCExp54View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	p1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCExp54View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	p2 = point;
	//HDC hdc;
	CClientDC dc(this);
	if (line)
	{
		dc.MoveTo(p1);
		dc.LineTo(p2);
	}
	if (rectangle)
	{
		dc.Rectangle(p1.x, p1.y, p2.x, p2.y);
	}
	if (circle)
	{
		dc.Ellipse(p1.x, p1.y, p2.x, p2.y);
	}
	CView::OnLButtonUp(nFlags, point);
}
