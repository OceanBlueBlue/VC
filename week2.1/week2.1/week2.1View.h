
// week2.1View.h : Cweek21View ��Ľӿ�
//

#pragma once


class Cweek21View : public CView
{
protected: // �������л�����
	Cweek21View();
	DECLARE_DYNCREATE(Cweek21View)

// ����
public:
	Cweek21Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week2.1View.cpp �еĵ��԰汾
inline Cweek21Doc* Cweek21View::GetDocument() const
   { return reinterpret_cast<Cweek21Doc*>(m_pDocument); }
#endif

