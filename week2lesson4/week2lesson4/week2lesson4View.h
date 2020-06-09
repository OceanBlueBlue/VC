
// week2lesson4View.h : Cweek2lesson4View 类的接口
//

#pragma once


class Cweek2lesson4View : public CView
{
protected: // 仅从序列化创建
	Cweek2lesson4View();
	DECLARE_DYNCREATE(Cweek2lesson4View)

// 特性
public:
	Cweek2lesson4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek2lesson4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week2lesson4View.cpp 中的调试版本
inline Cweek2lesson4Doc* Cweek2lesson4View::GetDocument() const
   { return reinterpret_cast<Cweek2lesson4Doc*>(m_pDocument); }
#endif

