
// week2lesson4View.cpp : Cweek2lesson4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2lesson4.h"
#endif

#include "week2lesson4Doc.h"
#include "week2lesson4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2lesson4View

IMPLEMENT_DYNCREATE(Cweek2lesson4View, CView)

BEGIN_MESSAGE_MAP(Cweek2lesson4View, CView)
END_MESSAGE_MAP()

// Cweek2lesson4View ����/����

Cweek2lesson4View::Cweek2lesson4View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek2lesson4View::~Cweek2lesson4View()
{
}

BOOL Cweek2lesson4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek2lesson4View ����

void Cweek2lesson4View::OnDraw(CDC* pDC)
{
	Cweek2lesson4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int red = 129, green = 216, blue = 207;
	int color = RGB(red, green, blue);
	
	CBrush brush(color);
	CBrush* pOldBrush = pDC->SelectObject(&brush);

	CRect rc;
	GetClientRect(&rc);
	pDC->Ellipse(rc.left, rc.top, rc.right, rc.bottom);

	pDC->SelectObject(pOldBrush);
	pDC->FillPath();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek2lesson4View ���

#ifdef _DEBUG
void Cweek2lesson4View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2lesson4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2lesson4Doc* Cweek2lesson4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2lesson4Doc)));
	return (Cweek2lesson4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2lesson4View ��Ϣ�������
