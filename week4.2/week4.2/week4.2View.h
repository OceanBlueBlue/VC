
// week4.2View.h : Cweek42View ��Ľӿ�
//

#pragma once


class Cweek42View : public CView
{
protected: // �������л�����
	Cweek42View();
	DECLARE_DYNCREATE(Cweek42View)

// ����
public:
	Cweek42Doc* GetDocument() const;

	void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek42View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week4.2View.cpp �еĵ��԰汾
inline Cweek42Doc* Cweek42View::GetDocument() const
   { return reinterpret_cast<Cweek42Doc*>(m_pDocument); }
#endif

