
// week3.3View.h : Cweek33View ��Ľӿ�
//

#pragma once


class Cweek33View : public CView
{
protected: // �������л�����
	Cweek33View();
	DECLARE_DYNCREATE(Cweek33View)

// ����
public:
	Cweek33Doc* GetDocument() const;

// ����
public:
	int a, b, c;
	int flag,flag1,flag2;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek33View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week3.3View.cpp �еĵ��԰汾
inline Cweek33Doc* Cweek33View::GetDocument() const
   { return reinterpret_cast<Cweek33Doc*>(m_pDocument); }
#endif

