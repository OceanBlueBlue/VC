
// week5text2View.h : Cweek5text2View 类的接口
//

#pragma once


class Cweek5text2View : public CView
{
protected: // 仅从序列化创建
	Cweek5text2View();
	DECLARE_DYNCREATE(Cweek5text2View)

// 特性
public:
	Cweek5text2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek5text2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week5text2View.cpp 中的调试版本
inline Cweek5text2Doc* Cweek5text2View::GetDocument() const
   { return reinterpret_cast<Cweek5text2Doc*>(m_pDocument); }
#endif

