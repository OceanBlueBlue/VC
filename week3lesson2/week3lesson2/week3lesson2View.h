
// week3lesson2View.h : Cweek3lesson2View ��Ľӿ�
//

#pragma once


class Cweek3lesson2View : public CView
{
protected: // �������л�����
	Cweek3lesson2View();
	DECLARE_DYNCREATE(Cweek3lesson2View)

// ����
public:
	Cweek3lesson2Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&> ca;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek3lesson2View();
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

#ifndef _DEBUG  // week3lesson2View.cpp �еĵ��԰汾
inline Cweek3lesson2Doc* Cweek3lesson2View::GetDocument() const
   { return reinterpret_cast<Cweek3lesson2Doc*>(m_pDocument); }
#endif

