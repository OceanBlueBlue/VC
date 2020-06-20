
// week3.1View.h : Cweek31View 类的接口
//

#pragma once


class Cweek31View : public CView
{
protected: // 仅从序列化创建
	Cweek31View();
	DECLARE_DYNCREATE(Cweek31View)

// 特性
public:
	Cweek31Doc* GetDocument() const;

// 操作
public:
	int flag;
	CString s1, s2;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek31View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week3.1View.cpp 中的调试版本
inline Cweek31Doc* Cweek31View::GetDocument() const
   { return reinterpret_cast<Cweek31Doc*>(m_pDocument); }
#endif

