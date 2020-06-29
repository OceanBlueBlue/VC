
// week4lesson1View.h : Cweek4lesson1View 类的接口
//

#pragma once


class Cweek4lesson1View : public CView
{
protected: // 仅从序列化创建
	Cweek4lesson1View();
	DECLARE_DYNCREATE(Cweek4lesson1View)

// 特性
public:
	Cweek4lesson1Doc* GetDocument() const;

	void OnLButtonDown(UINT nFlags, CPoint point);

	void OnLButtonUp(UINT nFlags, CPoint point);

	void OnMouseMove(UINT nFlags, CPoint point);

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek4lesson1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week4lesson1View.cpp 中的调试版本
inline Cweek4lesson1Doc* Cweek4lesson1View::GetDocument() const
   { return reinterpret_cast<Cweek4lesson1Doc*>(m_pDocument); }
#endif

