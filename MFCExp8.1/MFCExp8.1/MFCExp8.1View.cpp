
// MFCExp8.1View.cpp : CMFCExp81View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExp8.1.h"
#endif

#include "MFCExp8.1Doc.h"
#include "MFCExp8.1View.h"
#include "MyDlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif



// CMFCExp81View

IMPLEMENT_DYNCREATE(CMFCExp81View, CView)

BEGIN_MESSAGE_MAP(CMFCExp81View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &CMFCExp81View::OnPopout)
END_MESSAGE_MAP()

// CMFCExp81View ����/����

CMFCExp81View::CMFCExp81View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCExp81View::~CMFCExp81View()
{
}

BOOL CMFCExp81View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExp81View ����

void CMFCExp81View::OnDraw(CDC* /*pDC*/)
{
	CMFCExp81Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 1)
	{
		MyDlg1 *dlg = new MyDlg1;
		dlg->e1 = s;
		dlg->Create(IDD_DIALOG1);
		dlg->ShowWindow(1);
		flag = 0;
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExp81View ���

#ifdef _DEBUG
void CMFCExp81View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExp81View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExp81Doc* CMFCExp81View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExp81Doc)));
	return (CMFCExp81Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExp81View ��Ϣ�������


void CMFCExp81View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CFileDialog cfd(true);
	if (cfd.DoModal() == IDOK)
	{
		s = cfd.GetFileName();
	}
	GetDC()->TextOutW(300, 300, s);
	CView::OnLButtonDblClk(nFlags, point);
}


void CMFCExp81View::OnPopout()
{
	// TODO: �ڴ���������������
	flag = 1;
	Invalidate();
}
