
// week4.1View.h : Cweek41View ��Ľӿ�
//

#pragma once


class Cweek41View : public CView
{
protected: // �������л�����
	Cweek41View();
	DECLARE_DYNCREATE(Cweek41View)

// ����
public:
	Cweek41Doc* GetDocument() const;

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
	virtual ~Cweek41View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week4.1View.cpp �еĵ��԰汾
inline Cweek41Doc* Cweek41View::GetDocument() const
   { return reinterpret_cast<Cweek41Doc*>(m_pDocument); }
#endif

