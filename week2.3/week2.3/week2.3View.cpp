
// week2.3View.cpp : Cweek23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2.3.h"
#endif

#include "week2.3Doc.h"
#include "week2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek23View

IMPLEMENT_DYNCREATE(Cweek23View, CView)

BEGIN_MESSAGE_MAP(Cweek23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek23View 构造/析构

Cweek23View::Cweek23View()
{
	// TODO: 在此处添加构造代码
	
	
}

Cweek23View::~Cweek23View()
{
}

BOOL Cweek23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek23View 绘制

void Cweek23View::OnDraw(CDC* pDC)
{
	Cweek23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	
	if (pDoc->flag)
	{
		pDoc->count++;
	}
	if (pDoc->flag == 2)
	{
		pDoc->s.Format(_T("%d"), pDoc->count);
		pDC->TextOutW(200, 200, pDoc->s);
	}

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek23View 诊断

#ifdef _DEBUG
void Cweek23View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek23Doc* Cweek23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek23Doc)));
	return (Cweek23Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek23View 消息处理程序


void Cweek23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDoc->flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void Cweek23View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDoc->flag = 2;
	Invalidate();
	CView::OnRButtonDown(nFlags, point);
}
