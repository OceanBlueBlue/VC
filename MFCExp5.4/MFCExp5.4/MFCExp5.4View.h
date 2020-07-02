
// MFCExp5.4View.h : CMFCExp54View ��Ľӿ�
//

#pragma once


class CMFCExp54View : public CView
{
protected: // �������л�����
	CMFCExp54View();
	DECLARE_DYNCREATE(CMFCExp54View)

// ����
public:
	CMFCExp54Doc* GetDocument() const;

// ����
public:
	CPoint p1, p2;
	bool line,rectangle,circle;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExp54View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLine();
	afx_msg void OnRectangle();
	afx_msg void OnCircle();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExp5.4View.cpp �еĵ��԰汾
inline CMFCExp54Doc* CMFCExp54View::GetDocument() const
   { return reinterpret_cast<CMFCExp54Doc*>(m_pDocument); }
#endif

