
// MFCExp7.3View.h : CMFCExp73View ��Ľӿ�
//

#pragma once


class CMFCExp73View : public CView
{
protected: // �������л�����
	CMFCExp73View();
	DECLARE_DYNCREATE(CMFCExp73View)

// ����
public:
	CMFCExp73Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExp73View();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFCExp7.3View.cpp �еĵ��԰汾
inline CMFCExp73Doc* CMFCExp73View::GetDocument() const
   { return reinterpret_cast<CMFCExp73Doc*>(m_pDocument); }
#endif

