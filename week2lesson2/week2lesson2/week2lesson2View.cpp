
// week2lesson2View.cpp : Cweek2lesson2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2lesson2.h"
#endif

#include "week2lesson2Doc.h"
#include "week2lesson2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2lesson2View

IMPLEMENT_DYNCREATE(Cweek2lesson2View, CView)

BEGIN_MESSAGE_MAP(Cweek2lesson2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2lesson2View 构造/析构

Cweek2lesson2View::Cweek2lesson2View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
	x = 0;
	y = 0;
}

Cweek2lesson2View::~Cweek2lesson2View()
{
}

BOOL Cweek2lesson2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek2lesson2View 绘制

void Cweek2lesson2View::OnDraw(CDC* pDC)
{
	Cweek2lesson2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (flag)
	{	
	int r = rand() % (x - y) + x;
	pDC->Ellipse(x - r, y - r, x + r, y + r);
	}
	

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek2lesson2View 诊断

#ifdef _DEBUG
void Cweek2lesson2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2lesson2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2lesson2Doc* Cweek2lesson2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2lesson2Doc)));
	return (Cweek2lesson2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2lesson2View 消息处理程序


void Cweek2lesson2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	flag = 1;
	x = point.x;
	y = point.y;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
