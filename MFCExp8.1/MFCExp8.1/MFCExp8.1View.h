
// MFCExp8.1View.h : CMFCExp81View ��Ľӿ�
//

#pragma once


class CMFCExp81View : public CView
{
protected: // �������л�����
	CMFCExp81View();
	DECLARE_DYNCREATE(CMFCExp81View)

// ����
public:
	CMFCExp81Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExp81View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString s;
	int flag;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // MFCExp8.1View.cpp �еĵ��԰汾
inline CMFCExp81Doc* CMFCExp81View::GetDocument() const
   { return reinterpret_cast<CMFCExp81Doc*>(m_pDocument); }
#endif

