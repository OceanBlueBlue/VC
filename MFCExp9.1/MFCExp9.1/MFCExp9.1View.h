
// MFCExp9.1View.h : CMFCExp91View ��Ľӿ�
//

#pragma once


class CMFCExp91View : public CView
{
protected: // �������л�����
	CMFCExp91View();
	DECLARE_DYNCREATE(CMFCExp91View)

// ����
public:
	CMFCExp91Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExp91View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPicture();
	afx_msg void OnShow();
};

#ifndef _DEBUG  // MFCExp9.1View.cpp �еĵ��԰汾
inline CMFCExp91Doc* CMFCExp91View::GetDocument() const
   { return reinterpret_cast<CMFCExp91Doc*>(m_pDocument); }
#endif

