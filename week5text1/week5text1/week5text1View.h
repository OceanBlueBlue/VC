
// week5text1View.h : Cweek5text1View ��Ľӿ�
//

#pragma once


class Cweek5text1View : public CView
{
protected: // �������л�����
	Cweek5text1View();
	DECLARE_DYNCREATE(Cweek5text1View)

// ����
public:
	Cweek5text1Doc* GetDocument() const;
	void Onsize(CDC * pDC);
// ����
public:
	CMenu size;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek5text1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  
inline Cweek5text1View::Cweek5text1View()
{
}
// week5text1View.cpp �еĵ��԰汾
inline Cweek5text1Doc* Cweek5text1View::GetDocument() const
   { return reinterpret_cast<Cweek5text1Doc*>(m_pDocument); }
inline void Cweek5text1View::Onsize(CDC * pDC)
{
}
inline void Cweek5text1View::OnDraw(CDC * pDC)
{
}
inline BOOL Cweek5text1View::PreCreateWindow(CREATESTRUCT & cs)
{
	return 0;
}
inline Cweek5text1View::~Cweek5text1View()
{
}
inline void Cweek5text1View::AssertValid() const
{
}
inline void Cweek5text1View::Dump(CDumpContext & dc) const
{
}
#endif

