
// week2lesson3View.h : Cweek2lesson3View ��Ľӿ�
//

#pragma once


class Cweek2lesson3View : public CView
{
protected: // �������л�����
	Cweek2lesson3View();
	DECLARE_DYNCREATE(Cweek2lesson3View)

// ����
public:
	Cweek2lesson3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek2lesson3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week2lesson3View.cpp �еĵ��԰汾
inline Cweek2lesson3Doc* Cweek2lesson3View::GetDocument() const
   { return reinterpret_cast<Cweek2lesson3Doc*>(m_pDocument); }
#endif

