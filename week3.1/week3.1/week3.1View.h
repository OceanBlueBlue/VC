
// week3.1View.h : Cweek31View ��Ľӿ�
//

#pragma once


class Cweek31View : public CView
{
protected: // �������л�����
	Cweek31View();
	DECLARE_DYNCREATE(Cweek31View)

// ����
public:
	Cweek31Doc* GetDocument() const;

// ����
public:
	int flag;
	CString s1, s2;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek31View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week3.1View.cpp �еĵ��԰汾
inline Cweek31Doc* Cweek31View::GetDocument() const
   { return reinterpret_cast<Cweek31Doc*>(m_pDocument); }
#endif

