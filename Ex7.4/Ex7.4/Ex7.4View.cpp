
// Ex7.4View.cpp : CEx74View ���ʵ��
//

#include "stdafx.h"
#include "MyDialog.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Ex7.4.h"
#endif

#include "Ex7.4Doc.h"
#include "Ex7.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEx74View

IMPLEMENT_DYNCREATE(CEx74View, CView)

BEGIN_MESSAGE_MAP(CEx74View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CEx74View ����/����

CEx74View::CEx74View()
{
	// TODO: �ڴ˴���ӹ������

}

CEx74View::~CEx74View()
{
}

BOOL CEx74View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEx74View ����

void CEx74View::OnDraw(CDC* /*pDC*/)
{
	CEx74Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEx74View ���

#ifdef _DEBUG
void CEx74View::AssertValid() const
{
	CView::AssertValid();
}

void CEx74View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx74Doc* CEx74View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx74Doc)));
	return (CEx74Doc*)m_pDocument;
}
#endif //_DEBUG


// CEx74View ��Ϣ�������


void CEx74View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDialog *pD = new MyDialog;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}
