
// week3lesson3View.h : Cweek3lesson3View ��Ľӿ�
//

#pragma once


class Cweek3lesson3View : public CView
{
protected: // �������л�����
	Cweek3lesson3View();
	DECLARE_DYNCREATE(Cweek3lesson3View)

// ����
public:
	Cweek3lesson3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek3lesson3View();
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

#ifndef _DEBUG  // week3lesson3View.cpp �еĵ��԰汾
inline Cweek3lesson3Doc* Cweek3lesson3View::GetDocument() const
   { return reinterpret_cast<Cweek3lesson3Doc*>(m_pDocument); }
#endif

