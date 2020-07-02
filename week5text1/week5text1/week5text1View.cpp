
// week5text1View.cpp : CMyweek5text1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week5text1.h"
#endif

#include "week5text1Doc.h"
#include "week5text1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyweek5text1View

IMPLEMENT_DYNCREATE(CMyweek5text1View, CView)

BEGIN_MESSAGE_MAP(CMyweek5text1View, CView)
	ON_COMMAND(ID_size, &CMyweek5text1View::Onsize)
END_MESSAGE_MAP()

// CMyweek5text1View 构造/析构

CMyweek5text1View::CMyweek5text1View()
{
	// TODO: 在此处添加构造代码

}

CMyweek5text1View::~CMyweek5text1View()
{
}

BOOL CMyweek5text1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMyweek5text1View 绘制

void CMyweek5text1View::OnDraw(CDC* pDC)
{
	CMyweek5text1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMyweek5text1View 诊断

#ifdef _DEBUG
void CMyweek5text1View::AssertValid() const
{
	CView::AssertValid();
}

void CMyweek5text1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyweek5text1Doc* CMyweek5text1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyweek5text1Doc)));
	return (CMyweek5text1Doc*) m_pDocument;
}
#endif //_DEBUG


// CMyweek5text1View 消息处理程序


void CMyweek5text1View::Onsize(CDC* pDC)
{
	// TODO: 在此添加命令处理程序代码
	for (int i = 500; i <= 1000; i++)
		pDC->Ellipse(200, 200, i + i % 10, i + i % 10);


}