
// week2.2View.h : Cweek22View ��Ľӿ�
//

#pragma once


class Cweek22View : public CView
{
protected: // �������л�����
	Cweek22View();
	DECLARE_DYNCREATE(Cweek22View)

// ����
public:
	Cweek22Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week2.2View.cpp �еĵ��԰汾
inline Cweek22Doc* Cweek22View::GetDocument() const
   { return reinterpret_cast<Cweek22Doc*>(m_pDocument); }
#endif

