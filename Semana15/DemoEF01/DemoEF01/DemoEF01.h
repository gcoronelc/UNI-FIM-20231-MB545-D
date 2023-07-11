
// DemoEF01.h: archivo de encabezado principal para la aplicación PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'pch.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// Símbolos principales


// CDemoEF01App:
// Consulte DemoEF01.cpp para obtener información sobre la implementación de esta clase
//

class CDemoEF01App : public CWinApp
{
public:
	CDemoEF01App();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementación

	DECLARE_MESSAGE_MAP()
};

extern CDemoEF01App theApp;
