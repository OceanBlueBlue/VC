
// week2lesson2View.h : Cweek2lesson2View ��Ľӿ�
//

#pragma once


class Cweek2lesson2View : public CView
{
protected: // �������л�����
	Cweek2lesson2View();
	DECLARE_DYNCREATE(Cweek2lesson2View)

// ����
public:
	Cweek2lesson2Doc* GetDocument() const;

// ����
public:
	int flag;
	int x, y;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek2lesson2View();
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

#ifndef _DEBUG  // week2lesson2View.cpp �еĵ��԰汾
inline Cweek2lesson2Doc* Cweek2lesson2View::GetDocument() const
   { return reinterpret_cast<Cweek2lesson2Doc*>(m_pDocument); }
#endif

