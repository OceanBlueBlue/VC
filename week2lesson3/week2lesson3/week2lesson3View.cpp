
// week2lesson3View.cpp : Cweek2lesson3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2lesson3.h"
#endif

#include "week2lesson3Doc.h"
#include "week2lesson3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2lesson3View

IMPLEMENT_DYNCREATE(Cweek2lesson3View, CView)

BEGIN_MESSAGE_MAP(Cweek2lesson3View, CView)
END_MESSAGE_MAP()

// Cweek2lesson3View 构造/析构

Cweek2lesson3View::Cweek2lesson3View()
{
	// TODO: 在此处添加构造代码

}

Cweek2lesson3View::~Cweek2lesson3View()
{
}

BOOL Cweek2lesson3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek2lesson3View 绘制

void Cweek2lesson3View::OnDraw(CDC* pDC)
{
	Cweek2lesson3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rc;
	GetClientRect(&rc);
	pDC->Ellipse(rc.left, rc.top,rc.right,  rc.bottom);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek2lesson3View 诊断

#ifdef _DEBUG
void Cweek2lesson3View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2lesson3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2lesson3Doc* Cweek2lesson3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2lesson3Doc)));
	return (Cweek2lesson3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2lesson3View 消息处理程序
