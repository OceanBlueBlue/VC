
// week5text2View.cpp : Cweek5text2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week5text2.h"
#endif

#include "week5text2Doc.h"
#include "week5text2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek5text2View

IMPLEMENT_DYNCREATE(Cweek5text2View, CView)

BEGIN_MESSAGE_MAP(Cweek5text2View, CView)
END_MESSAGE_MAP()

// Cweek5text2View ����/����

Cweek5text2View::Cweek5text2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek5text2View::~Cweek5text2View()
{
}

BOOL Cweek5text2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek5text2View ����

void Cweek5text2View::OnDraw(CDC* /*pDC*/)
{
	Cweek5text2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek5text2View ���

#ifdef _DEBUG
void Cweek5text2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek5text2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek5text2Doc* Cweek5text2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek5text2Doc)));
	return (Cweek5text2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek5text2View ��Ϣ�������
