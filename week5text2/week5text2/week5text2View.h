
// week5text2View.h : Cweek5text2View ��Ľӿ�
//

#pragma once


class Cweek5text2View : public CView
{
protected: // �������л�����
	Cweek5text2View();
	DECLARE_DYNCREATE(Cweek5text2View)

// ����
public:
	Cweek5text2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek5text2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week5text2View.cpp �еĵ��԰汾
inline Cweek5text2Doc* Cweek5text2View::GetDocument() const
   { return reinterpret_cast<Cweek5text2Doc*>(m_pDocument); }
#endif

