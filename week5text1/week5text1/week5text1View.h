
// week5text1View.h : Cweek5text1View 类的接口
//

#pragma once


class Cweek5text1View : public CView
{
protected: // 仅从序列化创建
	Cweek5text1View();
	DECLARE_DYNCREATE(Cweek5text1View)

// 特性
public:
	Cweek5text1Doc* GetDocument() const;
	void Onsize(CDC * pDC);
// 操作
public:
	CMenu size;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek5text1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  
inline Cweek5text1View::Cweek5text1View()
{
}
// week5text1View.cpp 中的调试版本
inline Cweek5text1Doc* Cweek5text1View::GetDocument() const
   { return reinterpret_cast<Cweek5text1Doc*>(m_pDocument); }
inline void Cweek5text1View::Onsize(CDC * pDC)
{
}
inline void Cweek5text1View::OnDraw(CDC * pDC)
{
}
inline BOOL Cweek5text1View::PreCreateWindow(CREATESTRUCT & cs)
{
	return 0;
}
inline Cweek5text1View::~Cweek5text1View()
{
}
inline void Cweek5text1View::AssertValid() const
{
}
inline void Cweek5text1View::Dump(CDumpContext & dc) const
{
}
#endif

