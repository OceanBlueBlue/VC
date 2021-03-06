
// week2.2View.cpp : Cweek22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2.2.h"
#endif

#include "week2.2Doc.h"
#include "week2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek22View

IMPLEMENT_DYNCREATE(Cweek22View, CView)

BEGIN_MESSAGE_MAP(Cweek22View, CView)
END_MESSAGE_MAP()

// Cweek22View 构造/析构

Cweek22View::Cweek22View()
{
	// TODO: 在此处添加构造代码

}

Cweek22View::~Cweek22View()
{
}

BOOL Cweek22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek22View 绘制

void Cweek22View::OnDraw(CDC* pDC)
{
	Cweek22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(230, 230, pDoc->ss);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek22View 诊断

#ifdef _DEBUG
void Cweek22View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek22Doc* Cweek22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek22Doc)));
	return (Cweek22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek22View 消息处理程序
