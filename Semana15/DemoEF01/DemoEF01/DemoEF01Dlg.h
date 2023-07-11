
// DemoEF01Dlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de CDemoEF01Dlg
class CDemoEF01Dlg : public CDialogEx
{
// Construcción
public:
	CDemoEF01Dlg(CWnd* pParent = nullptr);	// Constructor estándar

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DEMOEF01_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementación
protected:
	HICON m_hIcon;

	// Funciones de asignación de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int varTemperatrura;
	CComboBox varCombo;
	BOOL varCelsius;
	BOOL varFahremheit;
	BOOL varKelvin;
	CString varResultado;
};
