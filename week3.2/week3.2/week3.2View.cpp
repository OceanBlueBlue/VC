
// week3.2View.cpp : Cweek32View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week3.2.h"
#endif

#include "week3.2Doc.h"
#include "week3.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek32View

IMPLEMENT_DYNCREATE(Cweek32View, CView)

BEGIN_MESSAGE_MAP(Cweek32View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek32View 构造/析构

Cweek32View::Cweek32View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
}

Cweek32View::~Cweek32View()
{
}

BOOL Cweek32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek32View 绘制

void Cweek32View::OnDraw(CDC* pDC)
{
	Cweek32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//int c = pDoc->a + pDoc->b;
	CString s1 = _T("A + B = ");
	CString s2;
	s2.Format(_T("%d"), pDoc->a + pDoc->b);
	if (flag)
		pDC->TextOutW(200, 200, s1+s2);

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek32View 诊断

#ifdef _DEBUG
void Cweek32View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek32Doc* Cweek32View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek32Doc)));
	return (Cweek32Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek32View 消息处理程序


void Cweek32View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
