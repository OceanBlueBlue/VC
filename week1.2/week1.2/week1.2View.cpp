
// week1.2View.cpp : Cweek12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week1.2.h"
#endif

#include "week1.2Doc.h"
#include "week1.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek12View

IMPLEMENT_DYNCREATE(Cweek12View, CView)

BEGIN_MESSAGE_MAP(Cweek12View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek12View 构造/析构

Cweek12View::Cweek12View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
	count = 0;
	
}

Cweek12View::~Cweek12View()
{
}

BOOL Cweek12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek12View 绘制

void Cweek12View::OnDraw(CDC* pDC)
{
	Cweek12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	if (flag)
	{
		count++;
		s.Format(_T("%d"), count);
		dc.TextOutW(200, 200, s);
	}

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek12View 诊断

#ifdef _DEBUG
void Cweek12View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek12Doc* Cweek12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek12Doc)));
	return (Cweek12Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek12View 消息处理程序


void Cweek12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	
	flag = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
