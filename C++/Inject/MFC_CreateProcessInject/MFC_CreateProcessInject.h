﻿
// MFC_CreateProcessInject.h: PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含 'pch.h' 以生成 PCH"
#endif

#include "resource.h"		// 主符号


// CMFCCreateProcessInjectApp:
// 有关此类的实现，请参阅 MFC_CreateProcessInject.cpp
//

class CMFCCreateProcessInjectApp : public CWinApp
{
public:
	CMFCCreateProcessInjectApp();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedButtonInject();
	afx_msg void OnEnChangeEditLog();
};

extern CMFCCreateProcessInjectApp theApp;
