
// MFCExp8.3View.h : CMFCExp83View ��Ľӿ�
//

#pragma once


class CMFCExp83View : public CView
{
protected: // �������л�����
	CMFCExp83View();
	DECLARE_DYNCREATE(CMFCExp83View)

// ����
public:
	CMFCExp83Doc* GetDocument() const;

// ����
public:
	CPoint s_point, e_point;
	int flag = 0;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExp83View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExp8.3View.cpp �еĵ��԰汾
inline CMFCExp83Doc* CMFCExp83View::GetDocument() const
   { return reinterpret_cast<CMFCExp83Doc*>(m_pDocument); }
#endif

