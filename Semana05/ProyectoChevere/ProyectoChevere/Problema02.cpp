//Victor Iba�ez

#include <iostream>

using namespace std;

//funci�n que retorna el en�simo t�rmino de la secuencia {3/N} 
double secuencia(int N) {
	return (double)3 / N;
}

//funci�n que retorna la suma de los t�rminos de la secuencia {3/N} hasta el N-�simo 
double suma_secuencia(int N) {
	double suma = 0;
	for (int i = 1; i <= N; i++) {
		suma = suma + secuencia(i);
	}
	return suma;
}

int main() {
	//configuracion
	setlocale(LC_ALL, "");
	//declaraci�n de variables
	int menu_option, N;
	double result;
	//lectura de datos: menu de opciones
	do {
		cout << "Secuencia {3/N}" << endl;
		cout << "Seleccionar tarea: " << endl;
		cout << "(1) T�rmino en�simo" << endl;
		cout << "(2) Suma hasta el en�simo t�rmino" << endl;
		cin >> menu_option;
	} while (menu_option != 1 and menu_option != 2);
	//lectura de datos: para el resultado
	cout << "Introducir N: ";
	cin >> N;
	//Proceso
	switch (menu_option) {
	case 1:
		result = secuencia(N);
		break;
	case 2:
		result = suma_secuencia(N);
	}
	//Reporte
	cout << "Resultado: " << result << endl;

	return 0;
}