
// week3lesson2View.h : Cweek3lesson2View 类的接口
//

#pragma once


class Cweek3lesson2View : public CView
{
protected: // 仅从序列化创建
	Cweek3lesson2View();
	DECLARE_DYNCREATE(Cweek3lesson2View)

// 特性
public:
	Cweek3lesson2Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect&> ca;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek3lesson2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week3lesson2View.cpp 中的调试版本
inline Cweek3lesson2Doc* Cweek3lesson2View::GetDocument() const
   { return reinterpret_cast<Cweek3lesson2Doc*>(m_pDocument); }
#endif

