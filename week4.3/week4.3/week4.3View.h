
// week4.3View.h : Cweek43View 类的接口
//

#pragma once


class Cweek43View : public CView
{
protected: // 仅从序列化创建
	Cweek43View();
	DECLARE_DYNCREATE(Cweek43View)

// 特性
public:
	Cweek43Doc* GetDocument() const;

	void OnTimer(UINT_PTR nIDEvent);

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek43View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week4.3View.cpp 中的调试版本
inline Cweek43Doc* Cweek43View::GetDocument() const
   { return reinterpret_cast<Cweek43Doc*>(m_pDocument); }
#endif

