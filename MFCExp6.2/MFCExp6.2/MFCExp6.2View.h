
// MFCExp6.2View.h : CMFCExp62View ��Ľӿ�
//

#pragma once


class CMFCExp62View : public CView
{
protected: // �������л�����
	CMFCExp62View();
	DECLARE_DYNCREATE(CMFCExp62View)

// ����
public:
	CMFCExp62Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExp62View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExp6.2View.cpp �еĵ��԰汾
inline CMFCExp62Doc* CMFCExp62View::GetDocument() const
   { return reinterpret_cast<CMFCExp62Doc*>(m_pDocument); }
#endif

