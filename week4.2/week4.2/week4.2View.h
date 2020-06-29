
// week4.2View.h : Cweek42View 类的接口
//

#pragma once


class Cweek42View : public CView
{
protected: // 仅从序列化创建
	Cweek42View();
	DECLARE_DYNCREATE(Cweek42View)

// 特性
public:
	Cweek42Doc* GetDocument() const;

	void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek42View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week4.2View.cpp 中的调试版本
inline Cweek42Doc* Cweek42View::GetDocument() const
   { return reinterpret_cast<Cweek42Doc*>(m_pDocument); }
#endif

