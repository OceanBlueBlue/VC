
// MFCExp6.1View.h : CMFCExp61View ��Ľӿ�
//

#pragma once


class CMFCExp61View : public CView
{
protected: // �������л�����
	CMFCExp61View();
	DECLARE_DYNCREATE(CMFCExp61View)

// ����
public:
	CMFCExp61Doc* GetDocument() const;

// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExp61View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCExp6.1View.cpp �еĵ��԰汾
inline CMFCExp61Doc* CMFCExp61View::GetDocument() const
   { return reinterpret_cast<CMFCExp61Doc*>(m_pDocument); }
#endif

