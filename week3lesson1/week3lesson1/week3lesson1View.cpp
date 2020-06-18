
// week3lesson1View.cpp : Cweek3lesson1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week3lesson1.h"
#endif

#include "week3lesson1Doc.h"
#include "week3lesson1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek3lesson1View

IMPLEMENT_DYNCREATE(Cweek3lesson1View, CView)

BEGIN_MESSAGE_MAP(Cweek3lesson1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek3lesson1View 构造/析构

Cweek3lesson1View::Cweek3lesson1View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
}

Cweek3lesson1View::~Cweek3lesson1View()
{
}

BOOL Cweek3lesson1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek3lesson1View 绘制

void Cweek3lesson1View::OnDraw(CDC* pDC)
{
	Cweek3lesson1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (flag)
	{
		
		pDC->Ellipse(cr);
	}

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek3lesson1View 诊断

#ifdef _DEBUG
void Cweek3lesson1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek3lesson1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek3lesson1Doc* Cweek3lesson1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek3lesson1Doc)));
	return (Cweek3lesson1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek3lesson1View 消息处理程序


void Cweek3lesson1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;
	this->GetClientRect(&cr);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
