
// week2.1View.cpp : Cweek21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2.1.h"
#endif

#include "week2.1Doc.h"
#include "week2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek21View

IMPLEMENT_DYNCREATE(Cweek21View, CView)

BEGIN_MESSAGE_MAP(Cweek21View, CView)
END_MESSAGE_MAP()

// Cweek21View 构造/析构

Cweek21View::Cweek21View()
{
	// TODO: 在此处添加构造代码

}

Cweek21View::~Cweek21View()
{
}

BOOL Cweek21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek21View 绘制

void Cweek21View::OnDraw(CDC* pDC)
{
	Cweek21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CString s = _T("我是***");
	CString ss;
	int a = 92;
	ss.Format(_T("%d"), a);
	pDC->TextOutW(200, 200, s);
	pDC->TextOutW(230, 230, ss);

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek21View 诊断

#ifdef _DEBUG
void Cweek21View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek21Doc* Cweek21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek21Doc)));
	return (Cweek21Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek21View 消息处理程序
