
// MFCExp8.4View.h : CMFCExp84View ��Ľӿ�
//

#pragma once


class CMFCExp84View : public CView
{
protected: // �������л�����
	CMFCExp84View();
	DECLARE_DYNCREATE(CMFCExp84View)

// ����
public:
	CMFCExp84Doc* GetDocument() const;

// ����
public:
	int flag1 = 0;
	CPoint pt;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExp84View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnColor();
};

#ifndef _DEBUG  // MFCExp8.4View.cpp �еĵ��԰汾
inline CMFCExp84Doc* CMFCExp84View::GetDocument() const
   { return reinterpret_cast<CMFCExp84Doc*>(m_pDocument); }
#endif

