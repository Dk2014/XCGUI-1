/**************************************************************************\
*
* Copyright (c)  �Ųʽ����. All Rights Reserved.
*
* �Ųʽ���� - �ٷ���վ : http://www.xcgui.com
*
\**************************************************************************/
#include "StdAfx.h"

#if 0
/////////////////////////////////////////////////
////��Ͽ����//////////////////////////////////////
int APIENTRY _tWinMain(HINSTANCE hInstance,  HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	XInitXCGUI();

	//��������:
	HWINDOW hWindow=XWnd_CreateWindow(400,200,300,200,L"�Ųʽ����-����");
	XWnd_ShowWindow(hWindow,SW_SHOW);

	//�������
	//HELE hGroup=XGBox_Create(10,10,100,100,L"���Ԫ��",hWindow);
	HELE hGroup=XEle_Create(10,10,100,100,hWindow);

	XRadio_Create(10,10,50,20,L"Radio",hGroup);
	XBtn_Create(10,50,50,20,L"Radio",hGroup);

	//�����飬�ӿؼ�Ҳһ������
	XEle_ShowEle(hGroup, FALSE);

	XRunXCGUI();
	return 0;
}
#endif