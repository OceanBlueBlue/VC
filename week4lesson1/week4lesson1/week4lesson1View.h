
// week4lesson1View.h : Cweek4lesson1View ��Ľӿ�
//

#pragma once


class Cweek4lesson1View : public CView
{
protected: // �������л�����
	Cweek4lesson1View();
	DECLARE_DYNCREATE(Cweek4lesson1View)

// ����
public:
	Cweek4lesson1Doc* GetDocument() const;

	void OnLButtonDown(UINT nFlags, CPoint point);

	void OnLButtonUp(UINT nFlags, CPoint point);

	void OnMouseMove(UINT nFlags, CPoint point);

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek4lesson1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week4lesson1View.cpp �еĵ��԰汾
inline Cweek4lesson1Doc* Cweek4lesson1View::GetDocument() const
   { return reinterpret_cast<Cweek4lesson1Doc*>(m_pDocument); }
#endif

