
// week2.2View.cpp : Cweek22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2.2.h"
#endif

#include "week2.2Doc.h"
#include "week2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek22View

IMPLEMENT_DYNCREATE(Cweek22View, CView)

BEGIN_MESSAGE_MAP(Cweek22View, CView)
END_MESSAGE_MAP()

// Cweek22View ����/����

Cweek22View::Cweek22View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek22View::~Cweek22View()
{
}

BOOL Cweek22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek22View ����

void Cweek22View::OnDraw(CDC* pDC)
{
	Cweek22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(230, 230, pDoc->ss);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek22View ���

#ifdef _DEBUG
void Cweek22View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek22Doc* Cweek22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek22Doc)));
	return (Cweek22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek22View ��Ϣ�������
