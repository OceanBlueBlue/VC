
// week5text1View.cpp : CMyweek5text1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week5text1.h"
#endif

#include "week5text1Doc.h"
#include "week5text1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyweek5text1View

IMPLEMENT_DYNCREATE(CMyweek5text1View, CView)

BEGIN_MESSAGE_MAP(CMyweek5text1View, CView)
	ON_COMMAND(ID_size, &CMyweek5text1View::Onsize)
END_MESSAGE_MAP()

// CMyweek5text1View ����/����

CMyweek5text1View::CMyweek5text1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMyweek5text1View::~CMyweek5text1View()
{
}

BOOL CMyweek5text1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMyweek5text1View ����

void CMyweek5text1View::OnDraw(CDC* pDC)
{
	CMyweek5text1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMyweek5text1View ���

#ifdef _DEBUG
void CMyweek5text1View::AssertValid() const
{
	CView::AssertValid();
}

void CMyweek5text1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyweek5text1Doc* CMyweek5text1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyweek5text1Doc)));
	return (CMyweek5text1Doc*) m_pDocument;
}
#endif //_DEBUG


// CMyweek5text1View ��Ϣ�������


void CMyweek5text1View::Onsize(CDC* pDC)
{
	// TODO: �ڴ���������������
	for (int i = 500; i <= 1000; i++)
		pDC->Ellipse(200, 200, i + i % 10, i + i % 10);


}