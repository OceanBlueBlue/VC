
// week2lesson1View.h : Cweek2lesson1View ��Ľӿ�
//

#pragma once


class Cweek2lesson1View : public CView
{
protected: // �������л�����
	Cweek2lesson1View();
	DECLARE_DYNCREATE(Cweek2lesson1View)

// ����
public:
	Cweek2lesson1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek2lesson1View();
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

#ifndef _DEBUG  // week2lesson1View.cpp �еĵ��԰汾
inline Cweek2lesson1Doc* Cweek2lesson1View::GetDocument() const
   { return reinterpret_cast<Cweek2lesson1Doc*>(m_pDocument); }
#endif

