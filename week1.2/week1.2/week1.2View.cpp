
// week1.2View.cpp : Cweek12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week1.2.h"
#endif

#include "week1.2Doc.h"
#include "week1.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek12View

IMPLEMENT_DYNCREATE(Cweek12View, CView)

BEGIN_MESSAGE_MAP(Cweek12View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek12View ����/����

Cweek12View::Cweek12View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
	count = 0;
	
}

Cweek12View::~Cweek12View()
{
}

BOOL Cweek12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek12View ����

void Cweek12View::OnDraw(CDC* pDC)
{
	Cweek12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	if (flag)
	{
		count++;
		s.Format(_T("%d"), count);
		dc.TextOutW(200, 200, s);
	}

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek12View ���

#ifdef _DEBUG
void Cweek12View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek12Doc* Cweek12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek12Doc)));
	return (Cweek12Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek12View ��Ϣ�������


void Cweek12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	
	flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
