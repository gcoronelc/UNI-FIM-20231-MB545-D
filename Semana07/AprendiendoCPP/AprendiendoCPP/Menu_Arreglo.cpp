#include <iostream>
#include <time.h>
using namespace std;

// Variables Globales
int* arreglo1 = NULL;
int* arreglo2 = NULL;
int* arreglosuma = NULL;
int tamanio;

// Menu
void menuPrincipal() {
	// Limpiar pantalla
	system("cls");
	cout << "========================================\n";
	cout << "    TRABAJANDO CON ARREGLOS\n";
	cout << "    Menú de Opciones\n";
	cout << "========================================\n";
	cout << "    1. Generar arreglos\n";
	cout << "    2. Mostrar arreglos\n";
	cout << "    3. Mostrar elementos comunes\n";
	cout << "    4. Mostrar el arreglo suma\n";
	cout << "    5. Salir\n";
}

// Leer opcion
int leerOpcion() {
	// Variable
	int opcion;
	// Proceso
	do {
		cout << "Opcion: "; cin >> opcion;
		if (opcion < 1 or opcion>5) {
			cout << "Opcion invalida, indique nuevamente el valor\n";
		}
	} while (opcion < 1 or opcion>5);
	// Retorno
	return opcion;
}

// Limpiar memoria
void limpiarMemoria() {
	if (arreglo1 == NULL) return;
	delete[] arreglo1;
	delete[] arreglo2;
	delete[] arreglosuma;
}

// Generar Arreglos
void generarArreglos() {
	// Limpiar pantalla
	system("cls");
	// Presentacion
	cout << "--------------------------------\n";
	cout << "GENERACION DE ARREGLOS\n";
	cout << "--------------------------------\n";
	// Definiendo tamamño de arreglo
	cout << "Indicar el tamaño: "; cin >> tamanio;
	// Generando arreglo 1
	limpiarMemoria();
	arreglo1 = new int[tamanio];
	for (int i = 0; i < tamanio; i++) {
		arreglo1[i] = round(rand() % 100);
	}
	// Generando arreglo 2
	arreglo2 = new int[tamanio];
	for (int i = 0; i < tamanio; i++) {
		arreglo2[i] = round(rand() % 100);
	}
}

// Mostrar Arreglos
void mostrarArreglos() {
	// Validacion
	if (arreglo1 == NULL) return;
	// Limpiar pantalla
	system("cls");
	// Presentacion
	cout << "--------------------------------\n";
	cout << "MOSTRAR ARREGLOS\n";
	cout << "--------------------------------\n";
	// Mostrando Arreglo 1
	cout << "El arreglo 1 es: ";
	for (int i = 0; i < tamanio; i++) {
		cout << arreglo1[i] << " ";
	}
	cout << "\n";
	// Mostrando Arreglo 2
	cout << "El arreglo 2 es: ";
	for (int i = 0; i < tamanio; i++) {
		cout << arreglo2[i] << " ";
	}
	cout << "\n";
}

// Mostrar Elementos Comunes
void mostrarElementosC() {
	// Validacion
	if (arreglo1 == NULL) return;
	// Limpiar pantalla
	system("cls");
	// Presentacion
	cout << "--------------------------------\n";
	cout << "MOSTRAR ELEMENTOS COMUNES\n";
	cout << "--------------------------------\n";
	// Variable
	int c;
	// Proceso
	mostrarArreglos();
	c = 0;
	for (int i = 0; i < tamanio; i++) {
		if (arreglo1[i] == arreglo2[i]) {
			c++;
		}
	}
	if (c > 0) {
		cout << "Los elementos comunes son: ";
		for (int i = 0; i < tamanio; i++) {
			if (arreglo1[i] == arreglo2[i]) {
				cout << arreglo1[i] << " ";
			}
		}
		cout << "\n";
	}
	else {
		cout << "No hay elements comunes\n";
	}
}

// Mostrar Arreglo suma
void mostrarArregloSuma() {
	// Validacion
	if (arreglo1 == NULL) return;
	// Limpiar pantalla
	system("cls");
	// Presentacion
	cout << "--------------------------------\n";
	cout << "GENERANDO EL ARREGLO SUMA\n";
	cout << "--------------------------------\n";
	// Generando el arreglo suma
	arreglosuma = new int[tamanio];
	for (int i = 0; i < tamanio; i++) {
		arreglosuma[i] = arreglo1[i] + arreglo2[i];
	}
	// Mostrando el arreglo suma
	cout << "El arreglo suma es: ";
	for (int i = 0; i < tamanio; i++) {
		cout << arreglosuma[i] << " ";
	}
	cout << "\n";
}

// Salir
void salir() {
	// Limpiar pantalla
	system("cls");
	// Proceso
	cout << "FIN DEL PROGRAMA\n";
	cout << "Adiosin" << endl;
}

// Programa Principal
int main() {
	// Dando color a la letra del CMD
	system("color 0B");
	// Configuracion
	setlocale(LC_ALL, "Spanish");
	srand(time(NULL));
	// Variables del programa
	int op;
	// Inicializar Variables
	
	// Control del Menú
	do {
		menuPrincipal();
		op = leerOpcion();
		switch (op)
		{
		case 1: generarArreglos(); break;
		case 2: mostrarArreglos(); break;
		case 3: mostrarElementosC(); break;
		case 4: mostrarArregloSuma(); break;
		case 5: salir(); break;
		}
		system("pause");
	} while (op != 5);
	// Limpiar memoria
	limpiarMemoria();
	// Finalizacion
	return 0;
}