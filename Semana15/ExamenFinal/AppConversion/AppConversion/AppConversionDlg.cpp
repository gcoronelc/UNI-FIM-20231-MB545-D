
// AppConversionDlg.cpp: archivo de implementación
//

#include "pch.h"
#include "framework.h"
#include "AppConversion.h"
#include "AppConversionDlg.h"
#include "afxdialogex.h"
#include "CLogica.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cuadro de diálogo CAboutDlg utilizado para el comando Acerca de

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

// Implementación
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cuadro de diálogo de CAppConversionDlg



CAppConversionDlg::CAppConversionDlg(CWnd* pParent /*= nullptr*/)
	: CDialogEx(IDD_APPCONVERSION_DIALOG, pParent)
	, edtTemperatura(0)
	, chkCelsius(FALSE)
	, chkFahrenheit(FALSE)
	, chkKelvin(FALSE)
	, chkRankine(FALSE)
	, edtReporte(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CAppConversionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDT_TEMPERATURA, edtTemperatura);
	DDX_Control(pDX, IDC_CBO_UNI_ORIGEN, cboUniOrigen);
	DDX_Check(pDX, IDC_CHK_CEL, chkCelsius);
	DDX_Check(pDX, IDC_CHK_FAH, chkFahrenheit);
	DDX_Check(pDX, IDC_CHK_KEL, chkKelvin);
	DDX_Check(pDX, IDC_CHK_RAN, chkRankine);
	DDX_Text(pDX, IDC_EDT_REPORTE, edtReporte);
}

BEGIN_MESSAGE_MAP(CAppConversionDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_PROCESAR, &CAppConversionDlg::OnBnClickedBtnProcesar)
	ON_BN_CLICKED(IDC_BTN_LIMPIAR, &CAppConversionDlg::OnBnClickedBtnLimpiar)
	ON_BN_CLICKED(IDC_BTN_SALIR, &CAppConversionDlg::OnBnClickedBtnSalir)
END_MESSAGE_MAP()


// Controladores de mensajes de CAppConversionDlg

BOOL CAppConversionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Agregar el elemento de menú "Acerca de..." al menú del sistema.

	// IDM_ABOUTBOX debe estar en el intervalo de comandos del sistema.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Establecer el icono para este cuadro de diálogo.  El marco de trabajo realiza esta operación
	//  automáticamente cuando la ventana principal de la aplicación no es un cuadro de diálogo
	SetIcon(m_hIcon, TRUE);			// Establecer icono grande
	SetIcon(m_hIcon, FALSE);		// Establecer icono pequeño

	// TODO: agregar aquí inicialización adicional

	return TRUE;  // Devuelve TRUE  a menos que establezca el foco en un control
}

void CAppConversionDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// Si agrega un botón Minimizar al cuadro de diálogo, necesitará el siguiente código
//  para dibujar el icono.  Para aplicaciones MFC que utilicen el modelo de documentos y vistas,
//  esta operación la realiza automáticamente el marco de trabajo.

void CAppConversionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // Contexto de dispositivo para dibujo

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Centrar icono en el rectángulo de cliente
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Dibujar el icono
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// El sistema llama a esta función para obtener el cursor que se muestra mientras el usuario arrastra
//  la ventana minimizada.
HCURSOR CAppConversionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CAppConversionDlg::OnBnClickedBtnProcesar()
{
	UpdateData(true);
	edtReporte.Empty();
	CString repoParcial;
	float resultado = 0;
	// Punto 1: Destino es Celsius
	if (chkCelsius) {
		switch (cboUniOrigen.GetCurSel()) {
		case 0: resultado = edtTemperatura; break;
		case 1: resultado = CLogica::convert(FTOC, edtTemperatura); break;
		case 2: resultado = CLogica::convert(KTOC, edtTemperatura); break;
		case 3: resultado = CLogica::convert(RTOC, edtTemperatura); break;
		}
		repoParcial.Format(_T("  %.2f C"), resultado);
		edtReporte.Append(repoParcial);
	}
	// Punto 2: Destino es Fahrenheit
	if (chkFahrenheit) {
		switch (cboUniOrigen.GetCurSel()) {
		case 0: resultado = CLogica::convert(CTOF, edtTemperatura); break;
		case 1: resultado = edtTemperatura; break; 
		case 2: resultado = CLogica::convert(KTOF, edtTemperatura); break;
		case 3: resultado = CLogica::convert(RTOF, edtTemperatura); break;
		}
		repoParcial.Format(_T("  %.2f F"), resultado);
		edtReporte.Append(repoParcial);
	}
	// Punto 3: Destino es Kelvin
	if (chkKelvin) {
		switch (cboUniOrigen.GetCurSel()) {
		case 0: resultado = CLogica::convert(CTOK, edtTemperatura); break;
		case 1: resultado = CLogica::convert(FTOK, edtTemperatura); break;
		case 2: resultado = edtTemperatura; break; 
		case 3: resultado = CLogica::convert(RTOK, edtTemperatura); break;
		}
		repoParcial.Format(_T("  %.2f K"), resultado);
		edtReporte.Append(repoParcial);
	}
	// Punto 3: Destino es Rankine
	if (chkRankine) {
		switch (cboUniOrigen.GetCurSel()) {
		case 0: resultado = CLogica::convert(CTOR, edtTemperatura); break;
		case 1: resultado = CLogica::convert(FTOR, edtTemperatura); break;
		case 2: resultado = CLogica::convert(KTOR, edtTemperatura); break;
		case 3: resultado = edtTemperatura; break; 
		}
		repoParcial.Format(_T("  %.2f R"), resultado);
		edtReporte.Append(repoParcial);
	}
	UpdateData(false);
}


void CAppConversionDlg::OnBnClickedBtnLimpiar()
{
	UpdateData(true);
	edtTemperatura = 0;
	edtReporte.Empty();
	cboUniOrigen.SetCurSel(-1);
	chkCelsius = false;
	chkFahrenheit = false;
	chkKelvin = false;
	chkRankine = false;
	UpdateData(false);
}


void CAppConversionDlg::OnBnClickedBtnSalir()
{
	this->OnCancel();
}
