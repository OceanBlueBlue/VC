
// week2lesson1View.cpp : Cweek2lesson1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2lesson1.h"
#endif

#include "week2lesson1Doc.h"
#include "week2lesson1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2lesson1View

IMPLEMENT_DYNCREATE(Cweek2lesson1View, CView)

BEGIN_MESSAGE_MAP(Cweek2lesson1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2lesson1View 构造/析构

Cweek2lesson1View::Cweek2lesson1View()
{
	// TODO: 在此处添加构造代码

}

Cweek2lesson1View::~Cweek2lesson1View()
{
}

BOOL Cweek2lesson1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek2lesson1View 绘制

void Cweek2lesson1View::OnDraw(CDC* /*pDC*/)
{
	Cweek2lesson1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek2lesson1View 诊断

#ifdef _DEBUG
void Cweek2lesson1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2lesson1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2lesson1Doc* Cweek2lesson1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2lesson1Doc)));
	return (Cweek2lesson1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2lesson1View 消息处理程序


void Cweek2lesson1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	int r = rand()% (point.x - point.y) + point.x;

	dc.Ellipse(point.x - r, point.y - r, point.x + r, point.y + r);
	
	CView::OnLButtonDown(nFlags, point);
}
