
// week5lesson1View.h : Cweek5lesson1View 类的接口
//

#pragma once


class Cweek5lesson1View : public CView
{
protected: // 仅从序列化创建
	Cweek5lesson1View();
	DECLARE_DYNCREATE(Cweek5lesson1View)

// 特性
public:
	Cweek5lesson1Doc* GetDocument() const;

	void OnChangecircle();

	void OnTimer(UINT_PTR nIDEvent);

// 操作
public:
	int i;
	int m_clr1;
	CRect cr;
	CPoint cp;
	bool set;
	int t;
	CBrush cbrush;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek5lesson1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week5lesson1View.cpp 中的调试版本
inline Cweek5lesson1Doc* Cweek5lesson1View::GetDocument() const
   { return reinterpret_cast<Cweek5lesson1Doc*>(m_pDocument); }
#endif

