
// MFCExp4.1View.cpp : Cweek4lesson1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week4lesson1.h"
#endif

#include "week4lesson1Doc.h"
#include "week4lesson1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek4lesson1View

IMPLEMENT_DYNCREATE(Cweek4lesson1View, CView)

BEGIN_MESSAGE_MAP(Cweek4lesson1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cweek4lesson1View 构造/析构

Cweek4lesson1View::Cweek4lesson1View()
{
	// TODO: 在此处添加构造代码

}

Cweek4lesson1View::~Cweek4lesson1View()
{
}

BOOL Cweek4lesson1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek4lesson1View 绘制

void Cweek4lesson1View::OnDraw(CDC* pDC)
{
	Cweek4lesson1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->c);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek4lesson1View 诊断

#ifdef _DEBUG
void Cweek4lesson1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek4lesson1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek4lesson1Doc* Cweek4lesson1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek4lesson1Doc)));
	return (Cweek4lesson1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek4lesson1View 消息处理程序


void Cweek4lesson1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek4lesson1Doc*pDoc = GetDocument();
	
	pDoc->c.left = point.x;
	pDoc->c.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cweek4lesson1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek4lesson1Doc*pDoc = GetDocument();
	
	pDoc->c.right= point.x;
	pDoc->c.bottom = point.y;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}


void Cweek4lesson1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	Cweek4lesson1Doc*pDoc = GetDocument();
	pDoc->s.Format(_T("%d,%d"), point.x, point.y);
	dc.TextOutW(20, 20, pDoc->s);
	CView::OnMouseMove(nFlags, point);
}