
// week5lesson1View.h : Cweek5lesson1View ��Ľӿ�
//

#pragma once


class Cweek5lesson1View : public CView
{
protected: // �������л�����
	Cweek5lesson1View();
	DECLARE_DYNCREATE(Cweek5lesson1View)

// ����
public:
	Cweek5lesson1Doc* GetDocument() const;

	void OnChangecircle();

	void OnTimer(UINT_PTR nIDEvent);

// ����
public:
	int i;
	int m_clr1;
	CRect cr;
	CPoint cp;
	bool set;
	int t;
	CBrush cbrush;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek5lesson1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week5lesson1View.cpp �еĵ��԰汾
inline Cweek5lesson1Doc* Cweek5lesson1View::GetDocument() const
   { return reinterpret_cast<Cweek5lesson1Doc*>(m_pDocument); }
#endif

