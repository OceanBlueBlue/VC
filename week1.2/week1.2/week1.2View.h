
// week1.2View.h : Cweek12View ��Ľӿ�
//

#pragma once


class Cweek12View : public CView
{
protected: // �������л�����
	Cweek12View();
	DECLARE_DYNCREATE(Cweek12View)

// ����
public:
	Cweek12Doc* GetDocument() const;

// ����
public:
	int flag;
	int count;
	CString s;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek12View();
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

#ifndef _DEBUG  // week1.2View.cpp �еĵ��԰汾
inline Cweek12Doc* Cweek12View::GetDocument() const
   { return reinterpret_cast<Cweek12Doc*>(m_pDocument); }
#endif

