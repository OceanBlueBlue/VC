
// week3lesson1View.h : Cweek3lesson1View ��Ľӿ�
//

#pragma once


class Cweek3lesson1View : public CView
{
protected: // �������л�����
	Cweek3lesson1View();
	DECLARE_DYNCREATE(Cweek3lesson1View)

// ����
public:
	Cweek3lesson1Doc* GetDocument() const;

// ����
public:
	int flag;
	CRect cr;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek3lesson1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week3lesson1View.cpp �еĵ��԰汾
inline Cweek3lesson1Doc* Cweek3lesson1View::GetDocument() const
   { return reinterpret_cast<Cweek3lesson1Doc*>(m_pDocument); }
#endif

