
// week4.3View.h : Cweek43View ��Ľӿ�
//

#pragma once


class Cweek43View : public CView
{
protected: // �������л�����
	Cweek43View();
	DECLARE_DYNCREATE(Cweek43View)

// ����
public:
	Cweek43Doc* GetDocument() const;

	void OnTimer(UINT_PTR nIDEvent);

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek43View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week4.3View.cpp �еĵ��԰汾
inline Cweek43Doc* Cweek43View::GetDocument() const
   { return reinterpret_cast<Cweek43Doc*>(m_pDocument); }
#endif

