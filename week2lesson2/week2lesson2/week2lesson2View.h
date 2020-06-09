
// week2lesson2View.h : Cweek2lesson2View 类的接口
//

#pragma once


class Cweek2lesson2View : public CView
{
protected: // 仅从序列化创建
	Cweek2lesson2View();
	DECLARE_DYNCREATE(Cweek2lesson2View)

// 特性
public:
	Cweek2lesson2Doc* GetDocument() const;

// 操作
public:
	int flag;
	int x, y;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek2lesson2View();
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

#ifndef _DEBUG  // week2lesson2View.cpp 中的调试版本
inline Cweek2lesson2Doc* Cweek2lesson2View::GetDocument() const
   { return reinterpret_cast<Cweek2lesson2Doc*>(m_pDocument); }
#endif

