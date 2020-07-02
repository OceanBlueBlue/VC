
// MFCExp9.1View.cpp : CMFCExp91View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExp9.1.h"
#endif

#include "MFCExp9.1Doc.h"
#include "MFCExp9.1View.h"
#include "MyDlg.h"
#include "fstream"
#include "string"
#include "iostream"
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExp91View

IMPLEMENT_DYNCREATE(CMFCExp91View, CView)

BEGIN_MESSAGE_MAP(CMFCExp91View, CView)
	ON_COMMAND(ID_PICTURE, &CMFCExp91View::OnPicture)
	ON_COMMAND(ID_SHOW, &CMFCExp91View::OnShow)
END_MESSAGE_MAP()

// CMFCExp91View ����/����

CMFCExp91View::CMFCExp91View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCExp91View::~CMFCExp91View()
{
}

BOOL CMFCExp91View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExp91View ����

void CMFCExp91View::OnDraw(CDC* /*pDC*/)
{
	CMFCExp91Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExp91View ���

#ifdef _DEBUG
void CMFCExp91View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExp91View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExp91Doc* CMFCExp91View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExp91Doc)));
	return (CMFCExp91Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExp91View ��Ϣ�������


void CMFCExp91View::OnPicture()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CString s;
		s.Format(_T("F:\\abc.txt"));
		ofstream ofs(s);
		ofs << CT2A(filename.GetString()) << endl;
	}
}


void CMFCExp91View::OnShow()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		string s;
		ifs >> s;
		MyDlg dlg;
		dlg.s = CString(s.c_str());
		int r = dlg.DoModal();
		if (r == IDOK)
		{

		}
	}
}
