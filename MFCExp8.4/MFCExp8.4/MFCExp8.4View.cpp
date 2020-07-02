
// MFCExp8.4View.cpp : CMFCExp84View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExp8.4.h"
#endif

#include "MFCExp8.4Doc.h"
#include "MFCExp8.4View.h"
#include "MyDlg.h"
#include "MyDlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExp84View

IMPLEMENT_DYNCREATE(CMFCExp84View, CView)

BEGIN_MESSAGE_MAP(CMFCExp84View, CView)
	ON_COMMAND(ID_POPOUT, &CMFCExp84View::OnPopout)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_COLOR, &CMFCExp84View::OnColor)
END_MESSAGE_MAP()

// CMFCExp84View ����/����

CMFCExp84View::CMFCExp84View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCExp84View::~CMFCExp84View()
{
}

BOOL CMFCExp84View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExp84View ����

void CMFCExp84View::OnDraw(CDC* /*pDC*/)
{
	CMFCExp84Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (flag1 == 1)
	{
		
		CPen p1;
		p1.CreatePen(PS_DASH, 1, RGB(0, 0, 0));
		CClientDC dc(this);
		dc.SelectObject(&p1);
		dc.SelectStockObject(NULL_BRUSH);
		CMFCExp84Doc* pDoc = GetDocument();
		
		for (int i = 0; i < pDoc->cr.GetSize(); i++)
		{
			dc.Ellipse(pDoc->cr[i]);
			if (pt.x > pDoc->cr[i].left&&pt.x<pDoc->cr[i].right&&pt.y>pDoc->cr[i].top&&pt.y < pDoc->cr[i].bottom)
			{
				pDoc->a[i] = 1;
				dc.Rectangle(pDoc->cr[i]);
				for (int j = 0; j < pDoc->cr.GetSize(); j++)
				{
					if (j != i)
					{
						pDoc->a[j] = 0;
					}
				}
			}
		}
		flag1 = 0;
	}
	
}


// CMFCExp84View ���

#ifdef _DEBUG
void CMFCExp84View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExp84View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExp84Doc* CMFCExp84View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExp84Doc)));
	return (CMFCExp84Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExp84View ��Ϣ�������


void CMFCExp84View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
	CMFCExp84Doc* pDoc = GetDocument();
	if (t == IDOK)
	{
		CRect c;
		c.left = dlg.l;
		c.top = dlg.t;
		c.right = dlg.r;
		c.bottom = dlg.b;
		pDoc->cr.Add(c);
		GetDC()->Ellipse(c);
	}
}


void CMFCExp84View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag1 = 1;
	pt = point;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CMFCExp84View::OnColor()
{
	// TODO: �ڴ���������������
	MyDlg1 color;
	int t = color.DoModal();
	if (t == IDOK)
	{
		CMFCExp84Doc* pDoc = GetDocument();
		for (int i = 0; i < pDoc->cr.GetSize(); i++)
		{
			if (pDoc->a[i] == 1)
			{
				CBrush brush;
				brush.CreateSolidBrush(RGB(color.r, color.g, color.b));
				CClientDC dc(this);
				dc.SelectObject(&brush);
				dc.Ellipse(pDoc->cr[i]);
			}
		}
	}
}
