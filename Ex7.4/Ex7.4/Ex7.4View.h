
// Ex7.4View.h : CEx74View ��Ľӿ�
//

#pragma once


class CEx74View : public CView
{
protected: // �������л�����
	CEx74View();
	DECLARE_DYNCREATE(CEx74View)

// ����
public:
	CEx74Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEx74View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Ex7.4View.cpp �еĵ��԰汾
inline CEx74Doc* CEx74View::GetDocument() const
   { return reinterpret_cast<CEx74Doc*>(m_pDocument); }
#endif

