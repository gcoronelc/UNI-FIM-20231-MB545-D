#include <iostream>
using namespace std;

// Variables Globales
float pImperial, pVIP, pGold, importeB, desc1, desc2, importeN, sumadesc, sumadesc2;
int MsecondD, FsecondD;

// Menu Principal
void menuPrincipal() {
	// Limpiar pantalla
	system("cls");
	// Menu
	cout << "LA CASA DEL INKA\n\n\n";
	cout << "========================\n";
	cout << "   SISTEMA DE VENTAS\n";
	cout << "   Menu de Opciones\n";
	cout << "========================\n";
	cout << "   1. Procesar venta\n";
	cout << "   2. Reporte de ventas\n";
	cout << "   3. Salir\n";
}

// Leer Opcion
int leerOpcion() {
	// Variable
	int opcion;
	// Proceso
	do {
		cout << "Indique la opcion: "; cin >> opcion;
		if (opcion < 1 or opcion > 3) {
			cout << "La opcion incorrecta, intente nuevamente!!\n";
		}
	} while (opcion < 1 or opcion > 3);
	// Retornar
	return opcion;
}

// Validacion del string
string validacionSexo() {
	// Variable
	string s;
	// Proceso
	do {
		cout << "Sexo del cliente (M/F): "; cin >> s;
		if (s != "M" and s != "F") {
			cout << "El valor ingresado no es aceptado, debe ser (M o F)\n";
		}
	} while (s != "M" and s != "F");
	// Retorno
	return s;
}

// Sub-Menu 01
pair < pair<int, int>, pair<int, string>> lecturaDatos() {
	// Variable
	pair < pair<int, int>, pair<int, string>> datos;
	// Llenado de variable
	cout << "LECTURA DE DATOS\n";
	cout << "============================\n";
	(datos.second).second = validacionSexo();
	cout << "Edad en años: "; cin >> (datos.second).first;
	cout << "Tipo de Hospedaje:\n";
	cout << "  1.- Imperial\n";
	cout << "  2.- VIP\n";
	cout << "  3.- Gold\n";
	(datos.first).first = leerOpcion();
	cout << "Cantidad de dias: "; cin >> (datos.first).second;
	// Retornar
	return datos;
}

// Descuentos
void descuento1(int dias) {
	// Proceso
	if (dias >= 5 and dias <= 10) {
		desc1 = (5.0 * importeB) / 100.0;
		cout << "Descuento 1: " << desc1 << "\n";
	}
	else if (dias > 10) {
		desc1 = (7.0 * importeB) / 100.0;
		cout << "Descuento 1: " << desc1 << "\n";
	}
	else {
		desc1 = 0;
		cout << "Descuento 1: " << desc1 << "\n";
	}
	// Adicion o resta de importes y descuentos.
	sumadesc += desc1;
	importeN -= desc1;
}

void descuento2(string sexo, int edad) {
	// Proceso
	if (sexo == "M" and edad > 50) {
		desc2 = (5.0 * importeB) / 100;
		MsecondD++;
		cout << "Descuento 2: " << desc2 << "\n";
	}
	else if (sexo == "F" and edad > 50) {
		desc2 = (7.0 * importeB) / 100;
		FsecondD++;
		cout << "Descuento 2: " << desc2 << "\n";

	}
	else {
		desc2 = 0;
		cout << "Descuento 2: " << desc2 << "\n";
	}
	// Adicion o resta de importes y descuentos.
	sumadesc += desc2;
	sumadesc2 += desc2;
	importeN -= desc2;
}

// Procesos de Venta
void procesoImperial(int dias, string sexo, int edad) {
	// Proceso
	cout << "Precio por día: " << pImperial << "\n";
	importeB = pImperial * dias;
	importeN += importeB;
	cout << "Importe bruto: " << importeB << "\n";
	descuento1(dias);
	descuento2(sexo, edad);
	cout << "Importe Neto: " << importeN << "\n";
}

void procesoVIP(int dias, string sexo, int edad) {
	// Proceso
	cout << "Precio por día: " << pVIP << "\n";
	importeB = pVIP * dias;
	importeN += importeB;
	cout << "Importe bruto: " << importeB << "\n";
	descuento1(dias);
	descuento2(sexo, edad);
	cout << "Importe Neto: " << importeN << "\n";
}

void procesoGold(int dias, string sexo, int edad) {
	// Proceso
	cout << "Precio por día: " << pGold << "\n";
	importeB = pGold * dias;
	importeN += importeB;
	cout << "Importe bruto: " << importeB << "\n";
	descuento1(dias);
	descuento2(sexo, edad);
	cout << "Importe Neto: " << importeN << "\n";
}

// Sub-Menu 02
void resultadoVenta(pair < pair<int, int>, pair<int, string>> datos) {
	// Variables
	int dias, edad;
	string sexo;
	// Inicializacion
	dias = (datos.first).second;
	edad = (datos.second).first;
	sexo = (datos.second).second;
	// Proceso
	cout << "RESULTADO DE LA VENTA\n";
	cout << "============================\n";
	switch ((datos.first).first)
	{
	case 1: procesoImperial(dias, sexo, edad); break;
	case 2: procesoVIP(dias, sexo, edad); break;
	case 3: procesoGold(dias, sexo, edad); break;
	}
}

// Menu 01
void procesarVenta(int c) {
	// Limpiar pantalla
	system("cls");
	// Variables
	pair < pair<int, int>, pair<int, string>> datos;
	// Menus
	cout << "LA CASA DEL INKA\n";
	cout << "VENTA NRO: " << c << "\n\n";
	datos = lecturaDatos();
	resultadoVenta(datos);
}

// Menu 02
void reporteVenta(int c) {
	// Limpiar pantalla
	system("cls");
	// Proceso
	cout << "LA CASA DEL INKA\n";
	cout << "REPORTE DE VENTAS\n\n\n";
	cout << "----------------------------------------\n";
	cout << "Indicador                                       Valor\n";
	cout << "----------------------------------------\n";
	cout << "Cantidad total de ventas: " << c << "\n";
	cout << "Clientes masculinos con el segundo descuento: " << MsecondD << "\n";
	cout << "Clientes femeninos con el segundo descuento:  " << FsecondD << "\n";
	cout << "Suma total de las ventas: " << importeN << "\n";
	cout << "Suma de todos los descuentos realiazados:     " << sumadesc << "\n";
	cout << "Suma de todos los segundos descuentos:        " << sumadesc2 << "\n";
}

// Menu 03
void salir() {
	// Limpiar pantalla
	system("cls");
	// Proceso
	cout << "LA CASA DEL INKA\n\n\n";
	cout << "FIN DEL PROGRAMA\n";
	cout << "Nos vemos en la próxima venta" << endl;
}

int main() {
	// Dando color a la letra del CMD
	system("color 0B");
	// Configuracion
	setlocale(LC_ALL, "Spanish");
	// Variables del programa
	int op, contador;
	// Inicializar Variables
	pImperial = 150; pVIP = 260; pGold = 350; contador = 0, sumadesc = 0, sumadesc2 = 0;
	FsecondD = 0, FsecondD = 0; importeN = 0;
	// Control del Menú
	do {
		menuPrincipal();
		op = leerOpcion();
		switch (op)
		{
		case 1: contador++; procesarVenta(contador); break;
		case 2: reporteVenta(contador); break;
		case 3: salir(); break;
		}
		system("pause");
	} while (op != 3);
	// Finalizacion
	return 0;
}