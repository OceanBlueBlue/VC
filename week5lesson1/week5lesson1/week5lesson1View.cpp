
// week5lesson1View.cpp : CMyweek5lesson1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week5lesson1.h"
#endif

#include "week5lesson1Doc.h"
#include "week5lesson1View.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyweek5lesson1View

IMPLEMENT_DYNCREATE(Cweek5lesson1View, CView)

BEGIN_MESSAGE_MAP(Cweek5lesson1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_ChangeCircle, &Cweek5lesson1View::OnChangecircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMyweek5lesson1View ����/����

// week5lesson1View ����/����

Cweek5lesson1View::Cweek5lesson1View()
{
	// TODO: �ڴ˴���ӹ������
	set = false;
	t = 0;
	m_clr1 += 20;
}

Cweek5lesson1View::~Cweek5lesson1View()
{
}

BOOL Cweek5lesson1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek5lesson1View ����

void Cweek5lesson1View::OnDraw(CDC* pDC)
{
	Cweek5lesson1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int i = rand() % (100 - 10) + 50;
	int clr = RGB(i, i, m_clr1);
	CBrush newBrush(clr);
	CBrush *oldBrush = pDC->SelectObject(&newBrush);
	SetTimer(1, 500, NULL);
	GetClientRect(&cr);
	cp = cr.CenterPoint();
	cr.left = cp.x - 25; cr.top = cp.y - 25;
	cr.right = cp.x + 25; cr.bottom = cp.y + 25;
	if (set)
	{
		pDC->Ellipse(cr.left -= t, cr.top -= t, cr.right += t, cr.bottom += t);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek5lesson1View ���

#ifdef _DEBUG
void Cweek5lesson1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek5lesson1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek5lesson1Doc* Cweek5lesson1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek5lesson1Doc)));
	return (Cweek5lesson1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek5lesson1View ��Ϣ�������



void Cweek5lesson1View::OnChangecircle()
{
	set = true;
	// TODO: �ڴ���������������
}


void Cweek5lesson1View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	t += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}