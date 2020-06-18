
// week3lesson3View.h : Cweek3lesson3View 类的接口
//

#pragma once


class Cweek3lesson3View : public CView
{
protected: // 仅从序列化创建
	Cweek3lesson3View();
	DECLARE_DYNCREATE(Cweek3lesson3View)

// 特性
public:
	Cweek3lesson3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek3lesson3View();
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

#ifndef _DEBUG  // week3lesson3View.cpp 中的调试版本
inline Cweek3lesson3Doc* Cweek3lesson3View::GetDocument() const
   { return reinterpret_cast<Cweek3lesson3Doc*>(m_pDocument); }
#endif

