
// week2lesson3View.h : Cweek2lesson3View 类的接口
//

#pragma once


class Cweek2lesson3View : public CView
{
protected: // 仅从序列化创建
	Cweek2lesson3View();
	DECLARE_DYNCREATE(Cweek2lesson3View)

// 特性
public:
	Cweek2lesson3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek2lesson3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week2lesson3View.cpp 中的调试版本
inline Cweek2lesson3Doc* Cweek2lesson3View::GetDocument() const
   { return reinterpret_cast<Cweek2lesson3Doc*>(m_pDocument); }
#endif

