
// week5lesson1View.cpp : CMyweek5lesson1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week5lesson1.h"
#endif

#include "week5lesson1Doc.h"
#include "week5lesson1View.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyweek5lesson1View

IMPLEMENT_DYNCREATE(Cweek5lesson1View, CView)

BEGIN_MESSAGE_MAP(Cweek5lesson1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_ChangeCircle, &Cweek5lesson1View::OnChangecircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMyweek5lesson1View 构造/析构

// week5lesson1View 构造/析构

Cweek5lesson1View::Cweek5lesson1View()
{
	// TODO: 在此处添加构造代码
	set = false;
	t = 0;
	m_clr1 += 20;
}

Cweek5lesson1View::~Cweek5lesson1View()
{
}

BOOL Cweek5lesson1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek5lesson1View 绘制

void Cweek5lesson1View::OnDraw(CDC* pDC)
{
	Cweek5lesson1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int i = rand() % (100 - 10) + 50;
	int clr = RGB(i, i, m_clr1);
	CBrush newBrush(clr);
	CBrush *oldBrush = pDC->SelectObject(&newBrush);
	SetTimer(1, 500, NULL);
	GetClientRect(&cr);
	cp = cr.CenterPoint();
	cr.left = cp.x - 25; cr.top = cp.y - 25;
	cr.right = cp.x + 25; cr.bottom = cp.y + 25;
	if (set)
	{
		pDC->Ellipse(cr.left -= t, cr.top -= t, cr.right += t, cr.bottom += t);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek5lesson1View 诊断

#ifdef _DEBUG
void Cweek5lesson1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek5lesson1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek5lesson1Doc* Cweek5lesson1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek5lesson1Doc)));
	return (Cweek5lesson1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek5lesson1View 消息处理程序



void Cweek5lesson1View::OnChangecircle()
{
	set = true;
	// TODO: 在此添加命令处理程序代码
}


void Cweek5lesson1View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	t += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}