
// week2.1View.cpp : Cweek21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2.1.h"
#endif

#include "week2.1Doc.h"
#include "week2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek21View

IMPLEMENT_DYNCREATE(Cweek21View, CView)

BEGIN_MESSAGE_MAP(Cweek21View, CView)
END_MESSAGE_MAP()

// Cweek21View ����/����

Cweek21View::Cweek21View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek21View::~Cweek21View()
{
}

BOOL Cweek21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek21View ����

void Cweek21View::OnDraw(CDC* pDC)
{
	Cweek21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CString s = _T("����***");
	CString ss;
	int a = 92;
	ss.Format(_T("%d"), a);
	pDC->TextOutW(200, 200, s);
	pDC->TextOutW(230, 230, ss);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek21View ���

#ifdef _DEBUG
void Cweek21View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek21Doc* Cweek21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek21Doc)));
	return (Cweek21Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek21View ��Ϣ�������
