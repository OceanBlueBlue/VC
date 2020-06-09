
// week2lesson1View.h : Cweek2lesson1View 类的接口
//

#pragma once


class Cweek2lesson1View : public CView
{
protected: // 仅从序列化创建
	Cweek2lesson1View();
	DECLARE_DYNCREATE(Cweek2lesson1View)

// 特性
public:
	Cweek2lesson1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek2lesson1View();
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

#ifndef _DEBUG  // week2lesson1View.cpp 中的调试版本
inline Cweek2lesson1Doc* Cweek2lesson1View::GetDocument() const
   { return reinterpret_cast<Cweek2lesson1Doc*>(m_pDocument); }
#endif

