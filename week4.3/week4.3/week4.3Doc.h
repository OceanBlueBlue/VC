
// week4.3Doc.h : Cweek43Doc ��Ľӿ�
//


#pragma once


class Cweek43Doc : public CDocument
{
protected: // �������л�����
	Cweek43Doc();
	DECLARE_DYNCREATE(Cweek43Doc)

// ����
public:

// ����
public:
	int n;
	CArray<CRect, CRect> cr;
	bool set;
	bool b[5];

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cweek43Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
