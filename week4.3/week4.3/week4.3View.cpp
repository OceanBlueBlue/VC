
// week4.3View.cpp : Cweek43View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week4.3.h"
#endif

#include "week4.3Doc.h"
#include "week4.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek43View

IMPLEMENT_DYNCREATE(Cweek43View, CView)

BEGIN_MESSAGE_MAP(Cweek43View, CView)
END_MESSAGE_MAP()

// Cweek43View 构造/析构

Cweek43View::Cweek43View()
{
	// TODO: 在此处添加构造代码

}

Cweek43View::~Cweek43View()
{
}

BOOL Cweek43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek43View 绘制

void Cweek43View::OnDraw(CDC* pDC)
{
	Cweek43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < pDoc->n; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		pDoc->cr.Add(rect);
	}
	for (int i = 0; i < pDoc->n; i++)
	{
		pDC->Ellipse(pDoc->cr[i]);
	}
	if (pDoc->set)
	{
		for (int i = 0; i < pDoc->n; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
		}
		pDoc->set = false;
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek43View 诊断

#ifdef _DEBUG
void Cweek43View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek43Doc* Cweek43View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek43Doc)));
	return (Cweek43Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek43View 消息处理程序


void Cweek43View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	Cweek43Doc*pDoc = GetDocument();
	CRect clientRect;
	GetClientRect(&clientRect);

	if (pDoc->cr[i].bottom >= clientRect.bottom)
	{
		pDoc->b[i] = true;
	}
	if (pDoc->cr[i].top <= clientRect.top)
	{
		pDoc->b[i] = false;
	}
	if (pDoc->b[i])
	{
		pDoc->cr[i].top -= 10;
		pDoc->cr[i].bottom -= 10;
	}
	else
	{
		pDoc->cr[i].top += 10;
		pDoc->cr[i].bottom += 10;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}