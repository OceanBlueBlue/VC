
// week2lesson4View.h : Cweek2lesson4View ��Ľӿ�
//

#pragma once


class Cweek2lesson4View : public CView
{
protected: // �������л�����
	Cweek2lesson4View();
	DECLARE_DYNCREATE(Cweek2lesson4View)

// ����
public:
	Cweek2lesson4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek2lesson4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week2lesson4View.cpp �еĵ��԰汾
inline Cweek2lesson4Doc* Cweek2lesson4View::GetDocument() const
   { return reinterpret_cast<Cweek2lesson4Doc*>(m_pDocument); }
#endif

