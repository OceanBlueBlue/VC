
// week5text2View.cpp : Cweek5text2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week5text2.h"
#endif

#include "week5text2Doc.h"
#include "week5text2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek5text2View

IMPLEMENT_DYNCREATE(Cweek5text2View, CView)

BEGIN_MESSAGE_MAP(Cweek5text2View, CView)
END_MESSAGE_MAP()

// Cweek5text2View 构造/析构

Cweek5text2View::Cweek5text2View()
{
	// TODO: 在此处添加构造代码

}

Cweek5text2View::~Cweek5text2View()
{
}

BOOL Cweek5text2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek5text2View 绘制

void Cweek5text2View::OnDraw(CDC* /*pDC*/)
{
	Cweek5text2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek5text2View 诊断

#ifdef _DEBUG
void Cweek5text2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek5text2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek5text2Doc* Cweek5text2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek5text2Doc)));
	return (Cweek5text2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek5text2View 消息处理程序
