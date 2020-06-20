
// week3.3View.h : Cweek33View 类的接口
//

#pragma once


class Cweek33View : public CView
{
protected: // 仅从序列化创建
	Cweek33View();
	DECLARE_DYNCREATE(Cweek33View)

// 特性
public:
	Cweek33Doc* GetDocument() const;

// 操作
public:
	int a, b, c;
	int flag,flag1,flag2;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek33View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week3.3View.cpp 中的调试版本
inline Cweek33Doc* Cweek33View::GetDocument() const
   { return reinterpret_cast<Cweek33Doc*>(m_pDocument); }
#endif

