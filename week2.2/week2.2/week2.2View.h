
// week2.2View.h : Cweek22View 类的接口
//

#pragma once


class Cweek22View : public CView
{
protected: // 仅从序列化创建
	Cweek22View();
	DECLARE_DYNCREATE(Cweek22View)

// 特性
public:
	Cweek22Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week2.2View.cpp 中的调试版本
inline Cweek22Doc* Cweek22View::GetDocument() const
   { return reinterpret_cast<Cweek22Doc*>(m_pDocument); }
#endif

