
// week1.2View.h : Cweek12View 类的接口
//

#pragma once


class Cweek12View : public CView
{
protected: // 仅从序列化创建
	Cweek12View();
	DECLARE_DYNCREATE(Cweek12View)

// 特性
public:
	Cweek12Doc* GetDocument() const;

// 操作
public:
	int flag;
	int count;
	CString s;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek12View();
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

#ifndef _DEBUG  // week1.2View.cpp 中的调试版本
inline Cweek12Doc* Cweek12View::GetDocument() const
   { return reinterpret_cast<Cweek12Doc*>(m_pDocument); }
#endif

