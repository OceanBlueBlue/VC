
// week2lesson3View.cpp : Cweek2lesson3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2lesson3.h"
#endif

#include "week2lesson3Doc.h"
#include "week2lesson3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2lesson3View

IMPLEMENT_DYNCREATE(Cweek2lesson3View, CView)

BEGIN_MESSAGE_MAP(Cweek2lesson3View, CView)
END_MESSAGE_MAP()

// Cweek2lesson3View ����/����

Cweek2lesson3View::Cweek2lesson3View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek2lesson3View::~Cweek2lesson3View()
{
}

BOOL Cweek2lesson3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek2lesson3View ����

void Cweek2lesson3View::OnDraw(CDC* pDC)
{
	Cweek2lesson3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rc;
	GetClientRect(&rc);
	pDC->Ellipse(rc.left, rc.top,rc.right,  rc.bottom);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek2lesson3View ���

#ifdef _DEBUG
void Cweek2lesson3View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2lesson3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2lesson3Doc* Cweek2lesson3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2lesson3Doc)));
	return (Cweek2lesson3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2lesson3View ��Ϣ�������
