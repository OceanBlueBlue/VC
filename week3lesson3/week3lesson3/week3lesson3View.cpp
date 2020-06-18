
// week3lesson3View.cpp : Cweek3lesson3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week3lesson3.h"
#endif

#include "week3lesson3Doc.h"
#include "week3lesson3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek3lesson3View

IMPLEMENT_DYNCREATE(Cweek3lesson3View, CView)

BEGIN_MESSAGE_MAP(Cweek3lesson3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek3lesson3View 构造/析构

Cweek3lesson3View::Cweek3lesson3View()
{
	// TODO: 在此处添加构造代码
	

}

Cweek3lesson3View::~Cweek3lesson3View()
{
}

BOOL Cweek3lesson3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek3lesson3View 绘制

void Cweek3lesson3View::OnDraw(CDC* pDC)
{
	Cweek3lesson3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	for (int i = 0; i < pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca.GetAt(i));

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek3lesson3View 诊断

#ifdef _DEBUG
void Cweek3lesson3View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek3lesson3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek3lesson3Doc* Cweek3lesson3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek3lesson3Doc)));
	return (Cweek3lesson3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek3lesson3View 消息处理程序


void Cweek3lesson3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek3lesson3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	int a = rand() % 50 + 5;
	int b = rand() % 55 + 5;
	CRect cr(point.x - b, point.y - a, point.x + b, point.y + a);
	pDoc->ca.Add(cr);
	this->Invalidate();


	CView::OnLButtonDown(nFlags, point);
}
