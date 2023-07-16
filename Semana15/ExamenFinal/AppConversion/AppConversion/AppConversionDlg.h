
// AppConversionDlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de CAppConversionDlg
class CAppConversionDlg : public CDialogEx
{
// Construcción
public:
	CAppConversionDlg(CWnd* pParent = nullptr);	// Constructor estándar

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_APPCONVERSION_DIALOG };
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
	
	float edtTemperatura;
	CComboBox cboUniOrigen;
	BOOL chkCelsius;
	BOOL chkFahrenheit;
	BOOL chkKelvin;
	BOOL chkRankine;
	CString edtReporte;
	afx_msg void OnBnClickedBtnProcesar();
	afx_msg void OnBnClickedBtnLimpiar();
	afx_msg void OnBnClickedBtnSalir();
};
