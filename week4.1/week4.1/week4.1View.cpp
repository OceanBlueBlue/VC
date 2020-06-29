// week41View.cpp : Cweek41View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week4.1.h"
#endif

#include "week4.1Doc.h"
#include "week4.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek41View

IMPLEMENT_DYNCREATE(Cweek41View, CView)

BEGIN_MESSAGE_MAP(Cweek41View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cweek41View 构造/析构

Cweek41View::Cweek41View()
{
	// TODO: 在此处添加构造代码

}

Cweek41View::~Cweek41View()
{
}

BOOL Cweek41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek41View 绘制

void Cweek41View::OnDraw(CDC* /*pDC*/)
{
	Cweek41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek41View 诊断

#ifdef _DEBUG
void Cweek41View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek41Doc* Cweek41View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek41Doc)));
	return (Cweek41Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek41View 消息处理程序


void Cweek41View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek41Doc*pDoc = GetDocument();
	pDoc->count = 0;
	pDoc->m = point.x;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void Cweek41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek41Doc*pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->n = point.x;
	int d = pDoc->n - pDoc->m;
	CString ns;
	if (d == 0)
	{

		ns.Format(_T("鼠标没有移动，无法计算"));
		dc.TextOutW(20, 50, ns);
		pDoc->s.Format(_T("移动次数：，每次横向移动像素："));
		dc.TextOutW(20, 20, pDoc->s);
	}
	else
	{
		ns.Format(_T("鼠标存在移动，可以计算"));
		dc.TextOutW(20, 50, ns);
		pDoc->s.Format(_T("移动次数：%d，每次横向移动像素：%d"), pDoc->count, d / pDoc->count);
		dc.TextOutW(20, 20, pDoc->s);
	}

	CView::OnLButtonUp(nFlags, point);
}


void Cweek41View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek41Doc*pDoc = GetDocument();
	pDoc->count += 1;
	CView::OnMouseMove(nFlags, point);
}