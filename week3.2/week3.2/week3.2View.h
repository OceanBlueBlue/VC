
// week3.2View.h : Cweek32View ��Ľӿ�
//

#pragma once


class Cweek32View : public CView
{
protected: // �������л�����
	Cweek32View();
	DECLARE_DYNCREATE(Cweek32View)

// ����
public:
	Cweek32Doc* GetDocument() const;

// ����
public:
	int flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek32View();
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

#ifndef _DEBUG  // week3.2View.cpp �еĵ��԰汾
inline Cweek32Doc* Cweek32View::GetDocument() const
   { return reinterpret_cast<Cweek32Doc*>(m_pDocument); }
#endif

