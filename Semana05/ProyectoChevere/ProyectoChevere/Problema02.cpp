//Victor Ibañez

#include <iostream>

using namespace std;

//función que retorna el enésimo término de la secuencia {3/N} 
double secuencia(int N) {
	return (double)3 / N;
}

//función que retorna la suma de los términos de la secuencia {3/N} hasta el N-ésimo 
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
	//declaración de variables
	int menu_option, N;
	double result;
	//lectura de datos: menu de opciones
	do {
		cout << "Secuencia {3/N}" << endl;
		cout << "Seleccionar tarea: " << endl;
		cout << "(1) Término enésimo" << endl;
		cout << "(2) Suma hasta el enésimo término" << endl;
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