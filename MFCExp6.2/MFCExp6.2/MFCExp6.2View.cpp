
// MFCExp6.2View.cpp : CMFCExp62View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExp6.2.h"
#endif

#include "MFCExp6.2Doc.h"
#include "MFCExp6.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CPoint ptCharacter;
CString str;
CPoint ptOrigin;
bool flag;
// CMFCExp62View

IMPLEMENT_DYNCREATE(CMFCExp62View, CView)

BEGIN_MESSAGE_MAP(CMFCExp62View, CView)
//	ON_WM_KEYDOWN()
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExp62View ����/����

CMFCExp62View::CMFCExp62View()
{
	// TODO: �ڴ˴���ӹ������
	ptCharacter.x = 310;
	ptCharacter.y = 110;
	flag = false;
}

CMFCExp62View::~CMFCExp62View()
{
}

BOOL CMFCExp62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExp62View ����

void CMFCExp62View::OnDraw(CDC* pDC)
{
	CMFCExp62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(300, 100, 1200, 400);
}


// CMFCExp62View ���

#ifdef _DEBUG
void CMFCExp62View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExp62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExp62Doc* CMFCExp62View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExp62Doc)));
	return (CMFCExp62Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExp62View ��Ϣ�������


//void CMFCExp62View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	
//	CView::OnKeyDown(nChar, nRepCnt, nFlags);
//}


void CMFCExp62View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	if (nChar == 13)
	{
		ptCharacter.x = 310;
		ptCharacter.y = ptCharacter.y + 25;
	}
	else if (ptCharacter.x >= 1190&& ptCharacter.y <= 360)
	{
		ptCharacter.x = 310;
		ptCharacter.y = ptCharacter.y + 25;
	}
	else if (ptCharacter.y >= 360)
	{
		CString s = _T("�ѳ����ı���Χ");
		dc.TextOutW(50, 50, s);
	}
	else if (flag)
	{
		ptCharacter.x = ptOrigin.x;
		ptCharacter.y = ptOrigin.y;
		flag = false;
	}
	else
	{
		CClientDC dc(this);
		dc.TextOut(ptCharacter.x, ptCharacter.y, (LPCTSTR)&nChar);
		CSize textsize;
		textsize = dc.GetTextExtent((LPCTSTR)&nChar);
		ptCharacter.x = ptCharacter.x + textsize.cx;
	}
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMFCExp62View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCaretPos(point);
	str.Empty();
	ptOrigin = point;
	flag = true;
	CView::OnLButtonDown(nFlags, point);
}
